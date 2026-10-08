char __thiscall sub_4C64E0(TESObjectCELL **this)
{
  int v2; // eax
  int v3; // ebp
  float *v5; // eax
  float *v6; // eax
  TESObjectCELL *v7; // ecx
  int *v8; // esi
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // esi
  _BYTE *v13; // edi
  int v14; // esi
  int i; // eax
  _DWORD *v16; // ecx

  v2 = (int)*(this + 9); /*0x4c6507*/
  v3 = 0; /*0x4c650a*/
  if ( v2 && *(_DWORD *)(v2 + 4) ) /*0x4c6510*/
    return 0; /*0x4c6515*/
  v5 = (float *)FormHeapAlloc(0xA0u); /*0x4c6530*/
  if ( v5 ) /*0x4c6542*/
    v6 = sub_4C6170(v5); /*0x4c6546*/
  else
    v6 = 0; /*0x4c654d*/
  v7 = *(this + 8); /*0x4c654f*/
  *(this + 9) = (TESObjectCELL *)v6; /*0x4c655a*/
  (*(this + 9))[1].members.land = (TESObjectLAND *)TESObjectCELL_GetXCoordinate(v7); /*0x4c6565*/
  (*(this + 9))[1].members.pathGrid = (TESPathGrid *)TESObjectCELL_GetYCoordinate(*(this + 8)); /*0x4c6578*/
  *(_DWORD *)&(*(this + 9))->members.super.type = FormHeapAlloc(0x10u); /*0x4c6588*/
  (*(this + 9))->members.super.refID = FormHeapAlloc(0x10u); /*0x4c6595*/
  (*(this + 9))->members.super.flags = FormHeapAlloc(0x10u); /*0x4c65a2*/
  v8 = &unk_B35BB8[0xFFFFFFF0]; /*0x4c65b5*/
  (*(this + 9))->members.super.modlist.data = (Data *)FormHeapAlloc(0x10u); /*0x4c65b8*/
  while ( 1 ) /*0x4c65d5*/
  {
    *(_DWORD *)(*(_DWORD *)&(*(this + 9))->members.super.type + v3) = FormHeapAlloc(0xD8Cu); /*0x4c65d5*/
    qmemcpy(*(void **)(*(_DWORD *)&(*(this + 9))->members.super.type + v3), (const void *)v8[v3 / 4u + 0x10], 0xD8Cu); /*0x4c65ef*/
    v9 = FormHeapAlloc(0x1210u); /*0x4c65f1*/
    if ( v9 ) /*0x4c65fb*/
    {
      v10 = 0x120; /*0x4c65ff*/
      v11 = v9 + 8; /*0x4c6604*/
      do /*0x4c6619*/
      {
        *(float *)(v11 - 8) = 0.0; /*0x4c6607*/
        v11 += 0x10; /*0x4c660a*/
        --v10; /*0x4c660d*/
        *(float *)(v11 - 0x14) = 0.0; /*0x4c6610*/
        *(float *)(v11 - 0x10) = 0.0; /*0x4c6613*/
        *(float *)(v11 - 0xC) = 0.0; /*0x4c6616*/
      }
      while ( v10 >= 0 ); /*0x4c6619*/
    }
    else
    {
      v9 = 0; /*0x4c661f*/
    }
    *(_DWORD *)((*(this + 9))->members.super.refID + v3) = v9; /*0x4c6627*/
    memcpy(*(void **)((*(this + 9))->members.super.refID + v3), unk_B35BCC, 0x1210u); /*0x4c663f*/
    *(_DWORD *)((*(this + 9))->members.super.flags + v3) = FormHeapAlloc(0xD8Cu); /*0x4c6654*/
    qmemcpy(*(void **)((*(this + 9))->members.super.flags + v3), (const void *)unk_B35BD0, 0xD8Cu); /*0x4c6670*/
    *(UInt32 *)((char *)&(*(this + 9))->members.super.modlist.data->errorState + v3) = FormHeapAlloc(0x121u); /*0x4c667d*/
    v12 = unk_B35BD8; /*0x4c6686*/
    v13 = *(_BYTE **)((char *)&(*(this + 9))->members.super.modlist.data->errorState + v3); /*0x4c668c*/
    qmemcpy(v13, (const void *)unk_B35BD8, 0x120u); /*0x4c6694*/
    v13[0x120] = *(_BYTE *)(v12 + 0x120); /*0x4c669b*/
    *(TESObjectLAND **)((char *)&(*(this + 9))->members.land + v3) = (TESObjectLAND *)FormHeapAlloc(0x484u); /*0x4c66a9*/
    v14 = FormHeapAlloc(0x2420u); /*0x4c66b7*/
    _memset(v14, 0, 0x2420u); /*0x4c66bc*/
    for ( i = 0; i < 0x484; i += 4 ) /*0x4c66c4*/
    {
      *(_DWORD *)(*(char **)((char *)&(*(this + 9))->members.land + v3) + i) = v14; /*0x4c66cd*/
      v14 += 0x20; /*0x4c66d3*/
    }
    *(_DWORD *)&(*(this + 9))->members.extraData.members.m_presenceBitfield[v3] = FormHeapAlloc(0x20u); /*0x4c66e7*/
    v16 = *(_DWORD **)&(*(this + 9))->members.extraData.members.m_presenceBitfield[v3]; /*0x4c66ee*/
    *v16 = 0; /*0x4c66f4*/
    v16[1] = 0; /*0x4c66f6*/
    v16[2] = 0; /*0x4c66f9*/
    v16[3] = 0; /*0x4c66fc*/
    v16[4] = 0; /*0x4c66ff*/
    v16[5] = 0; /*0x4c6702*/
    v3 += 4; /*0x4c6705*/
    v16[6] = 0; /*0x4c670e*/
    v16[7] = 0; /*0x4c6711*/
    if ( v3 >= 0x10 ) /*0x4c6714*/
      break; /*0x4c6714*/
    v8 = &unk_B35BB8[0xFFFFFFF0]; /*0x4c65c1*/
  }
  return 1; /*0x4c6517*/
}
