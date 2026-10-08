// Advances every Oblivion friend-hit entry timer by the frame-time delta and removes/frees entries older than the configured friend-hit timer.
void __thiscall ExtraDataList_UpdateFriendHitTimers(ExtraDataList *this, void *actorContext)
{
  BSExtraData *ExtraData; // eax
  BSExtraData *v3; // edi
  int *vtbl; // ecx
  int *i; // eax
  int v6; // edx
  int *j; // edx
  unsigned int v8; // esi

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_FriendHitList); /*0x420e92*/
  if ( ExtraData ) /*0x420e99*/
  {
    v3 = ExtraData; /*0x42aff1*/
    vtbl = (int *)ExtraData[1].vtbl; /*0x42aff3*/
    for ( i = vtbl; i; *(float *)(v6 + 8) = *(float *)(v6 + 8) + *(float *)&MEMORY[0xB33E90][0xC] ) /*0x42affa*/
    {
      v6 = *i; /*0x42b000*/
      if ( !*i ) /*0x42b000*/
        break; /*0x42b004*/
      i = (int *)i[1]; /*0x42b009*/
    }
    for ( j = vtbl; j; j = (int *)j[1] ) /*0x42b01d*/
    {
      v8 = *j; /*0x42b020*/
      if ( !*j ) /*0x42b020*/
        break; /*0x42b024*/
      if ( flt_B36778[0x4A] < (double)*(float *)(v8 + 8) ) /*0x42b036*/
      {
        BSSimpleList_Remove(vtbl, *j); /*0x42b039*/
        FormHeapFree(v8); /*0x42b03f*/
        vtbl = (int *)v3[1].vtbl; /*0x42b044*/
        j = vtbl; /*0x42b04a*/
      }
    }
  }
}
