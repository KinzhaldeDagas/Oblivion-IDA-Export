int __thiscall sub_89FE90(_DWORD *this, char a2)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ecx

  if ( a2 == 0x41 || a2 == 0x61 )
  {
    if ( this )
    {
      v4 = *(this + 2);
      if ( v4 )
      {
        v3 = *(_DWORD *)(v4 + 0x18);
        goto LABEL_10;
      }
    }
  }
  else if ( this )
  {
    v2 = *(this + 2);
    if ( v2 )
    {
      v3 = *(_DWORD *)(v2 + 0x1C);
      goto LABEL_10;
    }
  }
  v3 = 0;
LABEL_10:
  if ( v3 )
    return *(_DWORD *)(v3 + 0xC);
  else
    return 0;
}
