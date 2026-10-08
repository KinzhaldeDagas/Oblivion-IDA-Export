_WORD *__thiscall sub_8BC270(_WORD *this, int a2)
{
  _WORD *v3; // eax

  *(this + 3) = 1; /*0x8bc273*/
  *(_DWORD *)this = &off_A98328; /*0x8bc279*/
  v3 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x14, 0x17); /*0x8bc28b*/
  v3[2] = 0x14; /*0x8bc297*/
  *((_DWORD *)this + 2) = sub_8BC030(v3, a2, 1); /*0x8bc2a2*/
  return this; /*0x8bc2a7*/
}
