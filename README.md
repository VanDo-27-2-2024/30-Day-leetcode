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

### **2. Two Sum II (Two Pointers)**
- **Pattern:** Two pointers (sorted array)
- **When:** array *sorted*
- **Core Idea:**  
  - If sum < target → left++  
  - If sum > target → right--  
- **Rules:** `while (l < r)`, O(1) space
- **Pitfall:** cannot apply when array is unsorted

## 📌 Day 2 — Summary

### **1. Maximum Average Subarray I (Sliding Window - fix size)**
- **Pattern:** Sliding Window with fix size
- **When:** Continuous subarray with fix size
- **Core Idea:**
  - Build initial window
  - Slide the window: `sum += nums[right] - nums[left]`
- **Rules:** 
  - Window size is fix
- **Pitfall:**
  - Forgot init window
  - Forgot remove element outside window

## 📌 Day 3 — Summary

### **1. Ransom Note (HashMap Frequency Counter)**
- **Pattern:** HashMap (frequency counter)
- **When:** need to check if one string has enough characters to build another
- **Core Idea:**
  - Count characters in *magazine*
  - Consume characters required by *ransomNote*
- **Rules:** 
  - magazine supplies characters
  - ransomNote consumes characters (`count[c]--`)
- **Pitfall:**
  - Counting the wrong string (must count magazine, not ransomNote)
  - Forgetting that extra characters in magazine are allowed

### **2. Isomorphic Strings (HashMap — Two-way Mapping)**
- **Pattern:** Two HashMaps (bidirectional mapping)
- **When:** need a 1-to-1 mapping between characters of two strings
- **Core Idea:**
  - `s[i] → t[i]` must always map consistently  
  - `t[i] → s[i]` must also map consistently  
  - Both directions must agree
- **Rules:** 
  - Check s→t mapping
  - Check t→s mapping
  - If either side conflicts → return false
- **Pitfall:**
  - Only checking one direction (s→t) → allows invalid cases like "ab" → "aa"

## 📌 Day 4 — Summary

### **1. Is Palindrome (2 pointer)**
- **Expext resutl:** O(n) time complexity and O(1) space complexity
- **Pattern:** 2 pointer
- **When:** Check the same backward and forward
- **Core Idea:**
  - Use two pointers (left, right), skip non-alphanumeric characters,  
    and compare lowercase characters while moving two pointers inward
- **Rules:** 
  - Ignore non-alphanumeric characters
- **Pitfall:**
  - Use map to store clean input leads to O(n) space complexity