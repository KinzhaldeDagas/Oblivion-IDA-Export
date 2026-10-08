double __thiscall sub_4BF0A0(TESObjectCELL **this)
{
  int v1; // eax
  TESObjectCELL *v3; // ecx

  v1 = (int)*(this + 9); /*0x4bf0a1*/
  if ( v1 ) /*0x4bf0a6*/
    return (double)(int)(*(_DWORD *)(v1 + 0x9C) << 0xC); /*0x4bf0b4*/
  v3 = *(this + 8); /*0x4bf0b9*/
  if ( v3 ) /*0x4bf0be*/
    return (double)(TESObjectCELL_GetYCoordinate(v3) << 0xC); /*0x4bf0cb*/
  else
    return (double)0; /*0x4bf0d8*/
}
