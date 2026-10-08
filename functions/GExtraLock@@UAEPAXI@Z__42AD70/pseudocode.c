// Verified ExtraLock destructor: frees the ExtraLockData* payload at +0x0C before optionally freeing the 16-byte wrapper.
ExtraLock *__thiscall ExtraLock::`scalar deleting destructor'(ExtraLock *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 3); /*0x42ad76*/
  *(_DWORD *)this = &ExtraLock::`vftable'; /*0x42ad77*/
  FormHeapFree(v4); /*0x42ad7d*/
  *(_DWORD *)this = &BSExtraData::`vftable'; /*0x42ad8a*/
  if ( (a2 & 1) != 0 ) /*0x42ad90*/
    FormHeapFree((unsigned int)this); /*0x42ad93*/
  return this; /*0x42ad9d*/
}
