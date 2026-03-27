double __thiscall sub_4BF0A0(TESObjectCELL **this)
{
  int v1; // eax
  TESObjectCELL *v3; // ecx

  v1 = (int)*(this + 9);
  if ( v1 )
    return (double)(int)(*(_DWORD *)(v1 + 0x9C) << 0xC);
  v3 = *(this + 8);
  if ( v3 )
    return (double)(TESObjectCELL_GetYCoordinate(v3) << 0xC);
  else
    return (double)0;
}
