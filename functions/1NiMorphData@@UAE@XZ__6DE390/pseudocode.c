void __thiscall NiMorphData::~NiMorphData(NiMorphData *this)
{
  char *v2; // eax
  unsigned int v3; // edi

  *(_DWORD *)this = &NiMorphData::`vftable'; /*0x6de3b9*/
  v2 = *((char **)this + 4); /*0x6de3bf*/
  if ( v2 ) /*0x6de3cc*/
  {
    v3 = (unsigned int)(v2 + 0xFFFFFFFC); /*0x6de3d1*/
    _LN21(v2, 0xCu, *((_DWORD *)v2 + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_6DE0D0); /*0x6de3dd*/
    FormHeapFree(v3); /*0x6de3e3*/
  }
  NiRefObject_destr(this); /*0x6de3f5*/
}
