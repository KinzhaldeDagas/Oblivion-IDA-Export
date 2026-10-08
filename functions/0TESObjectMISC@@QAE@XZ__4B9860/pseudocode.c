TESObjectMISC *__thiscall TESObjectMISC::TESObjectMISC(TESObjectMISC *this)
{
  TESBoundObject_constr((TESForm *)this); /*0x4b988b*/
  *((_DWORD *)this + 9) = &TESFullName::`vftable'; /*0x4b9892*/
  *((_DWORD *)this + 0xA) = 0; /*0x4b989d*/
  *((_WORD *)this + 0x16) = 0; /*0x4b98a0*/
  *((_WORD *)this + 0x17) = 0; /*0x4b98a4*/
  TESModel::TESModel((TESModel *)this + 2); /*0x4b98b2*/
  TESTexture_constr((TESTexture *)this + 6); /*0x4b98c1*/
  *((_DWORD *)this + 0x12) = &TESIcon::`vftable'; /*0x4b98c6*/
  TESScriptableForm_constr((_DWORD *)this + 0x15); /*0x4b98d6*/
  TESValueForm_constr((_DWORD *)this + 0x18); /*0x4b98de*/
  TESWeightForm_constr((float *)this + 0x1A); /*0x4b98eb*/
  *(_DWORD *)this = &TESObjectMISC::`vftable'{for `TESObjectMISC'}; /*0x4b98f9*/
  *((_DWORD *)this + 9) = &TESObjectMISC::`vftable'{for `TESFullName'}; /*0x4b98ff*/
  *((_DWORD *)this + 0xC) = &TESObjectMISC::`vftable'{for `TESModel'}; /*0x4b9906*/
  *((_DWORD *)this + 0x12) = &TESObjectMISC::`vftable'{for `TESIcon'}; /*0x4b990c*/
  *((_DWORD *)this + 0x15) = &TESObjectMISC::`vftable'{for `TESScriptableForm'}; /*0x4b9912*/
  *((_DWORD *)this + 0x18) = &TESObjectMISC::`vftable'{for `TESValueForm'}; /*0x4b9919*/
  *((_DWORD *)this + 0x1A) = &TESObjectMISC::`vftable'{for `TESWeightForm'}; /*0x4b9920*/
  *((_BYTE *)this + 4) = 0x1B; /*0x4b9927*/
  TESForm_SetIsLinked((TESForm *)this, 1); /*0x4b992b*/
  return this; /*0x4b9932*/
}
