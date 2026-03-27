int __thiscall sub_4C99C0(int this, float *a2)
{
  int v2; // eax
  int v3; // eax
  double v5; // st6
  double v6; // st7
  int result; // eax
  int v8; // [esp+8h] [ebp+4h]

  if ( (*(_BYTE *)(this + 0x24) & 1) != 0 && (v2 = *(_DWORD *)(this + 0x3C)) != 0 )
    v3 = *(_DWORD *)(v2 + 8);
  else
    v3 = 0;
  v5 = dbl_A3DDD8;
  v8 = BYTE1(v3);
  v6 = (double)(unsigned __int8)v3 / v5;
  result = BYTE2(v3);
  *a2 = v6;
  a2[1] = (double)v8 / v5;
  a2[2] = (double)(unsigned __int8)result / v5;
  return result;
}
