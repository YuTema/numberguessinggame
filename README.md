[# Number Guessing Game (CLI)

Một trò chơi đoán số đơn giản chạy trên giao diện dòng lệnh (CLI), được xây dựng bằng ngôn ngữ C++.

## Mô tả dự án
Máy tính sẽ chọn ngẫu nhiên một con số trong khoảng từ 1 đến 100. Nhiệm vụ của người chơi là đoán đúng con số đó trong một số lượng lượt chơi giới hạn tùy theo độ khó đã chọn.

## Các tính năng chính
- Lựa chọn 3 mức độ khó:
  - **Easy**: 10 lượt đoán.
  - **Medium**: 5 lượt đoán.
  - **Hard**: 3 lượt đoán.
- Hệ thống gợi ý (Hint): Cung cấp gợi ý số chẵn/lẻ khi người chơi dùng hết một nửa số lượt đoán.
- Tính năng High Score: Lưu lại số lần đoán ít nhất cho từng cấp độ trong phiên chơi.
- Tính năng đo thời gian: Hiển thị thời gian hoàn thành lượt đoán (tính theo giây).
- Chế độ chơi lại nhiều lần mà không cần khởi động lại chương trình.

## Yêu cầu hệ thống
- Trình biên dịch C++ (hỗ trợ C++11 trở lên để dùng thư viện `chrono`).
- Hệ điều hành: Windows, macOS hoặc Linux.

## Cách cài đặt và khởi chạy
1. Tải file mã nguồn `numberguessing.cpp` về máy.
2. Mở terminal hoặc command prompt tại thư mục chứa file.
3. Biên dịch chương trình:
   ```bash
   g++ numberguessing.cpp -o numberguessing
](https://roadmap.sh/projects/number-guessing-game)
