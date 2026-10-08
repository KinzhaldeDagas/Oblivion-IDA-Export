void __thiscall NiBlendBoolInterpolator::~NiBlendBoolInterpolator(NiBlendBoolInterpolator *this)
{
  char *v2; // eax
  unsigned int v3; // edi

  *(_DWORD *)this = &NiBlendInterpolator::`vftable'; /*0x6ccf79*/
  v2 = *((char **)this + 5); /*0x6ccf7f*/
  if ( v2 ) /*0x6ccf8c*/
  {
    v3 = (unsigned int)(v2 + 0xFFFFFFFC); /*0x6ccf91*/
    _LN21(v2, 0x18u, *((_DWORD *)v2 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x6ccf9d*/
    FormHeapFree(v3); /*0x6ccfa3*/
  }
  sub_6EBA30(this); /*0x6ccfb5*/
}
