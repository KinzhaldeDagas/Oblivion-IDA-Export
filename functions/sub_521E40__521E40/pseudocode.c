// Reset active vampirism-selected NPC delta (GetAViBase 0x45 chooses +0x108/+0x168), not sex-specific. Copies manager default parameters, ensures dimensions without zeroing existing elements, then releases/clears NPC+0x1DC cached object.
void __thiscall TESNPC_ResetFaceGenDelta(TESNPC *this)
{
  bool v2; // zf
  NPC_Unk *unk2; // eax
  const FaceGenHeadParameters *DefaultHeadParameters; // eax
  NPC_Unk *unk1; // eax
  UInt32 unk6; // edi
  FaceGenHeadParameters *v7; // [esp-4h] [ebp-Ch]

  v2 = ((int (__thiscall *)(TESNPC *, int))this->vtbl[1].super.super.super.Unk_0B)(this, 0x45) == 0; /*0x521e50*/
  unk2 = this->member.unk2; /*0x521e52*/
  if ( v2 ) /*0x521e58*/
    unk2 = this->member.unk1; /*0x521e5a*/
  v7 = (FaceGenHeadParameters *)unk2; /*0x521e60*/
  DefaultHeadParameters = FaceGenManager_GetDefaultHeadParameters(); /*0x521e61*/
  FaceGenHeadParameters_Copy(DefaultHeadParameters, v7); /*0x521e67*/
  v2 = ((int (__thiscall *)(TESNPC *, int))this->vtbl[1].super.super.super.Unk_0B)(this, 0x45) == 0; /*0x521e7d*/
  unk1 = this->member.unk2; /*0x521e7f*/
  if ( v2 ) /*0x521e85*/
    unk1 = this->member.unk1; /*0x521e87*/
  FaceGenHeadParameters_Initialize((FaceGenHeadParameters *)unk1); /*0x521e8e*/
  unk6 = this->member.unk6; /*0x521e93*/
  if ( unk6 ) /*0x521e9e*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk6 + 4)) ) /*0x521ea4*/
      (**(void (__thiscall ***)(UInt32, int))unk6)(unk6, 1); /*0x521eba*/
    this->member.unk6 = 0; /*0x521ebc*/
  }
}
