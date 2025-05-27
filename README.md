# TAD assessment - 02
---
## Day - 1 (26/05)
Cloned the repo into local system and then added a markdown readme file
## Day - 2 (27/05)
##  1. Problem Solving on graphs
### i) **Core Logic for this question**

**Main Idea:**  
Each land cell (`1`) contributes **4** to the perimeter. But if its neighboured to any land, then subtract one for each land ie.,
- If it has a neighboring land cell **above**, subtract **1**
- If it has a neighboring land cell **below**, subtract **1**
- If it has a neighboring land cell **left**, subtract **1**
- If it has a neighboring land cell **right**, subtract **1**

![island pic](island.png)

    Input: grid = [[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]]
    output: 16
    Explanation: The perimeter is the 16 yellow stripes in the image above.


- copy pasted the code from leetcode after confirmining all test cases are working
- done writting int main for the function
- completed 1st part in 1st question

## Day - 2 (28/05)
### iii) **Core Logic for this question**
We need to **identify the "town judge"**, if they exist. A town judge must:
- Trust **nobody**
- **Trusted by exactly n - 1** people (everyone else)

To solve this efficiently, we use two arrays:
- `trusts[i]`: number of people that person `i` trusts
- `trusted_by[i]`: number of people who trust person `i`
- if trusts is 0 and trusted by everyone then he is judge 
<br>

- Question done in leetcode and checked if all test cases are working
- copied pasted on a c file