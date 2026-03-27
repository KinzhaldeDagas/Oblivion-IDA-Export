// positive sp value has been detected, the output may be wrong!
void __cdecl Calc_MagicTargetResistanceFactor_::MultiplyResistances()
{
  __asm
  {
    fxch    st(2)
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
    fstp    [esp+arg_10]
    fld     [esp+arg_10]
  }
}
