_DWORD *__thiscall sub_948770(_DWORD *this, int a2)
{
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // ecx

  v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x1C, 0x17); /*0x94877f*/
  *(_WORD *)(v3 + 4) = 0x1C; /*0x94878e*/
  v4 = sub_8F5F10((_DWORD *)v3, a2, 0x2000); /*0x948794*/
  sub_9183A0(this, (int)v4, 0); /*0x9487a2*/
  v5 = *(this + 2); /*0x9487a7*/
  *this = &off_AA2B4C; /*0x9487aa*/
  if ( *(_WORD *)(v5 + 4) ) /*0x9487b0*/
  {
    if ( !--*(_WORD *)(v5 + 6) ) /*0x9487bb*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x9487c6*/
  }
  return this; /*0x9487ca*/
}
