QuanLyDiemTHCS/
│
├── src/  ← Mã nguồn Java
│   └── com/quanlydiem/
│       ├── Main.java           ← Chương trình chính, khởi tạo GUI
│       ├── models/             ← Lớp dữ liệu
│       │   ├── Student.java    ← Thông tin học sinh
│       │   ├── Subject.java    ← Thông tin môn học
│       │   └── Score.java      ← Điểm học sinh
│       ├── services/           ← Xử lý nghiệp vụ
│       │   ├── StudentService.java ← Thêm/sửa/xóa học sinh
│       │   ├── ScoreService.java   ← Nhập/xem/sửa điểm, tính trung bình
│       │   └── CSVService.java     ← Nhập/xuất CSV
│       ├── gui/                ← Giao diện
│       │   ├── MainFrame.java      ← Cửa sổ chính
│       │   ├── StudentPanel.java   ← Nhập/xem học sinh
│       │   └── ScorePanel.java     ← Nhập/xem điểm
│       └── utils/              ← Hàm tiện ích
│           └── CSVUtils.java   ← Hỗ trợ đọc/ghi CSV
│
├── data/  ← File dữ liệu
│   ├── students.csv    ← Danh sách học sinh
│   ├── subjects.csv    ← Danh sách môn học
│   └── scores.csv      ← Điểm học sinh
│
├── reports/  ← Báo cáo xuất ra
│   ├── semester1/
│   ├── semester2/
│   └── final/
│
├── docs/     ← Tài liệu hướng dẫn, sơ đồ, README
├── lib/      ← Thư viện ngoài (OpenCSV, Apache POI)
├── tests/    ← Kiểm thử các module (StudentTest.java, ScoreTest.java)
└── build/    ← File biên dịch (.class) và output khác
