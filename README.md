*This project has been created as part of the 42 curriculum by aalrofat.*

# 📡 minitalk

## 📝 Description
The **minitalk** project is a client-server communication program written in C using UNIX signals (`SIGUSR1` and `SIGUSR2`). The server starts up, prints its Process ID (`PID`), and reconstructs messages sent bit by bit from a client, using signal acknowledgments (`ACK`) to keep transmission reliable.

### 💡 What did I learn from the project
Working on **minitalk** taught me how Inter-Process Communication (IPC) works using UNIX signals, bitwise operations, and `sigaction` (`SA_SIGINFO`). I also learned how to synchronize bit-by-bit transmission with acknowledgment signals, isolate active client sessions using `client_pid`, handle null-terminated message endings (`'\0'`), and follow the Norminette.

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
- **Bit-by-Bit Signals**: Sends each character bit by bit using `SIGUSR2` (`1`) and `SIGUSR1` (`0`), and finishes with `'\0'`.
- **Step-by-Step Confirmation**: The server replies with `SIGUSR1` after each bit so no signals get lost.
- **One Client at a Time**: Ignores other senders until the current client finishes its message.
- **Input Checks**: Makes sure arguments and the server `PID` are valid before sending.

## 🔗 Resources
- [Linux man pages: signal(7)](https://man7.org/linux/man-pages/man7/signal.7.html)
- [Linux man pages: sigaction(2)](https://man7.org/linux/man-pages/man2/sigaction.2.html)

### 🤖 AI Usage
- **Bit Ordering & Timing Checks**: Helped verify bit-by-bit encoding/decoding order and signal synchronization behavior when sending longer strings.
- **Documentation**: Helped organize and polish this README so the setup steps and project overview are clear and easy to read.
