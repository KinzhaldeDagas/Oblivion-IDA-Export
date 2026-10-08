bhkCharacterProxy *__thiscall Actor_SetPosition(Actor *this, float *a2)
{
  bhkCharacterProxy *result; // eax
  bhkCharacterProxy *v4; // esi
  _OWORD *v5; // ecx
  int v6; // edx

  TESObjectREFR_SetPosition((TESObjectREFR *)this, *a2, a2[1], a2[2]); /*0x65a3ff*/
  result = MobileObject_GetCharProxy((MobileObject *)this); /*0x65a406*/
  v4 = result; /*0x65a40b*/
  if ( result ) /*0x65a40f*/
  {
    result = sub_452A10(result, (NiPoint3 *)a2); /*0x65a414*/
    v5 = *((_OWORD **)v4 + 2); /*0x65a419*/
    if ( v5 ) /*0x65a41e*/
      result = (bhkCharacterProxy *)sub_8AC0B0(v5, &unk_BA7A40); /*0x65a425*/
    v6 = *((_DWORD *)v4 + 0x7D) >> 7; /*0x65a432*/
    *((float *)v4 + 0xC8) = 0.0; /*0x65a435*/
    if ( (v6 & 1) != 0 ) /*0x65a43e*/
      *((_DWORD *)v4 + 0x7D) &= ~0x80u; /*0x65a440*/
  }
  return result; /*0x65a44a*/
}
