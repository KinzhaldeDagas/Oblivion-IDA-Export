void __thiscall NiBoolData::~NiBoolData(NiBoolData *this)
{
  char *v2; // eax
  unsigned int v3; // edi

  *(_DWORD *)this = &NiBoolData::`vftable'; /*0x6e8869*/
  v2 = *((char **)this + 3); /*0x6e886f*/
  if ( v2 ) /*0x6e887c*/
  {
    v3 = (unsigned int)(v2 + 0xFFFFFFFC); /*0x6e8881*/
    _LN21(v2, 8u, *((_DWORD *)v2 + 0xFFFFFFFF), Shared_NoOpVirtual_60D0A0); /*0x6e888d*/
    FormHeapFree(v3); /*0x6e8893*/
  }
  NiRefObject_destr(this); /*0x6e88a5*/
}
