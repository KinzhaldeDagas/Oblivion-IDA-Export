bool __thiscall sub_723AC0(_DWORD *this, int a2)
{
  int v4; // ecx
  int v5; // esi
  int v6; // ebx

  if ( !sub_723F30(this, a2) )
    return 0;
  v4 = *(this + 0x3F);
  v5 = *(_DWORD *)(a2 + 0xFC);
  if ( v4 )
  {
    if ( v5 )
    {
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
      if ( v6 != (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5)
        || (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 0x3F) + 0x2C))(*(this + 0x3F), v5) )
      {
        return 1;
      }
    }
    return 0;
  }
  return !v5;
}
