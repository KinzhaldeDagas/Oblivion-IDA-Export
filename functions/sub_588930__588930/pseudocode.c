int __thiscall sub_588930(_DWORD *this)
{
  int v2; // edi
  _DWORD *v3; // eax
  _DWORD *v4; // ecx
  _DWORD *v5; // ecx
  int v6; // ecx
  int v7; // ecx

  v2 = *(this + 4);
  v3 = *(_DWORD **)(v2 + 4);
  if ( !v3 )
    return *(this + 4);
  do
  {
    v4 = (_DWORD *)*v3;
    if ( *v3 )
    {
      do
        v4 = (_DWORD *)*v4;
      while ( v4 );
    }
    if ( *v3 )
      *(_DWORD *)(*v3 + 4) = v3[1];
    v5 = (_DWORD *)v3[1];
    if ( v5 )
      *v5 = *v3;
    v6 = v3[4];
    if ( v6 )
      *(_DWORD *)(v6 + 0x14) = v3[5];
    v7 = v3[5];
    if ( v7 )
      *(_DWORD *)(v7 + 0x10) = v3[4];
    *v3 = 0;
    v3[1] = 0;
    v3[4] = 0;
    v3[5] = 0;
    FormHeapFree((unsigned int)v3);
    v3 = *(_DWORD **)(v2 + 4);
  }
  while ( v3 );
  return *(this + 4);
}
