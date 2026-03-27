TESForm *__thiscall TESNPC_constr(TESForm *this)
{
  TESActorBase_constr(this);
  DNameNode::DNameNode((DNameNode *)((char *)this + 0xE4));
  this->vtbl = (TESFormVtbl *)&TESNPC::`vftable'{for `TESNPC'};
  *((_DWORD *)this + 9) = &TESNPC::`vftable'{for `TESActorBaseData'};
  *((_DWORD *)this + 0x11) = &TESNPC::`vftable'{for `TESContainer'};
  *((_DWORD *)this + 0x15) = &TESNPC::`vftable'{for `TESSpellList'};
  *((_DWORD *)this + 0x1A) = &TESNPC::`vftable'{for `TESAIForm'};
  *((_DWORD *)this + 0x20) = &TESNPC::`vftable'{for `TESHealthForm'};
  *((_DWORD *)this + 0x22) = &TESNPC::`vftable'{for `TESAttributes'};
  *((_DWORD *)this + 0x25) = &TESNPC::`vftable'{for `TESAnimation'};
  *((_DWORD *)this + 0x28) = &TESNPC::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 0x2B) = &TESNPC::`vftable'{for `TESModel'};
  *((_DWORD *)this + 0x31) = &TESNPC::`vftable'{for `TESScriptableForm'};
  *((_DWORD *)this + 0x39) = &TESNPC::`vftable'{for `TESRaceForm'};
  ArrayConstructor(this + 0xB, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
  ArrayConstructor(this + 0xF, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
  *((_DWORD *)this + 0x75) = 0;
  *((_DWORD *)this + 0x76) = 0;
  *((_DWORD *)this + 0x77) = 0;
  *((_DWORD *)this + 0x7C) = &NiTArray<FaceGenUndo *>::`vftable';
  *((_WORD *)this + 0xFC) = 0;
  *((_WORD *)this + 0xFF) = 1;
  *((_WORD *)this + 0xFD) = 0;
  *((_WORD *)this + 0xFE) = 0;
  *((_DWORD *)this + 0x7D) = 0;
  this->member.type = kFormType_NPC;
  sub_5255A0(this);
  TESAIForm_SetResponsibility((_BYTE *)this + 0x68, 0x32);
  TESAIForm_SetAggression((_BYTE *)this + 0x68, 5);
  TESAIForm_SetConfidence((_BYTE *)this + 0x68, 0x32);
  TESAIForm_SetEnergy((_BYTE *)this + 0x68, 0x32);
  *((_DWORD *)this + 0x7B) = 0;
  return this;
}
