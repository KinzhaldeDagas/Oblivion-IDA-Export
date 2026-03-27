char __thiscall sub_6B3200(_DWORD *this)
{
  int v1; // esi
  int v2; // eax
  char v3; // dl
  unsigned int v4; // eax

  if ( *(this + 4) >= (unsigned int)(*(this + 3) - 1) )
    return 0;
  v1 = *(this + 2);
  while ( 1 )
  {
    v2 = *(this + 4);
    if ( *(_BYTE *)(v1 + v2) == 0xFF )
    {
      v3 = *(_BYTE *)(v1 + v2 + 1);
      if ( v3 == (char)0xFB || v3 == (char)0xFA )
        break;
    }
    v4 = v2 + 1;
    *(this + 4) = v4;
    if ( v4 >= *(this + 3) - 1 )
      return 0;
  }
  return 1;
}
