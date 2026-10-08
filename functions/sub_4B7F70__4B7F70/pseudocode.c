Ni2DBuffer **__thiscall sub_4B7F70(_BYTE *this, int a2)
{
  Ni2DBuffer **result; // eax
  Ni2DBuffer **v4; // esi
  Ni2DBuffer *v5; // eax
  float *v6; // edi
  NiTimeController *v7; // eax
  NiExtraData *ExtraData; // edi
  unsigned int *v9; // eax
  unsigned int *v10; // eax

  result = (Ni2DBuffer **)TESBoundObject_Create3D(this, a2); /*0x4b7f9a*/
  v4 = result; /*0x4b7f9f*/
  if ( result ) /*0x4b7fa3*/
  {
    v5 = (Ni2DBuffer *)sub_700010(result, (int)&stru_B3B900); /*0x4b7fb0*/
    if ( (*(this + 0x64) & 2) == 0 || a2 && (*(_DWORD *)(a2 + 8) & 0x2000) != 0 ) /*0x4b7fcc*/
    {
      if ( v5 ) /*0x4b8077*/
        NiObjectNET_RemoveController(v4, v5); /*0x4b807c*/
    }
    else
    {
      v6 = 0; /*0x4b7fd2*/
      if ( !v5 ) /*0x4b7fd9*/
      {
        v7 = (NiTimeController *)FormHeapAlloc(0x44u); /*0x4b7fdd*/
        if ( v7 ) /*0x4b7fef*/
          v6 = (float *)sub_60E0A0(v7); /*0x4b7ff8*/
        sub_60E0C0(v6, unk_B35B2C[0]); /*0x4b800a*/
        Shared_SetDwordAtOffset40(v6, (UInt32)sub_4B76A0);// In this call context, Shared_SetDwordAtOffset40 initializes the BSPlayerDistanceCheckController field at +0x40; it is not operating on TESClass. /*0x4b8016*/
        (*(void (__thiscall **)(float *, Ni2DBuffer **))(*(_DWORD *)v6 + 0x58))(v6, v4); /*0x4b8023*/
      }
      ExtraData = NiObjectNET_GetExtraData((NiObjectNET *)v4, dword_A7D0EC); /*0x4b8031*/
      if ( !ExtraData ) /*0x4b8035*/
      {
        v9 = (unsigned int *)FormHeapAlloc(0x10u); /*0x4b8039*/
        if ( v9 ) /*0x4b804f*/
          v10 = BSXFlags_constr(v9); /*0x4b8053*/
        else
          v10 = 0; /*0x4b805a*/
        ExtraData = (NiExtraData *)v10; /*0x4b8068*/
        sub_6FF820((const void **)v4, dword_A7D0EC, v10); /*0x4b806a*/
      }
      ExtraData[1].__vftable = (NiExtraDataVtbl *)((int)ExtraData[1].__vftable | 1); /*0x4b806f*/
    }
    return v4; /*0x4b8081*/
  }
  return result; /*0x4b808f*/
}
