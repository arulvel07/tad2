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