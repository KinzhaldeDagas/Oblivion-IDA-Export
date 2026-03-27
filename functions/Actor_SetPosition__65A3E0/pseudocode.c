bhkCharacterProxy *__thiscall Actor_SetPosition(Actor *this, float *a2)
{
  bhkCharacterProxy *result; // eax
  bhkCharacterProxy *v4; // esi
  _OWORD *v5; // ecx
  int v6; // edx

  TESObjectREFR_SetPosition((TESObjectREFR *)this, *a2, a2[1], a2[2]);
  result = MobileObject_GetCharProxy((MobileObject *)this);
  v4 = result;
  if ( result )
  {
    result = sub_452A10(result, (NiPoint3 *)a2);
    v5 = *((_OWORD **)v4 + 2);
    if ( v5 )
      result = (bhkCharacterProxy *)sub_8AC0B0(v5, &stru_BA7A40);
    v6 = *((_DWORD *)v4 + 0x7D) >> 7;
    *((float *)v4 + 0xC8) = 0.0;
    if ( (v6 & 1) != 0 )
      *((_DWORD *)v4 + 0x7D) &= ~0x80u;
  }
  return result;
}
