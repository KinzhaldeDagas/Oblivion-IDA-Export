char __thiscall sub_4EEBB0(_DWORD *this, const void **a2)
{
  const void **v2; // edi
  int v4; // esi
  _DWORD *v5; // eax
  int v6; // edx
  const void **v7; // eax
  const void **v8; // ebx
  int v9; // eax

  v2 = a2;
  if ( !a2 )
    return 1;
  if ( !*(this + 1) && !*this && !a2[1] && !*a2 )
    return 0;
  v4 = 0;
  v5 = this;
  do
  {
    if ( *v5 )
      ++v4;
    v5 = (_DWORD *)v5[1];
  }
  while ( v5 );
  v6 = 0;
  v7 = a2;
  do
  {
    if ( *v7 )
      ++v6;
    v7 = (const void **)v7[1];
  }
  while ( v7 );
  if ( v4 != v6 )
    return 1;
  v8 = (const void **)this;
  while ( 1 )
  {
    do
    {
      if ( !v2 )
        return 1;
      v9 = memcmp(*v8, *v2, 8u);
      v2 = (const void **)v2[1];
    }
    while ( v9 );
    v8 = (const void **)v8[1];
    if ( !v8 )
      break;
    v2 = a2;
  }
  return 0;
}
