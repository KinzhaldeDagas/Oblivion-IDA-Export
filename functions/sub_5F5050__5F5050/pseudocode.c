signed int __thiscall sub_5F5050(Actor *this, char a2)
{
  ActorAnimData *AnimData; // ebx
  int v7; // ebp
  UInt32 AnimGroup; // esi
  PowerListEntry *v9; // eax
  int v10; // esi
  __int16 v11; // ax
  __int16 v12; // ax
  float v14; // [esp+8h] [ebp-8h]
  float v15; // [esp+14h] [ebp+4h]

  AnimData = (ActorAnimData *)TESObjectREFR_GetAnimData(this);
  if ( !AnimData || !this->members.super.process )
    return 0xFF;
  v7 = 0xFF;
  if ( (a2 & 1) != 0 )
  {
    v7 = 0xB;
  }
  else if ( (a2 & 2) != 0 )
  {
    v7 = 0xC;
  }
  else if ( (a2 & 4) != 0 )
  {
    v7 = 0xD;
  }
  else if ( (a2 & 8) != 0 )
  {
    v7 = 0xE;
  }
  AnimGroup = (unsigned __int16)Actor_LoadAnimGroup_((TESObjectREFR *)this, v7, 0, 0);
  if ( AnimGroup - 0xB > 3 )
    return 0xFF;
  ActorAnimData_PlayAnimGroup((int)AnimData, (_DWORD *)AnimGroup, 1, 0xFFFFFFFF);
  v9 = sub_4706E0(AnimData, 0);
  HighPRocess_DoAction_____((PlayerCharacter *)this, 9, (int)v9);
  ((void (__thiscall *)(Actor *, UInt32, int))this->vtbl->Unk_E9)(this, AnimGroup, 1);
  v15 = 1.0;
  v10 = AnimGroup & 0xFF00 | 3;
  v14 = sub_5E3590(this);
  sub_472330(AnimData, v10);
  if ( v11 )
  {
    sub_472330(AnimData, v10);
    v15 = v14 / (double)v12;
  }
  AnimData->unkBC = v15;
  return v7;
}
