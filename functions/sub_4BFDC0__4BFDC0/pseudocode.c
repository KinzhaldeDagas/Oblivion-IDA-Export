void __thiscall sub_4BFDC0(TESObjectLAND *this, TESObjectCELL *a2)
{
  TESWorldSpace *WorldSpace; // eax

  *((_DWORD *)this + 8) = a2; /*0x4bfdc9*/
  if ( a2 ) /*0x4bfdcc*/
  {
    WorldSpace = TESObjectCELL_GetWorldSpace(a2); /*0x4bfdce*/
    if ( WorldSpace && Shared_GetPointerAtOffset7C(WorldSpace) ) /*0x4bfdd9*/
      *((_DWORD *)this + 7) |= 0x400u; /*0x4bfde2*/
    else
      *((_DWORD *)this + 7) &= ~0x400u; /*0x4bfded*/
  }
}
