void __thiscall sub_64E2B0(_DWORD *this)
{
  _DWORD *v1; // ecx
  int v2; // edx
  _DWORD *v3; // eax
  int v4; // edi
  char i; // bl
  _DWORD *j; // eax
  int v7; // edx

  v1 = this + 0xF;
  if ( v1 )
  {
    v2 = 0;
    v3 = v1;
    do
    {
      if ( *v3 )
        ++v2;
      v3 = (_DWORD *)v3[1];
    }
    while ( v3 );
    v4 = v2;
    for ( i = 1; v4; v1 = (_DWORD *)v1[1] )
    {
      if ( !i )
        break;
      i = 0;
      for ( j = v1; j; j = (_DWORD *)j[1] )
      {
        v7 = *v1;
        if ( *(_DWORD *)(*v1 + 0x14) > *(_DWORD *)(*j + 0x14) )
        {
          *v1 = *j;
          *j = v7;
          i = 1;
        }
      }
      --v4;
    }
  }
}
