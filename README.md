# 🚀 30-Day LeetCode Challenge

## 📌 Day 1 — Summary

### **1. Two Sum (HashMap)**
- **Pattern:** HashMap (one-pass)
- **When:** array *unsorted*
- **Core Idea:** check complement → insert current value
- **Rules:** 
  - Check complement *before* insert  
  - Early return when found  
- **Pitfall:** two-pass map overwrites index for duplicates

---

### **2. Two Sum II (Two Pointers)**
- **Pattern:** Two pointers (sorted array)
- **When:** array *sorted*
- **Core Idea:**  
  - If sum < target → left++  
  - If sum > target → right--  
- **Rules:** `while (l < r)`, O(1) space
- **Pitfall:** cannot apply when array is unsorted
