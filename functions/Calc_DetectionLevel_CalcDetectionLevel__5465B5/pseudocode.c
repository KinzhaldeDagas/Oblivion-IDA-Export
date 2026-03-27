// positive sp value has been detected, the output may be wrong!
int __usercall Calc_DetectionLevel_::CalcDetectionLevel@<eax>(
        double result@<st0>,
        int a2,
        float a3,
        float a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17)
{
  __asm
  {
    fld     dword ptr ds:0B36700h
    fadd    [esp+arg_1C]
    fadd    [esp+arg_4C]
    fadd    [esp+arg_4]
    fadd    [esp+arg_8]
    fstp    [esp+arg_4C]
    fld     [esp+arg_4C]
    fcom    st(2)
    fnstsw  ax
    fstp    st(2)
  }
  if ( __SETP__(HIBYTE(_AX) & 5, 0) )
  {
    __asm { fstp    st }
  }
  else
  {
    __asm
    {
      fcomp   st(1)
      fnstsw  ax
    }
    if ( !__SETP__(HIBYTE(_AX) & 5, 0) )
    {
      __asm { fstp    st }
      return 1;
    }
  }
  return Double_To_SInt32(result);
}
