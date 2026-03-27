int __thiscall sub_6B6BE0(float *this, float a2, float a3, float a4)
{
  double v5; // st7
  int v6; // ecx
  double v7; // st6
  float v8; // [esp+4h] [ebp-Ch]
  float v9; // [esp+8h] [ebp-8h]
  float v10; // [esp+14h] [ebp+4h]
  float v11; // [esp+14h] [ebp+4h]
  float v12; // [esp+14h] [ebp+4h]

  if ( (*(_DWORD *)this & 1) != 0 )
    return 1;
  if ( (*(_DWORD *)this & 2) == 0 )
    return 0x80004005;
  v5 = a2;
  *(this + 8) = a2;
  *(this + 9) = a3;
  *(this + 0xA) = a4;
  v6 = *((_DWORD *)this + 0x15);
  if ( !v6 )
    return 0x80004005;
  v7 = dbl_A77238;
  v10 = a3 / v7;
  v9 = v10;
  v11 = a4 / v7;
  v8 = v11;
  v12 = v5 / v7;
  return (*(int (__stdcall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v6 + 0x4C))(
           v6,
           LODWORD(v12),
           LODWORD(v8),
           LODWORD(v9),
           1);
}
