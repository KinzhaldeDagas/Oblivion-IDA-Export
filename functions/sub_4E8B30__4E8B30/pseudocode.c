char __thiscall sub_4E8B30(_DWORD *this, _DWORD *a2, int a3, int a4)
{
  char v4; // bl
  _DWORD *v5; // esi

  v4 = 0;
  if ( !a2 || *a2 != dword_B05E20 )
    return 0;
  v5 = (_DWORD *)*(this + 0xB);
  if ( (_BYTE)a3 )
  {
    v4 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int, int))(*v5 + 0xBC))(v5, a2, a3, a4);
    if ( v4 )
      return v4;
  }
  if ( a2[3] != 1 || !sub_46AF50(v5, a2[2]) )
    return v4;
  else
    return 1;
}
