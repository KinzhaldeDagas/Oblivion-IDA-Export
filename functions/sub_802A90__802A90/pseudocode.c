int __thiscall sub_802A90(_DWORD *this, _DWORD *a2)
{
  int v2; // eax
  int result; // eax
  int v4; // ecx

  if ( a2 )
  {
    *(this + 6) = *a2;
    *(this + 7) = a2[1];
    *(this + 8) = a2[2];
  }
  v2 = *(this + 2);
  *(_DWORD *)(v2 + 0x1C) &= ~0x400u;
  *(_DWORD *)(v2 + 0x24) = 0;
  result = *(this + 2);
  *(_DWORD *)(result + 0x1C) &= ~0x800u;
  *(_DWORD *)(result + 0x24) = 0;
  v4 = *(this + 2);
  *(_DWORD *)(v4 + 0x1C) &= ~0x1000u;
  *(_DWORD *)(v4 + 0x24) = 0;
  return result;
}
