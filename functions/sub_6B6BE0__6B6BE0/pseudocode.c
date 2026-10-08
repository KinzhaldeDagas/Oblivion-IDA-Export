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

  if ( (*(_DWORD *)this & 1) != 0 ) /*0x6b6be4*/
    return 1; /*0x6b6be6*/
  if ( (*(_DWORD *)this & 2) == 0 ) /*0x6b6bf0*/
    return 0x80004005; /*0x6b6bf0*/
  v5 = a2; /*0x6b6bf2*/
  *(this + 8) = a2; /*0x6b6bf6*/
  *(this + 9) = a3; /*0x6b6bfd*/
  *(this + 0xA) = a4; /*0x6b6c04*/
  v6 = *((_DWORD *)this + 0x15); /*0x6b6c07*/
  if ( !v6 ) /*0x6b6c0c*/
    return 0x80004005; /*0x6b6c55*/
  v7 = dbl_A77238; /*0x6b6c1d*/
  v10 = a3 / v7; /*0x6b6c1f*/
  v9 = v10; /*0x6b6c27*/
  v11 = a4 / v7; /*0x6b6c2d*/
  v8 = v11; /*0x6b6c35*/
  v12 = v5 / v7; /*0x6b6c3b*/
  return (*(int (__stdcall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v6 + 0x4C))( /*0x6b6beb*/
           v6,
           LODWORD(v12),
           LODWORD(v8),
           LODWORD(v9),
           1);
}
