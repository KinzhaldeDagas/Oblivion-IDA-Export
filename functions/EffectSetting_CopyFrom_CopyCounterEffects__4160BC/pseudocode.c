void __userpurge EffectSetting_CopyFrom_::CopyCounterEffects(int a1@<edi>, TESForm *a2@<esi>, char a3@<bpl>, int a4)
{
  EffectSetting_SetCounterEffects_duplicate((int)a2, a3, a1, *(_WORD *)(a1 + 0x6C), *(_DWORD *)(a1 + 0x9C)); /*0x4160ca*/
  if ( (a2->member.flags & 0x4000) != 0 || a2->member.refID ) /*0x4160da*/
    EffectSetting_CopyFrom_::Done(a4); /*0x4160d8*/
  else
    EffectSetting_CopyFrom_::AssignNewFormID(a2, a4); /*0x4160df*/
}
