# **📚 libft**  
*Your own C library*  

![libft Banner](https://via.placeholder.com/800x200?text=libft+42) *(optional)*  

## **📖 Description**  
A custom C library reimplementing **standard functions** from `libc` and additional helper functions for 42 projects.  

✅ **Mandatory Part**: Standard functions (e.g., `memset`, `strlen`, `atoi`)  
✅ **Bonus Part**: Linked lists, `ft_printf`, or extra utilities (e.g., `ft_lstadd_back`, `ft_itoa`)  

---

## **🛠️ Installation**  
```bash
git clone git@github.com:albelaiz/42_libft.git
cd libft
make
```
- **Compiles to**: `libft.a` (static library)  

---

## **📝 Usage**  
Include the header in your C project:  
```c
#include "libft.h"
```
Link the library during compilation:  
```bash
gcc my_program.c -L. -lft -o my_program
```

---

## **📂 Functions List**  

### **1️⃣ Standard Libc Functions**  
| Function       | Description                     |  
|---------------|----------------------------------|  
| `ft_memset`   | Fills memory with a constant byte|  
| `ft_strlen`   | Computes string length           |  
| `ft_atoi`     | Converts string to integer       |
| `ft_split`    | Splits string by delimiter       |
| ...           | ...                              |  

### **2️⃣ Additional Functions** *(Bonus)*  
| Function          | Description                     |  
|------------------|----------------------------------|  
| `ft_lstnew`      | Creates a new linked list node   |
|...               | ..                               |

*(Full list in `libft.h` header file.)*  

---

## **🧪 Testing**  
- Test with **[libft-unit-test](https://github.com/alelievr/libft-unit-test)**  
- Or use **[42TESTERS-LIBFT](https://github.com/Mazoise/42TESTERS-LIBFT)**  

```bash
git clone https://github.com/alelievr/libft-unit-test.git
cd libft-unit-test && make f
```

---

## **📜 License**  
[MIT](LICENSE) *(or 42 School’s rules)*  

---

### **🔄 How to Update?**  
1. Add new functions to `libft.h`  
2. Implement in `.c` files  
3. Run `make clean && make`  

---

### **📌 Notes**  
- **Norminette-compliant** ✅  
- **Memory leaks checked** (with `valgrind`)  
- Optimized for **readability** and **performance**  


