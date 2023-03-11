#include <iostream>
#include <winbgim.h>

struct BgiWindowProperties {
    int xLength{};
    int yLength{};

    std::string title{};
};

struct Pos {
    int x{};
    int y{};
};

class Ball {
public:
    Pos m_topLeft{};

    // Size of the side of the square which encloses the ball
    // Should be even
    int m_size{};

    int getRadius() {
        return m_size / 2;
    }

    Pos getBottomRight() {
        return {m_topLeft.x + (m_size - 1), m_topLeft.y + (m_size - 1)};
    }

    Pos getCentre() {
        int radius {getRadius()};

        return {m_topLeft.x + radius, m_topLeft.y + radius};
    }

    void draw() {
        Pos centre = getCentre();
        int radius {getRadius()};

        fillellipse(centre.x, centre.y, radius, radius);
    }
};

int main() {
    const BgiWindowProperties windowProperties {800, 600, "Unnamed Ball Game" };

    initwindow(windowProperties.xLength, windowProperties.yLength, windowProperties.title.c_str());

    Ball ball {.m_topLeft {0, 0}, .m_size = 22};
    ball.draw();

    getch();
    closegraph();

    return 0;
}
