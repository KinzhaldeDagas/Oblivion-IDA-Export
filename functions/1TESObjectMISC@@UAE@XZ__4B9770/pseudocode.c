void __thiscall TESObjectMISC::~TESObjectMISC(TESObjectMISC *this)
{
  TESModel *v2; // edi
  _DWORD *v3; // ebx
  TESTexture *v4; // ebp

  v2 = (TESModel *)((char *)this + 0x30); /*0x4b979d*/
  v3 = (_DWORD *)((char *)this + 0x48); /*0x4b97a0*/
  v4 = (TESTexture *)((char *)this + 0x60); /*0x4b97a3*/
  *(_DWORD *)this = &TESObjectMISC::`vftable'{for `TESObjectMISC'}; /*0x4b97a6*/
  *((_DWORD *)this + 9) = &TESObjectMISC::`vftable'{for `TESFullName'}; /*0x4b97ac*/
  *((_DWORD *)this + 0xC) = &TESObjectMISC::`vftable'{for `TESModel'}; /*0x4b97b3*/
  *((_DWORD *)this + 0x12) = &TESObjectMISC::`vftable'{for `TESIcon'}; /*0x4b97b9*/
  *((_DWORD *)this + 0x15) = &TESObjectMISC::`vftable'{for `TESScriptableForm'}; /*0x4b97bf*/
  *((_DWORD *)this + 0x18) = &TESObjectMISC::`vftable'{for `TESValueForm'}; /*0x4b97c6*/
  *((_DWORD *)this + 0x1A) = &TESObjectMISC::`vftable'{for `TESWeightForm'}; /*0x4b97cd*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4b97dc*/
  TESWeightForm_destr((_DWORD *)this + 0x1A); /*0x4b97e9*/
  TESValueForm_destr(v4); /*0x4b97f5*/
  TESTexture_destr(v3); /*0x4b9801*/
  TESModel::~TESModel(v2); /*0x4b980d*/
  FormHeapFree(*((_DWORD *)this + 0xA)); /*0x4b9816*/
  *((_DWORD *)this + 0xA) = 0; /*0x4b9822*/
  *((_WORD *)this + 0x17) = 0; /*0x4b9825*/
  *((_WORD *)this + 0x16) = 0; /*0x4b9829*/
  TESObject_destr((TESForm *)this); /*0x4b9835*/
}
