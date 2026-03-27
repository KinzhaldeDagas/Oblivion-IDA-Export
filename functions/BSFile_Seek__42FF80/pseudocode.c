int __thiscall BSFile_Seek(int *this, int Offset, int Origin)
{
  int v3; // ebx
  int result; // eax
  int v6; // edi
  int v7; // edi

  v3 = Origin;
  if ( Origin == BSFile_FilePos_Beg )
  {
    result = Offset;
    v6 = Offset;
    if ( !*(this + 8) )
    {
      v3 = BSFile_FilePos_Cur;
      result = Offset - *(this + 0x52);
    }
  }
  else if ( Origin == BSFile_FilePos_Cur )
  {
    result = Offset;
    v6 = Offset + *(this + 0x52);
  }
  else if ( Origin == BSFile_FilePos_End )
  {
    v7 = (*(int (__thiscall **)(int *))(*this + 0x1C))(this);
    result = Offset;
    v6 = v7 - Offset;
  }
  else
  {
    v6 = *(this + 0x52);
    result = Offset;
  }
  if ( v6 != *(this + 0x52) )
  {
    result = NiFile_Seek((int)this, result, v3);
    *(this + 0x52) = v6;
  }
  return result;
}
