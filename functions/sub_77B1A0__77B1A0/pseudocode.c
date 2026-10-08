int __thiscall sub_77B1A0(_DWORD *this, int a2, int a3)
{
  unsigned __int16 v3; // ax

  v3 = *(_WORD *)(2 * a3 + 0xB427E0); /*0x77b1a4*/
  if ( v3 >= 8u ) /*0x77b1b0*/
    return 0; /*0x77b1c6*/
  else
    return *(this + 0x10 * a2 + 2 * v3 + 0x248); /*0x77b1bc*/
}
