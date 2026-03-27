void __thiscall sub_8AF550(void *this, int a2)
{
  _WORD *v3; // eax
  _WORD *v4; // esi

  if ( a2 )
  {
    v3 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x10, 0x24);
    v3[2] = 0x10;
    v4 = sub_8ED410(v3, COERCE_INT(*(float *)(a2 + 4)));
    (*(void (__thiscall **)(void *, _WORD *))(*(_DWORD *)this + 0x4C))(this, v4);
    if ( v4[2] )
    {
      if ( !--v4[3] )
        (**(void (__thiscall ***)(_WORD *, int))v4)(v4, 1);
    }
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2);
  }
}
