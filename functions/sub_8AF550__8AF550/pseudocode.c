void __thiscall sub_8AF550(void *this, int a2)
{
  _WORD *v3; // eax
  _WORD *v4; // esi

  if ( a2 ) /*0x8af57b*/
  {
    v3 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x10, 0x24); /*0x8af58c*/
    v3[2] = 0x10; /*0x8af58e*/
    v4 = sub_8ED410(v3, COERCE_INT(*(float *)(a2 + 4))); /*0x8af5ae*/
    (*(void (__thiscall **)(void *, _WORD *))(*(_DWORD *)this + 0x4C))(this, v4); /*0x8af5c0*/
    if ( v4[2] ) /*0x8af5c2*/
    {
      if ( !--v4[3] ) /*0x8af5ce*/
        (**(void (__thiscall ***)(_WORD *, int))v4)(v4, 1); /*0x8af5df*/
    }
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2); /*0x8af5e9*/
  }
}
