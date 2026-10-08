// Footstep/creature animation event dispatcher. Handles creature anim sounds, terrain/water/armor/sneak footstep selection, positions played sound at the actor, and applies sound-system range gating.
void __cdecl SoundManager_PlayFootstepAnimEvent(TESObjectREFR *a1, unsigned int a2)
{
  bool v2; // cf
  float *v3; // eax
  bool v4; // zf
  float v5; // eax
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

  v2 = LODWORD(qword_B3BB2C[0x1B8]) < dword_B16304; /*0x6b121e*/
  v48[0] = 0; /*0x6b1224*/
  v46[0] = 0; /*0x6b1228*/
  v47 = 0; /*0x6b122c*/
  if ( v2 )
  {
    if ( !LODWORD(qword_B3BB2C[0x171]) ) /*0x6b123b*/
      qword_B3BB2C[0x171] = *(float *)&MEMORY[0xB33398]->sound; /*0x6b124c*/
    v3 = a1->vtbl->GetPos(a1); /*0x6b1264*/
    v4 = unk_B333B8 == 0; /*0x6b126c*/
    v40 = flt_B162FC; /*0x6b1273*/
    v42 = *(int *)v3; /*0x6b1279*/
    v43 = v3[1]; /*0x6b1280*/
    v44 = v3[2]; /*0x6b1287*/
    if ( !v4 ) /*0x6b128b*/
      v40 = v40 * dbl_A2FAA0; /*0x6b1297*/
    v5 = qword_B3BB2C[0x171]; /*0x6b129b*/
    v49 = *(float *)(LODWORD(qword_B3BB2C[0x171]) + 0x80); /*0x6b12a6*/
    v50 = *(float *)(LODWORD(v5) + 0x84); /*0x6b12b0*/
    v51 = *(float *)(LODWORD(v5) + 0x88); /*0x6b12ba*/
    v49 = v49 - *(float *)&v42; /*0x6b12c6*/
    v50 = v50 - v43; /*0x6b12d2*/
    v51 = v51 - v44; /*0x6b12de*/
    v45 = v51 * v51 + v49 * v49 + v50 * v50; /*0x6b1300*/
    v45 = sqrt(v45); /*0x6b130d*/
    if ( v40 >= (double)v45 && a1->vtbl->IsActor(a1) )
    {
      v6 = (Actor *)OblivionDynamicCast( /*0x6b134e*/
                      a1,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                      &Actor `RTTI Type Descriptor',
                      0);
      if ( Actor_IsCreature(v6) ) /*0x6b1355*/
      {
        v7 = a1->vtbl->GetBaseForm(a1); /*0x6b136c*/
        v8 = OblivionDynamicCast( /*0x6b137b*/
               v7,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
               &TESCreature `RTTI Type Descriptor',
               0);
        v9 = TESCreature_SelectSoundForAnimEnum(v8, a2); /*0x6b138d*/
        if ( v9 ) /*0x6b1394*/
        {
          if ( LODWORD(qword_B3BB2C[0x171]) ) /*0x6b139a*/
          {
            v10 = OSGLobals_PlaySound((int *)LODWORD(qword_B3BB2C[0x171]), *(void **)(v9 + 0xC), 0x410A, 1); /*0x6b13b3*/
            v11 = v10; /*0x6b13b8*/
            if ( v10 ) /*0x6b13bc*/
            {
              sub_6B7360(v10, *(float *)&v42, v43, v44); /*0x6b13de*/
              sub_6AC3E0((_DWORD **)LODWORD(qword_B3BB2C[0x171]), *v11, (LONG)a1); /*0x6b13ed*/
              sub_6B7280(v11, flt_A52A74); /*0x6b13fe*/
              *(float *)v46 = Rand5(flt_A57F50) + dbl_A2F928; /*0x6b141a*/
              sub_6B7310(v11, *(float *)v46); /*0x6b1425*/
              sub_6B7190(v11, 0); /*0x6b142d*/
              sub_6B73E0(v11); /*0x6b1434*/
              FormHeapFree((unsigned int)v11); /*0x6b143a*/
            }
          }
        }
        return; /*0x6b144c*/
      }
      currentInteriorCell = MEMORY[0xB333A0]->currentInteriorCell; /*0x6b1453*/
      v41 = 0; /*0x6b1458*/
      if ( !currentInteriorCell ) /*0x6b145c*/
      {
        CurrentWorldspace = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x6b145f*/
        currentInteriorCell = (TESObjectCELL *)sub_44A270( /*0x6b1482*/
                                                 (TESWorldSpace **)g_TESDataHandler,
                                                 *(float *)&v42,
                                                 v43,
                                                 CurrentWorldspace,
                                                 0);
      }
      v14 = 0; /*0x6b1486*/
      if ( !Actor_IsSwimming(v6) ) /*0x6b1488*/
      {
        if ( Actor_IsUnderwater__( /*0x6b14a3*/
               v6,
               (int)&v42,
               (ExtraDataList *)currentInteriorCell,
               Lighting30CasterDepthBias_Positive0005) )
        {
          if ( TESObjectCELL_IsInterior(currentInteriorCell) && (currentInteriorCell->members.flags0 & 2) != 0 /*0x6b14cf*/
            || !TESObjectCELL_IsInterior(currentInteriorCell) && !sub_4CA6F0((int)currentInteriorCell) )
          {
            v14 = 1; /*0x6b14d8*/
          }
        }
      }
      if ( !MEMORY[0xB333A0]->currentInteriorCell && currentInteriorCell && sub_4CE3C0(currentInteriorCell) )
      {
        v15 = (TESObjectCELL **)sub_4CE3C0(currentInteriorCell); /*0x6b150e*/
        sub_4C3030(v15, (int)v52, (float *)&v42, 1); /*0x6b1515*/
        v39 = v54[0]; /*0x6b1525*/
        v38 = v53; /*0x6b1526*/
        v16 = sub_4CE3C0(currentInteriorCell); /*0x6b1529*/
        v17 = sub_4C0190(v16, v38, v39); /*0x6b1530*/
        v45 = 0.0; /*0x6b1539*/
        v18 = (unsigned __int8 *)v17; /*0x6b153d*/
        v41 = 0; /*0x6b153f*/
        if ( v14 )
        {
          v41 = 8; /*0x6b1549*/
LABEL_38:
          sub_5E4330(v6, 5); /*0x6b15d8*/
          v20 = v19; /*0x6b15e1*/
          v21 = 0xFFFFFFFF; /*0x6b15e3*/
          if ( v19 ) /*0x6b15e8*/
            v22 = (_BYTE *)v19[2]; /*0x6b15ea*/
          else
            v22 = 0; /*0x6b15ef*/
          if ( v22 ) /*0x6b15f3*/
            v21 = (unsigned __int8)TESObjectARMO_ISHeavyArmor(v22); /*0x6b15fa*/
          IsSneaking = Actor_IsSneaking(v6); /*0x6b15ff*/
          v25 = v41; /*0x6b1604*/
          if ( v41 >= 0xF ) /*0x6b160b*/
            v25 = v41 - 0xF; /*0x6b160d*/
          switch ( v25 )
          {
            case 0:
            case 0x1E:
              v26 = IsSneaking ? 0x13 : 3;
              goto LABEL_55; /*0x6b164c*/
            case 2:
              v26 = IsSneaking ? 0x10 : 0;
              goto LABEL_55; /*0x6b162e*/
            case 4:
              v24 = IsSneaking ? 0x11 : 1;
              goto LABEL_54; /*0x6b163c*/
            case 5:
              v26 = IsSneaking ? 0x12 : 2;
              goto LABEL_55; /*0x6b1688*/
            case 8:
              v24 = IsSneaking ? 0x14 : 4;
              goto LABEL_54; /*0x6b165a*/
            case 9:
              v26 = IsSneaking ? 0x15 : 5;
              goto LABEL_55; /*0x6b166a*/
            case 0xE:
              v24 = IsSneaking ? 0x16 : 6;
              goto LABEL_54; /*0x6b1678*/
            default:
              v24 = IsSneaking ? 0x10 : 0;
LABEL_54:
              v26 = v24; /*0x6b1693*/
LABEL_55:
              if ( v21 ) /*0x6b169a*/
              {
                if ( v21 != 1 ) /*0x6b169f*/
                  goto LABEL_64; /*0x6b169f*/
                if ( !IsSneaking ) /*0x6b16a3*/
                {
                  v47 = dword_B361CC[0x1A]; /*0x6b16b2*/
                  goto LABEL_64; /*0x6b16b6*/
                }
                v27 = dword_B361CC[0x2A]; /*0x6b16a5*/
              }
              else
              {
                if ( IsSneaking ) /*0x6b16ba*/
                {
                  v24 = dword_B361CC[0x2B]; /*0x6b16bc*/
                  v47 = dword_B361CC[0x2B]; /*0x6b16c2*/
                  goto LABEL_64; /*0x6b16c6*/
                }
                v27 = dword_B361CC[0x1B]; /*0x6b16c8*/
              }
              v47 = v27; /*0x6b16cd*/
LABEL_64:
              if ( v20 ) /*0x6b16d3*/
              {
                ContainerEntryExtraData_DestroyDataTable(v20, v24); /*0x6b16d7*/
                FormHeapFree((unsigned int)v20); /*0x6b16dd*/
              }
              v28 = *(_DWORD *)(4 * v26 + 0xB36218); /*0x6b16e5*/
              if ( v28 ) /*0x6b16ee*/
              {
                if ( LODWORD(qword_B3BB2C[0x171]) ) /*0x6b16f4*/
                {
                  v48[0] = OSGLobals_PlaySound((int *)LODWORD(qword_B3BB2C[0x171]), *(void **)(v28 + 0xC), 0x410A, 1); /*0x6b170e*/
                  if ( v47 ) /*0x6b1718*/
                    v46[0] = OSGLobals_PlaySound((int *)LODWORD(qword_B3BB2C[0x171]), *(void **)(v47 + 0xC), 0x410A, 1); /*0x6b1730*/
                }
                v29 = a1 == (TESObjectREFR *)reference; /*0x6b1745*/
                v30 = v48[0]; /*0x6b1749*/
                if ( v48[0] ) /*0x6b174f*/
                {
                  v31 = v48[0]; /*0x6b1762*/
                  *(float *)v48 = v44 - dbl_A3F428; /*0x6b1764*/
                  sub_6B7360(v31, *(float *)&v42, v43, *(float *)v48); /*0x6b177f*/
                  sub_6AC3E0((_DWORD **)LODWORD(qword_B3BB2C[0x171]), *v30, (LONG)a1); /*0x6b178e*/
                  if ( v29 ) /*0x6b1795*/
                  {
                    *(double *)v48 = *(float *)GameSetting_GetSafeFloatPointer(&dword_B162F4); /*0x6b17a3*/
                    v32 = Rand5(kFaceEarNormalMatchRadius); /*0x6b17b1*/
                    v33 = *(double *)v48 - v32; /*0x6b17b6*/
                  }
                  else
                  {
                    v33 = 1.0 - Rand5(kFaceEarNormalMatchRadius); /*0x6b17cd*/
                  }
                  *(float *)v48 = v33; /*0x6b17cf*/
                  sub_6B7280(v30, *(float *)v48); /*0x6b17dc*/
                  v34 = v46[0]; /*0x6b17e1*/
                  if ( v46[0] ) /*0x6b17e7*/
                  {
                    v35 = v46[0]; /*0x6b17fa*/
                    *(float *)v46 = v44 - dbl_A3F428; /*0x6b17fc*/
                    sub_6B7360(v35, *(float *)&v42, v43, *(float *)v46); /*0x6b1817*/
                    sub_6AC3E0((_DWORD **)LODWORD(qword_B3BB2C[0x171]), *v34, (LONG)a1); /*0x6b1826*/
                    if ( v29 ) /*0x6b182d*/
                    {
                      *(double *)v46 = *(float *)GameSetting_GetSafeFloatPointer(&dword_B162F4); /*0x6b183b*/
                      v36 = Rand5(kFaceEarNormalMatchRadius); /*0x6b1849*/
                      v37 = *(double *)v46 - v36; /*0x6b184e*/
                    }
                    else
                    {
                      v37 = 1.0 - Rand5(kFaceEarNormalMatchRadius); /*0x6b1865*/
                    }
                    *(float *)v46 = v37; /*0x6b1867*/
                    sub_6B7280(v34, *(float *)v46); /*0x6b1874*/
                    sub_6B7190(v34, 0); /*0x6b187d*/
                    sub_6B73E0(v34); /*0x6b1884*/
                    FormHeapFree((unsigned int)v34); /*0x6b188a*/
                  }
                  sub_6B7190(v30, 0); /*0x6b1896*/
                  sub_6B73E0(v30); /*0x6b189d*/
                  FormHeapFree((unsigned int)v30); /*0x6b18a3*/
                }
              }
              break; /*0x6b18a3*/
          }
          return; /*0x6b18a3*/
        }
        if ( !v6 /*0x6b1575*/
          || !MobileObject_GetCharProxy((MobileObject *)v6)
          || *((_DWORD *)MobileObject_GetCharProxy((MobileObject *)v6) + 0x85) == 0x1F )
        {
          if ( v18 ) /*0x6b1579*/
          {
            v41 = sub_4C8D10(v18); /*0x6b1586*/
            if ( sub_4D1E10(currentInteriorCell, (float *)&v42, &v45) ) /*0x6b1592*/
              v44 = v45; /*0x6b159f*/
          }
          goto LABEL_38; /*0x6b15a3*/
        }
      }
      else
      {
        if ( v14 ) /*0x6b15a7*/
        {
          v41 = 8; /*0x6b15a9*/
          goto LABEL_38; /*0x6b15b1*/
        }
        if ( !v6 || !MobileObject_GetCharProxy((MobileObject *)v6) ) /*0x6b15b9*/
          goto LABEL_38; /*0x6b15c0*/
      }
      v41 = *((_DWORD *)MobileObject_GetCharProxy((MobileObject *)v6) + 0x85); /*0x6b15d4*/
      goto LABEL_38; /*0x6b15d4*/
    }
  }
}
