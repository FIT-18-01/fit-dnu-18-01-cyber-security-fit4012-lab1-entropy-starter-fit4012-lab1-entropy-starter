# Report 1 Page – FIT4012 Lab 1

## 1. Mục tiêu
Tóm tắt ngắn gọn mục tiêu của bài lab.

## 2. Cách làm
- Đọc hiểu chương trình entropy mẫu.
- Bổ sung hàm tính redundancy.
- Hoàn thiện hàm mod_inverse().
- Chạy thử trên nhiều test case.

## 3. Kết quả chính
### 3.1 Entropy và redundancy
| Input | Entropy | Redundancy | Nhận xét |
|---|---:|---:|---|
| aaaa |0.0000|8.0000|entropy thấp, redundancy cao|
| abcd |2.0000|6.0000|entropy cao hơn `aaaa`|
| hello world |2.84535|5.15465|entropy và redundancy được tính hợp lệ|

### 3.2 Modulo inverse
| a | m | Kết quả mong đợi | Kết quả chương trình |
|---:|---:|---|---|
| 3 | 7 | 5 |nghịch đảo modulo là 5|
| 10 | 17 | 12 |nghịch đảo modulo là 12|
| 6 | 9 | Không tồn tại |không tồn tại nghịch đảo modulo|

## 4. Kết luận
Bài lab đã giúp em hiểu rõ ý nghĩa của Entropy trong việc đo lường lượng tin và độ hỗn loạn của nguồn dữ liệu. Entropy càng cao thì dữ liệu càng ngẫu nhiên và khó đoán, điều này rất quan trọng trong việc tạo ra các khóa bảo mật. Việc xử lý các trường hợp số âm khi tìm nghịch đảo modulo trong thuật toán Euclid mở rộng là bước thử thách nhất. Việc chạy chương trình trực tiếp trên các test case khác nhau (từ chuỗi lặp đến chuỗi đa dạng) đã minh họa trực quan cách mà thông tin dư thừa (Redundancy) ảnh hưởng đến khả năng nén và tính bảo mật của dữ liệu.
