
---

## Arduino Code

- The Arduino reads:
  - **LDR (Photoresistor)** for ambient light
  - **Button** for manual control
- Controls the **LED** automatically:
  - Turns on when light level < threshold and button is not pressed
  - Turns off otherwise

> **Note:** The Arduino code is in `arduino/smart_lighting.ino`. You can open it in **Arduino IDE** or copy it to **Tinkercad Circuits** to simulate.

---

## Tinkercad Simulation

- You can simulate the circuit in Tinkercad.  
- Example screenshots:

### Circuit Diagram
![Circuit Diagram](images/tinkercad_circuit.png)

### Simulation Step
![Simulation Step](images/simulation_step.png)

---

## Backend (Node.js + TypeScript)

The backend exposes API endpoints to control the LED remotely (simulated):

- **GET `/status`** → Returns LED status


{
  "led": true
}