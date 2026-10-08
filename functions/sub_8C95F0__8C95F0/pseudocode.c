void __thiscall sub_8C95F0(_DWORD *this, int a2)
{
  int v3; // eax
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax

  if ( a2 ) /*0x8c961b*/
  {
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x60, 0x24); /*0x8c9630*/
    *(_WORD *)(v3 + 4) = 0x60; /*0x8c9632*/
    v4 = sub_9179B0((_DWORD *)v3, *(_DWORD *)(a2 + 8), (_OWORD *)(a2 + 0x10)); /*0x8c9653*/
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 0x4C))(this, v4); /*0x8c9665*/
    if ( *((_WORD *)v4 + 2) ) /*0x8c9667*/
    {
      if ( !--*((_WORD *)v4 + 3) ) /*0x8c9673*/
        (*(void (__thiscall **)(_DWORD *, int))*v4)(v4, 1); /*0x8c9684*/
    }
    (*(void (__thiscall **)(_DWORD *, int))(*this + 0x7C))(this, a2); /*0x8c968e*/
    v5 = *(this + 2); /*0x8c9690*/
    if ( v5 && (v6 = *(_DWORD *)(v5 + 0x10)) != 0 ) /*0x8c969c*/
      v7 = *(_DWORD *)(v6 + 8); /*0x8c969e*/
    else
      v7 = 0; /*0x8c96a3*/
    if ( v7 ) /*0x8c96a7*/
      *(this + 4) = *(_DWORD *)(v7 + 0x10); /*0x8c96ac*/
  }
}
