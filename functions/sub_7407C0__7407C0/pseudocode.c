int __thiscall sub_7407C0(_DWORD *this, _BYTE *a2, int a3, bool *a4)
{
  _WORD *v5; // esi
  int result; // eax

  sub_722F00(this, a2, 1, a4); /*0x7407d1*/
  v5 = *(_WORD **)(*(this + 0x2D) + 0x5C); /*0x7407dc*/
  result = (*(int (__thiscall **)(_WORD *, _BYTE *, int, bool *))(*(_DWORD *)v5 + 0x5C))(v5, a2, 1, a4); /*0x7407ea*/
  *a4 = 0; /*0x7407ec*/
  v5[0xC] &= ~0x10u; /*0x7407ef*/
  return result; /*0x7407f5*/
}
