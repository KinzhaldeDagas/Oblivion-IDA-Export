char __thiscall sub_4E4D70(_DWORD *this, _DWORD *a2, int a3, int a4)
{
  unsigned int v4; // eax
  _DWORD *v5; // ecx

  if ( a2 && *a2 == dword_B05E20 )
  {
    v4 = a2[3];
    v5 = (_DWORD *)*(this + 8);
    if ( v4 == 6 )
    {
      if ( !(_BYTE)a3 )
        return 0;
    }
    else if ( v4 <= 7 || v4 > 0xA )
    {
      if ( (_BYTE)a3 )
        return (*(int (__thiscall **)(_DWORD *, _DWORD *, int, int))(*v5 + 0xBC))(v5, a2, a3, a4);
      return 0;
    }
    if ( sub_46AF50(v5, a2[2]) )
      return a2[3] != 8 && a2[3] != 0xA;
  }
  return 0;
}
