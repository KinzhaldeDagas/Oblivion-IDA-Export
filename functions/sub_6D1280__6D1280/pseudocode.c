int __thiscall sub_6D1280(_DWORD *this)
{
  int v1; // ebp
  int result; // eax
  int v3; // ecx
  unsigned __int16 v4; // si
  int v5; // eax
  int v6; // ecx
  int v7; // edi

  v1 = *(this + 0xC); /*0x6d1281*/
  if ( !v1 ) /*0x6d1286*/
    return 0; /*0x6d1288*/
  v3 = *(_DWORD *)(v1 + 0xB4); /*0x6d128c*/
  result = *(_DWORD *)(v3 + 0x1C); /*0x6d1292*/
  if ( !result )
  {
    v4 = *(_WORD *)(v3 + 8); /*0x6d129a*/
    v5 = FormHeapAlloc((0xC * (unsigned __int64)v4) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v4);
    v6 = *(_DWORD *)(v1 + 0xB4); /*0x6d12b8*/
    v7 = v5; /*0x6d12be*/
    sub_728390( /*0x6d12e2*/
      (_WORD *)v6,
      v4,
      v5,
      *(_DWORD *)(v6 + 0x20),
      *(_DWORD *)(v6 + 0x24),
      *(_DWORD *)(v6 + 0x28),
      *(_WORD *)(v6 + 0x2C) & 0x3F,
      *(_WORD *)(v6 + 0x2C) & 0xF000);
    return v7; /*0x6d12e7*/
  }
  return result; /*0x6d128a*/
}
