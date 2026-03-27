_DWORD *__thiscall BSFile_constr(_DWORD *this, const char *a2, int a3, int a4, char a5)
{
  char *v6; // ebx

  NiBinaryStream_constr(this);
  *(this + 8) = a3;
  *this = &BSFile::`vftable';
  *(this + 1) = BSFile_ReadFunc;
  *(this + 2) = BSFile_WriteFunc;
  *(this + 3) = a4;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 0x52) = 0;
  *(this + 0x51) = 0;
  *(this + 0x50) = 0;
  *(this + 0x54) = 0;
  *(this + 0x53) = 0;
  *((_BYTE *)this + 0x28) = 0;
  *(this + 0xB) = 0;
  *(this + 0xC) = 0xFFFFFFFF;
  *(this + 0xD) = 0;
  *(this + 0xE) = 0;
  v6 = (char *)(this + 0xF);
  if ( strlen(a2) < 0x104 )
  {
    strcpy(v6, a2);
    if ( a3 == 1 )
    {
      BSFile_OpenFile((int)this, (int)v6, 0, a5);
      return this;
    }
  }
  else
  {
    *v6 = 0;
  }
  if ( !a3 )
    *((_BYTE *)this + 0x24) = _access((const char *)this + 0x3C, 0) != 0xFFFFFFFF;
  return this;
}
