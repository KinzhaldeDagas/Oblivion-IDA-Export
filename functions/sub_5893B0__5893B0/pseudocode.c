BOOL __thiscall sub_5893B0(_DWORD *this)
{
  int v1; // eax
  char v2; // dl
  int i; // eax
  int v4; // ecx

  v1 = *(this + 9);
  v2 = 0;
  if ( v1 )
    v2 = *(_BYTE *)(v1 + 0x18) & 1;
  for ( i = *(this + 4); i; i = *(_DWORD *)(i + 0x10) )
  {
    v4 = *(_DWORD *)(i + 0x24);
    if ( v4 )
      v2 |= *(_BYTE *)(v4 + 0x18) & 1;
  }
  return v2 == 0;
}
