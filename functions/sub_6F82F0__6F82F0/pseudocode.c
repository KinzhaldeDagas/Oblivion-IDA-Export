_DWORD *__thiscall sub_6F82F0(_DWORD *this, _DWORD *a2, int Offset, int a4, fpos_t a5, int a6, int a7, int a8)
{
  bool v9; // zf
  _DWORD **v10; // edx
  int v12; // edx
  int v13; // ecx
  fpos_t Pos; // [esp+4h] [ebp-8h] BYREF

  v9 = *(this + 0x13) == 0;
  Pos = a5;
  if ( v9
    || !sub_6F7AB0(this)
    || fsetpos((FILE *)*(this + 0x13), &Pos)
    || Offset && fseek((FILE *)*(this + 0x13), Offset, 1)
    || fgetpos((FILE *)*(this + 0x13), &Pos) )
  {
    *a2 = dword_AA3E5C;
    a2[2] = 0;
    a2[3] = 0;
    a2[4] = 0;
    return a2;
  }
  else
  {
    v10 = (_DWORD **)*(this + 8);
    *(this + 0x11) = a6;
    if ( *v10 == this + 0x10 )
    {
      *(_DWORD *)*(this + 4) = this + 0x10;
      *(_DWORD *)*(this + 8) = (char *)this + 0x41;
      *(_DWORD *)*(this + 0xC) = 0;
    }
    v12 = HIDWORD(Pos);
    a2[2] = Pos;
    v13 = *(this + 0x11);
    *a2 = 0;
    a2[3] = v12;
    a2[4] = v13;
    return a2;
  }
}
