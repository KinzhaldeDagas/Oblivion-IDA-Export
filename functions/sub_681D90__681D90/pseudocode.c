bool __thiscall sub_681D90(_DWORD *this, MobileObject *a2)
{
  _DWORD *v2; // esi
  char v3; // bl
  bhkCharacterProxy *CharProxy; // eax

  if ( !a2 || unk_BA7A04 ) /*0x681d99*/
    return 0; /*0x681de5*/
  v2 = this + 0xA; /*0x681da6*/
  *(this + 0xA) = 0; /*0x681da9*/
  *(this + 0xB) = 0; /*0x681dab*/
  *(this + 0xC) = 0; /*0x681db0*/
  v3 = 0; /*0x681db3*/
  CharProxy = MobileObject_GetCharProxy(a2); /*0x681db5*/
  if ( CharProxy ) /*0x681dbc*/
  {
    if ( !hkCharacterContext_GetStateId((_DWORD *)CharProxy + 0x78) ) /*0x681dc4*/
      return sub_681A60((TESObjectREFR *)a2, (int)v2) != 0; /*0x681ddb*/
  }
  return v3; /*0x681de1*/
}
