int __thiscall sub_6B6AC0(_DWORD *this)
{
  int v2; // edi

  if ( !*(this + 0x14) )
    return 0x80004005;
  v2 = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 0x14) + 0x48))(*(this + 0x14));
  (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 0x14) + 0x34))(*(this + 0x14), 0);
  return v2;
}
