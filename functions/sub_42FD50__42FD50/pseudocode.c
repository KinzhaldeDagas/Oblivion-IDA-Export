_DWORD *__thiscall sub_42FD50(_DWORD *this, char a2)
{
  void *v4; // [esp-4h] [ebp-Ch]

  v4 = (void *)*(this + 0x10); /*0x42fd5d*/
  *this = &BackgroundLoaderThread::`vftable'; /*0x42fd5e*/
  *(this + 7) = 0; /*0x42fd64*/
  CloseHandle(v4); /*0x42fd6b*/
  CloseHandle((HANDLE)*(this + 0xD)); /*0x42fd71*/
  CloseHandle((HANDLE)*(this + 0xA)); /*0x42fd77*/
  sub_47D0B0(this); /*0x42fd7b*/
  if ( (a2 & 1) != 0 ) /*0x42fd85*/
    FormHeapFree((unsigned int)this); /*0x42fd88*/
  return this; /*0x42fd90*/
}
