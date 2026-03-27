char __thiscall sub_675C40(_DWORD *this, int a2, int a3, int a4, unsigned int a5, int a6, int a7)
{
  int v7; // esi
  _DWORD *v8; // ecx

  if ( a5 > 6 )
    return 0;
  v7 = *(this + a5 + 0xA);
  while ( v7 )
  {
    v8 = *(_DWORD **)v7;
    if ( !*(_DWORD *)v7 )
      break;
    v7 = *(_DWORD *)(v7 + 4);
    if ( v8[1] == a5
      && v8[3] == a3
      && (v8[2] == a2 || !a2)
      && (a7 == 0xFFFFFFFF || a7 == v8[0xA])
      && (!a4 || sub_605ED0(v8, a4)) )
    {
      return 1;
    }
  }
  return 0;
}
