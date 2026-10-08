// Native Oblivion power-attack rebuild: clears groups 0x16..0x1A, generates movement/weapon/mastery filename candidates, probes the model loader, and installs parsed native power groups. No dynamic weapon type or override registry is consulted.
void __userpurge ObservedActorAnimData_BuildPowerAttackKFList(
        _DWORD *a1@<ecx>,
        int a2@<edi>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a5@<st0>,
        TESObjectREFR *a6,
        int a7)
{
  TESObjectREFRVtbl *vtbl; // ecx
  int (__thiscall *v9)(TESObjectREFRVtbl *, int, int); // edx
  int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  CHAR *FormModelPAth; // esi
  TESForm *v15; // eax
  _DWORD *v16; // eax
  char *v17; // ebp
  char *v18; // ecx
  _BYTE *v19; // edx
  char v20; // al
  char *v21; // eax
  unsigned int v22; // eax
  char *v23; // edi
  signed int v24; // edx
  char *v25; // edi
  char *v26; // esi
  char v27; // cl
  int v28; // eax
  char *v29; // ecx
  _BYTE *v30; // edx
  char v31; // al
  char *v32; // eax
  unsigned int v33; // eax
  char *v34; // edi
  signed int v35; // edx
  char *v36; // edi
  char *v37; // esi
  char v38; // cl
  int v39; // eax
  char *v40; // ecx
  _BYTE *v41; // edx
  char v42; // al
  char *v43; // eax
  signed int v44; // edx
  int v45; // edx
  const char *v46; // eax
  char *v47; // ecx
  _BYTE *v48; // edx
  char v49; // al
  char *v50; // eax
  const char *v51; // eax
  char *v52; // ecx
  _BYTE *v53; // edx
  char v54; // al
  char *v55; // eax
  signed int v56; // edx
  const char *v57; // ecx
  char *v58; // ecx
  _BYTE *v59; // edx
  char v60; // al
  unsigned int v61; // eax
  char *v62; // esi
  char *v63; // edi
  signed int v64; // edx
  char *v65; // edi
  char *v66; // esi
  char v67; // cl
  int v68; // eax
  char *v69; // eax
  AnimSequenceSingle *v70; // edi
  int v71; // esi
  void **v72; // eax
  char v74[4]; // [esp+18h] [ebp-158h] BYREF
  signed int v75; // [esp+1Ch] [ebp-154h]
  char **v76; // [esp+20h] [ebp-150h]
  int v77; // [esp+24h] [ebp-14Ch]
  int v78; // [esp+28h] [ebp-148h]
  int v79; // [esp+2Ch] [ebp-144h]
  int v80; // [esp+30h] [ebp-140h]
  int v81; // [esp+34h] [ebp-13Ch]
  int v82; // [esp+38h] [ebp-138h]
  int v83; // [esp+3Ch] [ebp-134h]
  int v84; // [esp+40h] [ebp-130h]
  int v85; // [esp+44h] [ebp-12Ch]
  AnimSequenceSingle *v86; // [esp+48h] [ebp-128h]
  _DWORD *SkillMasteryLevel; // [esp+4Ch] [ebp-124h]
  int v88; // [esp+50h] [ebp-120h]
  int v89; // [esp+54h] [ebp-11Ch]
  int v90; // [esp+58h] [ebp-118h]
  int v91; // [esp+5Ch] [ebp-114h]
  int v92; // [esp+60h] [ebp-110h]
  char Str[264]; // [esp+64h] [ebp-10Ch] BYREF

  SkillMasteryLevel = a1; /*0x476434*/
  v81 = (int)a6; /*0x476438*/
  if ( !a6 /*0x47644d*/
    || !((unsigned __int8 (__usercall *)@<al>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a6->vtbl->IsActor)(
          a6,
          a5,
          st6_0,
          st5_0) )
  {
LABEL_58:
    JUMPOUT(0x476CDB); /*0x476cdb*/
  }
  if ( !a1[0x26] ) /*0x476457*/
  {
    a1[0x32] = a6; /*0x47645f*/
    goto LABEL_58; /*0x476465*/
  }
  vtbl = a6[1].vtbl; /*0x47646a*/
  v9 = *((int (__thiscall **)(TESObjectREFRVtbl *, int, int))vtbl->super.super.InitializeComponent + 0x3B); /*0x47646f*/
  v10 = 0x11; /*0x476476*/
  v79 = 0x11; /*0x47647d*/
  v78 = 1; /*0x476481*/
  v11 = v9(vtbl, 1, a2); /*0x476489*/
  if ( v11 ) /*0x47648d*/
  {
    v12 = *(_DWORD *)(v11 + 8); /*0x47648f*/
    if ( v12 ) /*0x476494*/
    {
      v13 = *(char *)(v12 + 0x90); /*0x476496*/
      v77 = *(_DWORD *)(4 * v13 + 0xB086B8); /*0x4764a7*/
      switch ( v13 ) /*0x4764b1*/
      {
        case 0: /*0x4764b1*/
        case 1: /*0x4764b1*/
          v10 = 0xE; /*0x4764b8*/
          goto LABEL_10; /*0x4764bd*/
        case 2: /*0x4764b1*/
        case 3: /*0x4764b1*/
          v10 = 0x10; /*0x4764bf*/
LABEL_10:
          v78 = v10; /*0x4764c4*/
          break; /*0x4764c4*/
        default:
          goto LABEL_57;
      }
    }
  }
  if ( a6 == (TESObjectREFR *)reference && a1 == PlayerCharacter_GetAnimDataByPerspective((Actor *)reference, 1) ) /*0x4764db*/
  {
    FormModelPAth = *(CHAR **)stru_B36BB8; /*0x4764dd*/
  }
  else
  {
    v15 = a6->vtbl->GetBaseForm(a6); /*0x4764f0*/
    FormModelPAth = GetFormModelPAth(v15); /*0x4764fb*/
  }
  if ( !FormModelPAth
    || ((SkillMasteryLevel = (_DWORD *)Actor_GetSkillMasteryLevel((int *)a6, 0, v10, v10),
         (v16 = (_DWORD *)FormHeapAlloc(8u)) == 0)
      ? (v79 = 0)
      : (*v16 = 0, v16[1] = 0, v79 = (int)v16),
        strcpy(Str, FormModelPAth),
        (v17 = strrchr(Str, 0x5C)) == 0) )
  {
LABEL_57:
    JUMPOUT(0x476CDA); /*0x476cda*/
  }
  strcpy(v74, "1"); /*0x476560*/
  v88 = 1; /*0x476569*/
  v89 = 2; /*0x476571*/
  v90 = 2; /*0x476575*/
  v91 = 3; /*0x476579*/
  v92 = 4; /*0x476581*/
  v81 = 0x16; /*0x476589*/
  v82 = 0x19; /*0x476591*/
  v83 = 0x1A; /*0x476599*/
  v84 = 0x18; /*0x4765a1*/
  v85 = 0x17; /*0x4765a9*/
  v76 = &off_B102B8; /*0x4765b1*/
  do /*0x476c6b*/
  {
    v75 = 0; /*0x4765c0*/
    do /*0x476c55*/
    {
      if ( *(_DWORD *)&Str[v75 - 4] > (int)SkillMasteryLevel ) /*0x4765d0*/
        goto LABEL_36; /*0x4765d0*/
      switch ( v78 ) /*0x4765df*/
      {
        case 0xE: /*0x4765df*/
          v29 = *v76; /*0x47670d*/
          v30 = v17 + 1; /*0x47670f*/
          do /*0x47671e*/
          {
            v31 = *v29; /*0x476712*/
            *v30++ = *v29++; /*0x476714*/
          }
          while ( v31 ); /*0x47671e*/
          qmemcpy( /*0x476751*/
            &v17[strlen(v17)],
            *(const void **)(4 * v77 + 0xB102C8),
            *(_DWORD *)(4 * v77 + 0xB102C8)
          + strlen(*(const char **)(4 * v77 + 0xB102C8))
          + 1
          - *(_DWORD *)(4 * v77 + 0xB102C8));
          v32 = &v17[strlen(v17)]; /*0x47675c*/
          *(_DWORD *)v32 = aBladeskill; /*0x476770*/
          *((_DWORD *)v32 + 1) = dword_A3CB18; /*0x476778*/
          *((_WORD *)v32 + 4) = word_A3CB1C; /*0x476782*/
          v32[0xA] = byte_A3CB1E; /*0x47678c*/
          v74[0] = Str[v75 - 4] + 0x30; /*0x47679e*/
          v33 = strlen(v74) + 1; /*0x4767ab*/
          v34 = &v17[strlen(v17)]; /*0x4767b3*/
          v35 = v75; /*0x4767c0*/
          qmemcpy(v34, v74, 4 * (v33 >> 2)); /*0x4767c9*/
          v37 = &v74[4 * (v33 >> 2)]; /*0x4767c9*/
          v36 = &v34[4 * (v33 >> 2)]; /*0x4767c9*/
          v38 = v33; /*0x4767cb*/
          v39 = *(int *)((char *)&v85 + v35); /*0x4767cd*/
          qmemcpy(v36, v37, v38 & 3); /*0x4767d4*/
          strcat(v17, *(const char **)(0x24 * v39 + 0xB102E0)); /*0x476803*/
          *(_DWORD *)&v17[strlen(v17)] = *(_DWORD *)a_kf; /*0x476821*/
          break;
        case 0x10: /*0x4765df*/
          v18 = *v76; /*0x4765f2*/
          v19 = v17 + 1; /*0x4765f4*/
          do /*0x476603*/
          {
            v20 = *v18; /*0x4765f7*/
            *v19++ = *v18++; /*0x4765f9*/
          }
          while ( v20 ); /*0x476603*/
          qmemcpy( /*0x476633*/
            &v17[strlen(v17)],
            *(const void **)(4 * v77 + 0xB102C8),
            *(_DWORD *)(4 * v77 + 0xB102C8)
          + strlen(*(const char **)(4 * v77 + 0xB102C8))
          + 1
          - *(_DWORD *)(4 * v77 + 0xB102C8));
          v21 = &v17[strlen(v17)]; /*0x47663e*/
          *(_DWORD *)v21 = aBluntskill; /*0x476651*/
          *((_DWORD *)v21 + 1) = dword_A3CB28; /*0x476659*/
          *((_WORD *)v21 + 4) = word_A3CB2C; /*0x476663*/
          v21[0xA] = byte_A3CB2E; /*0x47666d*/
          v74[0] = Str[v75 - 4] + 0x30; /*0x47667f*/
          v22 = strlen(v74) + 1; /*0x47668c*/
          v23 = &v17[strlen(v17)]; /*0x476694*/
          v24 = v75; /*0x4766a1*/
          qmemcpy(v23, v74, 4 * (v22 >> 2)); /*0x4766aa*/
          v26 = &v74[4 * (v22 >> 2)]; /*0x4766aa*/
          v25 = &v23[4 * (v22 >> 2)]; /*0x4766aa*/
          v27 = v22; /*0x4766ac*/
          v28 = *(int *)((char *)&v85 + v24); /*0x4766ae*/
          qmemcpy(v25, v26, v27 & 3); /*0x4766b5*/
          strcat(v17, *(const char **)(0x24 * v28 + 0xB102E0)); /*0x4766e4*/
          *(_DWORD *)&v17[strlen(v17)] = *(_DWORD *)a_kf; /*0x476702*/
          break;
        case 0x11: /*0x4765df*/
          goto LABEL_33; /*0x476828*/
      }
      if ( ModelLoader_FindModelRecordByPath((int)MEMORY[0xB33A1C], (int)Str, (int)Str) ) /*0x476835*/
        goto LABEL_49; /*0x47683c*/
LABEL_33:
      v40 = *v76; /*0x476842*/
      v41 = v17 + 1; /*0x476848*/
      do /*0x47685c*/
      {
        v42 = *v40; /*0x476850*/
        *v41++ = *v40++; /*0x476852*/
      }
      while ( v42 ); /*0x47685c*/
      qmemcpy( /*0x476891*/
        &v17[strlen(v17)],
        *(const void **)(4 * v77 + 0xB102C8),
        *(_DWORD *)(4 * v77 + 0xB102C8)
      + strlen(*(const char **)(4 * v77 + 0xB102C8))
      + 1
      - *(_DWORD *)(4 * v77 + 0xB102C8));
      v43 = &v17[strlen(v17)]; /*0x47689c*/
      *(_DWORD *)v43 = aSkill; /*0x4768b0*/
      v44 = v75; /*0x4768b9*/
      *((_WORD *)v43 + 2) = word_A3CB10; /*0x4768bd*/
      v74[0] = Str[v44 - 4] + 0x30; /*0x4768c7*/
      strcat(v17, v74); /*0x4768f2*/
      v45 = 9 * *(int *)((char *)&v85 + v75); /*0x476903*/
      v46 = *(const char **)(0x24 * *(int *)((char *)&v85 + v75) + 0xB102E0); /*0x476906*/
      strcat(v17, v46); /*0x476931*/
      *(_DWORD *)&v17[strlen(v17)] = *(_DWORD *)a_kf; /*0x476953*/
      if ( ModelLoader_FindModelRecordByPath((int)MEMORY[0xB33A1C], v45, (int)Str) ) /*0x47695c*/
      {
LABEL_49:
        v69 = (char *)FormHeapAlloc(strlen(Str) + 1); /*0x476c19*/
        strcpy(v69, Str); /*0x476c24*/
        BSSimpleList_PushBack((_DWORD *)v79, (int)v69); /*0x476c42*/
        goto LABEL_50; /*0x476c42*/
      }
LABEL_36:
      switch ( v78 ) /*0x476972*/
      {
        case 0xE: /*0x476972*/
          v52 = *v76; /*0x476a5b*/
          v53 = v17 + 1; /*0x476a5d*/
          do /*0x476a6c*/
          {
            v54 = *v52; /*0x476a60*/
            *v53++ = *v52++; /*0x476a62*/
          }
          while ( v54 ); /*0x476a6c*/
          qmemcpy( /*0x476aa1*/
            &v17[strlen(v17)],
            *(const void **)(4 * v77 + 0xB102C8),
            *(_DWORD *)(4 * v77 + 0xB102C8)
          + strlen(*(const char **)(4 * v77 + 0xB102C8))
          + 1
          - *(_DWORD *)(4 * v77 + 0xB102C8));
          v55 = &v17[strlen(v17)]; /*0x476aac*/
          *(_DWORD *)v55 = aBlade; /*0x476ac0*/
          v56 = v75; /*0x476ac9*/
          *((_WORD *)v55 + 2) = word_A3CB00; /*0x476acd*/
          v57 = *(const char **)(0x24 * *(int *)((char *)&v85 + v56) + 0xB102E0); /*0x476adf*/
          strcat(v17, v57); /*0x476b02*/
          *(_DWORD *)&v17[strlen(v17)] = *(_DWORD *)a_kf; /*0x476b20*/
          break;
        case 0x10: /*0x476972*/
          v47 = *v76; /*0x476985*/
          v48 = v17 + 1; /*0x476987*/
          do /*0x47699c*/
          {
            v49 = *v47; /*0x476990*/
            *v48++ = *v47++; /*0x476992*/
          }
          while ( v49 ); /*0x47699c*/
          qmemcpy( /*0x4769d1*/
            &v17[strlen(v17)],
            *(const void **)(4 * v77 + 0xB102C8),
            *(_DWORD *)(4 * v77 + 0xB102C8)
          + strlen(*(const char **)(4 * v77 + 0xB102C8))
          + 1
          - *(_DWORD *)(4 * v77 + 0xB102C8));
          v50 = &v17[strlen(v17)]; /*0x4769dc*/
          *(_DWORD *)v50 = aBlunt; /*0x4769f0*/
          *((_WORD *)v50 + 2) = word_A3CB08; /*0x4769f9*/
          v51 = *(const char **)(0x24 * *(int *)((char *)&v85 + v75) + 0xB102E0); /*0x476a08*/
          strcat(v17, v51); /*0x476a32*/
          *(_DWORD *)&v17[strlen(v17)] = *(_DWORD *)a_kf; /*0x476a50*/
          break;
        case 0x11: /*0x476972*/
          goto LABEL_46; /*0x476b27*/
      }
      if ( ModelLoader_FindModelRecordByPath((int)MEMORY[0xB33A1C], (int)Str, (int)Str) ) /*0x476b34*/
        goto LABEL_49; /*0x476b3b*/
LABEL_46:
      v58 = *v76; /*0x476b41*/
      v59 = v17 + 1; /*0x476b47*/
      do /*0x476b5c*/
      {
        v60 = *v58; /*0x476b50*/
        *v59++ = *v58++; /*0x476b52*/
      }
      while ( v60 ); /*0x476b5c*/
      v61 = *(_DWORD *)(4 * v77 + 0xB102C8) /*0x476b7b*/
          + strlen(*(const char **)(4 * v77 + 0xB102C8))
          + 1
          - *(_DWORD *)(4 * v77 + 0xB102C8);
      v62 = *(char **)(4 * v77 + 0xB102C8); /*0x476b7d*/
      v63 = &v17[strlen(v17)]; /*0x476b7f*/
      v64 = v75; /*0x476b8c*/
      qmemcpy(v63, v62, 4 * (v61 >> 2)); /*0x476b95*/
      v66 = &v62[4 * (v61 >> 2)]; /*0x476b95*/
      v65 = &v63[4 * (v61 >> 2)]; /*0x476b95*/
      v67 = v61; /*0x476b97*/
      v68 = *(int *)((char *)&v85 + v64); /*0x476b99*/
      qmemcpy(v65, v66, v67 & 3); /*0x476ba0*/
      strcat(v17, *(const char **)(0x24 * v68 + 0xB102E0)); /*0x476bd1*/
      *(_DWORD *)&v17[strlen(v17)] = *(_DWORD *)a_kf; /*0x476bf4*/
      if ( ModelLoader_FindModelRecordByPath((int)MEMORY[0xB33A1C], (int)Str, (int)Str) ) /*0x476bfd*/
        goto LABEL_49; /*0x476c04*/
LABEL_50:
      v75 -= 4; /*0x476c47*/
    }
    while ( v75 >= (int)0xFFFFFFF0 ); /*0x476c55*/
    ++v76; /*0x476c67*/
  }
  while ( (int)v76 < (int)&off_B102C8 ); /*0x476c6b*/
  v70 = v86; /*0x476c75*/
  ActorAnimData_LoadGeneratedPowerAttackList(v86, v79); /*0x476c7c*/
  v71 = v80; /*0x476c88*/
  if ( !(_BYTE)a6 ) /*0x476c8c*/
    ActorAnimData_Update(v70, (int)v70, st5_0, st6_0, 0.0, v80, 0.0, kTerrainLODQuadRayDirectionZ); /*0x476ca3*/
  if ( sub_45A500(g_TESSaveLoadGame) || !(*(int (__thiscall **)(int))(*(_DWORD *)v71 + 0x330))(v71) ) /*0x476cc1*/
    goto LABEL_57; /*0x476cc5*/
  v72 = (void **)(*(int (__thiscall **)(int))(*(_DWORD *)v71 + 0x330))(v71); /*0x476cd1*/
  sub_61E8A0(v72); /*0x476cd5*/
  def_4764B1((int)a6, a7); /*0x476cd6*/
}
