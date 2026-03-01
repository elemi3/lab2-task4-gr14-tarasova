# Lab Work 2 Task 4
## Makefile with Comments and GitHub Actions CI/CD

## Overview
This project demonstrates the use of Makefile for build automation and GitHub Actions for continuous integration. The program uses structures in C to store and display student information.

## Project Structure


graph TD
    A[lab2task4] --> B[src]
    A --> C[Makefile]
    A --> D[.github]
    A --> E[.gitignore]
    A --> F[README.md]
    
    D --> G[workflows]
    G --> H[ci.yml]
    
    B --> I[student.c]
    B --> J[student.h]
    B --> K[main.c]
    
    style A fill:#f9f,stroke:#333,stroke-width:2px
    style B fill:#bbf,stroke:#333
    style C fill:#bfb,stroke:#333
    style D fill:#fbb,stroke:#333
    style E fill:#ffb,stroke:#333
    style F fill:#bff,stroke:#333
    style G fill:#fbf,stroke:#333
    style H fill:#f99,stroke:#333
    style I fill:#9f9,stroke:#333
    style J fill:#9f9,stroke:#333
    style K fill:#9f9,stroke:#333

## Student Information
- **Name:** Tarasova
- **Group:** 14
- **Student ID:** 123456
- **Age:** 19

## Address
- **Street:** 4, pr. Nezavisimosti
- **City:** Minsk
- **Region:** Minskaya
- **Country:** Belarus

## Usage

### Build the program
