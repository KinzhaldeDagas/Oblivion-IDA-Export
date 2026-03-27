int __thiscall sub_6FAB80(float *this, float a2, int a3)
{
  int result; // eax
  int v4; // edx
  double v5; // st6
  float v6; // [esp+0h] [ebp-Ch]
  float v7; // [esp+4h] [ebp-8h]
  float v8; // [esp+8h] [ebp-4h]
  float v9; // [esp+14h] [ebp+8h]

  result = a3;
  LOWORD(v4) = *(_WORD *)(a3 + 0x48);
  if ( (_WORD)v4 )
  {
    result = *(_DWORD *)(a3 + 0x5C);
    v4 = (unsigned __int16)v4;
    do
    {
      --v4;
      v5 = a2 - *(float *)(result + 0x14);
      result += 0x1C;
      v9 = v5 * *(this + 6);
      v6 = *(float *)&qword_B3F494 * v9;
      v7 = *((float *)&qword_B3F494 + 1) * v9;
      v8 = v9 * flt_B3F49C;
      *(float *)(result - 0x1C) = *(float *)(result - 0x1C) + v6;
      *(float *)(result - 0x18) = v7 + *(float *)(result - 0x18);
      *(float *)(result - 0x14) = *(float *)(result - 0x14) + v8;
    }
    while ( v4 );
  }
  return result;
}
