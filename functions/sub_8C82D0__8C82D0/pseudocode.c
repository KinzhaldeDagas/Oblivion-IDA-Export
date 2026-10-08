int __thiscall sub_8C82D0(void *this, _OWORD *a2, _OWORD *a3, float a4)
{
  int v5; // eax
  int v6; // esi
  int result; // eax

  v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x60, 0x24); /*0x8c8304*/
  *(_WORD *)(v5 + 4) = 0x60; /*0x8c8306*/
  v6 = sub_8F3230(v5, a2, a3, a4, flt_B2FFE4); /*0x8c833d*/
  result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x4C))(this, v6); /*0x8c834f*/
  if ( *(_WORD *)(v6 + 4) ) /*0x8c8351*/
  {
    result = (unsigned __int16)--*(_WORD *)(v6 + 6); /*0x8c835d*/
    if ( !(_WORD)result ) /*0x8c8364*/
      return (**(int (__thiscall ***)(int, int))v6)(v6, 1); /*0x8c836e*/
  }
  return result; /*0x8c8370*/
}
