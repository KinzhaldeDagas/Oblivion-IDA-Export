bool __thiscall sub_6D6870(float *this, int a2)
{
  int v4; // ecx

  if ( !(unsigned __int8)sub_6EC2E0(a2) || !sub_6CE450(this + 3, (float *)(a2 + 0xC)) )
    return 0;
  v4 = *((_DWORD *)this + 0xB);
  if ( v4 )
    return *(_DWORD *)(a2 + 0x2C)
        && (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x2C))(v4, *(_DWORD *)(a2 + 0x2C));
  return !*(_DWORD *)(a2 + 0x2C);
}
