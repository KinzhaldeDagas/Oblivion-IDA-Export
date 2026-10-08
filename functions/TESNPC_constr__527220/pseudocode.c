TESForm *__thiscall TESNPC_constr(TESForm *this)
{
  TESActorBase_constr(this); /*0x52724b*/
  DNameNode::DNameNode((DNameNode *)((char *)this + 0xE4)); /*0x52725e*/
  this->vtbl = (TESFormVtbl *)&TESNPC::`vftable'{for `TESNPC'}; /*0x52727b*/
  *((_DWORD *)this + 9) = &TESNPC::`vftable'{for `TESActorBaseData'};// 3DTheft decode 2026-05-13: TESNPC constructor installs TESActorBaseData vtable at NPC+0x24; actorBaseData.flags is NPC+0x28. /*0x527281*/
  *((_DWORD *)this + 0x11) = &TESNPC::`vftable'{for `TESContainer'}; /*0x527288*/
  *((_DWORD *)this + 0x15) = &TESNPC::`vftable'{for `TESSpellList'}; /*0x52728f*/
  *((_DWORD *)this + 0x1A) = &TESNPC::`vftable'{for `TESAIForm'}; /*0x527296*/
  *((_DWORD *)this + 0x20) = &TESNPC::`vftable'{for `TESHealthForm'}; /*0x52729c*/
  *((_DWORD *)this + 0x22) = &TESNPC::`vftable'{for `TESAttributes'}; /*0x5272a6*/
  *((_DWORD *)this + 0x25) = &TESNPC::`vftable'{for `TESAnimation'}; /*0x5272b0*/
  *((_DWORD *)this + 0x28) = &TESNPC::`vftable'{for `TESFullName'}; /*0x5272ba*/
  *((_DWORD *)this + 0x2B) = &TESNPC::`vftable'{for `TESModel'}; /*0x5272c4*/
  *((_DWORD *)this + 0x31) = &TESNPC::`vftable'{for `TESScriptableForm'};// 3DTheft decode 2026-05-13: TESNPC constructor installs TESScriptableForm vtable at NPC+0xC4; script pointer is component +0x04 (NPC+0xC8). /*0x5272ce*/
  *((_DWORD *)this + 0x39) = &TESNPC::`vftable'{for `TESRaceForm'}; /*0x5272d8*/
  ArrayConstructor( /*0x5272de*/
    (char *)this + 0x108,
    0x18u,
    4,
    (void (__thiscall *)(char *))FaceGenMatrix_Construct,
    (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
  ArrayConstructor( /*0x527301*/
    (char *)this + 0x168,
    0x18u,
    4,
    (void (__thiscall *)(char *))FaceGenMatrix_Construct,
    (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
  *((_DWORD *)this + 0x75) = 0; /*0x527306*/
  *((_DWORD *)this + 0x76) = 0; /*0x52730c*/
  *((_DWORD *)this + 0x77) = 0; /*0x527312*/
  *((_DWORD *)this + 0x7C) = &NiTArray<FaceGenUndo *>::`vftable'; /*0x527318*/
  *((_WORD *)this + 0xFC) = 0; /*0x527322*/
  *((_WORD *)this + 0xFF) = 1; /*0x527329*/
  *((_WORD *)this + 0xFD) = 0; /*0x527330*/
  *((_WORD *)this + 0xFE) = 0; /*0x527337*/
  *((_DWORD *)this + 0x7D) = 0; /*0x52733e*/
  this->member.type = kFormType_NPC; /*0x52734b*/
  sub_5255A0(this); /*0x52734f*/
  TESAIForm_SetResponsibility((_BYTE *)this + 0x68, 0x32); /*0x527358*/
  TESAIForm_SetAggression((_BYTE *)this + 0x68, 5); /*0x527361*/
  TESAIForm_SetConfidence((_BYTE *)this + 0x68, 0x32); /*0x52736a*/
  TESAIForm_SetEnergy((_BYTE *)this + 0x68, 0x32); /*0x527373*/
  *((_DWORD *)this + 0x7B) = 0; /*0x527378*/
  return this; /*0x527380*/
}
