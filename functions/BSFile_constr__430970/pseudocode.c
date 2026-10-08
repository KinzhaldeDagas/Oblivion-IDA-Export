_DWORD *__thiscall BSFile_constr(_DWORD *this, const char *a2, int a3, int a4, char a5)
{
  char *v6; // ebx

  NiBinaryStream_constr(this); /*0x43099b*/
  *(this + 8) = a3; /*0x4309ae*/
  *this = &BSFile::`vftable'; /*0x4309b7*/
  *(this + 1) = BSFile_ReadFunc; /*0x4309bd*/
  *(this + 2) = BSFile_WriteFunc; /*0x4309c4*/
  *(this + 3) = a4; /*0x4309cb*/
  *(this + 4) = 0; /*0x4309ce*/
  *(this + 5) = 0; /*0x4309d1*/
  *(this + 6) = 0; /*0x4309d4*/
  *(this + 7) = 0; /*0x4309d7*/
  *(this + 0x52) = 0; /*0x4309da*/
  *(this + 0x51) = 0; /*0x4309e0*/
  *(this + 0x50) = 0; /*0x4309e6*/
  *(this + 0x54) = 0; /*0x4309ec*/
  *(this + 0x53) = 0; /*0x4309f2*/
  *((_BYTE *)this + 0x28) = 0; /*0x4309f8*/
  *(this + 0xB) = 0; /*0x4309fb*/
  *(this + 0xC) = 0xFFFFFFFF; /*0x4309fe*/
  *(this + 0xD) = 0; /*0x430a05*/
  *(this + 0xE) = 0; /*0x430a08*/
  v6 = (char *)(this + 0xF); /*0x430a21*/
  if ( strlen(a2) < 0x104 ) /*0x430a24*/
  {
    strcpy(v6, a2); /*0x430a5b*/
    if ( a3 == 1 ) /*0x430a71*/
    {
      BSFile_OpenFile((int)this, (int)v6, 0, a5); /*0x430a7b*/
      return this; /*0x430a80*/
    }
  }
  else
  {
    *v6 = 0; /*0x430a26*/
  }
  if ( !a3 ) /*0x430a2c*/
    *((_BYTE *)this + 0x24) = _access((const char *)this + 0x3C, 0) != 0xFFFFFFFF; /*0x430a3e*/
  return this; /*0x430a43*/
}
