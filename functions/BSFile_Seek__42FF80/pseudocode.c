void __thiscall BSFile_Seek(int *this, int Offset, int Origin)
{
  int v3; // ebx
  int v5; // eax
  int v6; // edi
  int v7; // edi

  v3 = Origin; /*0x42ff81*/
  if ( Origin == BSFile_FilePos_Beg ) /*0x42ff8f*/
  {
    v5 = Offset; /*0x42ff95*/
    v6 = Offset; /*0x42ff99*/
    if ( !*(this + 8) ) /*0x42ff91*/
    {
      v3 = BSFile_FilePos_Cur; /*0x42ff9d*/
      v5 = Offset - *(this + 0x52); /*0x42ffa3*/
    }
  }
  else if ( Origin == BSFile_FilePos_Cur ) /*0x42ffb1*/
  {
    v5 = Offset; /*0x42ffb9*/
    v6 = Offset + *(this + 0x52); /*0x42ffbd*/
  }
  else if ( Origin == BSFile_FilePos_End ) /*0x42ffc7*/
  {
    v7 = (*(int (__thiscall **)(int *))(*this + 0x1C))(this); /*0x42ffd0*/
    v5 = Offset; /*0x42ffd2*/
    v6 = v7 - Offset; /*0x42ffd6*/
  }
  else
  {
    v6 = *(this + 0x52); /*0x42ffda*/
    v5 = Offset; /*0x42ffe0*/
  }
  if ( v6 != *(this + 0x52) ) /*0x42ffea*/
  {
    NiFile_Seek((int)this, v5, v3); /*0x42fff0*/
    *(this + 0x52) = v6; /*0x42fff5*/
  }
}
