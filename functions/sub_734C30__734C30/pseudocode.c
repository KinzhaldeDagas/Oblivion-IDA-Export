_DWORD *__thiscall sub_734C30(_DWORD *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 0x59);
  *this = &NiTGAReader::`vftable';
  FormHeapFree(v4);
  FormHeapFree(*(this + 0x5B));
  *this = &NiImageReader::`vftable';
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 4);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
