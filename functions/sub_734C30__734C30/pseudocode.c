_DWORD *__thiscall sub_734C30(_DWORD *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 0x59); /*0x734c39*/
  *this = &NiTGAReader::`vftable'; /*0x734c3a*/
  FormHeapFree(v4); /*0x734c40*/
  FormHeapFree(*(this + 0x5B)); /*0x734c4c*/
  *this = &NiImageReader::`vftable'; /*0x734c5b*/
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 4); /*0x734c61*/
  if ( (a2 & 1) != 0 ) /*0x734c6c*/
    FormHeapFree((unsigned int)this); /*0x734c6f*/
  return this; /*0x734c79*/
}
