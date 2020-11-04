class Wektor2D
{
private:
    double X;
    double Y;

public:
    Wektor2D()
    {
        X = 0;
        Y = 0;
    }

    void setX(double x)
    {
        X = x;
    }

    void setY(double y)
    {
        Y = y;
    }

    double getX()
    {
        return X;
    }

    double getY()
    {
        return Y;
    }

    Wektor2D(double x, double y)
    {
        X = x;
        Y = y;
    }

    Wektor2D operator+(Wektor2D vec)
    {
        double resultx, resulty;
        resultx = vec.getX() + X;
        resulty = vec.getY() + Y;
        return Wektor2D(resultx, resulty);
    }

    double operator*(Wektor2D vec)
    {
        double result3 = vec.getX() * X + vec.getY() * Y;
        return result3;
    }
};
