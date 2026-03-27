void __userpurge sub_6189E0(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  int v5; // eax
  int v6; // eax
  _WORD *v7; // eax
  __int16 AnimGroupFromField8Value; // ax
  _DWORD *v9; // eax
  _DWORD **v10; // eax
  _DWORD **v11; // eax
  _DWORD **v12; // eax
  int CurrentAction; // eax
  int v14; // eax
  _DWORD *v15; // eax
  int v16; // edi
  void **v17; // eax
  char v18; // dl
  int v19; // ebp
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  void *v25; // edi
  int v26; // eax
  int *v27; // eax
  int *v28; // ecx
  int v29; // eax
  int *v30; // edi
  int v31; // ebp
  int *v32; // eax
  double v33; // st7
  char v34; // bl
  double v35; // st7
  double v36; // st6
  double v37; // st5
  double v38; // rt1
  double v39; // st5
  int v40; // edi
  double v41; // st7
  double v42; // st5
  int v43; // ebp
  double v44; // st6
  double v45; // st7
  int v46; // edi
  double v47; // st6
  double v48; // st7
  int v49; // eax
  double v50; // st7
  double (__thiscall **v51)(int, int, _DWORD, _DWORD); // edi
  int v52; // eax
  double v53; // st7
  double v54; // st6
  int v55; // eax
  void *v56; // eax
  double v57; // st7
  void *v58; // ecx
  int *v59; // edi
  int *v60; // ebx
  int v61; // [esp+0h] [ebp-58h]
  int v62; // [esp+0h] [ebp-58h]
  int v63; // [esp+4h] [ebp-54h]
  int SchoolAV; // [esp+4h] [ebp-54h]
  char v65; // [esp+8h] [ebp-50h]
  float v66; // [esp+Ch] [ebp-4Ch]
  float v67; // [esp+10h] [ebp-48h]
  float v68; // [esp+14h] [ebp-44h]
  char v69; // [esp+18h] [ebp-40h]
  float v70; // [esp+18h] [ebp-40h]
  int v71; // [esp+1Ch] [ebp-3Ch]
  int v72; // [esp+24h] [ebp-34h]
  __int16 v73; // [esp+2Eh] [ebp-2Ah]
  char v74; // [esp+30h] [ebp-28h]
  char v75; // [esp+31h] [ebp-27h]
  char v76; // [esp+32h] [ebp-26h]
  char v77; // [esp+33h] [ebp-25h]
  double v78; // [esp+34h] [ebp-24h]
  float v79; // [esp+34h] [ebp-24h]
  float v80; // [esp+3Ch] [ebp-1Ch]
  float v81; // [esp+3Ch] [ebp-1Ch]
  float v82; // [esp+40h] [ebp-18h]
  float v83; // [esp+40h] [ebp-18h]
  float v84; // [esp+44h] [ebp-14h] BYREF
  double v85; // [esp+48h] [ebp-10h] BYREF
  double v86; // [esp+50h] [ebp-8h]

  if ( *(_DWORD *)(a1 + 0x74) == 3 )
  {
    if ( sub_6135F0(a1) )
    {
      v5 = *(_DWORD *)(a1 + 0x6C);
      v72 = a3;
      if ( v5 != 4 && v5 != 0xE && v5 != 0xC && v5 != 7
        || (a3 = *(_DWORD *)(a1 + 0x3C), v6 = sub_6135F0(a1), sub_6131D0(a3, v6, 0)) )
      {
        *(_DWORD *)(a1 + 0x50) = 0xFF;
        v80 = sub_615980(a1, a3);
        *(float *)&v85 = 0.0;
        v84 = 0.0;
        sub_6142D0((_DWORD *)a1, COERCE_FLOAT(&v85), COERCE_FLOAT(&v84));
        v7 = (_WORD *)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C), 3);
        AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v7, v72);
        sub_51AC80(AnimGroupFromField8Value);
        v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C));
        ActorAnimData_GetSomethingFromField8Value(v9, 3);
        v10 = (_DWORD **)sub_6135F0(a1);
        BYTE4(v85) = sub_5E5640(v10);
        v11 = (_DWORD **)sub_6135F0(a1);
        if ( Actor_GetCurrentAction(v11) == 7
          || (v12 = (_DWORD **)sub_6135F0(a1),
              CurrentAction = Actor_GetCurrentAction(v12),
              LOBYTE(v84) = 0,
              CurrentAction == 8) )
        {
          LOBYTE(v84) = 1;
        }
        v14 = sub_6135F0(a1);
        v76 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v14 + 0x334))(v14, 1);
        v15 = (_DWORD *)sub_6135F0(a1);
        LOBYTE(v86) = Actor_IsBlocking(v15);
        v16 = sub_612D60((_DWORD *)a1);
        v73 = 0;
        v74 = 0;
        if ( v16 )
        {
          v17 = (void **)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0xEC))(
                           *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
                           1);
          v18 = *(_BYTE *)(v16 + 0x90);
          if ( v18 == 4 && (v19 = *(_DWORD *)(v16 + 0x64)) != 0 )
          {
            v78 = sub_4849C0(v17);
            if ( ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(v19 + 0x24))(v19 + 0x24, 0) > v78
              || sub_6135F0(a1)
              && ((v20 = *(_DWORD *)(v16 + 0x64)) == 0 ? (v21 = 0) : (v21 = v20 + 0x18),
                  v71 = v21,
                  v22 = sub_6135F0(a1),
                  (unsigned __int8)MagicTarget_HasMagicItem((void *)(v22 + 0x68), v71)) )
            {
              LOBYTE(v73) = 1;
            }
            HIBYTE(v73) = 1;
          }
          else if ( v18 != 5 && v18 != 4 )
          {
            v74 = 1;
          }
        }
        if ( sub_613440((void **)a1, v80, v84, 0) )
        {
          v23 = *(_DWORD *)(a1 + 0x70);
          v79 = 0.0;
          if ( v23 == 2 || v23 == 4 )
          {
            if ( v16 )
            {
              if ( !v74 && !(_BYTE)v73 )
              {
                v24 = sub_6135F0(a1);
                v25 = *(void **)(a1 + 0x3C);
                v69 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v24 + 0x19C))(v24, LODWORD(v86));
                v66 = *((float *)&v85 + 1);
                v63 = (*(int (__thiscall **)(void *))(*(_DWORD *)v25 + 0x284))(v25);
                sub_613780((void **)a1);
                v61 = v26;
                v27 = sub_5E0F50(v25);
                v79 = sub_546800(v27, v61, v63, 7, v66, 0.0, v82, v69);
              }
            }
          }
          v28 = *(int **)(a1 + 0x80);
          v81 = 0.0;
          if ( v28 )
          {
            if ( *(float *)(a1 + 0x108) < *(float *)(a1 + 0x44) - *(float *)(a1 + 0x104) )
            {
              if ( sub_613BB0((_DWORD *)a1, v28, 0, 0) )
              {
                v29 = sub_6135F0(a1);
                v30 = *(int **)(a1 + 0x3C);
                v31 = *v30;
                (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v29 + 0x19C))(v29, 0, a2);
                v67 = *(float *)&v86;
                v65 = (*(int (__thiscall **)(int *))(*v30 + 0x284))(v30);
                SchoolAV = EffectItemList_GetSchoolAV();
                v62 = (*(int (__thiscall **)(int *))(v31 + 0x284))(v30);
                v32 = sub_5E0F50(v30);
                v81 = sub_546800(v32, v62, SchoolAV, v65, COERCE_FLOAT(7), v67, 0.0, SLOBYTE(v82));
              }
            }
          }
          if ( v76
            || (PlayerCharacter *)sub_6135F0(a1) == TESDataHandler_g_PlayerRef
            || (v79 = v79 + fCostant_100, !*(_DWORD *)(a1 + 0x80)) )
          {
            v33 = 0.0;
          }
          else
          {
            v33 = 0.0;
            if ( v81 > 0.0 )
              v81 = fCostant_100 + v81;
          }
          if ( v33 < v79 || v33 < v81 )
            v34 = *(_BYTE *)(a1 + 0x158);
          else
            v34 = 0;
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2DC))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58))
            && v34 )
          {
            v35 = 0.0;
          }
          else
          {
            v35 = 0.0;
            v79 = 0.0;
            v81 = 0.0;
          }
          v36 = v79;
          v37 = v81;
          if ( HIBYTE(v73) )
          {
            if ( *(float *)(a1 + 0x1B4) >= *(float *)(a1 + 0x44) - *(float *)(a1 + 0x1B0) )
            {
              v79 = v35;
              v36 = v79;
              v37 = v81;
            }
          }
          if ( v37 > v35 )
          {
            v38 = v37;
            v39 = v36;
            v36 = v38;
            if ( v39 > v35 )
            {
              *(float *)&v86 = v36 - v39;
              *(float *)&v86 = fabs(*(float *)&v86);
              LODWORD(v86) = Double_To_SInt32(v35);
              v40 = Double_To_SInt32(v35);
              if ( v40 )
              {
                if ( v36 <= v39 )
                {
                  LODWORD(v86) = GetRandomLargeInteger_(0) % v40;
                  v81 = (double)SLODWORD(v86) + v81;
                  v85 = v79;
                  LODWORD(v86) = GetRandomLargeInteger_(0) % v40;
                  v41 = v85 - (double)SLODWORD(v86);
                }
                else
                {
                  v85 = v36;
                  LODWORD(v86) = GetRandomLargeInteger_(0) % v40;
                  v81 = v85 - (double)SLODWORD(v86);
                  LODWORD(v86) = GetRandomLargeInteger_(0) % v40;
                  v41 = (double)SLODWORD(v86) + v79;
                }
                v79 = v41;
                v36 = v81;
                v39 = v79;
                v35 = 0.0;
              }
              if ( v39 >= v36 )
                v36 = v39;
            }
          }
          v83 = v36;
          v42 = fCostant_100 - v83;
          if ( fCombatMaxHoldScore >= v42 )
            v42 = fCombatMaxHoldScore;
          v43 = 1;
          v84 = v42;
          if ( *(_DWORD *)(a1 + 0x6C) == 1 )
            v84 = v35;
          if ( v75 )
          {
            if ( !v77 )
              v84 = v35;
          }
          if ( *(_DWORD *)(a1 + 0x78) == 2 )
          {
            v44 = v35;
            v45 = v83;
            v84 = v44;
          }
          else
          {
            v45 = v83;
          }
          v46 = Double_To_SInt32(v45 + v84);
          if ( v46 <= 0 )
            v46 = 0x64;
          *(float *)&v86 = (float)(GetRandomLargeInteger_(0) % v46);
          v47 = v83;
          if ( v83 <= (double)*(float *)&v86 || (v42 = v79, v81 > (double)v79) )
          {
            if ( v47 <= *(float *)&v86 || (v53 = v81, v54 = v79, v79 >= (double)v81) || v75 )
            {
              if ( *(_DWORD *)(a1 + 0x78) != 2 )
              {
                v58 = *(void **)(a1 + 0x3C);
                *(_DWORD *)(a1 + 0x78) = *(_DWORD *)(a1 + 0x74);
                *(_DWORD *)(a1 + 0x74) = 2;
                v59 = sub_5E0F50(v58);
                v60 = sub_5E0F50(*(void **)(a1 + 0x3C));
                v70 = ((double (__thiscall *)(int *))*(_DWORD *)(*v59 + 0x140))(v59);
                v68 = ((double (__thiscall *)(int *))*(_DWORD *)(*v60 + 0x13C))(v60);
                *(float *)&v86 = sub_546B20(v68, v70);
                *(float *)(a1 + 0xE0) = *(float *)(a1 + 0x44);
                *(float *)(a1 + 0xE4) = *(float *)&v86;
                *(float *)(a1 + 0xE8) = flt_A30634;
              }
            }
            else
            {
              if ( *(_BYTE *)(a1 + 0x49) )
              {
                sub_5F4AE0(*(Actor **)(a1 + 0x3C), v42, v54, v53, 0);
                if ( *(_DWORD *)(a1 + 0x74) == 1 )
                {
                  *(_DWORD *)(a1 + 0x78) = 1;
                  *(_DWORD *)(a1 + 0x74) = 3;
                }
              }
              v55 = sub_6135F0(a1);
              if ( v55 )
                v56 = (void *)(v55 + 0x68);
              else
                v56 = 0;
              if ( sub_617340(a1, v42, v54, v53, *(int **)(a1 + 0x80), v56) )
              {
                v57 = *(float *)(a1 + 0x44);
                *(_DWORD *)(a1 + 0x78) = *(_DWORD *)(a1 + 0x74);
                *(float *)&v86 = v57;
                *(_DWORD *)(a1 + 0x74) = 0;
                *(float *)&v85 = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B372E8);
                *(float *)(a1 + 0x104) = *(float *)&v86;
                *(float *)(a1 + 0x108) = *(float *)&v85;
                *(float *)(a1 + 0x10C) = flt_A30634;
              }
            }
          }
          else
          {
            v48 = v83;
            if ( *(_BYTE *)(a1 + 0x49) )
            {
              sub_5F4AE0(*(Actor **)(a1 + 0x3C), v42, v47, v48, 0);
              if ( *(_DWORD *)(a1 + 0x74) == 1 )
              {
                *(_DWORD *)(a1 + 0x78) = 1;
                *(_DWORD *)(a1 + 0x74) = 3;
              }
            }
            v49 = sub_6135F0(a1);
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v49 + 0x154))(v49) )
            {
              sub_616CA0(a1, 1, v42, v47, v48);
              LODWORD(v86) = GetRandomLargeInteger_(0);
              v86 = (double)SLODWORD(v86) / dbl_A3D5A8;
              v50 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fCombatSpeakAttackChance);
              if ( v50 >= v86 )
              {
                v43 = *(_DWORD *)(a1 + 0x3C);
                v51 = (double (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)v43 + 0x308);
                v52 = sub_6135F0(a1);
                v50 = (*v51)(v43, v52, 0, 0);
              }
              sub_612BD0(a1, 2, v43, v47, v50, 0x13, 0);
              if ( HIBYTE(v73) )
              {
                *(float *)&v86 = *(float *)(a1 + 0x44);
                *(float *)&v85 = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B36F78);
                *(float *)(a1 + 0x1B0) = *(float *)&v86;
                *(float *)(a1 + 0x1B4) = *(float *)&v85;
                *(float *)(a1 + 0x1B8) = flt_A30634;
              }
            }
          }
        }
      }
    }
  }
}
