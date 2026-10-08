void __thiscall sub_6D0170(_WORD *this, int a2, int *a3)
{
  unsigned __int16 i; // di

  NiInterpController_CopyMembers((float *)this, a2, a3); /*0x6d0180*/
  sub_6D0010((_WORD *)a2, *(this + 0x22)); /*0x6d018c*/
  for ( i = 0; i < *(this + 0x22); ++i ) /*0x6d0193*/
    sub_6CC480((float *)(0x30 * i + *((_DWORD *)this + 0xF)), 0x30 * i + *(_DWORD *)(a2 + 0x3C), (_DWORD **)a3); /*0x6d01b5*/
}
