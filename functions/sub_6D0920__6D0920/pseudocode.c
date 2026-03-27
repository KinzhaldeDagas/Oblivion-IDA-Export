char __thiscall sub_6D0920(_DWORD *this, int a2)
{
  char result; // al
  int v4; // ecx
  int i; // edi
  int v6; // eax

  result = sub_754EA0(a2);
  if ( result )
  {
    v4 = *(this + 0x14);
    if ( v4 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2);
    for ( i = 0; (unsigned __int16)i < (*(unsigned __int16 (__thiscall **)(_DWORD *))(*this + 0x74))(this); ++i )
    {
      v6 = (*(int (__thiscall **)(_DWORD *, int))(*this + 0x80))(this, i);
      if ( v6 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x24))(v6, a2);
    }
    return 1;
  }
  return result;
}
