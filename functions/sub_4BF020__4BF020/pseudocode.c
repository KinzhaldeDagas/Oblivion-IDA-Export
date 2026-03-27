int __thiscall sub_4BF020(TESObjectCELL **this)
{
  int v1; // eax
  TESObjectCELL *v3; // ecx

  v1 = (int)*(this + 9);
  if ( v1 )
    return *(_DWORD *)(v1 + 0x98);
  v3 = *(this + 8);
  if ( v3 )
    return TESObjectCELL_GetXCoordinate(v3);
  else
    return 0;
}
