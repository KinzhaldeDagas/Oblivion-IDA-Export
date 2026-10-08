_WORD *__thiscall sub_9184A0(_WORD *this, int a2, char a3)
{
  _WORD *v4; // eax

  *(this + 3) = 1; /*0x9184a7*/
  *(_DWORD *)this = &off_A9D1B8; /*0x9184ad*/
  *((_BYTE *)this + 0xC) = a3; /*0x9184b3*/
  v4 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x14, 0x17); /*0x9184c2*/
  v4[2] = 0x14; /*0x9184ce*/
  *((_DWORD *)this + 2) = sub_8BC030(v4, a2, 1); /*0x9184d9*/
  return this; /*0x9184de*/
}
