import express from 'express';
import port from './serial.js';


const app = express();
app.use(express.json());

let ledState = false;

app.get("/status", (req,res) => {
  res.json({led:ledState});
});

app.post("/led/on", (req,res) => {
  port.write("LED_ON\n");
  ledState = true;
  res.send("LED turned ON");
});

app.post("/led/off", (req,res) => {
  port.write("LED_OFF\n");
  ledState = false;
  res.send("LED turned OFF");
});

app.listen(3000 ,() => {
  console.log(`server is running on port 3000`);

})