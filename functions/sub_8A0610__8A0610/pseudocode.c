void __thiscall sub_8A0610(void *this, int *a2)
{
  int v3; // eax
  _DWORD *v4; // esi

  if ( a2 ) /*0x8a063c*/
  {
    if ( a2 != (int *)4 ) /*0x8a0643*/
    {
      v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x28, 0x29); /*0x8a0654*/
      *(_WORD *)(v3 + 4) = 0x28; /*0x8a0656*/
      v4 = sub_8D99A0((_DWORD *)v3, (_WORD *)a2[2], a2[3], *a2, a2[1], 1); /*0x8a0681*/
      (*(void (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 0x4C))(this, v4); /*0x8a0692*/
      if ( *((_WORD *)v4 + 2) ) /*0x8a0694*/
      {
        if ( !--*((_WORD *)v4 + 3) ) /*0x8a069f*/
          (*(void (__thiscall **)(_DWORD *, int))*v4)(v4, 1); /*0x8a06b0*/
      }
      (*(void (__thiscall **)(void *, int *))(*(_DWORD *)this + 0x7C))(this, a2); /*0x8a06ba*/
    }
  }
}
