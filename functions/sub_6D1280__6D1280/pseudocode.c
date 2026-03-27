int __thiscall sub_6D1280(_DWORD *this)
{
  int v1; // ebp
  int result; // eax
  int v3; // ecx
  unsigned __int16 v4; // si
  int v5; // eax
  int v6; // ecx
  int v7; // edi

  v1 = *(this + 0xC);
  if ( !v1 )
    return 0;
  v3 = *(_DWORD *)(v1 + 0xB4);
  result = *(_DWORD *)(v3 + 0x1C);
  if ( !result )
  {
    v4 = *(_WORD *)(v3 + 8);
    v5 = FormHeapAlloc((0xC * (unsigned __int64)v4) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v4);
    v6 = *(_DWORD *)(v1 + 0xB4);
    v7 = v5;
    sub_728390(
      (_WORD *)v6,
      v4,
      v5,
      *(_DWORD *)(v6 + 0x20),
      *(_DWORD *)(v6 + 0x24),
      *(_DWORD *)(v6 + 0x28),
      *(_WORD *)(v6 + 0x2C) & 0x3F,
      *(_WORD *)(v6 + 0x2C) & 0xF000);
    return v7;
  }
  return result;
}
