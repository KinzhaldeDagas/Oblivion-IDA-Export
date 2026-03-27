bool __thiscall sub_6CE3A0(_DWORD *this, int a2)
{
  int v4; // ecx

  if ( !(unsigned __int8)sub_6D0540(a2) )
    return 0;
  v4 = *(this + 0xF);
  if ( v4 )
    return *(_DWORD *)(a2 + 0x3C)
        && (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x2C))(v4, *(_DWORD *)(a2 + 0x3C));
  return !*(_DWORD *)(a2 + 0x3C);
}
