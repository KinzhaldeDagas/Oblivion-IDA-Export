int __thiscall sub_52AB00(TESForm *this)
{
  TESForm *v2; // ebp
  unsigned int v3; // edi

  v2 = (TESForm *)((char *)this + 0x24); /*0x52ab2d*/
  this->vtbl = (TESFormVtbl *)&TESQuest::`vftable'{for `TESQuest'}; /*0x52ab30*/
  *((_DWORD *)this + 6) = &TESQuest::`vftable'{for `TESScriptableForm'}; /*0x52ab36*/
  *((_DWORD *)this + 9) = &TESQuest::`vftable'{for `TESIcon'}; /*0x52ab3d*/
  *((_DWORD *)this + 0xC) = &TESQuest::`vftable'{for `TESFullName'}; /*0x52ab44*/
  sub_56A750((BSSimpleList_VoidPtr *)this + 0xA); /*0x52ab56*/
  sub_529760((BSSimpleList_VoidPtr *)this); /*0x52ab5d*/
  sub_5297C0((char *)this); /*0x52ab64*/
  v3 = *((_DWORD *)this + 0x16); /*0x52ab69*/
  if ( v3 ) /*0x52ab70*/
  {
    ScriptEventList_destr__(*((ScriptEventList **)this + 0x16)); /*0x52ab74*/
    FormHeapFree(v3); /*0x52ab7a*/
    *((_DWORD *)this + 0x16) = 0; /*0x52ab82*/
  }
  j_TESForm_ClearComponentReferences(this); /*0x52ab87*/
  FormHeapFree(*((_DWORD *)this + 0x18)); /*0x52ab90*/
  *((_DWORD *)this + 0x18) = 0; /*0x52ab9b*/
  *((_WORD *)this + 0x33) = 0; /*0x52ab9e*/
  *((_WORD *)this + 0x32) = 0; /*0x52aba2*/
  sub_56A7A0((BSSimpleList_VoidPtr *)this + 0xA); /*0x52abab*/
  FormHeapFree(*((_DWORD *)this + 0xD)); /*0x52abb4*/
  *((_DWORD *)this + 0xD) = 0; /*0x52abbe*/
  *((_WORD *)this + 0x1D) = 0; /*0x52abc1*/
  *((_WORD *)this + 0x1C) = 0; /*0x52abc5*/
  TESTexture_destr(v2); /*0x52abcd*/
  return TESForm_destr(this); /*0x52abe1*/
}
