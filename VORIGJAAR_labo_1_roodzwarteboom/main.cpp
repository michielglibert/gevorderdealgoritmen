#include <iostream>
#include "zoekboom17.h"
#include "roodzwarteboom.h"

int main()
{
    Roodzwarteboom<int, string> boom;
    boom.voegtoe(9, "tekst");
    boom.voegtoe(8, "tekst");
    boom.voegtoe(-5, "tekst");
    boom.voegtoe(-6, "tekst");
    boom.voegtoe(-7, "tekst");
    boom.voegtoe(-8, "tekst");
    boom.voegtoe(-9, "tekst");
    boom.voegtoe(-10, "tekst");
    boom.voegtoe(-11, "tekst");
    boom.voegtoe(-14, "tekst");
    boom.voegtoe(-13, "tekst");
    boom.voegtoe(-12, "tekst");
    boom.voegtoe(-15, "tekst");
    boom.voegtoe(-16, "tekst");
    boom.voegtoe(-17, "tekst");
    boom.voegtoe(-18, "tekst");
    boom.voegtoe(-19, "tekst");
    boom.voegtoe(-20, "tekst");
    boom.voegtoe(-21, "tekst");
    boom.voegtoe(4, "tekst");
    boom.voegtoe(2, "tekst");
    boom.voegtoe(1, "tekst");
    boom.voegtoe(5, "tekst");
    boom.voegtoe(0, "tekst");
    boom.voegtoe(50, "tekst");
    boom.voegtoe(34, "tekst");
    boom.voegtoe(-3, "tekst");
    boom.voegtoe(45, "tekst");
    boom.voegtoe(51, "tekst");
    boom.voegtoe(52, "tekst");
    boom.voegtoe(53, "tekst");
    boom.voegtoe(54, "tekst");
    boom.voegtoe(55, "tekst");
    boom.voegtoe(56, "tekst");
    boom.teken("boom");
    return 0;
}