_WORD *__thiscall sub_8D3330(_WORD *this, int a2)
{
  _WORD *v3; // eax
  _WORD *v4; // eax

  *(this + 3) = 1; /*0x8d3338*/
  *(_DWORD *)this = &off_A9A030; /*0x8d333e*/
  *((_DWORD *)this + 5) = 0; /*0x8d3346*/
  *((_DWORD *)this + 6) = 0; /*0x8d3349*/
  *((_DWORD *)this + 7) = 0x80000000; /*0x8d334c*/
  *((_DWORD *)this + 4) = 0; /*0x8d3353*/
  *((_DWORD *)this + 3) = a2; /*0x8d3356*/
  v3 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xC, 0x12); /*0x8d3365*/
  v3[2] = 0xC; /*0x8d336a*/
  v4 = sub_91FEB0(v3); /*0x8d3370*/
  *((_DWORD *)this + 9) = 0; /*0x8d3375*/
  *((_DWORD *)this + 8) = v4; /*0x8d3378*/
  return this; /*0x8d337b*/
}
