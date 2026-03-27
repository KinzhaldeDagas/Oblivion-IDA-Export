int __thiscall BSFile_GetFileSize(_DWORD *this)
{
  if ( !*(this + 0x54) )
    (*(void (__thiscall **)(_DWORD *))(*this + 0x1C))(this);
  return *(this + 0x54);
}
