# **وَأَنْ لَيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَىٰ**

# 🏥 Hospital Management System

A console-based **Hospital Management System** implemented in **C++**, designed to manage patients and doctors efficiently using core data structures. The project focuses on clarity, clean architecture, and practical application of data structures.

---

## 📌 Overview

This system simulates real hospital operations through a text-based menu. It demonstrates how different data structures can be used together to organize and manage hospital data effectively.

| Entity   | Data Structure     | Purpose                       |
| -------- | ------------------ | ----------------------------- |
| Patients | Queue (FIFO)       | Fair patient processing order |
| Doctors  | Map + Linked Lists | Group doctors by specialty    |

---

## ✨ Features

### 🧑‍⚕️ Patient Management

| Feature           | Description                        |
| ----------------- | ---------------------------------- |
| Add Patient       | Register a new patient             |
| Delete Patient    | Remove patient by ID               |
| Edit Patient      | Update patient information         |
| Search Patient    | Find patient by ID                 |
| Display Patients  | Show all patients in queue order   |
| View Next Patient | Peek next patient without removing |

---

### 👨‍⚕️ Doctor Management

| Feature         | Description                       |
| --------------- | --------------------------------- |
| Add Doctor      | Add a new doctor with specialty   |
| Delete Doctor   | Remove doctor by ID               |
| Edit Doctor     | Update doctor details             |
| Search Doctor   | Find doctor by ID                 |
| Display Doctors | List doctors grouped by specialty |

---

### ⚙️ General Features

| Feature          | Description                       |
| ---------------- | --------------------------------- |
| Interactive Menu | Easy-to-use text-based navigation |
| Welcome Screen   | Friendly system introduction      |
| Exit Screen      | Clean system termination          |

---

## 🧩 UML Class Diagram

![UML Class Diagram](https://github.com/user-attachments/assets/d9b6be19-6ac6-40bf-8f9d-a2185f066816)

### 🔑 Key Classes

| Class            | Description                                |
| ---------------- | ------------------------------------------ |
| `Person`         | Base class (ID, Name, Age, Case/Specialty) |
| `Patient`        | Inherits from `Person`                     |
| `Doctor`         | Inherits from `Person`                     |
| `PatientQueue`   | Linked queue for patients                  |
| `DoctorList`     | Singly linked list per specialty           |
| `HospitalSystem` | Main controller & menu handler             |

---

## 🛠️ Technologies & Data Structures

| Category    | Used               |
| ----------- | ------------------ |
| Language    | C++                |
| Queue       | Patient management |
| Linked List | Doctor lists       |
| `std::map`  | Specialty grouping |

---

## Development Team

### Engineers Behind This Project

This **Premium Edition** was proudly developed by the following talented engineers:

- **Omar Adel**
  [![GitHub](https://img.shields.io/badge/-OMarAdell-black?style=flat&logo=github)](https://github.com/OMar-Adelll)

- **Moaz Waleed**
  [![GitHub](https://img.shields.io/badge/-Moza202-black?style=flat&logo=github)](https://github.com/Moza202)

- **Omar Mohamed**
  [![GitHub](https://img.shields.io/badge/-OmarMohamed-black?style=flat&logo=github)](https://github.com/Omar-Mohamed-11)

- **Youssif Sanad**
  [![GitHub](https://img.shields.io/badge/-SanadJr-black?style=flat&logo=github)](https://github.com/SanadJr)

- **Mohamed Salem**
  [![GitHub](https://img.shields.io/badge/-mohamedsalem21v-black?style=flat&logo=github)](https://github.com/mohamedsalem21v)

- **Mohamed Ibrahim**
  [![GitHub](https://img.shields.io/badge/-mohamedkiilany-black?style=flat&logo=github)](https://github.com/mohamedkiilany)

- **Youssef Mohamed**
  [![GitHub](https://img.shields.io/badge/-j0e06-black?style=flat&logo=github)](https://github.com/j0e06)

- **Omar Khaled**
  [![GitHub](https://img.shields.io/badge/-mora2511-black?style=flat&logo=github)](https://github.com/mora2511)

> *A true team effort — thank you to every engineer for your dedication, late nights, and commitment to building a premium-quality system.*


---

⭐ *If you like this project, consider giving it a star on GitHub!*
