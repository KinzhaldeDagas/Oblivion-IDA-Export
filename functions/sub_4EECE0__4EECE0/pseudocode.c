int __thiscall sub_4EECE0(_DWORD *this)
{
  _DWORD *v1; // esi
  unsigned int v2; // edi
  _DWORD *v3; // eax
  int v4; // ecx
  unsigned int v5; // edx
  unsigned int v6; // edi
  unsigned int v7; // ebx
  _DWORD *v8; // ecx
  int v9; // eax

  v1 = this;
  v2 = 0;
  v3 = this;
  if ( !this )
    return 0;
  do
  {
    if ( *v3 )
      v4 = *(_DWORD *)(*v3 + 4);
    else
      v4 = 0;
    v3 = (_DWORD *)v3[1];
    v2 += v4;
  }
  while ( v3 );
  if ( !v2 )
    return 0;
  v5 = GetRandomLargeInteger_(0) % v2;
  v6 = 0;
  v7 = 0xFFFFFFFF;
  while ( 1 )
  {
    v8 = (_DWORD *)*v1;
    if ( *v1 )
      break;
LABEL_12:
    v1 = (_DWORD *)v1[1];
    if ( !v1 )
      goto LABEL_13;
  }
  v9 = v8[1];
  v7 += v9;
  if ( v6 > v5 || v5 > v7 )
  {
    v6 += v9;
    goto LABEL_12;
  }
LABEL_13:
  if ( v8 )
    return *v8;
  return 0;
}
