void __thiscall MagicCaster_destr(_DWORD *this)
{
  void *v2; // edi

  v2 = (void *)*(this + 1);
  *this = &MagicCaster::`vftable';
  if ( v2 )
  {
    MagicCaster_CastingVFX_destr(v2);
    FormHeapFree((unsigned int)v2);
  }
  *(this + 1) = 0;
}
