double __thiscall sub_4BF060(TESObjectCELL **this)
{
  int v1; // eax
  TESObjectCELL *v3; // ecx

  v1 = (int)*(this + 9);
  if ( v1 )
    return (double)(int)(*(_DWORD *)(v1 + 0x98) << 0xC);
  v3 = *(this + 8);
  if ( v3 )
    return (double)(TESObjectCELL_GetXCoordinate(v3) << 0xC);
  else
    return (double)0;
}
