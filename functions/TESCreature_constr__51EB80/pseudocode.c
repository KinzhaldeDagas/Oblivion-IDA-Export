TESForm *__thiscall TESCreature_constr(TESForm *this)
{
  void (__thiscall *v2)(char *, int); // edx
  int v4; // [esp+4h] [ebp-24h]
  char v5; // [esp+8h] [ebp-20h]

  TESActorBase_constr(this);
  TESAttackDamageForm_constr((_WORD *)this + 0x72);
  sub_46DBC0((_DWORD *)this + 0x3B);
  this->vtbl = (TESFormVtbl *)&TESCreature::`vftable'{for `TESCreature'};
  *((_DWORD *)this + 9) = &TESCreature::`vftable'{for `TESActorBaseData'};
  *((_DWORD *)this + 0x11) = &TESCreature::`vftable'{for `TESContainer'};
  *((_DWORD *)this + 0x15) = &TESCreature::`vftable'{for `TESSpellList'};
  *((_DWORD *)this + 0x1A) = &TESCreature::`vftable'{for `TESAIForm'};
  *((_DWORD *)this + 0x20) = &TESCreature::`vftable'{for `TESHealthForm'};
  *((_DWORD *)this + 0x22) = &TESCreature::`vftable'{for `TESAttributes'};
  *((_DWORD *)this + 0x25) = &TESCreature::`vftable'{for `TESAnimation'};
  *((_DWORD *)this + 0x28) = &TESCreature::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 0x2B) = &TESCreature::`vftable'{for `TESModel'};
  *((_DWORD *)this + 0x31) = &TESCreature::`vftable'{for `TESScriptableForm'};
  *((_DWORD *)this + 0x39) = &TESCreature::`vftable'{for `TESAttackDamageForm'};
  *((_DWORD *)this + 0x3B) = &TESCreature::`vftable'{for `TESModelList'};
  TESModel::TESModel((TESModel *)((char *)this + 0x11C));
  TESTexture_constr((TESTexture *)((char *)this + 0x134));
  this->member.type = kFormType_Creature;
  sub_51C7B0((int)this);
  TESAIForm_SetResponsibility((_BYTE *)this + 0x68, 0x32);
  TESAIForm_SetAggression((_BYTE *)this + 0x68, 0x46);
  TESAIForm_SetConfidence((_BYTE *)this + 0x68, 0x32);
  TESAIForm_SetEnergy((_BYTE *)this + 0x68, 0x32);
  TESAttributes_SetAVi((_BYTE *)this + 0x88, 6, 0x32);
  v2 = *(void (__thiscall **)(char *, int))(*((_DWORD *)this + 9) + 0x50);
  *((_DWORD *)this + 0xA) |= 0x4000u;
  v2((char *)this + 0x24, 0x10);
  if ( !*(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x184) )
    TESActorBaseData_SetFactionRank((char *)this + 0x24, (int)*(&stru_B36208 + 0x24), 0, v4, v5);
  return this;
}
