int __thiscall sub_7A7F10(int this, float *a2, char a3)
{
  double v3; // st6
  double v4; // st7
  double v5; // rt0
  int result; // eax
  float v7; // [esp+8h] [ebp-Ch]
  float v8; // [esp+Ch] [ebp-8h]
  float v9; // [esp+10h] [ebp-4h]
  float v10; // [esp+1Ch] [ebp+8h]

  v7 = *a2;
  v8 = a2[1];
  v9 = a2[2];
  if ( a3 )
  {
    v10 = (double)*(unsigned __int8 *)(this + 0x18) / dbl_A3DDD8;
    v7 = v7 * v10;
    v8 = v8 * v10;
    v9 = v10 * v9;
  }
  if ( v7 <= 1.0 )
  {
    if ( v7 < 0.0 )
      v7 = 0.0;
    v3 = 1.0;
    v4 = 0.0;
  }
  else
  {
    v3 = 1.0;
    v4 = 0.0;
    v7 = 1.0;
  }
  if ( v8 <= v3 )
  {
    if ( v8 < v4 )
      v8 = v4;
  }
  else
  {
    v8 = v3;
  }
  if ( v9 <= v3 )
  {
    if ( v9 >= v4 )
      goto LABEL_16;
  }
  else
  {
    v4 = v3;
  }
  v9 = v4;
LABEL_16:
  v5 = dbl_A8C6D8;
  result = (__int64)(v5 * v7);
  *(_DWORD *)(this + 0x14) = ((((0xFF00 - (unsigned int)(__int64)(v9 * v5)) << 8) - (unsigned int)(__int64)(v8 * v5)) << 8)
                           - result;
  return result;
}
