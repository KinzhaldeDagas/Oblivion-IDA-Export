char __thiscall sub_64B0B0(HighProcess *this, TESObjectREFR *a2)
{
  AnimSequenceSingle *v3; // ebx
  unsigned __int8 **v4; // eax
  UInt32 v5; // edi
  UInt32 v6; // eax

  v3 = (AnimSequenceSingle *)a2->vtbl->GetAnimData(a2); /*0x64b0cb*/
  v4 = TESIdleForm_FindIdleForActor((TESObjectREFR *)MEMORY[0xB362C0], a2, this->furniture); /*0x64b0d5*/
  v5 = (UInt32)v4; /*0x64b0da*/
  if ( !v4 || !v3 ) /*0x64b0e2*/
    return 0; /*0x64b0ff*/
  v6 = TESIdleForm_GetQueuedAnimType(v4); /*0x64b0e6*/
  ActorAnimData_LoadIdleKFWithoutPlayback(v3, v5, a2, v6); /*0x64b0f0*/
  return 1; /*0x64b0f5*/
}
