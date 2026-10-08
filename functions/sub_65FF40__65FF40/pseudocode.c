void __usercall sub_65FF40(Actor *a1@<ecx>, double a2@<st1>, double a3@<st0>)
{
  ActorAnimData *v5; // ecx
  ActorAnimData *AnimData; // eax
  EntryData *v7; // eax
  TESForm *type; // ebp
  ExtraDataList **extendData; // ecx
  ExtraDataList *v10; // edi
  int v11; // eax
  _DWORD *v12; // eax
  unsigned int v13; // ebx
  float deltaTime; // [esp+14h] [ebp-4h]
  float TimeLeft; // [esp+14h] [ebp-4h]
  float v16; // [esp+14h] [ebp-4h]

  deltaTime = *(float *)&MEMORY[0xB33E90][0xC]; /*0x65ff4a*/
  v5 = (ActorAnimData *)a1[5].members.unk0B4[1]; /*0x65ff4e*/
  if ( v5 ) /*0x65ff56*/
    ActorAnimData_Update(v5, a1, deltaTime, kTerrainLODQuadRayDirectionZ); /*0x65ff6d*/
  AnimData = TESObjectREFR_GetAnimData((TESObjectREFR *)a1); /*0x65ff74*/
  if ( AnimData ) /*0x65ff7b*/
    ActorAnimData_Update(AnimData, a1, deltaTime, kTerrainLODQuadRayDirectionZ); /*0x65ff94*/
  ((void (__usercall *)(Actor *@<ecx>, double@<st0>, double@<st1>))a1->vtbl->super.super.Unk_3F)(a1, a3, a2); /*0x65ffa3*/
  v7 = a1->members.super.process->GetEquippedLightData(a1->members.super.process, 1); /*0x65ffb2*/
  if ( v7 ) /*0x65ffb8*/
  {
    type = v7->type; /*0x65ffbf*/
    if ( (double)(int)type[4].member.modlist.data >= *(float *)&SrcStr ) /*0x65ffd0*/
    {
      extendData = (ExtraDataList **)v7->extendData; /*0x65ffd6*/
      if ( v7->extendData ) /*0x65ffd6*/
      {
        v10 = *extendData; /*0x65ffe1*/
        if ( *extendData ) /*0x65ffe1*/
        {
          TimeLeft = ExtraDataList_GetTimeLeft(*extendData); /*0x65fff2*/
          v16 = TimeLeft - *(float *)&MEMORY[0xB33E90][0xC]; /*0x660003*/
          ExtraDataList_SetTimeLeft(v10, (BSExtraDataVtbl *)LODWORD(v16)); /*0x66000e*/
          if ( v16 <= 0.0 ) /*0x66001e*/
          {
            v11 = SoundMap_ResolveAnimSoundNote("ITMTorchHeldExt"); /*0x66002b*/
            if ( v11 ) /*0x660032*/
            {
              v12 = (_DWORD *)sub_65AC50(a1, *(_DWORD *)(v11 + 0xC), 0, 0x102, 1); /*0x660044*/
              v13 = (unsigned int)v12; /*0x660049*/
              if ( v12 ) /*0x66004d*/
              {
                sub_6B73E0(v12); /*0x660051*/
                FormHeapFree(v13); /*0x660057*/
              }
            }
            if ( ExtraDataList_HasWorn(v10, 1) ) /*0x660064*/
            {
              sub_41F6A0(v10, 1); /*0x660071*/
              SetWorn(v10, 1, 0); /*0x66007c*/
            }
            a1->vtbl->super.super.RemoveItem((TESObjectREFR *)a1, type, (BaseExtraList *)v10, 1, 0, 0, 0, 0, 0, 1, 0); /*0x66009d*/
          }
        }
      }
    }
  }
}
