// MoonSugarEffect decode: fallback non-declaration vertex layout calculator. Builds FVF-like flags, stride, and offsets: position is 12 bytes; optional skin weights/indices, normals, color, and UV sets are appended, with UV count clamped by dword_B28CB0.
_DWORD *__stdcall sub_776DD0(
        int a1,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9)
{
  _DWORD *result; // eax
  __int16 v10; // dx
  unsigned int v11; // edx

  result = a4; /*0x776dd4*/
  v10 = 0; /*0x776ddd*/
  *a3 = 0; /*0x776de1*/
  *a4 = 0; /*0x776de7*/
  if ( a2 ) /*0x776ded*/
    v10 = *(_WORD *)(a2 + 0x20); /*0x776def*/
  *a5 = 0; /*0x776df7*/
  *a4 += 0xC; /*0x776dfd*/
  *a6 = *a4; /*0x776e0a*/
  if ( v10 ) /*0x776e0c*/
  {
    *a3 = 0xA; /*0x776e13*/
    *a4 += 0xC; /*0x776e19*/
  }
  else
  {
    *a3 |= 2u; /*0x776e0e*/
  }
  if ( *(_DWORD *)(a1 + 0x20) ) /*0x776e20*/
  {
    *a3 |= 0x10u; /*0x776e26*/
    *a7 = *a4; /*0x776e2f*/
    *a4 += 0xC; /*0x776e31*/
  }
  if ( *(_DWORD *)(a1 + 0x24) ) /*0x776e34*/
  {
    *a3 |= 0x40u; /*0x776e3a*/
    *a8 = *a4; /*0x776e43*/
    *a4 += 4; /*0x776e45*/
  }
  v11 = *(_BYTE *)(a1 + 0x2C) & 0x3F; /*0x776e4c*/
  if ( (*(_BYTE *)(a1 + 0x2C) & 0x3F) == 0 ) /*0x776e50*/
  {
    v11 = 1; /*0x776e52*/
LABEL_15:
    *a3 |= v11 << 8; /*0x776e69*/
    *a9 = *a4; /*0x776e7c*/
    *a4 += 8 * v11; /*0x776e7e*/
    return result; /*0x776e7e*/
  }
  if ( v11 > dword_B28CB0 ) /*0x776e61*/
    v11 = dword_B28CB0; /*0x776e63*/
  if ( v11 ) /*0x776e67*/
    goto LABEL_15; /*0x776e67*/
  return result; /*0x776e80*/
}
