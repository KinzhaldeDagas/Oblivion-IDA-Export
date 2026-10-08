int __thiscall sub_6FAB80(float *this, float a2, int a3)
{
  int result; // eax
  int v4; // edx
  double v5; // st6
  float v6; // [esp+0h] [ebp-Ch]
  float v7; // [esp+4h] [ebp-8h]
  float v8; // [esp+8h] [ebp-4h]
  float v9; // [esp+14h] [ebp+8h]

  result = a3; /*0x6fab80*/
  LOWORD(v4) = *(_WORD *)(a3 + 0x48); /*0x6fab84*/
  if ( (_WORD)v4 ) /*0x6fab8e*/
  {
    result = *(_DWORD *)(a3 + 0x5C); /*0x6fab90*/
    v4 = (unsigned __int16)v4; /*0x6fab93*/
    do /*0x6fabf4*/
    {
      --v4; /*0x6faba1*/
      v5 = a2 - *(float *)(result + 0x14); /*0x6faba4*/
      result += 0x1C; /*0x6faba6*/
      v9 = v5 * *(this + 6); /*0x6fabae*/
      v6 = *(float *)&unk_B3F494 * v9; /*0x6fabbe*/
      v7 = flt_B3F498 * v9; /*0x6fabc9*/
      v8 = v9 * unk_B3F49C; /*0x6fabd3*/
      *(float *)(result - 0x1C) = *(float *)(result - 0x1C) + v6; /*0x6fabdd*/
      *(float *)(result - 0x18) = v7 + *(float *)(result - 0x18); /*0x6fabe7*/
      *(float *)(result - 0x14) = *(float *)(result - 0x14) + v8; /*0x6fabf1*/
    }
    while ( v4 ); /*0x6fabf4*/
  }
  return result; /*0x6fabf8*/
}
