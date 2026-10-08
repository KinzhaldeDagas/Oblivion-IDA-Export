int __thiscall BSFile_GetFileSize(_DWORD *this)
{
  if ( !*(this + 0x54) ) /*0x430013*/
    (*(void (__thiscall **)(_DWORD *))(*this + 0x1C))(this); /*0x430021*/
  return *(this + 0x54); /*0x430029*/
}
