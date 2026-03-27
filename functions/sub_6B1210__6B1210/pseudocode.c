void __cdecl sub_6B1210(TESObjectREFR *a1, unsigned int a2)
{
  bool v2; // cf
  float *v3; // eax
  bool v4; // zf
  int v5; // eax
  Actor *v6; // edi
  TESForm *v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  int *v10; // eax
  int *v11; // esi
  TESObjectCELL *currentInteriorCell; // esi
  TESWorldSpace *CurrentWorldspace; // eax
  char v14; // bl
  TESObjectCELL **v15; // eax
  TESObjectLAND *v16; // eax
  int v17; // eax
  unsigned __int8 *v18; // ebp
  unsigned int *v19; // eax
  unsigned int *v20; // ebp
  unsigned int v21; // ebx
  _BYTE *v22; // ecx
  bool IsSneaking; // al
  int v24; // edx
  int v25; // ecx
  int v26; // esi
  int v27; // eax
  int v28; // eax
  bool v29; // bl
  int *v30; // edi
  int *v31; // ecx
  double v32; // st7
  double v33; // st7
  int *v34; // esi
  int *v35; // ecx
  double v36; // st7
  double v37; // st7
  float v38; // [esp+8h] [ebp-A0h]
  unsigned __int16 v39; // [esp+Ch] [ebp-9Ch]
  float v40; // [esp+20h] [ebp-88h]
  int v41; // [esp+20h] [ebp-88h]
  int v42; // [esp+28h] [ebp-80h] BYREF
  float v43; // [esp+2Ch] [ebp-7Ch]
  float v44; // [esp+30h] [ebp-78h]
  float v45; // [esp+34h] [ebp-74h] BYREF
  _DWORD *v46[2]; // [esp+38h] [ebp-70h]
  int v47; // [esp+40h] [ebp-68h]
  _DWORD *v48[2]; // [esp+44h] [ebp-64h]
  float v49; // [esp+4Ch] [ebp-5Ch]
  float v50; // [esp+50h] [ebp-58h]
  float v51; // [esp+54h] [ebp-54h]
  _BYTE v52[24]; // [esp+58h] [ebp-50h] BYREF
  float v53; // [esp+70h] [ebp-38h]
  __int16 v54[10]; // [esp+94h] [ebp-14h]

  v2 = dword_B3C20C < (unsigned int)dword_B16304;
  v48[0] = 0;
  v46[0] = 0;
  v47 = 0;
  if ( v2 )
  {
    if ( !dword_B3C0F0 )
      dword_B3C0F0 = (int)OSGlobals->sound;
    v3 = a1->vtbl->GetPos(a1);
    v4 = byte_B333B8 == 0;
    v40 = flt_B162FC;
    v42 = *(int *)v3;
    v43 = v3[1];
    v44 = v3[2];
    if ( !v4 )
      v40 = v40 * dbl_A2FAA0;
    v5 = dword_B3C0F0;
    v49 = *(float *)(dword_B3C0F0 + 0x80);
    v50 = *(float *)(v5 + 0x84);
    v51 = *(float *)(v5 + 0x88);
    v49 = v49 - *(float *)&v42;
    v50 = v50 - v43;
    v51 = v51 - v44;
    v45 = v51 * v51 + v49 * v49 + v50 * v50;
    v45 = sqrt(v45);
    if ( v40 >= (double)v45 && a1->vtbl->IsActor(a1) )
    {
      v6 = (Actor *)OblivionDynamicCast(
                      a1,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                      &Actor `RTTI Type Descriptor',
                      0);
      if ( Actor_IsCreature(v6) )
      {
        v7 = a1->vtbl->GetBaseForm(a1);
        v8 = OblivionDynamicCast(
               v7,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
               &TESCreature `RTTI Type Descriptor',
               0);
        v9 = sub_51CEC0(v8, a2);
        if ( v9 )
        {
          if ( dword_B3C0F0 )
          {
            v10 = OSGLobals_PlaySound((int *)dword_B3C0F0, *(void **)(v9 + 0xC), 0x410A, 1);
            v11 = v10;
            if ( v10 )
            {
              sub_6B7360(v10, *(float *)&v42, v43, v44);
              sub_6AC3E0((_DWORD **)dword_B3C0F0, *v11, (LONG)a1);
              sub_6B7280(v11, flt_A52A74);
              *(float *)v46 = Rand5(flt_A57F50) + dbl_A2F928;
              sub_6B7310(v11, *(float *)v46);
              sub_6B7190(v11, 0);
              sub_6B73E0(v11);
              FormHeapFree((unsigned int)v11);
            }
          }
        }
        return;
      }
      currentInteriorCell = TES->currentInteriorCell;
      v41 = 0;
      if ( !currentInteriorCell )
      {
        CurrentWorldspace = TES::GetCurrentWorldspace(TES);
        currentInteriorCell = (TESObjectCELL *)sub_44A270(
                                                 (TESWorldSpace **)TESDataHandler,
                                                 *(float *)&v42,
                                                 v43,
                                                 CurrentWorldspace,
                                                 0);
      }
      v14 = 0;
      if ( !Actor_IsSwimming(v6) )
      {
        if ( Actor_IsUnderwater__(v6, (int)&v42, (ExtraDataList *)currentInteriorCell, flt_A77830) )
        {
          if ( TESObjectCELL_IsInterior(currentInteriorCell) && (currentInteriorCell->members.flags0 & 2) != 0
            || !TESObjectCELL_IsInterior(currentInteriorCell) && !sub_4CA6F0((int)currentInteriorCell) )
          {
            v14 = 1;
          }
        }
      }
      if ( !TES->currentInteriorCell && currentInteriorCell && sub_4CE3C0(currentInteriorCell) )
      {
        v15 = (TESObjectCELL **)sub_4CE3C0(currentInteriorCell);
        sub_4C3030(v15, (int)v52, (float *)&v42, 1);
        v39 = v54[0];
        v38 = v53;
        v16 = sub_4CE3C0(currentInteriorCell);
        v17 = sub_4C0190(v16, v38, v39);
        v45 = 0.0;
        v18 = (unsigned __int8 *)v17;
        v41 = 0;
        if ( v14 )
        {
          v41 = 8;
LABEL_38:
          sub_5E4330(v6, 5);
          v20 = v19;
          v21 = 0xFFFFFFFF;
          if ( v19 )
            v22 = (_BYTE *)v19[2];
          else
            v22 = 0;
          if ( v22 )
            v21 = (unsigned __int8)TESObjectARMO_ISHeavyArmor(v22);
          IsSneaking = Actor_IsSneaking(v6);
          v25 = v41;
          if ( v41 >= 0xF )
            v25 = v41 - 0xF;
          switch ( v25 )
          {
            case 0:
            case 0x1E:
              v26 = IsSneaking ? 0x13 : 3;
              goto LABEL_55;
            case 2:
              v26 = IsSneaking ? 0x10 : 0;
              goto LABEL_55;
            case 4:
              v24 = IsSneaking ? 0x11 : 1;
              goto LABEL_54;
            case 5:
              v26 = IsSneaking ? 0x12 : 2;
              goto LABEL_55;
            case 8:
              v24 = IsSneaking ? 0x14 : 4;
              goto LABEL_54;
            case 9:
              v26 = IsSneaking ? 0x15 : 5;
              goto LABEL_55;
            case 0xE:
              v24 = IsSneaking ? 0x16 : 6;
              goto LABEL_54;
            default:
              v24 = IsSneaking ? 0x10 : 0;
LABEL_54:
              v26 = v24;
LABEL_55:
              if ( v21 )
              {
                if ( v21 != 1 )
                  goto LABEL_64;
                if ( !IsSneaking )
                {
                  v47 = (int)*(&stru_B36208 + 0xB);
                  goto LABEL_64;
                }
                v27 = (int)*(&stru_B36208 + 0x1B);
              }
              else
              {
                if ( IsSneaking )
                {
                  v24 = (int)*(&stru_B36208 + 0x1C);
                  v47 = (int)*(&stru_B36208 + 0x1C);
                  goto LABEL_64;
                }
                v27 = (int)*(&stru_B36208 + 0xC);
              }
              v47 = v27;
LABEL_64:
              if ( v20 )
              {
                ContainerEntryExtraData_DestroyDataTable(v20, v24);
                FormHeapFree((unsigned int)v20);
              }
              v28 = *(_DWORD *)(4 * v26 + 0xB36218);
              if ( v28 )
              {
                if ( dword_B3C0F0 )
                {
                  v48[0] = OSGLobals_PlaySound((int *)dword_B3C0F0, *(void **)(v28 + 0xC), 0x410A, 1);
                  if ( v47 )
                    v46[0] = OSGLobals_PlaySound((int *)dword_B3C0F0, *(void **)(v47 + 0xC), 0x410A, 1);
                }
                v29 = a1 == (TESObjectREFR *)TESDataHandler_g_PlayerRef;
                v30 = v48[0];
                if ( v48[0] )
                {
                  v31 = v48[0];
                  *(float *)v48 = v44 - dbl_A3F428;
                  sub_6B7360(v31, *(float *)&v42, v43, *(float *)v48);
                  sub_6AC3E0((_DWORD **)dword_B3C0F0, *v30, (LONG)a1);
                  if ( v29 )
                  {
                    *(double *)v48 = *(float *)GameSetting_GetSafeFloatPointer(&dword_B162F4);
                    v32 = Rand5(flt_A2FAAC);
                    v33 = *(double *)v48 - v32;
                  }
                  else
                  {
                    v33 = 1.0 - Rand5(flt_A2FAAC);
                  }
                  *(float *)v48 = v33;
                  sub_6B7280(v30, *(float *)v48);
                  v34 = v46[0];
                  if ( v46[0] )
                  {
                    v35 = v46[0];
                    *(float *)v46 = v44 - dbl_A3F428;
                    sub_6B7360(v35, *(float *)&v42, v43, *(float *)v46);
                    sub_6AC3E0((_DWORD **)dword_B3C0F0, *v34, (LONG)a1);
                    if ( v29 )
                    {
                      *(double *)v46 = *(float *)GameSetting_GetSafeFloatPointer(&dword_B162F4);
                      v36 = Rand5(flt_A2FAAC);
                      v37 = *(double *)v46 - v36;
                    }
                    else
                    {
                      v37 = 1.0 - Rand5(flt_A2FAAC);
                    }
                    *(float *)v46 = v37;
                    sub_6B7280(v34, *(float *)v46);
                    sub_6B7190(v34, 0);
                    sub_6B73E0(v34);
                    FormHeapFree((unsigned int)v34);
                  }
                  sub_6B7190(v30, 0);
                  sub_6B73E0(v30);
                  FormHeapFree((unsigned int)v30);
                }
              }
              break;
          }
          return;
        }
        if ( !v6
          || !MobileObject_GetCharProxy((MobileObject *)v6)
          || *((_DWORD *)MobileObject_GetCharProxy((MobileObject *)v6) + 0x85) == 0x1F )
        {
          if ( v18 )
          {
            v41 = sub_4C8D10(v18);
            if ( sub_4D1E10(currentInteriorCell, (float *)&v42, &v45) )
              v44 = v45;
          }
          goto LABEL_38;
        }
      }
      else
      {
        if ( v14 )
        {
          v41 = 8;
          goto LABEL_38;
        }
        if ( !v6 || !MobileObject_GetCharProxy((MobileObject *)v6) )
          goto LABEL_38;
      }
      v41 = *((_DWORD *)MobileObject_GetCharProxy((MobileObject *)v6) + 0x85);
      goto LABEL_38;
    }
  }
}
