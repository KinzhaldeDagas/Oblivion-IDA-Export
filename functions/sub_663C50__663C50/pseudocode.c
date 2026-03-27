int __thiscall sub_663C50(Actor *this, float a2)
{
  int result; // eax
  char GroupOffsetFromAV; // al
  int v5; // esi
  int BaseCalcAVi; // ebp
  TESObjectCELL *v7; // ebx
  TESObjectREFR *BaseClass; // eax
  TESObjectCELL *ParentCell; // eax
  TESForm::ModReferenceList *v10; // eax
  int v11; // [esp-10h] [ebp-1Ch]
  float v12; // [esp+4h] [ebp-8h]
  int v13; // [esp+8h] [ebp-4h]
  float v14; // [esp+10h] [ebp+4h]

  result = LODWORD(a2);
  if ( (unsigned int)(LODWORD(a2) - 0xC) <= 0x14 )
  {
    GroupOffsetFromAV = ActorValue_GetGroupOffsetFromAV(2, SLOBYTE(a2));
    v13 = GroupOffsetFromAV;
    result = (int)TESDataHandler_GetTESSkillByCode((char *)TESDataHandler, GroupOffsetFromAV);
    v5 = result;
    if ( result )
    {
      BaseCalcAVi = Actor_GetBaseCalcAVi((int *)this, 0, (int)this, result, *(_DWORD *)(result + 0x2C));
      LOBYTE(v12) = 0;
      LOBYTE(a2) = 0;
      if ( Actor_GetBaseClass(this)[1].next != (TESForm::ModReferenceList *)iClassCharactergenClass )
      {
        v7 = *(TESObjectCELL **)(v5 + 0x34);
        BaseClass = (TESObjectREFR *)Actor_GetBaseClass(this);
        ParentCell = TESObjectREFR_GetParentCell(BaseClass);
        v11 = *(_DWORD *)(v5 + 0x2C);
        LOBYTE(v12) = ParentCell == v7;
        v10 = Actor_GetBaseClass(this);
        LOBYTE(a2) = sub_51C090(v10, v11);
      }
      v14 = sub_548030(BaseCalcAVi, v12, a2);
      if ( 0.0 == v14 )
        v14 = 1.0;
      *((float *)this + v13 + 0x1E9) = v14;
      return v13;
    }
  }
  return result;
}
