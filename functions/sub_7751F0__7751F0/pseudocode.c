signed int __thiscall sub_7751F0(_DWORD *this, char a2, int a3)
{
  _DWORD *v3; // eax
  int v4; // ecx
  _DWORD *v6; // ecx
  int v7; // edx
  int *v8; // edx

  if ( a2 )
  {
    v3 = (_DWORD *)*(this + 0x4E);
    if ( v3 )
    {
      while ( 1 )
      {
        v4 = v3[2];
        v3 = (_DWORD *)*v3;
        if ( v4 )
        {
          if ( *(_BYTE *)(v4 + 4) )
            break;
        }
        if ( !v3 )
          return 0;
      }
      return sub_774990(*(_DWORD *)v4);
    }
    return 0;
  }
  v6 = (_DWORD *)*(this + 0x4E);
  if ( !v6 )
    return 0;
  while ( 1 )
  {
    v7 = v6[2];
    v6 = (_DWORD *)*v6;
    if ( v7 )
    {
      if ( *(_BYTE *)(v7 + 5) && sub_774EE0(*(_DWORD *)v7) == a3 )
        break;
    }
    if ( !v6 )
      return 0;
  }
  return sub_774990(*v8);
}
