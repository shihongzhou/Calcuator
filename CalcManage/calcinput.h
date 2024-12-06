#ifndef CALCINPUT_H
#define CALCINPUT_H
#include <cstddef>
#include <string>

class CalcNumSec
{
public:
    CalcNumSec()
        : value()
        , m_isNegative(false)
    {
    }

    void Clear();
    bool IsEmpty()
    {
        return value.empty();
    }
    bool IsNegative()
    {
        return m_isNegative;
    }
    void IsNegative(bool isNegative)
    {
        m_isNegative = isNegative;
    }
    std::wstring value;

private:
    bool m_isNegative;      //该数字是否为负数 默认为false
};

class CalcInput
{
public:
    CalcInput();

private:
    bool m_hasExponent;     //是否有指数部分
    bool m_hasDecimal;      //是否有小数点标识
    size_t m_decPtIndex;    //小数点位置
    wchar_t m_decSymbol;    //小数点符号
    CalcNumSec m_base;      //存储基数部分
    CalcNumSec m_exponent;  //存储指数部分

};

#endif // CALCINPUT_H
