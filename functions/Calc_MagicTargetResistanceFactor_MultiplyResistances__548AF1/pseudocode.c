// Resistance combine path: converts both percentages to fractions and combines them as independent resist factors after both <100 checks pass.
// positive sp value has been detected, the output may be wrong!
void __cdecl Calc_MagicTargetResistanceFactor_::MultiplyResistances()
{                                               // Final vanilla exposure factor is (1 - magicItemResistance/100) * (1 - effectSpecificResistance/100); either channel >= 100 returns 0.
  __asm
  {
    fxch    st(2); Resistance combine path: converts both percentages to fractions and combines them as independent resist factors after both <100 checks pass.
    fdiv    st, st(1)
    fstp    dword ptr [esp+0]
    fdivp   st(1), st
    fstp    [esp+arg_10]
    fld     dword ptr [esp+0]
    fld     st
    fld1
    fld     st
    fsubrp  st(2), st
    fxch    st(1)
    fmul    [esp+arg_10]
    fxch    st(1)
    fxch    st(2)
    faddp   st(1), st
    fsubp   st(1), st
    fstp    [esp+arg_10]; Final vanilla exposure factor is (1 - magicItemResistance/100) * (1 - effectSpecificResistance/100); either channel >= 100 returns 0.
    fld     [esp+arg_10]
  }
}
