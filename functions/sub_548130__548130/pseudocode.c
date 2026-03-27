bool __cdecl sub_548130(int a1, int a2, int a3, float a4)
{
  bool result; // al
  float v5; // [esp+14h] [ebp+10h]

  result = 1;
  if ( 0.0 != a4 )
  {
    v5 = pow((double)(a2 - a1 + 0x64) / dbl_A3F3E8, flt_B375D0)
       - fBarterHaggleBase * a4
       + (double)((a3 - 0xA) / 0xA) * fBarterHaggleDispMult;
    if ( v5 < (double)*(float *)&SrcStr )
      return 0;
  }
  return result;
}
