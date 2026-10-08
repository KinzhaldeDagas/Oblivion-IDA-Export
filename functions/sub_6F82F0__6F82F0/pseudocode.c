_DWORD *__thiscall sub_6F82F0(_DWORD *this, _DWORD *a2, int Offset, int a4, fpos_t a5, int a6, int a7, int a8)
{
  bool v9; // zf
  _DWORD **v10; // edx
  int v12; // edx
  int v13; // ecx
  fpos_t Pos; // [esp+4h] [ebp-8h] BYREF

  v9 = *(this + 0x13) == 0; /*0x6f82fa*/
  Pos = a5; /*0x6f8302*/
  if ( v9 /*0x6f8358*/
    || !sub_6F7AB0(this)
    || fsetpos((FILE *)*(this + 0x13), &Pos)
    || Offset && fseek((FILE *)*(this + 0x13), Offset, 1)
    || fgetpos((FILE *)*(this + 0x13), &Pos) )
  {
    *a2 = dword_AA3E5C; /*0x6f83bd*/
    a2[2] = 0; /*0x6f83bf*/
    a2[3] = 0; /*0x6f83c6*/
    a2[4] = 0; /*0x6f83cd*/
    return a2; /*0x6f83b3*/
  }
  else
  {
    v10 = (_DWORD **)*(this + 8); /*0x6f8368*/
    *(this + 0x11) = a6; /*0x6f836b*/
    if ( *v10 == this + 0x10 ) /*0x6f8373*/
    {
      *(_DWORD *)*(this + 4) = this + 0x10; /*0x6f8378*/
      *(_DWORD *)*(this + 8) = (char *)this + 0x41; /*0x6f8384*/
      *(_DWORD *)*(this + 0xC) = 0; /*0x6f838c*/
    }
    v12 = HIDWORD(Pos); /*0x6f8396*/
    a2[2] = Pos; /*0x6f839a*/
    v13 = *(this + 0x11); /*0x6f839d*/
    *a2 = 0; /*0x6f83a0*/
    a2[3] = v12; /*0x6f83a6*/
    a2[4] = v13; /*0x6f83a9*/
    return a2; /*0x6f838e*/
  }
}
