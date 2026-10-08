// TES4 authoritative: player Acrobatics dodge-style action. Chooses anim group 0xB..0xE from movement flags and starts current action 9.
unsigned int __thiscall sub_5F5050(Actor *this, char a2)
{
  ActorAnimData *AnimData; // ebx
  unsigned int v4; // ebp
  unsigned int AnimGroup; // esi
  BSAnimGroupSequence *NormalizedSequenceSlot; // eax
  int v7; // esi
  __int16 v8; // ax
  __int16 v9; // ax
  float v11; // [esp+8h] [ebp-8h]
  float v12; // [esp+14h] [ebp+4h]

  AnimData = TESObjectREFR_GetAnimData((TESObjectREFR *)this); /*0x5f505c*/
  if ( !AnimData || !this->members.super.process ) /*0x5f5066*/
    return 0xFF; /*0x5f5161*/
  v4 = 0xFF; /*0x5f5077*/
  if ( (a2 & 1) != 0 ) /*0x5f507c*/
  {
    v4 = 0xB; /*0x5f507e*/
  }
  else if ( (a2 & 2) != 0 ) /*0x5f5087*/
  {
    v4 = 0xC; /*0x5f5089*/
  }
  else if ( (a2 & 4) != 0 ) /*0x5f5092*/
  {
    v4 = 0xD; /*0x5f5094*/
  }
  else if ( (a2 & 8) != 0 ) /*0x5f509d*/
  {
    v4 = 0xE; /*0x5f509f*/
  }
  AnimGroup = Actor_LoadAnimGroup_(this, v4, 0, 0); /*0x5f50b1*/
  if ( AnimGroup - 0xB > 3 ) /*0x5f50bd*/
    return 0xFF; /*0x5f5154*/
  ActorAnimData_PlayAnimGroup(AnimData, AnimGroup, 1u, 0xFFFFFFFF); /*0x5f50ca*/
  NormalizedSequenceSlot = ActorAnimData_GetNormalizedSequenceSlot(AnimData, 0); /*0x5f50d3*/
  Actor_SetCurrentActionWithBowVisualCleanup(this, (ActorCurrentAction)9u, NormalizedSequenceSlot); /*0x5f50dd*/
  ((void (__thiscall *)(Actor *, unsigned int, int))this->vtbl->Unk_E9)(this, AnimGroup, 1); /*0x5f50ef*/
  v12 = 1.0; /*0x5f50f9*/
  v7 = AnimGroup & 0xFF00 | 3; /*0x5f50ff*/
  v11 = sub_5E3590(this); /*0x5f5107*/
  sub_472330(AnimData, v7); /*0x5f510e*/
  if ( v8 ) /*0x5f5116*/
  {
    sub_472330(AnimData, v7); /*0x5f5123*/
    v12 = v11 / (double)v9; /*0x5f5137*/
  }
  AnimData->unkBC = v12; /*0x5f5142*/
  return v4; /*0x5f5149*/
}
