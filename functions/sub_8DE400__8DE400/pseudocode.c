_DWORD *__thiscall sub_8DE400(_DWORD *this, int a2)
{
  int v3; // edx
  int v4; // esi

  *(this + 7) = a2; /*0x8de406*/
  *this = &off_A9A4E4; /*0x8de409*/
  *((_WORD *)this + 0x11) = 0xFFFF; /*0x8de40f*/
  *(this + 2) = 0; /*0x8de417*/
  *(this + 3) = 0; /*0x8de41a*/
  *(this + 4) = 0; /*0x8de41d*/
  *(this + 5) = 0; /*0x8de420*/
  *(this + 6) = 0; /*0x8de423*/
  *((_BYTE *)this + 0x24) = 0; /*0x8de426*/
  *((_BYTE *)this + 0x25) = 0; /*0x8de429*/
  *((_WORD *)this + 3) = 1; /*0x8de432*/
  *((_BYTE *)this + 0x26) = 0; /*0x8de436*/
  *((_BYTE *)this + 0x27) = 0; /*0x8de439*/
  *((_BYTE *)this + 0x28) = 1; /*0x8de43c*/
  *((_BYTE *)this + 0x29) = 1; /*0x8de43f*/
  *((_BYTE *)this + 0x2A) = 0xFD; /*0x8de442*/
  *((_BYTE *)this + 0x2B) = 0; /*0x8de446*/
  *(this + 0xB) = 0; /*0x8de449*/
  *(this + 0xC) = 0; /*0x8de44c*/
  *(this + 0xE) = 0; /*0x8de44f*/
  *(this + 0xF) = 0x80000001; /*0x8de452*/
  *(this + 0xD) = this + 0x10; /*0x8de45d*/
  v3 = *(_DWORD *)(a2 + 0x7C); /*0x8de460*/
  v4 = *(_DWORD *)(v3 + 0x1BF8); /*0x8de463*/
  *((_WORD *)this + 0x2C) = *(_DWORD *)(v3 + 0x1BFC); /*0x8de46f*/
  *((_WORD *)this + 0x2D) = v4; /*0x8de473*/
  *(this + 0x11) = this + 0x14; /*0x8de47d*/
  *(this + 0x12) = 0; /*0x8de480*/
  *(this + 0x13) = 0x80000001; /*0x8de483*/
  *(this + 0x15) = (unsigned __int16)v4; /*0x8de48a*/
  *(this + 0x17) = 0; /*0x8de48e*/
  *(this + 0x18) = 0; /*0x8de491*/
  *(this + 0x19) = 0x80000000; /*0x8de494*/
  *(this + 0x1A) = 0xC1200000; /*0x8de49b*/
  return this; /*0x8de4a2*/
}
