_DWORD *__thiscall sub_42FD50(_DWORD *this, char a2)
{
  void *v4; // [esp-4h] [ebp-Ch]

  v4 = (void *)*(this + 0x10);
  *this = &BackgroundLoaderThread::`vftable';
  *(this + 7) = 0;
  CloseHandle(v4);
  CloseHandle((HANDLE)*(this + 0xD));
  CloseHandle((HANDLE)*(this + 0xA));
  sub_47D0B0(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
