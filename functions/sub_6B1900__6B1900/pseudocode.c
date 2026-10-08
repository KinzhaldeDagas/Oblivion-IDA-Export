void __usercall sub_6B1900(double a1@<st1>, double a2@<st0>, TESObjectREFR *a3, signed int a4)
{
  int v4; // ebp
  signed int v5; // ebx
  int *v6; // eax
  TES *v7; // ecx
  TESObjectREFRVtbl *vtbl; // edx
  TESObjectCELL *currentInteriorCell; // esi
  TESObjectREFR *v10; // eax
  TESObjectREFR *v11; // eax
  TESWorldSpace *CurrentWorldspace; // eax
  int *v13; // eax
  int *v14; // esi
  int v15; // esi
  unsigned int *v16; // eax
  int v17; // edx
  unsigned int *v18; // ebx
  _BYTE *v19; // ecx
  unsigned int v20; // eax
  int *v21; // eax
  int *v22; // esi
  int *v23; // eax
  int *v24; // esi
  float v25; // [esp+20h] [ebp-10h]
  float v26; // [esp+20h] [ebp-10h]
  float v27; // [esp+20h] [ebp-10h]
  int v28; // [esp+24h] [ebp-Ch] BYREF
  float v29; // [esp+28h] [ebp-8h]
  float v30; // [esp+2Ch] [ebp-4h]

  v4 = 0; /*0x6b1909*/
  if ( LODWORD(qword_B3BB2C[0x1B8]) < dword_B16304 ) /*0x6b1911*/
  {
    v5 = a4; /*0x6b1918*/
    if ( a4 >= 0xF ) /*0x6b191f*/
      v5 = a4 - 0xF; /*0x6b1921*/
    if ( !LODWORD(qword_B3BB2C[0x171]) ) /*0x6b1924*/
      qword_B3BB2C[0x171] = *(float *)&MEMORY[0xB33398]->sound; /*0x6b1935*/
    v6 = (int *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))a3->vtbl->GetPos)( /*0x6b194b*/
                  a3,
                  a2,
                  a1);
    v28 = *v6; /*0x6b194f*/
    v7 = MEMORY[0xB333A0]; /*0x6b1956*/
    v29 = *((float *)v6 + 1); /*0x6b195c*/
    vtbl = a3->vtbl; /*0x6b1963*/
    v30 = *((float *)v6 + 2); /*0x6b1965*/
    currentInteriorCell = v7->currentInteriorCell; /*0x6b1969*/
    if ( vtbl->IsActor(a3) ) /*0x6b1974*/
    {
      if ( !((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))a3->vtbl[2].super.Unk_0C)( /*0x6b1990*/
              a3,
              a2,
              a1)
        || sub_5E3290(a3) )
      {
        if ( sub_5E3290(a3) ) /*0x6b19d1*/
        {
          SoundManager_PlayFootstepAnimEvent(a3, 0); /*0x6b19dd*/
          SoundManager_PlayFootstepAnimEvent(a3, 1u); /*0x6b19e5*/
        }
        else
        {
          if ( !currentInteriorCell ) /*0x6b19f7*/
          {
            CurrentWorldspace = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x6b1a00*/
            currentInteriorCell = (TESObjectCELL *)sub_44A270( /*0x6b1a23*/
                                                     (TESWorldSpace **)g_TESDataHandler,
                                                     *(float *)&v28,
                                                     v29,
                                                     CurrentWorldspace,
                                                     0);
          }
          if ( a3->vtbl->IsActor(a3) /*0x6b1a96*/
            && currentInteriorCell
            && (TESObjectCELL_IsInterior(currentInteriorCell) && (currentInteriorCell->members.flags0 & 2) != 0
             || !TESObjectCELL_IsInterior(currentInteriorCell))
            && !Actor_IsSwimming(a3)
            && Actor_IsUnderwater__(
                 a3,
                 (int)&v28,
                 (ExtraDataList *)currentInteriorCell,
                 Lighting30CasterDepthBias_Positive0005)
            && !sub_4CA6F0((int)currentInteriorCell) )
          {
            v13 = PlaySound___((int *)LODWORD(qword_B3BB2C[0x171]), "FSTWaterLand", 0x410A, 1); /*0x6b1ab5*/
            v14 = v13; /*0x6b1aba*/
            if ( v13 ) /*0x6b1abe*/
            {
              sub_6B7360(v13, *(float *)&v28, v29, v30); /*0x6b1ae0*/
              sub_6AC3E0((_DWORD **)LODWORD(qword_B3BB2C[0x171]), *v14, (LONG)a3); /*0x6b1aef*/
              v25 = dbl_A77838 - Rand5(kFaceEarNormalMatchRadius); /*0x6b1b0b*/
              sub_6B7280(v14, v25); /*0x6b1b16*/
              sub_6B7190(v14, 0); /*0x6b1b1f*/
              sub_6B73E0(v14); /*0x6b1b26*/
              FormHeapFree((unsigned int)v14); /*0x6b1b2c*/
            }
          }
          else
          {
            switch ( v5 ) /*0x6b1b48*/
            {
              case 0: /*0x6b1b48*/
              case 0x1E: /*0x6b1b48*/
                v15 = dword_B361CC[0x1F]; /*0x6b1b5f*/
                break; /*0x6b1b65*/
              case 4: /*0x6b1b48*/
                v15 = dword_B361CC[0x1D]; /*0x6b1b4f*/
                break; /*0x6b1b55*/
              case 5: /*0x6b1b48*/
                v15 = dword_B361CC[0x1E]; /*0x6b1b57*/
                break; /*0x6b1b5d*/
              case 8: /*0x6b1b48*/
                v15 = dword_B361CC[0x20]; /*0x6b1b67*/
                break; /*0x6b1b6d*/
              case 9: /*0x6b1b48*/
                v15 = dword_B361CC[0x21]; /*0x6b1b6f*/
                break; /*0x6b1b75*/
              default:
                v15 = dword_B361CC[0x1C]; /*0x6b1b77*/
                break; /*0x6b1b77*/
            }
            sub_5E4330(a3, 5); /*0x6b1b81*/
            v18 = v16; /*0x6b1b86*/
            if ( v16 ) /*0x6b1b8a*/
              v19 = (_BYTE *)v16[2]; /*0x6b1b8c*/
            else
              v19 = 0; /*0x6b1b91*/
            v20 = 0xFFFFFFFF; /*0x6b1b93*/
            if ( v19 ) /*0x6b1b98*/
              v20 = (unsigned __int8)TESObjectARMO_ISHeavyArmor(v19); /*0x6b1b9f*/
            if ( v20 ) /*0x6b1ba5*/
            {
              if ( v20 == 1 ) /*0x6b1baa*/
                v4 = dword_B361CC[0x1A]; /*0x6b1bac*/
            }
            else
            {
              v4 = dword_B361CC[0x1B]; /*0x6b1bb4*/
            }
            if ( v15 ) /*0x6b1bbc*/
            {
              v21 = OSGLobals_PlaySound((int *)LODWORD(qword_B3BB2C[0x171]), *(void **)(v15 + 0xC), 0x410A, 1); /*0x6b1bd3*/
              v22 = v21; /*0x6b1bd8*/
              if ( v21 ) /*0x6b1bdc*/
              {
                sub_6B7360(v21, *(float *)&v28, v29, v30); /*0x6b1bfa*/
                sub_6AC3E0((_DWORD **)LODWORD(qword_B3BB2C[0x171]), *v22, (LONG)a3); /*0x6b1c09*/
                v26 = dbl_A77838 - Rand5(kFaceEarNormalMatchRadius); /*0x6b1c25*/
                sub_6B7280(v22, v26); /*0x6b1c30*/
                sub_6B7190(v22, 0); /*0x6b1c39*/
                sub_6B73E0(v22); /*0x6b1c40*/
                FormHeapFree((unsigned int)v22); /*0x6b1c46*/
              }
            }
            if ( v4 ) /*0x6b1c50*/
            {
              v23 = OSGLobals_PlaySound((int *)LODWORD(qword_B3BB2C[0x171]), *(void **)(v4 + 0xC), 0x410A, 1); /*0x6b1c67*/
              v24 = v23; /*0x6b1c6c*/
              if ( v23 ) /*0x6b1c70*/
              {
                sub_6B7360(v23, *(float *)&v28, v29, v30); /*0x6b1c8e*/
                sub_6AC3E0((_DWORD **)LODWORD(qword_B3BB2C[0x171]), *v24, (LONG)a3); /*0x6b1c9d*/
                v27 = dbl_A77838 - Rand5(kFaceEarNormalMatchRadius); /*0x6b1cb9*/
                sub_6B7280(v24, v27); /*0x6b1cc4*/
                sub_6B7190(v24, 0); /*0x6b1ccd*/
                sub_6B73E0(v24); /*0x6b1cd4*/
                FormHeapFree((unsigned int)v24); /*0x6b1cda*/
              }
            }
            if ( v18 ) /*0x6b1ce4*/
            {
              ContainerEntryExtraData_DestroyDataTable(v18, v17); /*0x6b1ce8*/
              FormHeapFree((unsigned int)v18); /*0x6b1cee*/
            }
          }
        }
      }
      else
      {
        v10 = (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *))a3->vtbl[2].super.Unk_0C)(a3); /*0x6b19a5*/
        SoundManager_PlayFootstepAnimEvent(v10, 0); /*0x6b19a8*/
        v11 = (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *))a3->vtbl[2].super.Unk_0C)(a3); /*0x6b19bc*/
        SoundManager_PlayFootstepAnimEvent(v11, 1u); /*0x6b19bf*/
      }
    }
  }
}
