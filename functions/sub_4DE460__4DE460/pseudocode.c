void __thiscall sub_4DE460(TESObjectREFR *this, float arg0, char a3)
{
  int v4; // eax
  int v5; // eax
  NiObject *v6; // eax
  NiObject *v7; // eax
  NiObject *v8; // ebp
  char v9; // al
  float *v10; // ebx
  char v11; // al
  float *v12; // eax
  float *v13; // edi
  NiAVObject *v14; // eax
  int v15; // eax
  NiAVObject *v16; // eax
  float weight; // [esp+0h] [ebp-20h]
  float a2; // [esp+4h] [ebp-1Ch]
  float a2a; // [esp+4h] [ebp-1Ch]
  int v20; // [esp+1Ch] [ebp-4h] BYREF
  float v21; // [esp+24h] [ebp+4h]

  if ( this->vtbl->GetBaseForm(this) )
  {
    if ( this->vtbl->GetBaseForm(this)->member.type == kFormType_Door )
    {
      if ( LOBYTE(arg0) ) /*0x4de497*/
        TESObjectREFR_SetActionFlagBits(this, 4u); /*0x4de499*/
      else
        TESObjectREFR_ClearActionFlagBits(this, 4u); /*0x4de4a0*/
      if ( this->vtbl->GetNiNode(this) && (v4 = (int)this->vtbl->GetNiNode(this), *(_WORD *)(v4 + 0xB6)) ) /*0x4de4c1*/
        v5 = **(_DWORD **)(v4 + 0xB0); /*0x4de4d1*/
      else
        v5 = 0; /*0x4de4d5*/
      if ( v5 ) /*0x4de4d9*/
        v6 = *(NiObject **)(v5 + 0xC); /*0x4de4db*/
      else
        v6 = 0; /*0x4de4e0*/
      v7 = NiRTTI_Cast((BSStringT *)&stru_B3CAC0, v6); /*0x4de4e9*/
      v8 = v7; /*0x4de4ee*/
      if ( v7 )
      {
        v9 = NiTMap_GetAt(&v7[0xB].__vftable, (int)"Open", &v20); /*0x4de50b*/
        v10 = v9 != 0 ? (float *)v20 : 0;
        v11 = NiTMap_GetAt(&v8[0xB].__vftable, (int)"Close", &v20); /*0x4de526*/
        v12 = v11 != 0 ? (float *)v20 : 0;
        if ( v10 ) /*0x4de535*/
        {
          if ( v12 ) /*0x4de53d*/
          {
            if ( LOBYTE(arg0) ) /*0x4de548*/
            {
              v13 = v10; /*0x4de54a*/
              v10 = v12; /*0x4de54c*/
            }
            else
            {
              v13 = v12; /*0x4de550*/
            }
            LOWORD(v8[1].__vftable) |= 8u; /*0x4de554*/
            NiControllerSequence_Deactivate((NiControllerSequence *)v10, 0.0, 0); /*0x4de561*/
            a2 = 0.0; /*0x4de572*/
            weight = 1.0; /*0x4de57a*/
            if ( a3 ) /*0x4de581*/
            {
              BSAnimGroupSequence_Activate((BSAnimGroupSequence *)v10, 0, 0, weight, a2, 0); /*0x4de584*/
              v10[0x12] = -flt_A7DEB4; /*0x4de593*/
              a2a = v13[0xB]; /*0x4de5ac*/
              v14 = (NiAVObject *)this->vtbl->GetNiNode(this); /*0x4de5af*/
              NiAVObject_UpdateNiAVObject(v14, a2a, 1); /*0x4de5b3*/
              NiControllerSequence_Deactivate((NiControllerSequence *)v10, 0.0, 0); /*0x4de5c2*/
              sub_4D90D0(this, *((const char **)v13 + 2)); /*0x4de5cd*/
              v15 = (int)this->vtbl->GetNiNode(this); /*0x4de5de*/
              sub_897A20(v15, 1); /*0x4de5e1*/
            }
            else
            {
              BSAnimGroupSequence_Activate((BSAnimGroupSequence *)v13, 0, 0, weight, a2, 0); /*0x4de5f2*/
              v13[0x12] = -flt_A7DEB4; /*0x4de601*/
              v21 = v13[0xB]; /*0x4de60f*/
              v16 = (NiAVObject *)this->vtbl->GetNiNode(this); /*0x4de61d*/
              NiAVObject_UpdateNiAVObject(v16, v21, 1); /*0x4de621*/
            }
          }
        }
      }
      else if ( LOBYTE(arg0) ) /*0x4de632*/
      {
        sub_4D90D0(this, "Open"); /*0x4de639*/
      }
      else
      {
        sub_4D90D0(this, "Close"); /*0x4de64a*/
      }
    }
  }
}
