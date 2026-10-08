TESForm *__thiscall TESQuest::TESQuest(TESForm *this)
{
  TESForm_constr(this); /*0x52aa2b*/
  TESScriptableForm_constr((_DWORD *)this + 6); /*0x52aa3b*/
  TESTexture_constr((TESTexture *)this + 3); /*0x52aa45*/
  *((_DWORD *)this + 9) = &TESIcon::`vftable'; /*0x52aa4a*/
  *((_DWORD *)this + 0xC) = &TESFullName::`vftable'; /*0x52aa50*/
  *((_DWORD *)this + 0xD) = 0; /*0x52aa57*/
  *((_DWORD *)this + 0xE) = 0; /*0x52aa5a*/
  this->vtbl = (TESFormVtbl *)&TESQuest::`vftable'{for `TESQuest'}; /*0x52aa62*/
  *((_DWORD *)this + 6) = &TESQuest::`vftable'{for `TESScriptableForm'}; /*0x52aa68*/
  *((_DWORD *)this + 9) = &TESQuest::`vftable'{for `TESIcon'}; /*0x52aa6f*/
  *((_DWORD *)this + 0xC) = &TESQuest::`vftable'{for `TESFullName'}; /*0x52aa75*/
  *((_BYTE *)this + 0x3C) = 0; /*0x52aa7c*/
  *((_BYTE *)this + 0x3D) = 0; /*0x52aa7f*/
  *((_DWORD *)this + 0x10) = 0; /*0x52aa82*/
  *((_DWORD *)this + 0x11) = 0; /*0x52aa85*/
  *((_DWORD *)this + 0x12) = 0; /*0x52aa90*/
  *((_DWORD *)this + 0x13) = 0; /*0x52aa93*/
  DNameNode::DNameNode((DNameNode *)((char *)this + 0x50)); /*0x52aa96*/
  *((_DWORD *)this + 0x18) = 0; /*0x52aa9b*/
  *((_WORD *)this + 0x32) = 0; /*0x52aa9e*/
  *((_WORD *)this + 0x33) = 0; /*0x52aaa2*/
  this->member.type = kFormType_Quest; /*0x52aaa6*/
  *((_DWORD *)this + 0x16) = 0; /*0x52aaaa*/
  *((_BYTE *)this + 0x3C) |= 1u; /*0x52aaad*/
  this->vtbl->MarkAsModified(this, 4); /*0x52aabf*/
  *((_BYTE *)this + 0x5C) = 0; /*0x52aac3*/
  j_TESForm_InitializeComponents(this); /*0x52aac6*/
  return this; /*0x52aacd*/
}
