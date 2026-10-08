bool __cdecl sub_548130(int a1, int a2, int a3, float a4)
{
  bool result; // al
  float v5; // [esp+14h] [ebp+10h]

  result = 1; /*0x54813e*/
  if ( 0.0 != a4 ) /*0x54813c*/
  {
    v5 = pow((double)(a2 - a1 + 0x64) / dbl_A3F3E8, unk_B375D0) /*0x548198*/
       - MEMORY[0xB375C0] * a4
       + (double)((a3 - 0xA) / 0xA) * MEMORY[0xB37598];
    if ( v5 < (double)*(float *)&SrcStr ) /*0x5481ab*/
      return 0; /*0x54813c*/
  }
  return result; /*0x548141*/
}
