int __thiscall sub_4BF040(TESObjectCELL **this)
{
  int v1; // eax
  TESObjectCELL *v3; // ecx

  v1 = (int)*(this + 9); /*0x4bf040*/
  if ( v1 ) /*0x4bf045*/
    return *(_DWORD *)(v1 + 0x9C); /*0x4bf047*/
  v3 = *(this + 8); /*0x4bf04e*/
  if ( v3 ) /*0x4bf053*/
    return TESObjectCELL_GetYCoordinate(v3); /*0x4bf055*/
  else
    return 0; /*0x4bf05a*/
}
