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
    };

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
    };

    Wektor2D operator+(Wektor2D v)
    {
        double result_x, 
        double result_y;
        result_x = v.getX() + X;
        result_y = v.getY() + Y;
        return Wektor2D(result_x, result_y);
    }

    double operator*(Wektor2D v)
    {
        double result_multi = v.getX() * X + v.getY() * Y;
        return result_multi;
    }
};
