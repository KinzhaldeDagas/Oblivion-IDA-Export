void __thiscall MagicCaster_destr(_DWORD *this)
{
  void *v2; // edi

  v2 = (void *)*(this + 1); /*0x699164*/
  *this = &MagicCaster::`vftable'; /*0x699169*/
  if ( v2 ) /*0x69916f*/
  {
    MagicCaster_CastingVFX_destr(v2); /*0x699173*/
    FormHeapFree((unsigned int)v2); /*0x699179*/
  }
  *(this + 1) = 0; /*0x699182*/
}
