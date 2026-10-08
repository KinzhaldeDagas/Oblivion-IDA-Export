void __thiscall sub_4E2F70(void (__thiscall *this)(NiRefObject *this, bool freeThis), char a2)
{
  int v3; // ebp
  int v4; // ebx
  NiObject *v5; // edi
  int v6; // eax
  BSExtraDataVtbl *LastFinishedSequence; // edx
  unsigned int v8; // eax
  int v9; // esi
  int v10; // esi
  int v11; // esi
  NiRTTI *v12; // eax
  char v13; // al
  NiControllerManager *v14; // eax
  int v15; // eax
  NiObject *v16; // esi
  int *vftable; // [esp+20h] [ebp-10h]
  BSExtraDataVtbl *v18; // [esp+28h] [ebp-8h]

  v3 = *((_DWORD *)this + 0xF); /*0x4e2f78*/
  v4 = 0; /*0x4e2f7c*/
  v5 = 0; /*0x4e2f7e*/
  if ( v3 ) /*0x4e2f8a*/
  {
    if ( *(_WORD *)(v3 + 0xB6) ) /*0x4e2f90*/
    {
      v6 = **(_DWORD **)(v3 + 0xB0); /*0x4e2fa3*/
      if ( v6 ) /*0x4e2fa7*/
      {
        if ( *(_DWORD *)(v6 + 0xC) ) /*0x4e2fad*/
        {
          v5 = NiRTTI_Cast((BSStringT *)&stru_B3CAC0, *(NiObject **)(v6 + 0xC)); /*0x4e2fc4*/
          if ( v5 ) /*0x4e2fcb*/
          {
            LastFinishedSequence = ExtraDataList_GetLastFinishedSequence((ExtraDataList *)((char *)this + 0x44)); /*0x4e2fd9*/
            v18 = LastFinishedSequence; /*0x4e2fdd*/
            if ( LastFinishedSequence ) /*0x4e2fe1*/
            {
              v8 = 0; /*0x4e2feb*/
              if ( HIWORD(v5[8].members.m_uiRefCount) ) /*0x4e2fe7*/
              {
                vftable = (int *)v5[8].__vftable; /*0x4e2ff8*/
                do /*0x4e3004*/
                {
                  v9 = *vftable; /*0x4e3004*/
                  if ( *vftable ) /*0x4e3004*/
                  {
                    if ( !strcmp(*(const char **)(v9 + 8), (const char *)LastFinishedSequence) ) /*0x4e3037*/
                    {
                      NiControllerManager_DeactivateAllSequences((NiControllerManager *)v5, 0.0); /*0x4e305b*/
                      LOWORD(v5[1].__vftable) |= 8u; /*0x4e3060*/
                      if ( !*(_DWORD *)(v9 + 0x44) ) /*0x4e3065*/
                        NiControllerSequence_Activate((NiControllerSequence *)v9, 0, 0, 1.0, 0.0, 0, 0); /*0x4e3087*/
                      *(float *)(v9 + 0x48) = *(float *)(v9 + 0x30); /*0x4e3091*/
                      NiAVObject_UpdateNiAVObject((NiAVObject *)v3, *(float *)(v9 + 0x30), 1); /*0x4e309d*/
                      sub_4E0D90((ExtraDataList **)this, v9); /*0x4e30a7*/
                      NiControllerSequence_Deactivate((NiControllerSequence *)v9, 0.0, 0); /*0x4e30b6*/
                      LOWORD(v5[1].__vftable) &= ~8u; /*0x4e30bb*/
                      v4 = v9; /*0x4e30c1*/
                      break; /*0x4e30c1*/
                    }
                    v4 = 0; /*0x4e3039*/
                    LastFinishedSequence = v18; /*0x4e303d*/
                  }
                  ++vftable; /*0x4e3045*/
                  ++v8; /*0x4e304a*/
                }
                while ( v8 < HIWORD(v5[8].members.m_uiRefCount) ); /*0x4e3004*/
              }
            }
          }
        }
      }
    }
  }
  if ( !a2 )
  {
    if ( v5 ) /*0x4e30ce*/
      NiControllerManager_DeactivateAllSequences((NiControllerManager *)v5, 0.0); /*0x4e30d8*/
    sub_4DA8F0((int)v5, (NiAVObject *)v3, kTerrainLODQuadRayDirectionZ); /*0x4e30e9*/
    if ( v3 && (v10 = *(_DWORD *)(v3 + 0xC)) != 0 )
    {
      v12 = (NiRTTI *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v10 + 4))(*(_DWORD *)(v3 + 0xC)); /*0x4e3107*/
      if ( v12 ) /*0x4e310b*/
      {
        while ( v12 != &stru_B3CAC0 ) /*0x4e3115*/
        {
          v12 = v12->parent; /*0x4e3117*/
          if ( !v12 ) /*0x4e311c*/
            goto LABEL_26; /*0x4e311c*/
        }
        v13 = 1; /*0x4e3170*/
      }
      else
      {
LABEL_26:
        v13 = 0; /*0x4e311e*/
      }
      v14 = v13 != 0 ? (NiControllerManager *)v10 : 0;
      v11 = (int)v14; /*0x4e3126*/
      if ( v14 ) /*0x4e3128*/
        NiControllerManager_DeactivateAllSequences(v14, 0.0); /*0x4e3132*/
    }
    else
    {
      v11 = 0; /*0x4e30fc*/
    }
    sub_4DA8F0(v11, (NiAVObject *)v3, kTerrainLODQuadRayDirectionZ); /*0x4e3143*/
  }
  if ( v4 ) /*0x4e314d*/
  {
    if ( sub_480820((_DWORD *)v3) ) /*0x4e3150*/
    {
      if ( !*(_DWORD *)(v4 + 0x44) ) /*0x4e315c*/
      {
        if ( *(_WORD *)(v3 + 0xB6) ) /*0x4e3162*/
          v15 = **(_DWORD **)(v3 + 0xB0); /*0x4e317a*/
        else
          v15 = 0; /*0x4e316c*/
        v16 = NiRTTI_Cast((BSStringT *)&stru_B3CAC0, *(NiObject **)(v15 + 0xC)); /*0x4e319e*/
        NiControllerSequence_Activate((NiControllerSequence *)v4, 0, 0, 1.0, 0.0, 0, 0); /*0x4e31a7*/
        LOWORD(v16[1].__vftable) |= 8u; /*0x4e31ac*/
        NiAVObject_UpdateNiAVObject((NiAVObject *)v3, *(float *)(v4 + 0x30), 1); /*0x4e31bc*/
        sub_480930((_DWORD *)v3); /*0x4e31c2*/
      }
    }
  }
}
