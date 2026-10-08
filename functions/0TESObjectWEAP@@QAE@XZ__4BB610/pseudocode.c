TESObjectWEAP *__thiscall TESObjectWEAP::TESObjectWEAP(TESObjectWEAP *this)
{
  TESBoundObject_constr((TESForm *)this); /*0x4bb63b*/
  *((_DWORD *)this + 9) = &TESFullName::`vftable'; /*0x4bb642*/
  *((_DWORD *)this + 0xA) = 0; /*0x4bb64d*/
  *((_WORD *)this + 0x16) = 0; /*0x4bb650*/
  *((_WORD *)this + 0x17) = 0; /*0x4bb654*/
  TESModel::TESModel((TESModel *)this + 2); /*0x4bb662*/
  TESTexture_constr((TESTexture *)this + 6); /*0x4bb671*/
  *((_DWORD *)this + 0x12) = &TESIcon::`vftable'; /*0x4bb676*/
  TESScriptableForm_constr((_DWORD *)this + 0x15); /*0x4bb686*/
  TESEnchantableForm_constr((_DWORD *)this + 0x18); /*0x4bb68e*/
  TESValueForm_constr((_DWORD *)this + 0x1C); /*0x4bb696*/
  TESWeightForm_constr((float *)this + 0x1E); /*0x4bb6a3*/
  TESHealthForm_constr((_DWORD *)this + 0x20); /*0x4bb6b3*/
  TESAttackDamageForm_constr((_WORD *)this + 0x44); /*0x4bb6c3*/
  *(_DWORD *)this = &TESObjectWEAP::`vftable'{for `TESObjectWEAP'}; /*0x4bb6ca*/
  *((_DWORD *)this + 9) = &TESObjectWEAP::`vftable'{for `TESFullName'}; /*0x4bb6d0*/
  *((_DWORD *)this + 0xC) = &TESObjectWEAP::`vftable'{for `TESModel'}; /*0x4bb6d7*/
  *((_DWORD *)this + 0x12) = &TESObjectWEAP::`vftable'{for `TESIcon'}; /*0x4bb6de*/
  *((_DWORD *)this + 0x15) = &TESObjectWEAP::`vftable'{for `TESScriptableForm'}; /*0x4bb6e4*/
  *((_DWORD *)this + 0x18) = &TESObjectWEAP::`vftable'{for `TESEnchantableForm'}; /*0x4bb6ea*/
  *((_DWORD *)this + 0x1C) = &TESObjectWEAP::`vftable'{for `TESValueForm'}; /*0x4bb6f1*/
  *((_DWORD *)this + 0x1E) = &TESObjectWEAP::`vftable'{for `TESWeightForm'}; /*0x4bb6f8*/
  *((_DWORD *)this + 0x20) = &TESObjectWEAP::`vftable'{for `TESHealthForm'}; /*0x4bb6ff*/
  *((_DWORD *)this + 0x22) = &TESObjectWEAP::`vftable'{for `TESAttackDamageForm'}; /*0x4bb709*/
  *((_BYTE *)this + 4) = 0x21; /*0x4bb713*/
  *((_DWORD *)this + 0x24) = 0; /*0x4bb717*/
  *((_DWORD *)this + 0x25) = 0; /*0x4bb71d*/
  *((_DWORD *)this + 0x26) = 0; /*0x4bb723*/
  *((_DWORD *)this + 0x27) = 0; /*0x4bb730*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4bb736*/
  *((_DWORD *)this + 0x1B) = 2; /*0x4bb73b*/
  return this; /*0x4bb744*/
}
