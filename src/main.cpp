#include "fmt/core.h"

#include <QApplication>
#include <QFrame>

auto main(int argc, char* argv[]) -> int {
    auto app [[maybe_unused]] = QApplication {argc, argv};

    auto frame = QFrame {};
    const auto& font = frame.font();

    fmt::print("Hello from qt with font '{}' at {} pt.\n", font.family().toStdString(),
               font.pointSizeF());

    return 0;
}
