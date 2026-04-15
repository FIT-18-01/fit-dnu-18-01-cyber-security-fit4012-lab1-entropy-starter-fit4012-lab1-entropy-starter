# Report 1 Page – FIT4012 Lab 1
**Họ và tên:** Trần Duy Tuấn

**MSSV:** 1876102004

**Lớp/Nhóm:** CNTT 18-01

---
## 1. Mục tiêu
Tóm tắt ngắn gọn mục tiêu của bài lab.
- Hiểu và cài đặt công thức tính Entropy để đo lường lượng tin.
- Hiểu khái niệm độ dư thừa (Redundancy) và tầm quan trọng của nó trong việc đánh giá tính an toàn của hệ mật.
- Ứng dụng thuật toán Euclid mở rộng để tìm nghịch đảo Modulo .
## 2. Cách làm
- Đọc hiểu chương trình entropy mẫu.
- Bổ sung hàm tính redundancy.
- Hoàn thiện hàm mod_inverse().
- Chạy thử trên nhiều test case.

## 3. Kết quả chính
### 3.1 Entropy và redundancy
| Input | Entropy | Redundancy | Nhận xét |
|---|---:|---:|---|
| aaaa | 0 | 8 | Chuỗi lặp lại hoàn toàn, lượng tin thấp, độ dư thừa cực cao. |
| abcd | 2 | 6 | Các ký tự xuất hiện 1 lần, Entropy tăng nhưng vẫn còn dư thừa so với bảng ASCII. |
| hello world | 2.84535 | 5.15465 | Chuỗi đa dạng hơn, Entropy cao hơn, khó dự đoán hơn chuỗi lặp. |

### 3.2 Modulo inverse
| a | m | Kết quả mong đợi | Kết quả chương trình |
|---:|---:|---|---|
| 3 | 7 | 5 | 5 |
| 10 | 17 | 12 | 12 |
| 6 | 9 | Không tồn tại | Không tồn tại |

## 4. Kết luận

- Em đã hiểu rõ hơn về cách đo lường độ hỗn loạn của thông tin. Entropy càng cao thì hệ mật càng khó bị thám mã bằng phương pháp phân tích tần suất.
- Khó khăn: Việc xử lý giá trị âm của x trong thuật toán Euclid mở rộng để đưa về số dương trong khoảng [0, m-1] là bước dễ gây nhầm lẫn nhất.
- Yếu tố giúp hiểu bài: Việc trực tiếp cài đặt code và quan sát sự thay đổi của Entropy khi thay đổi chuỗi đầu vào giúp em nắm vững lý thuyết của Shannon hơn là chỉ đọc công thức trên slide.