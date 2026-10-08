bool __thiscall DialogMenu::DoGamepad(DialogMenu *this, unsigned int button, float value)
{
  int v4; // edi
  _DWORD *v5; // ecx

  v4 = (*(int (__thiscall **)(DialogMenu *))(*(_DWORD *)this + 0x34))(this); /*0x59d9db*/
  if ( sub_578FE0() != v4 ) /*0x59d9e4*/
    return 0; /*0x59d9e4*/
  v5 = *((_DWORD **)this + 0xD); /*0x59d9e6*/
  if ( !v5 || Tile_GetFloat(v5, 0xFA1) != fConstant_2 || button - 9 > 3 ) /*0x59da0e*/
    return 0; /*0x59da27*/
  (*(void (__thiscall **)(DialogMenu *, int, _DWORD))(*(_DWORD *)this + 0xC))(this, 4, *((_DWORD *)this + 0xD)); /*0x59da1d*/
  return 1; /*0x59da1f*/
}
