# ![](https://drive.google.com/uc?id=10INx5_pkhMcYRdx_OO4rXNXxcsvPtBYq) 雙輪排序（Dual-Pivot Quick Sort）
> ##### 理論請自行找，網路上有很多相關的文章，這邊只關注於範例實作的部分.

---

<!--ts-->
## 目錄
* [簡介](#簡介)
* [實作範例](#實作範例)
* [參考資料](#參考資料)
<!--te-->

---

## 簡介
雙輪排序（Dual-Pivot Quick Sort）是快速排序的一種變體，<br>
它使用兩個基準點將數列劃分為三部分，進一步減少排序過程中的比較和交換操作。
<br>
雙輪排序的過程如下：<br>
- 選擇基準點：從數列中選擇兩個基準點，通常是數列的頭部和尾部元素。
- 檢查基準點順序：如果第一個基準點大於第二個基準點，則交換它們。
- 分區：使用雙輪排序的分區方法，將數列劃分為三個區域，<br>
  小於第一個基準點的區域、介於兩個基準點之間的區域、大於第二個基準點的區域。
- 遞迴應用：對小於和大於區域遞迴應用雙輪排序。
- 合併結果：將排序後的小於區域、介於區域和大於區域合併為最終排序結果。

<br>

雙輪排序的時間複雜度：<br>
- 平均情況下的時間複雜度為 O(nlogn)。
- 最壞情況下的時間複雜度為 O(n^2)，但由於基準點的選擇和分區方法的優化，發生最壞情況的概率極低。
- 最好情況下的時間複雜度為 O(nlogn)。
- 空間複雜度為 O(logn)（遞迴調用所需的堆疊空間）。

---

## 實作範例:
- [Example](https://github.com/RC-Dev-Tech/algorithm-quick-sort-dual-pivot/blob/main/C%2B%2B/main.cpp) - Dual-Pivot Quick Sort (C++)

---

## 參考資料
* [RUNOOB - 双路快速排序](https://www.runoob.com/data-structures/2way-quick-sort.html)<br>

---

<!--ts-->
#### [目錄 ↩](#目錄)
<!--te-->
---
