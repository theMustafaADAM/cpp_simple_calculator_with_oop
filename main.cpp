#include <iostream>

using namespace std;

class clsCalculator
{

public:
    void Add(double Numbr)
    {
        _lastNumbr = Numbr;
        _previousResult = _reslt;
        _lastOperation = "Adding";
        _reslt += Numbr;
    }
    void Subtract(double Numbr)
    {
        _lastNumbr = Numbr;
        _previousResult = _reslt;
        _lastOperation = "Subtracting";
        _reslt -= Numbr;
    }
    void Multiply(double Numbr)
    {
        _lastNumbr = Numbr;
        _previousResult = _reslt;
        _lastOperation = "Multiplying";
        _reslt *= Numbr;
    }
    void Divide(double Numbr)
    {
        _lastNumbr = Numbr;

        if (_IsZero(Numbr))
        {
            Numbr = 1;
        }
        _previousResult = _reslt;
        _lastOperation = "Dividing";
        _reslt /= Numbr;
    }
    void Clear()
    {
        _lastNumbr = 0.0;
        _previousResult = 0.0;
        _lastOperation = "Clear";
        _reslt = 0.0;
    }
    void CancelLastOperation()
    {
        _lastNumbr = 0.0;
        _lastOperation = "Cancel Last Operation";
        _reslt = _previousResult;
    }
    double GetFinalResults()
    {
        return _reslt;
    }
    void PrintResult()
    {
        cout << "\nResult After " << _lastOperation << " " << _lastNumbr << " is ";
        cout << _reslt << endl;
    }

private:
    double _lastNumbr = 0.0, _reslt = 0.0, _previousResult = 0.0;
    string _lastOperation = "Clear";
    bool _IsZero(double Numbr)
    {
        return (Numbr == 0);
    }
};

int main()
{
    cout << "Calculator Project!" << endl;

    clsCalculator cal;

    cal.Add(10);
    cal.PrintResult();
    ///cal.Clear();
    cal.Add(251);
    cal.PrintResult();
    cal.Subtract(55);
    cal.PrintResult();
    cal.Multiply(3.2221);
    cal.PrintResult();
    cal.Clear();
    cal.Add(2);
    cal.Divide(0);
    cal.PrintResult();


    return 0;
}
