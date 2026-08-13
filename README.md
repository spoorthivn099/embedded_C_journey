# Embedded C Journey

> A structured, 15-day self-driven path from beginner to intermediate Embedded C — built on industry-standard tooling (GCC ARM, OpenOCD, STM32CubeIDE, direct register access) rather than high-level abstractions like the Arduino IDE.

## 🎯 About This Repo

I'm an aspiring embedded systems engineer transitioning into the field with a programming background but no prior hardware experience. This repo documents a self-directed 15-day roadmap covering Embedded C fundamentals through GPIO, UART, timers/PWM, interrupts, SPI/I2C, and an intro to FreeRTOS — building toward interview readiness for embedded software/firmware engineering roles.

Each day follows the same structure:
1. **Theory** — the concept, explained
2. **Embedded C application** — how it's used in real embedded code, with examples
3. **Linux practice programs** — 4 hands-on programs to build fluency
4. **STM32CubeIDE real-world example** — the concept applied on actual hardware/tooling

## 🛠️ Tools & Environment

- **IDE / Platform:** STM32CubeIDE
- **Toolchain:** GCC ARM (`arm-none-eabi-gcc`), OpenOCD
- **Board:** STM32 Nucleo (swap in your specific board)
- **Practice environment:** Linux + standard `gcc`
- **Approach:** direct register manipulation preferred over vendor HAL / Arduino-style abstraction, to build a real understanding of the hardware underneath.

## 🗺️ 15-Day Roadmap

| Day | Topic | Status |
|----:|-------|:------:|
| 1 | C Fundamentals Refresher + Toolchain Setup | ✅ |
| 2 | Pointers Deep Dive | ⬜ |
| 3 | Arrays, Strings & Memory Basics | ⬜ |
| 4 | Structs, Unions & Bit-Fields | ⬜ |
| 5 | Bitwise Operators & Bit Manipulation | ⬜ |
| 6 | Fixed-Width Types, `volatile`, `const`, Storage Classes | ⬜ |
| 7 | Memory Layout & Embedded C vs. Desktop C | ⬜ |
| 8 | Basic Electronics Fundamentals | ⬜ |
| 9 | Microcontroller Architecture & Toolchain Setup | ⬜ |
| 10 | GPIO via Direct Register Manipulation | ⬜ |
| 11 | UART Communication | ⬜ |
| 12 | Timers and PWM | ⬜ |
| 13 | Interrupts and ISRs | ⬜ |
| 14 | Communication Protocols: SPI & I2C | ⬜ |
| 15 | RTOS Intro (FreeRTOS) + Wrap-Up Project | ⬜ |

*(Status column gets updated as each day is completed — swap ⬜ for ✅.)*

## 📁 Repo Structure

```
embedded_C_journey/
├── day-01-c-fundamentals/
│   ├── linux-practice/        # 4 practice programs (.c files)
│   └── stm32-notes/           # STM32CubeIDE walkthrough notes/screenshots
├── day-02-pointers/
│   ├── linux-practice/
│   └── stm32-notes/
├── ...
├── day-15-rtos-intro/
│   └── portfolio-project/     # final project combining GPIO, UART, timers, interrupts
└── README.md
```

Each `linux-practice/` folder holds standalone `.c` files that compile with plain `gcc`. Each STM32 folder holds either a full STM32CubeIDE project or notes where checking in a full project isn't practical.

## ▶️ Running the Linux Practice Programs

```bash
gcc day-XX-topic/linux-practice/program_name.c -o program_name
./program_name
```

## ▶️ Running the STM32 Examples

1. Open STM32CubeIDE.
2. `File → Open Projects from File System` and select the relevant day's project folder.
3. Build (hammer icon) and flash to your Nucleo/dev board via the on-board ST-Link, or via OpenOCD from the command line.

## 📌 Progress Log

Short notes and reflections get added per day — what clicked, what didn't, and what I'd revisit before an interview.

## 🤝 Connect

Actively open to **Embedded Software Engineer** / **Firmware Engineer** roles.
- LinkedIn: `add your profile link here`
- Open to feedback on any code in this repo, or to connecting with others on a similar path.

---

*Work in progress — updated daily as I move through the roadmap.*
