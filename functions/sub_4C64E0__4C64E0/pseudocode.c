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
  size_t v17; // [esp-4h] [ebp-28h]

  v2 = (int)*(this + 9);
  v3 = 0;
  if ( v2 && *(_DWORD *)(v2 + 4) )
    return 0;
  v5 = (float *)FormHeapAlloc(0xA0u);
  if ( v5 )
    v6 = sub_4C6170(v5);
  else
    v6 = 0;
  v7 = *(this + 8);
  *(this + 9) = (TESObjectCELL *)v6;
  (*(this + 9))[1].members.land = (TESObjectLAND *)TESObjectCELL_GetXCoordinate(v7);
  (*(this + 9))[1].members.pathGrid = (TESPathGrid *)TESObjectCELL_GetYCoordinate(*(this + 8));
  *(_DWORD *)&(*(this + 9))->members.super.type = FormHeapAlloc(0x10u);
  (*(this + 9))->members.super.refID = FormHeapAlloc(0x10u);
  (*(this + 9))->members.super.flags = FormHeapAlloc(0x10u);
  v8 = &dword_B35BB8[0xFFFFFFF0];
  (*(this + 9))->members.super.modlist.data = (Data *)FormHeapAlloc(0x10u);
  while ( 1 )
  {
    *(_DWORD *)(*(_DWORD *)&(*(this + 9))->members.super.type + v3) = FormHeapAlloc(0xD8Cu);
    qmemcpy(*(void **)(*(_DWORD *)&(*(this + 9))->members.super.type + v3), (const void *)v8[v3 / 4u + 0x10], 0xD8Cu);
    v9 = FormHeapAlloc(0x1210u);
    if ( v9 )
    {
      v10 = 0x120;
      v11 = v9 + 8;
      do
      {
        *(float *)(v11 - 8) = 0.0;
        v11 += 0x10;
        --v10;
        *(float *)(v11 - 0x14) = 0.0;
        *(float *)(v11 - 0x10) = 0.0;
        *(float *)(v11 - 0xC) = 0.0;
      }
      while ( v10 >= 0 );
    }
    else
    {
      v9 = 0;
    }
    *(_DWORD *)((*(this + 9))->members.super.refID + v3) = v9;
    LODWORD(v17) = 0x1210;
    memcpy(*(void **)((*(this + 9))->members.super.refID + v3), dword_B35BCC, v17);
    *(_DWORD *)((*(this + 9))->members.super.flags + v3) = FormHeapAlloc(0xD8Cu);
    qmemcpy(*(void **)((*(this + 9))->members.super.flags + v3), (const void *)dword_B35BD0, 0xD8Cu);
    *(UInt32 *)((char *)&(*(this + 9))->members.super.modlist.data->errorState + v3) = FormHeapAlloc(0x121u);
    v12 = dword_B35BD8;
    v13 = *(_BYTE **)((char *)&(*(this + 9))->members.super.modlist.data->errorState + v3);
    qmemcpy(v13, (const void *)dword_B35BD8, 0x120u);
    v13[0x120] = *(_BYTE *)(v12 + 0x120);
    *(TESObjectLAND **)((char *)&(*(this + 9))->members.land + v3) = (TESObjectLAND *)FormHeapAlloc(0x484u);
    v14 = FormHeapAlloc(0x2420u);
    _memset(v14, 0, 0x2420);
    for ( i = 0; i < 0x484; i += 4 )
    {
      *(_DWORD *)(*(char **)((char *)&(*(this + 9))->members.land + v3) + i) = v14;
      v14 += 0x20;
    }
    *(_DWORD *)&(*(this + 9))->members.extraData.members.m_presenceBitfield[v3] = FormHeapAlloc(0x20u);
    v16 = *(_DWORD **)&(*(this + 9))->members.extraData.members.m_presenceBitfield[v3];
    *v16 = 0;
    v16[1] = 0;
    v16[2] = 0;
    v16[3] = 0;
    v16[4] = 0;
    v16[5] = 0;
    v3 += 4;
    v16[6] = 0;
    v16[7] = 0;
    if ( v3 >= 0x10 )
      break;
    v8 = &dword_B35BB8[0xFFFFFFF0];
  }
  return 1;
}
