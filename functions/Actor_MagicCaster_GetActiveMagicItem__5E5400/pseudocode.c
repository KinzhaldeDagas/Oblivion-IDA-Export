// MagicCaster active item getter; the embedded caster state at Actor+0x64 distinguishes aim/cast/find-target phases.
int __thiscall Actor_MagicCaster_GetActiveMagicItem(int *this)
{
  int v1; // ecx

  v1 = *(this + 0xFFFFFFFF); /*0x5e5400*/
  if ( v1 ) /*0x5e5405*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 0x2A8))(v1); /*0x5e540f*/
  else
    return 0; /*0x5e5411*/
}
