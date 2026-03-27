int sub_497C30()
{
  char *v0; // esi
  int v1; // edi
  __int16 v2; // ax
  float v4; // [esp+8h] [ebp-610h]
  float v5; // [esp+8h] [ebp-610h]
  int v6; // [esp+Ch] [ebp-60Ch]
  char v7[512]; // [esp+14h] [ebp-604h] BYREF
  char v8; // [esp+214h] [ebp-404h] BYREF

  flt_B06F64 = flt_B06C2C;
  byte_B34FA4 = 0;
  v6 = 0;
  v0 = &v8;
  v1 = 0x100;
  do
  {
    v4 = (double)v6 / dbl_A3DDD8;
    v5 = pow(v4, flt_B06C2C);
    ++v6;
    v0 += 2;
    --v1;
    v2 = (int)(v5 * dbl_A3DDD0 + dbl_A2FAA0);
    *((_WORD *)v0 + 0xFFFFFEFF) = v2;
    *((_WORD *)v0 + 0xFFFFFFFF) = v2;
    *((_WORD *)v0 + 0xFF) = v2;
  }
  while ( v1 );
  return (*(int (__stdcall **)(_DWORD, _DWORD, int, char *))(**(_DWORD **)(dword_B350D8 + 0x280) + 0x54))(
           *(_DWORD *)(dword_B350D8 + 0x280),
           0,
           1,
           v7);
}
