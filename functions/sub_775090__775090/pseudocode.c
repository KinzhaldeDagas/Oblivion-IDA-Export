int __thiscall sub_775090(_DWORD *this, int a2)
{
  int v3; // eax
  _DWORD *v4; // ecx
  unsigned int v5; // esi
  int v6; // ebp
  int v7; // edi
  unsigned int v8; // eax

  if ( !a2 )
    return 0;
  v3 = *(this + 5);
  v4 = *(_DWORD **)v3;
  v5 = abs32(*(_DWORD *)(v3 + 8) - a2);
  v6 = 0;
  if ( *(_DWORD *)v3 )
  {
    do
    {
      v7 = v4[2];
      v4 = (_DWORD *)*v4;
      v8 = abs32(v7 - a2);
      if ( v8 < v5 )
      {
        v5 = v8;
        v6 = v7;
      }
    }
    while ( v4 );
  }
  return v6;
}
