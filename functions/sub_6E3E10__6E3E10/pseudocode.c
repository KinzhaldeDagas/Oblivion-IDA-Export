bool __thiscall sub_6E3E10(float *this, int a2)
{
  int v4; // ecx

  if ( !sub_6EC2E0(a2) || sub_632310(this + 3, (float *)(a2 + 0xC)) ) /*0x6e3e30*/
    return 0; /*0x6e3e37*/
  v4 = *((_DWORD *)this + 7); /*0x6e3e39*/
  if ( v4 ) /*0x6e3e3e*/
    return *(_DWORD *)(a2 + 0x1C) /*0x6e3e26*/
        && (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x2C))(v4, *(_DWORD *)(a2 + 0x1C));
  return !*(_DWORD *)(a2 + 0x1C); /*0x6e3e4a*/
}
