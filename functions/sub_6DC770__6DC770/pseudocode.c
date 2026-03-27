_DWORD *__thiscall sub_6DC770(_DWORD *this, _DWORD *a2, _DWORD *a3, _DWORD *a4, _BYTE *a5)
{
  int v5; // eax
  _DWORD *result; // eax

  v5 = *(this + 0x12);
  if ( v5 )
  {
    *a3 = *(_DWORD *)(v5 + 8);
    *a4 = *(_DWORD *)(v5 + 0x10);
    *a5 = *(_BYTE *)(v5 + 0x14);
    result = *(_DWORD **)(v5 + 0xC);
    *a2 = result;
  }
  else
  {
    *a3 = 0;
    *a4 = 0;
    *a2 = 0;
    *a5 = 0;
    return a4;
  }
  return result;
}
