double __thiscall sub_4BF060(TESObjectCELL **this)
{
  int v1; // eax
  TESObjectCELL *v3; // ecx

  v1 = (int)*(this + 9); /*0x4bf061*/
  if ( v1 ) /*0x4bf066*/
    return (double)(int)(*(_DWORD *)(v1 + 0x98) << 0xC); /*0x4bf074*/
  v3 = *(this + 8); /*0x4bf079*/
  if ( v3 ) /*0x4bf07e*/
    return (double)(TESObjectCELL_GetXCoordinate(v3) << 0xC); /*0x4bf08b*/
  else
    return (double)0; /*0x4bf098*/
}
