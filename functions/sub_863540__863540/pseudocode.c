LONG __thiscall sub_863540(_WORD *this, _DWORD *a2, int a3)
{
  LONG result; // eax
  int v5; // edi
  int v6; // esi

  sub_7D7AD0(this, (int)a2, a3);
  a2[0x3C] = *((_DWORD *)this + 0x3C);
  a2[0x3D] = *((_DWORD *)this + 0x3D);
  result = *((_DWORD *)this + 0x3E);
  a2[0x3E] = result;
  a2[0x3F] = *((_DWORD *)this + 0x3F);
  v5 = a2[0x41];
  if ( v5 != *((_DWORD *)this + 0x41) )
  {
    if ( v5 )
    {
      result = InterlockedDecrement((volatile LONG *)(v5 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(int, int))v5)(v5, 1);
    }
    v6 = *((_DWORD *)this + 0x41);
    a2[0x41] = v6;
    if ( v6 )
      return InterlockedIncrement((volatile LONG *)(v6 + 4));
  }
  return result;
}
