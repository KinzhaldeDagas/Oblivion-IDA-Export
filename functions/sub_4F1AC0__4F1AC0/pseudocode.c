// Verified SubSpace spatial-index insertion. Its sole direct caller is TESObjectCELL_IndexSubSpaceReferences, and no direct removal caller was found; current evidence places insertion in the WorldSpace persistent-cell build during TESDataHandler_LoadFiles. Runtime add/remove maintenance beyond this build path is Unknown.
double __usercall TESWorldSpace_IndexSubSpaceReference@<st0>(
        TESWorldSpace *this@<ecx>,
        double carry@<st0>,
        TESObjectREFR *reference)
{
  TESObjectREFR *v4; // ebx
  TESObjectREFR *v5; // eax
  TESWorldSpaceSubSpaceMap *v6; // eax
  float *v7; // esi
  double v8; // st7
  float *(__thiscall *GetPos)(TESObjectREFR *); // edx
  float *v10; // eax
  int v11; // eax
  int v12; // ebp
  float *v13; // eax
  int v14; // esi
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  _DWORD *unknown060; // ecx
  int v20; // edi
  TESObjectREFR *v21; // esi
  TESObjectREFR *v22; // eax
  TESObjectREFRVtbl **v23; // eax
  float v24; // [esp+14h] [ebp-28h]
  int v25; // [esp+14h] [ebp-28h]
  int i; // [esp+18h] [ebp-24h]
  float v28; // [esp+20h] [ebp-1Ch]
  float v29; // [esp+20h] [ebp-1Ch]
  float v30; // [esp+20h] [ebp-1Ch]
  int j; // [esp+20h] [ebp-1Ch]
  int v32; // [esp+24h] [ebp-18h]
  double v33; // [esp+28h] [ebp-14h]
  int v34; // [esp+28h] [ebp-14h]

  v4 = reference; /*0x4f1aed*/
  if ( *(float *)&reference != 0.0 ) /*0x4f1af3*/
  {
    if ( reference->vtbl->GetBaseForm(reference) ) /*0x4f1b03*/
    {
      if ( v4->vtbl->GetBaseForm(v4)->member.type == kFormType_SubSpace ) /*0x4f1b1d*/
      {
        if ( !this->unknown060 ) /*0x4f1b23*/
        {
          v5 = (TESObjectREFR *)FormHeapAlloc(0x10u); /*0x4f1b2b*/
          reference = v5; /*0x4f1b33*/
          if ( v5 ) /*0x4f1b41*/
            v6 = TESWorldSpaceSubSpaceMap_ctor((TESWorldSpaceSubSpaceMap *)v5, 0x25u); /*0x4f1b47*/
          else
            v6 = 0; /*0x4f1b4e*/
          this->unknown060 = (UInt32)v6; /*0x4f1b58*/
        }
        v7 = (float *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>))v4->vtbl->GetBaseForm)(v4, carry); /*0x4f1b67*/
        v33 = ((double (__thiscall *)(TESObjectREFR *))v4->vtbl->GetScale)(v4); /*0x4f1b75*/
        v8 = sub_4A9730(v7); /*0x4f1b7b*/
        GetPos = v4->vtbl->GetPos; /*0x4f1b86*/
        *(float *)&reference = v8 * v33; /*0x4f1b8e*/
        v10 = GetPos(v4); /*0x4f1b92*/
        v24 = *v10 - *(float *)&reference; /*0x4f1b9a*/
        v11 = (int)v4->vtbl->GetPos(v4); /*0x4f1bb0*/
        v28 = *(float *)(v11 + 4) - *(float *)&reference; /*0x4f1bb9*/
        v12 = (int)v28 >> 0xC; /*0x4f1bd1*/
        v34 = v12; /*0x4f1bd6*/
        v13 = v4->vtbl->GetPos(v4); /*0x4f1bda*/
        v29 = *v13 + *(float *)&reference; /*0x4f1be2*/
        carry = v29; /*0x4f1be6*/
        v14 = (int)v29 >> 0xC; /*0x4f1bfa*/
        v32 = v14; /*0x4f1bff*/
        v15 = (int)v4->vtbl->GetPos(v4); /*0x4f1c03*/
        v30 = *(float *)(v15 + 4) + *(float *)&reference; /*0x4f1c0c*/
        reference = (TESObjectREFR *)(int)v30; /*0x4f1c14*/
        v16 = (int)v24 >> 0xC; /*0x4f1c20*/
        v17 = (int)reference >> 0xC; /*0x4f1c23*/
        v25 = (int)reference >> 0xC; /*0x4f1c28*/
        for ( i = v16; v16 <= v14; i = v16 ) /*0x4f1c30*/
        {
          if ( v12 <= v17 ) /*0x4f1c38*/
          {
            v18 = (__int16)v16 << 0x10; /*0x4f1c41*/
            for ( j = v18; ; v18 = j ) /*0x4f1c44*/
            {
              unknown060 = (_DWORD *)this->unknown060; /*0x4f1c58*/
              v20 = v18 | (unsigned __int16)v12; /*0x4f1c5e*/
              *(float *)&reference = 0.0; /*0x4f1c66*/
              NiTMap_GetAt(unknown060, v20, &reference); /*0x4f1c6e*/
              v21 = reference; /*0x4f1c73*/
              if ( *(float *)&reference == 0.0 ) /*0x4f1c79*/
              {
                v22 = (TESObjectREFR *)FormHeapAlloc(8u); /*0x4f1c7d*/
                if ( v22 ) /*0x4f1c87*/
                {
                  v22->vtbl = 0; /*0x4f1c89*/
                  *(_DWORD *)&v22->member.super.type = 0; /*0x4f1c8b*/
                }
                else
                {
                  v22 = 0; /*0x4f1c90*/
                }
                v21 = v22; /*0x4f1c9b*/
                NiTMap_SetAt((_DWORD *)this->unknown060, v20, (int)v22); /*0x4f1c9d*/
              }
              if ( v21->vtbl ) /*0x4f1ca2*/
              {
                v23 = (TESObjectREFRVtbl **)FormHeapAlloc(8u); /*0x4f1ca9*/
                if ( v23 ) /*0x4f1cb3*/
                {
                  *v23 = v21->vtbl; /*0x4f1cb7*/
                  v23[1] = 0; /*0x4f1cb9*/
                }
                else
                {
                  v23 = 0; /*0x4f1cc2*/
                }
                v23[1] = *(TESObjectREFRVtbl **)&v21->member.super.type; /*0x4f1cc7*/
                *(_DWORD *)&v21->member.super.type = v23; /*0x4f1cca*/
              }
              ++v12; /*0x4f1ccd*/
              v21->vtbl = (TESObjectREFRVtbl *)v4; /*0x4f1cd4*/
              if ( v12 > v25 ) /*0x4f1cd6*/
                break; /*0x4f1cd6*/
            }
            v17 = v25; /*0x4f1cdc*/
            v14 = v32; /*0x4f1ce0*/
            v12 = v34; /*0x4f1ce4*/
            v16 = i; /*0x4f1ce8*/
          }
          ++v16; /*0x4f1cec*/
        }
      }
    }
  }
  return carry; /*0x4f1cfb*/
}
