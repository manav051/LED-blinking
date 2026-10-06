# LED-blinking


## 1. Project Overview

This project demonstrates a basic embedded system using an **Arduino Uno** to blink an LED at a fixed time interval.

The project also demonstrates a simple software development and QA workflow using **GitHub Repository, GitHub Issues, collaboration, issue comments, issue resolution, and project tracking**.

---

## 2. Project Objective

The main objectives of this project are:

- To develop a basic Arduino embedded-system application.
- To control an LED using a digital GPIO pin.
- To upload and maintain the source code on GitHub.
- To identify and log QA issues using GitHub Issues.
- To collaborate through issue comments and discussions.
- To resolve and close identified issues.
- To practice basic project planning and tracking.

---

## 3. Hardware Requirements

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| LED | 1 |
| 220 Ω Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

> **Note:** The Arduino Uno's built-in LED connected to digital pin 13 can also be used, so an external LED is optional.

---

## 4. Software Requirements

- Arduino IDE
- GitHub Account
- Git (optional for command-line version control)
- Arduino Uno Board Package

---

## 5. Circuit Connection

For an external LED:

```text
Arduino Pin 13
      |
   220 Ω
   Resistor
      |
   LED Anode (+)
      |
   LED Cathode (-)
      |
     GND
```

The onboard LED of the Arduino Uno can be used without making an external circuit.

---

## 6. Working Principle

The Arduino configures digital pin 13 as an output.

The program performs the following sequence continuously:

1. Turn the LED ON.
2. Wait for approximately 1 second.
3. Turn the LED OFF.
4. Wait for approximately 1 second.
5. Repeat the process.

Therefore, the LED continuously blinks with approximately equal ON and OFF intervals.

---

## 7. Source Code

The main program is available in:

**`led_blink.ino`**

```cpp
/*
  Project: Arduino LED Blinking
  Purpose: Basic embedded-system GPIO demonstration
  Board: Arduino Uno

  Expected behavior:
  LED ON  -> approximately 1 second
  LED OFF -> approximately 1 second
*/

const int LED_PIN = 13;
const unsigned long BLINK_DELAY_MS = 1000;

void setup() {
  // Configure the LED pin as an output.
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Turn LED ON.
  digitalWrite(LED_PIN, HIGH);
  delay(BLINK_DELAY_MS);

  // Turn LED OFF.
  digitalWrite(LED_PIN, LOW);
  delay(BLINK_DELAY_MS);
}
```

---

## 8. Code Description

### `LED_PIN`

```cpp
const int LED_PIN = 13;
```

Defines digital pin 13 as the LED control pin.

### `BLINK_DELAY_MS`

```cpp
const unsigned long BLINK_DELAY_MS = 1000;
```

Defines a delay of 1000 milliseconds, which is equal to approximately 1 second.

### `setup()`

```cpp
pinMode(LED_PIN, OUTPUT);
```

Configures pin 13 as an output pin.

### `loop()`

The `loop()` function repeatedly turns the LED ON and OFF using:

```cpp
digitalWrite(LED_PIN, HIGH);
```

and

```cpp
digitalWrite(LED_PIN, LOW);
```

The `delay()` function provides the required timing.

---

## 9. Expected Output

The expected output is:

```text
LED ON  → 1 second
LED OFF → 1 second
LED ON  → 1 second
LED OFF → 1 second
        ↓
      Repeat
```

The LED should blink continuously.

---

## 10. How to Run the Project

1. Install the Arduino IDE.
2. Connect the Arduino Uno to the computer using a USB cable.
3. Open `led_blink.ino`.
4. Select **Arduino Uno** from the Board menu.
5. Select the correct COM port.
6. Compile/Verify the program.
7. Upload the program to the Arduino.
8. Observe the onboard LED or external LED.
9. Verify that the LED turns ON and OFF approximately every 1 second.

---

# 11. QA Testing

The following basic tests can be performed:

| Test ID | Test Description | Expected Result | Status |
|---|---|---|---|
| T01 | Compile the Arduino code | Code compiles without errors | Pass |
| T02 | Upload code to Arduino | Program uploads successfully | Pass |
| T03 | Check LED ON state | LED turns ON | Pass |
| T04 | Check LED OFF state | LED turns OFF | Pass |
| T05 | Check timing | Approximately 1 second ON/OFF | Pass |
| T06 | Continuous operation | LED continues blinking | Pass |

---

# 12. GitHub QA Issues

The following issues were identified during the project.

## QA-01 – LED Timing Not Clearly Documented

**Type:** Documentation Issue  
**Priority:** Low

### Problem

The expected ON/OFF timing of the LED was not clearly mentioned in the initial documentation.

### Action Taken

The README was updated to specify that the LED should remain ON for approximately 1 second and OFF for approximately 1 second.

### Status

**Resolved**

---

## QA-02 – No Debugging Indication

**Type:** Enhancement  
**Priority:** Low

### Problem

The basic project does not provide Serial Monitor output for debugging.

### Discussion

Serial output could be added in a future version to provide additional debugging information.

However, Serial communication is not necessary for the basic LED blinking demonstration.

### Status

**Closed – Future Enhancement**

---

## QA-03 – Code Comments Need Improvement

**Type:** Maintainability Issue  
**Priority:** Low

### Problem

The initial code contained limited comments explaining the purpose of different sections.

### Action Taken

Comments were added to explain:

- LED pin configuration
- LED ON operation
- LED OFF operation
- Timing behavior

### Status

**Resolved**

---

# 13. Collaboration Workflow

The GitHub Issues feature was used to demonstrate collaboration.

The workflow followed was:

```text
QA Observation
      ↓
Create GitHub Issue
      ↓
Add Comment / Discussion
      ↓
Identify Solution
      ↓
Modify Code / Documentation
      ↓
Test the Change
      ↓
Verify Issue
      ↓
Close Issue
```

Example collaboration comment:

> "I reviewed this issue and confirmed that the expected LED timing was not documented. The README has now been updated with the 1-second ON/OFF requirement. The change was verified and the issue was resolved."

---

# 14. Project Planning and Tracking

| Phase | Activity | Deliverable | Status |
|---|---|---|---|
| Planning | Define objective and requirements | Requirements | Complete |
| Development | Write Arduino program | `led_blink.ino` | Complete |
| Testing | Test LED operation | Test results | Complete |
| QA | Identify and log issues | GitHub Issues | Complete |
| Collaboration | Comment and resolve issues | Issue history | Complete |
| Documentation | Prepare README and report | Documentation | Complete |
| Submission | Upload report to Moodle | Final Report | Complete |

---

# 15. Project Milestones

### Milestone 1 – Project Setup

**Deliverables:**
- Arduino Uno setup
- Hardware requirements
- GitHub repository creation

### Milestone 2 – Code Development

**Deliverables:**
- Arduino LED blinking program
- Successful compilation
- Successful upload and LED operation

### Milestone 3 – QA and Collaboration

**Deliverables:**
- GitHub QA Issues
- Issue comments
- Issue resolution and closure

### Milestone 4 – Documentation

**Deliverables:**
- README file
- Project tracking document
- Academic report

---

# 16. Acceptance Criteria

The project is considered successful when:

- Arduino code compiles successfully.
- Code uploads successfully to the Arduino Uno.
- LED blinks continuously.
- LED remains ON and OFF for approximately 1 second.
- Source code is available in the GitHub repository.
- README documentation is available.
- QA issues are logged in GitHub.
- Issues contain discussion/comments.
- Resolved issues are closed.
- Project milestones are tracked.
- Final report is prepared for Moodle submission.

---

# 17. Repository Structure

```text
Arduino-LED-Blink-GitHub-QA/
│
├── README.md
├── led_blink.ino
├── QA_ISSUES.md
├── PROJECT_TRACKING.md
└── LICENSE.txt
```

---

# 18. Learning Outcomes

After completing this project, the following skills were developed:

- Basic Arduino programming.
- GPIO pin configuration and control.
- LED interfacing with Arduino.
- Embedded-system development workflow.
- GitHub repository management.
- GitHub Issues for QA tracking.
- Collaboration through issue comments.
- Issue resolution and closure.
- Project planning and milestone tracking.
- Technical documentation using Markdown.
- Basic software testing and acceptance criteria.

---

# 19. Future Improvements

The project can be extended by adding:

- Push-button control for the LED.
- Adjustable blinking speed.
- Potentiometer-based speed control.
- Serial Monitor debugging.
- Multiple LEDs.
- LED status controlled through sensors.
- Non-blocking timing using `millis()` instead of `delay()`.
- IoT-based remote LED control.

---

# 20. Conclusion

The Arduino LED Blinking project demonstrates a simple embedded-system application along with a basic software development and QA workflow.

Using GitHub, the project source code can be maintained in a centralized repository, while GitHub Issues provide a simple method for recording QA observations, discussing improvements, collaborating with others, and tracking issue resolution.

This activity provides practical experience in combining **embedded programming, software quality assurance, collaboration, documentation, and project management**.

---

## 21. GitHub Repository

**Repository Name:**  
`Arduino-LED-Blink-GitHub-QA`

**Repository Link:**  
`https://github.com/manav051/Arduino-LED-Blink-GitHub-QA`

> Replace `<your-username>` with your actual GitHub username.

---

## 22. Academic Submission

**Student:** Manav Rathod  
**Department:** Electronics & Telecommunication Engineering  
**Project:** Arduino LED Blinking – GitHub QA Project  
**Academic Year:** 2026–2027
