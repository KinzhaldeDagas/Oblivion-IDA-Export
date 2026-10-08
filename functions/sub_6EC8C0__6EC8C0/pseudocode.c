int __thiscall sub_6EC8C0(_DWORD *this, _DWORD *a2, _DWORD *a3, _BYTE *a4)
{
  int v4; // eax

  v4 = *(this + 0x10); /*0x6ec8c0*/
  if ( v4 ) /*0x6ec8c5*/
  {
    *a2 = *(_DWORD *)(v4 + 8); /*0x6ec8ce*/
    *a3 = *(_DWORD *)(v4 + 0x10); /*0x6ec8d7*/
    *a4 = *(_BYTE *)(v4 + 0x14); /*0x6ec8e0*/
    return *(_DWORD *)(v4 + 0xC); /*0x6ec8e2*/
  }
  else
  {
    *a2 = 0; /*0x6ec8f4*/
    *a3 = 0; /*0x6ec8fa*/
    *a4 = 0; /*0x6ec900*/
    return 0; /*0x6ec903*/
  }
}
