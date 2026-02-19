## Auto File Sorter

This is a simple C++ utility designed to automate the organization of your downloads folder. The script scans a specified directory and moves files into subfolders based on their extensions.

---

### Key Features

* **Automatic Sorting:** Automatically redistributes files into logical categories.
* **Directory Management:** Creates target subfolders if they do not already exist.
* **Safety Check:** If the source directory is missing, the program creates it and notifies the user.

---

### File Mapping Logic

Currently, the utility supports the following categories:

| File Type | Extensions | Target Folder |
| --- | --- | --- |
| Images | .jpg, .png | Images |
| Documents | .pdf, .docx | Documents |
| Other | All other formats | Other |

---

### Project Structure

* `main.cpp`: Entry point of the application.
* `src/file-sorter/file_sorter.cpp`: Core logic for scanning and moving files.
* `src/file-sorter/file_sorter.h`: Header file containing the function declaration.

---

### Requirements

* A compiler with **C++17** support or higher.
* The `<filesystem>` library.

---

### How to Use

1. Ensure a folder named `Downloads` exists in the project root or alongside the executable.
2. Compile the project using your compiler (e.g., g++):
```bash
g++ -std=c++17 main.cpp src/file-sorter/file_sorter.cpp -o file_sorter
```


3. Run the compiled binary:
```bash
./file_sorter
```