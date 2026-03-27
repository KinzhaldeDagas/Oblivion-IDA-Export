int __thiscall sub_4043A0(_BYTE *this)
{
  if ( (*this & 1) != 0 )
    sub_404010(this, 0);
  if ( *((_DWORD *)this + 0xA) )
  {
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 0xA) + 0x20))(*((_DWORD *)this + 0xA));
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 0xA) + 8))(*((_DWORD *)this + 0xA));
  }
  if ( *((_DWORD *)this + 0xB) )
  {
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 0xB) + 0x20))(*((_DWORD *)this + 0xB));
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 0xB) + 8))(*((_DWORD *)this + 0xB));
  }
  return (*(int (__stdcall **)(_DWORD))(**((_DWORD **)this + 1) + 8))(*((_DWORD *)this + 1));
}
