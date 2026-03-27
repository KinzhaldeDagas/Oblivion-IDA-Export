bool __thiscall sub_6E8430(_BYTE *this, int a2)
{
  int v4; // ecx

  if ( !(unsigned __int8)sub_6EC2E0(a2) || *(this + 0xC) != *(_BYTE *)(a2 + 0xC) )
    return 0;
  v4 = *((_DWORD *)this + 4);
  if ( v4 )
    return *(_DWORD *)(a2 + 0x10)
        && (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x2C))(v4, *(_DWORD *)(a2 + 0x10));
  return !*(_DWORD *)(a2 + 0x10);
}
