int __thiscall sub_4FA890(int *this, unsigned int a2)
{
  int *v2; // esi
  int *v3; // eax
  unsigned int v4; // edx
  int v5; // ecx
  unsigned int v6; // edi
  bool v7; // bl
  int *v8; // eax
  int v9; // edx
  _BYTE *v10; // esi

  v2 = this + 0x12;
  v3 = this + 0x12;
  v4 = 0;
  if ( this != (int *)0xFFFFFFB8 )
  {
    do
    {
      v5 = *v3;
      if ( !*v3 )
        break;
      v3 = (int *)v3[1];
      if ( *(_BYTE *)(v5 + 0x10) )
        ++v4;
    }
    while ( v3 );
  }
  v6 = a2;
  v7 = a2 >= v4;
  if ( a2 >= v4 )
    v6 = a2 - v4;
  v8 = v2;
  v9 = 0;
  while ( v8 )
  {
    v10 = (_BYTE *)*v8;
    if ( !*v8 )
      return 0;
    v8 = (int *)v8[1];
    if ( v10[0x10] )
    {
      if ( v7 )
        continue;
    }
    else if ( !v7 )
    {
      continue;
    }
    if ( v9 == v6 )
      return *(_DWORD *)v10;
    ++v9;
  }
  return 0;
}
