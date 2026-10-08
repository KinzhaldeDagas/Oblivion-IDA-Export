int __usercall MagicCaster_InitializeCasting____::CleanupCastingVFX@<eax>(_DWORD *a1@<esi>, char a2@<bl>)
{
  unsigned int v2; // edi

  v2 = a1[1]; /*0x699df3*/
  if ( v2 ) /*0x699df8*/
  {
    MagicCaster_CastingVFX_destr((void *)a1[1]); /*0x699dfc*/
    FormHeapFree(v2); /*0x699e02*/
  }
  a1[1] = 0; /*0x699e0a*/
  return MagicCaster_InitializeCasting____::GetMagicItem(a2, a1);
}
