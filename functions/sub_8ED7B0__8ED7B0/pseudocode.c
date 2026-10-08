_OWORD *__thiscall sub_8ED7B0(_DWORD *this, _OWORD *a2)
{
  __int128 v3; // [esp+0h] [ebp-10h]

  HIDWORD(v3) = *(this + 3); /*0x8ed7bc*/
  *(_QWORD *)&v3 = 0; /*0x8ed7c3*/
  DWORD2(v3) = 0; /*0x8ed7d2*/
  *a2 = v3; /*0x8ed7de*/
  return a2; /*0x8ed7e1*/
}
