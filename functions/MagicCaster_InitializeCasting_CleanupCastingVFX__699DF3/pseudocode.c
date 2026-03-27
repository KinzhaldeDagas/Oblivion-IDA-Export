int __usercall MagicCaster_InitializeCasting____::CleanupCastingVFX@<eax>(_DWORD *a1@<esi>, char a2@<bl>)
{
  unsigned int v2; // edi

  v2 = a1[1];
  if ( v2 )
  {
    MagicCaster_CastingVFX_destr((void *)a1[1]);
    FormHeapFree(v2);
  }
  a1[1] = 0;
  return MagicCaster_InitializeCasting____::GetMagicItem(a2, a1);
}
