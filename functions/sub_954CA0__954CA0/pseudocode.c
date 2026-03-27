unsigned int __thiscall sub_954CA0(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx
  char v4; // dl
  unsigned int v5; // ecx
  int v6; // esi
  int v7; // ebx
  unsigned int v8; // edx
  unsigned int result; // eax
  int i; // ecx

  v2 = *(this + 4) - *(this + 3);
  v3 = *(this + 6) - *(this + 5);
  if ( v2 <= v3 )
    v2 = v3;
  if ( v2 <= *(this + 8) - *(this + 7) )
    v2 = *(this + 8) - *(this + 7);
  v4 = 0;
  v5 = v2;
  if ( v2 )
  {
    do
    {
      v5 >>= 1;
      ++v4;
    }
    while ( v5 );
  }
  v6 = 0xFFFFFFFF;
  v7 = 3;
  v8 = v2 + (1 << (v4 - 4));
  do
  {
    result = v8;
    for ( i = 0; result; ++i )
      result >>= 1;
    if ( i > v6 )
      v6 = i;
    --v7;
  }
  while ( v7 );
  if ( v6 <= 0x18 )
  {
    *(this + 2) = v6;
  }
  else
  {
    *(this + 2) = 0x18;
    return 0x18;
  }
  return result;
}
