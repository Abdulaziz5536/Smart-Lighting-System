import {SerialPort} from "serialport";
import {ReadlineParser} from "@serialport/parser-readline";



const port = new SerialPort({
  path:"COM3",
  baudRate:9600
});

const parser = port.pipe(new ReadlineParser({delimiter: "\n"}));

parser.on("data",(data) => {
  console.log("Arduino:", data);
  
});

export default port;