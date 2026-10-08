void __thiscall EffectItem_destr(unsigned int *this)
{
  unsigned int v1; // esi

  v1 = *(this + 6); /*0x413bb1*/
  if ( v1 ) /*0x413bb6*/
  {
    FormHeapFree(*(_DWORD *)(v1 + 8)); /*0x413bbc*/
    *(_DWORD *)(v1 + 8) = 0; /*0x413bc2*/
    *(_WORD *)(v1 + 0xE) = 0; /*0x413bc9*/
    *(_WORD *)(v1 + 0xC) = 0; /*0x413bcf*/
    FormHeapFree(v1); /*0x413bd5*/
  }
  EffectItem_destr_::Done(); /*0x413bb6*/
}
