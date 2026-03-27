void __thiscall sub_4BFDC0(TESObjectLAND *this, TESObjectCELL *a2)
{
  TESWorldSpace *WorldSpace; // eax

  *((_DWORD *)this + 8) = a2;
  if ( a2 )
  {
    WorldSpace = TESObjectCELL_GetWorldSpace(a2);
    if ( WorldSpace && TESWorldSpace_GetParentWorldpsace(WorldSpace) )
      *((_DWORD *)this + 7) |= 0x400u;
    else
      *((_DWORD *)this + 7) &= ~0x400u;
  }
}
