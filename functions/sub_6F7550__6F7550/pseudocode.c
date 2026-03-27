_DWORD *__thiscall sub_6F7550(_DWORD *this, int a2, int a3)
{
  FILE *v4; // ecx
  int v5; // eax
  int v6; // edi

  v4 = (FILE *)*(this + 0x13);
  if ( !v4 )
    return 0;
  v5 = a2 || a3 ? 0 : 4;
  if ( unknown_libname_62(v4, a2, v5, a3) )
    return 0;
  v6 = *(this + 0x13);
  *((_BYTE *)this + 0x48) = 1;
  *((_BYTE *)this + 0x41) = 0;
  sub_6F6F40(this);
  if ( v6 )
  {
    *(this + 4) = v6 + 8;
    *(this + 5) = v6 + 8;
    *(this + 8) = v6;
    *(this + 9) = v6;
    *(this + 0xC) = v6 + 4;
    *(this + 0xD) = v6 + 4;
  }
  *(this + 0x13) = v6;
  *(this + 0x11) = dword_B3F16C;
  *(this + 0xF) = 0;
  return this;
}
