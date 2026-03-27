void __usercall sub_6B1900(double a1@<st1>, double a2@<st0>, TESObjectREFR *a3, signed int a4)
{
  int v5; // ebp
  signed int v6; // ebx
  int *v7; // eax
  TES *v8; // ecx
  TESObjectREFRVtbl *vtbl; // edx
  TESObjectCELL *currentInteriorCell; // esi
  TESObjectREFR *v11; // eax
  TESObjectREFR *v12; // eax
  TESWorldSpace *CurrentWorldspace; // eax
  int *v14; // eax
  int *v15; // esi
  int v16; // esi
  unsigned int *v17; // eax
  int v18; // edx
  unsigned int *v19; // ebx
  _BYTE *v20; // ecx
  unsigned int v21; // eax
  int *v22; // eax
  int *v23; // esi
  int *v24; // eax
  int *v25; // esi
  float v26; // [esp+20h] [ebp-10h]
  float v27; // [esp+20h] [ebp-10h]
  float v28; // [esp+20h] [ebp-10h]
  int v29; // [esp+24h] [ebp-Ch] BYREF
  float v30; // [esp+28h] [ebp-8h]
  float v31; // [esp+2Ch] [ebp-4h]

  v5 = 0;
  if ( dword_B3C20C < (unsigned int)dword_B16304 )
  {
    v6 = a4;
    if ( a4 >= 0xF )
      v6 = a4 - 0xF;
    if ( !dword_B3C0F0 )
      dword_B3C0F0 = (int)OSGlobals->sound;
    v7 = (int *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))a3->vtbl->GetPos)(
                  a3,
                  a2,
                  a1);
    v29 = *v7;
    v8 = TES;
    v30 = *((float *)v7 + 1);
    vtbl = a3->vtbl;
    v31 = *((float *)v7 + 2);
    currentInteriorCell = v8->currentInteriorCell;
    if ( vtbl->IsActor(a3) )
    {
      if ( !((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))a3->vtbl[2].super.Unk_0C)(
              a3,
              a2,
              a1)
        || sub_5E3290(a3) )
      {
        if ( sub_5E3290(a3) )
        {
          sub_6B1210(a3, 0);
          sub_6B1210(a3, 1u);
        }
        else
        {
          if ( !currentInteriorCell )
          {
            CurrentWorldspace = TES::GetCurrentWorldspace(TES);
            currentInteriorCell = (TESObjectCELL *)sub_44A270(
                                                     (TESWorldSpace **)TESDataHandler,
                                                     *(float *)&v29,
                                                     v30,
                                                     CurrentWorldspace,
                                                     0);
          }
          if ( a3->vtbl->IsActor(a3)
            && currentInteriorCell
            && (TESObjectCELL_IsInterior(currentInteriorCell) && (currentInteriorCell->members.flags0 & 2) != 0
             || !TESObjectCELL_IsInterior(currentInteriorCell))
            && !Actor_IsSwimming(a3)
            && Actor_IsUnderwater__(a3, (int)&v29, (ExtraDataList *)currentInteriorCell, flt_A77830)
            && !sub_4CA6F0((int)currentInteriorCell) )
          {
            v14 = PlaySound___((int *)dword_B3C0F0, "FSTWaterLand", 0x410A, 1);
            v15 = v14;
            if ( v14 )
            {
              sub_6B7360(v14, *(float *)&v29, v30, v31);
              sub_6AC3E0((_DWORD **)dword_B3C0F0, *v15, (LONG)a3);
              v26 = dbl_A77838 - Rand5(flt_A2FAAC);
              sub_6B7280(v15, v26);
              sub_6B7190(v15, 0);
              sub_6B73E0(v15);
              FormHeapFree((unsigned int)v15);
            }
          }
          else
          {
            switch ( v6 )
            {
              case 0:
              case 0x1E:
                v16 = (int)*(&stru_B36208 + 0x10);
                break;
              case 4:
                v16 = (int)*(&stru_B36208 + 0xE);
                break;
              case 5:
                v16 = (int)*(&stru_B36208 + 0xF);
                break;
              case 8:
                v16 = (int)*(&stru_B36208 + 0x11);
                break;
              case 9:
                v16 = (int)*(&stru_B36208 + 0x12);
                break;
              default:
                v16 = (int)*(&stru_B36208 + 0xD);
                break;
            }
            sub_5E4330(a3, 5);
            v19 = v17;
            if ( v17 )
              v20 = (_BYTE *)v17[2];
            else
              v20 = 0;
            v21 = 0xFFFFFFFF;
            if ( v20 )
              v21 = (unsigned __int8)TESObjectARMO_ISHeavyArmor(v20);
            if ( v21 )
            {
              if ( v21 == 1 )
                v5 = (int)*(&stru_B36208 + 0xB);
            }
            else
            {
              v5 = (int)*(&stru_B36208 + 0xC);
            }
            if ( v16 )
            {
              v22 = OSGLobals_PlaySound((int *)dword_B3C0F0, *(void **)(v16 + 0xC), 0x410A, 1);
              v23 = v22;
              if ( v22 )
              {
                sub_6B7360(v22, *(float *)&v29, v30, v31);
                sub_6AC3E0((_DWORD **)dword_B3C0F0, *v23, (LONG)a3);
                v27 = dbl_A77838 - Rand5(flt_A2FAAC);
                sub_6B7280(v23, v27);
                sub_6B7190(v23, 0);
                sub_6B73E0(v23);
                FormHeapFree((unsigned int)v23);
              }
            }
            if ( v5 )
            {
              v24 = OSGLobals_PlaySound((int *)dword_B3C0F0, *(void **)(v5 + 0xC), 0x410A, 1);
              v25 = v24;
              if ( v24 )
              {
                sub_6B7360(v24, *(float *)&v29, v30, v31);
                sub_6AC3E0((_DWORD **)dword_B3C0F0, *v25, (LONG)a3);
                v28 = dbl_A77838 - Rand5(flt_A2FAAC);
                sub_6B7280(v25, v28);
                sub_6B7190(v25, 0);
                sub_6B73E0(v25);
                FormHeapFree((unsigned int)v25);
              }
            }
            if ( v19 )
            {
              ContainerEntryExtraData_DestroyDataTable(v19, v18);
              FormHeapFree((unsigned int)v19);
            }
          }
        }
      }
      else
      {
        v11 = (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *))a3->vtbl[2].super.Unk_0C)(a3);
        sub_6B1210(v11, 0);
        v12 = (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *))a3->vtbl[2].super.Unk_0C)(a3);
        sub_6B1210(v12, 1u);
      }
    }
  }
}
