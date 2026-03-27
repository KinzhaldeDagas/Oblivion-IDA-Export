TESForm *__thiscall sub_52AA00(TESForm *this)
{
  TESForm_constr(this);
  TESScriptableForm_constr((_DWORD *)this + 6);
  TESTexture_constr((TESTexture *)this + 3);
  *((_DWORD *)this + 9) = &TESIcon::`vftable';
  *((_DWORD *)this + 0xC) = &TESFullName::`vftable';
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xE) = 0;
  this->vtbl = (TESFormVtbl *)&TESQuest::`vftable'{for `TESQuest'};
  *((_DWORD *)this + 6) = &TESQuest::`vftable'{for `TESScriptableForm'};
  *((_DWORD *)this + 9) = &TESQuest::`vftable'{for `TESIcon'};
  *((_DWORD *)this + 0xC) = &TESQuest::`vftable'{for `TESFullName'};
  *((_BYTE *)this + 0x3C) = 0;
  *((_BYTE *)this + 0x3D) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0;
  *((_DWORD *)this + 0x12) = 0;
  *((_DWORD *)this + 0x13) = 0;
  DNameNode::DNameNode((DNameNode *)((char *)this + 0x50));
  *((_DWORD *)this + 0x18) = 0;
  *((_WORD *)this + 0x32) = 0;
  *((_WORD *)this + 0x33) = 0;
  this->member.type = kFormType_Quest;
  *((_DWORD *)this + 0x16) = 0;
  *((_BYTE *)this + 0x3C) |= 1u;
  this->vtbl->MarkAsModified(this, 4);
  *((_BYTE *)this + 0x5C) = 0;
  j_TESForm_InitializeComponents(this);
  return this;
}
