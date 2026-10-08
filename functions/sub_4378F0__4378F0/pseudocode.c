int __thiscall sub_4378F0(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // ecx
  char v6; // al
  int v8; // [esp+14h] [ebp-4h] BYREF

  v2 = *(this + 0xA); /*0x4378f4*/
  v3 = this + 0xA; /*0x4378fa*/
  if ( v2 )
  {
    if ( (*(_BYTE *)(this + 0xB) & 1) == 0
      && !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**((_DWORD **)MEMORY[0xB33A1C] + 1) + 0xC))(
            *((_DWORD *)MEMORY[0xB33A1C] + 1),
            *(this + 8),
            v2,
            0) )
    {
      v4 = *(this + 8); /*0x437927*/
      v5 = *((_DWORD *)MEMORY[0xB33A1C] + 1); /*0x43792a*/
      v8 = 0; /*0x437931*/
      v6 = (*(int (__thiscall **)(int, int, int *))(*(_DWORD *)v5 + 4))(v5, v4, &v8); /*0x437940*/
      sub_435B10(v3, v6 != 0 ? v8 : 0);
    }
  }
  return (*(int (__thiscall **)(_DWORD *))(*this + 0x28))(this); /*0x43795b*/
}
