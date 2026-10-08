int __thiscall SoundManager_StopFilterGraph(_BYTE *this)
{
  int result; // eax

  if ( (*(this + 0xDC) & 1) != 0 ) /*0x6aa17a*/
  {
    sub_6A8DB0(this); /*0x6aa17c*/
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 0x1D) + 8))(*((_DWORD *)this + 0x1D)); /*0x6aa18a*/
    result = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)this + 0x1C) + 8))(*((_DWORD *)this + 0x1C)); /*0x6aa195*/
    *((_DWORD *)this + 0x37) &= ~1u; /*0x6aa197*/
  }
  return result; /*0x6aa19e*/
}
