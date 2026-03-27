_DWORD *__thiscall sub_812660(_DWORD *this, const void *a2)
{
  _DWORD *result; // eax
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  bool v6; // zf

  result = this;
  if ( a2 )
    qmemcpy(this + 6, a2, 0x20u);
  v3 = *(this + 2);
  if ( *((_BYTE *)result + 0x34) )
    *(_DWORD *)(v3 + 0x1C) |= 0x400u;
  else
    *(_DWORD *)(v3 + 0x1C) &= ~0x400u;
  *(_DWORD *)(v3 + 0x24) = 0;
  v4 = result[2];
  if ( *((_BYTE *)result + 0x35) )
    *(_DWORD *)(v4 + 0x1C) |= 0x800u;
  else
    *(_DWORD *)(v4 + 0x1C) &= ~0x800u;
  *(_DWORD *)(v4 + 0x24) = 0;
  v5 = result[2];
  v6 = *((_BYTE *)result + 0x36) == 0;
  *(_DWORD *)(v5 + 0x24) = 0;
  if ( v6 )
    *(_DWORD *)(v5 + 0x1C) &= ~0x1000u;
  else
    *(_DWORD *)(v5 + 0x1C) |= 0x1000u;
  return result;
}
