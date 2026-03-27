int __thiscall SoundManager_StopFilterGraph(_BYTE *this)
{
  int result; // eax

  if ( (*(this + 0xDC) & 1) != 0 )
  {
    sub_6A8DB0(this);
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 0x1D) + 8))(*((_DWORD *)this + 0x1D));
    result = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)this + 0x1C) + 8))(*((_DWORD *)this + 0x1C));
    *((_DWORD *)this + 0x37) &= ~1u;
  }
  return result;
}
