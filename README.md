*This project has been created as part of the 42 curriculum by aalrofat.*

# 📡 minitalk

## 📝 Description
The **minitalk** project is a client-server communication program written in C using UNIX signals (`SIGUSR1` and `SIGUSR2`). The server starts up, prints its Process ID (`PID`), and waits to receive text messages sent bit by bit from a client process.

### 💡 What did I learn from the project
Working on **minitalk** taught me how Inter-Process Communication (IPC) works using UNIX signals, bitwise operations, and `sigaction` / `PID` handling. I also practiced keeping signal handlers safe and minimal, avoiding race conditions or lost signals, and following the Norminette.

## ⚙️ Instructions
1. `cd minitalk` (or navigate to the project directory)
2. `make` (compiles the `server` and `client` executables)
3. **Start the server** in one terminal and copy its displayed `PID`:
   - `./server`
4. **Send a message** from a second terminal using the server's `PID`:
   - `./client <SERVER_PID> "Hello from minitalk!"`
5. **Useful Makefile rules**:
   - `make clean` : Removes object files (`.o`).
   - `make fclean` : Removes object files, `server`, and `client`.
   - `make re` : Rebuilds both programs from scratch.

## 🛠️ Key Features
- **Bitwise Signal Transmission**: Encodes characters into binary bits and transmits them using `SIGUSR1` and `SIGUSR2`.
- **PID-Based Client-Server Flow**: Connects clients directly to a running server using its process ID.
- **Clean Error & Signal Handling**: Validates arguments and `PID`s safely and keeps the server running continuously for multiple messages.

## 🔗 Resources
- [Linux man pages: signal(7)](https://man7.org/linux/man-pages/man7/signal.7.html)
- [Linux man pages: sigaction(2)](https://man7.org/linux/man-pages/man2/sigaction.2.html)

### 🤖 AI Usage
- **Bit Ordering & Timing Checks**: Helped verify bit-by-bit encoding/decoding order and signal synchronization behavior when sending longer strings.
- **Documentation**: Helped organize and polish this README so the setup steps and project overview are clear and easy to read.
