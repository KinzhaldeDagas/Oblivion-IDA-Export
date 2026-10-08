int __thiscall sub_6B6AC0(_DWORD *this)
{
  int v2; // edi

  if ( !*(this + 0x14) ) /*0x6b6ac3*/
    return 0x80004005; /*0x6b6ae9*/
  v2 = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 0x14) + 0x48))(*(this + 0x14)); /*0x6b6ad5*/
  (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 0x14) + 0x34))(*(this + 0x14), 0); /*0x6b6ae2*/
  return v2; /*0x6b6ae7*/
}
