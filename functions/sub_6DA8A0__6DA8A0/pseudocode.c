bool __thiscall sub_6DA8A0(const NiPoint3 *this, int a2)
{
  int v4; // ecx

  if ( !sub_6EC2E0(a2) || NiPoint3__NotEqual(this + 1, (const NiPoint3 *)(a2 + 0xC)) ) /*0x6da8c0*/
    return 0; /*0x6da8c7*/
  v4 = *((_DWORD *)this + 6); /*0x6da8c9*/
  if ( v4 ) /*0x6da8ce*/
    return *(_DWORD *)(a2 + 0x18) /*0x6da8b6*/
        && (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x2C))(v4, *(_DWORD *)(a2 + 0x18));
  return !*(_DWORD *)(a2 + 0x18); /*0x6da8da*/
}
