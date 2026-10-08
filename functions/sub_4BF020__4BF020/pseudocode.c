int __thiscall sub_4BF020(TESObjectCELL **this)
{
  int v1; // eax
  TESObjectCELL *v3; // ecx

  v1 = (int)*(this + 9); /*0x4bf020*/
  if ( v1 ) /*0x4bf025*/
    return *(_DWORD *)(v1 + 0x98); /*0x4bf027*/
  v3 = *(this + 8); /*0x4bf02e*/
  if ( v3 ) /*0x4bf033*/
    return TESObjectCELL_GetXCoordinate(v3); /*0x4bf035*/
  else
    return 0; /*0x4bf03a*/
}
