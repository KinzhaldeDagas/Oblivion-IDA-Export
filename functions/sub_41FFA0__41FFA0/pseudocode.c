// Returns the ragdoll payload stored in ExtraRagDollData, or null.
BSExtraDataVtbl *__thiscall ExtraDataList_GetRagDollData(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_RagDollData); /*0x41ffa2*/
  if ( ExtraData ) /*0x41ffa9*/
    return ExtraData[1].vtbl; /*0x41ffab*/
  else
    return 0; /*0x41ffaf*/
}
