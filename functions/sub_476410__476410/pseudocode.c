int __userpurge sub_476410@<eax>(
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
  char v75[4]; // [esp+18h] [ebp-158h] BYREF
  signed int v76; // [esp+1Ch] [ebp-154h]
  char **v77; // [esp+20h] [ebp-150h]
  int v78; // [esp+24h] [ebp-14Ch]
  int v79; // [esp+28h] [ebp-148h]
  int v80; // [esp+2Ch] [ebp-144h]
  int v81; // [esp+30h] [ebp-140h]
  int v82; // [esp+34h] [ebp-13Ch]
  int v83; // [esp+38h] [ebp-138h]
  int v84; // [esp+3Ch] [ebp-134h]
  int v85; // [esp+40h] [ebp-130h]
  int v86; // [esp+44h] [ebp-12Ch]
  AnimSequenceSingle *v87; // [esp+48h] [ebp-128h]
  _DWORD *SkillMasteryLevel; // [esp+4Ch] [ebp-124h]
  int v89; // [esp+50h] [ebp-120h]
  int v90; // [esp+54h] [ebp-11Ch]
  int v91; // [esp+58h] [ebp-118h]
  int v92; // [esp+5Ch] [ebp-114h]
  int v93; // [esp+60h] [ebp-110h]
  char Str[264]; // [esp+64h] [ebp-10Ch] BYREF

  SkillMasteryLevel = a1;
  v82 = (int)a6;
  if ( !a6
    || !((unsigned __int8 (__usercall *)@<al>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a6->vtbl->IsActor)(
          a6,
          a5,
          st6_0,
          st5_0) )
  {
LABEL_58:
    JUMPOUT(0x476CDB);
  }
  if ( !a1[0x26] )
  {
    a1[0x32] = a6;
    goto LABEL_58;
  }
  vtbl = a6[1].vtbl;
  v9 = *((int (__thiscall **)(TESObjectREFRVtbl *, int, int))vtbl->super.super.InitializeComponent + 0x3B);
  v10 = 0x11;
  v80 = 0x11;
  v79 = 1;
  v11 = v9(vtbl, 1, a2);
  if ( v11 )
  {
    v12 = *(_DWORD *)(v11 + 8);
    if ( v12 )
    {
      v13 = *(char *)(v12 + 0x90);
      v78 = *(_DWORD *)(4 * v13 + 0xB086B8);
      switch ( v13 )
      {
        case 0:
        case 1:
          v10 = 0xE;
          goto LABEL_10;
        case 2:
        case 3:
          v10 = 0x10;
LABEL_10:
          v79 = v10;
          break;
        default:
          goto LABEL_57;
      }
    }
  }
  if ( a6 == (TESObjectREFR *)TESDataHandler_g_PlayerRef
    && a1 == Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1) )
  {
    FormModelPAth = *(CHAR **)dword_B36BB8;
  }
  else
  {
    v15 = a6->vtbl->GetBaseForm(a6);
    FormModelPAth = GetFormModelPAth(v15);
  }
  if ( !FormModelPAth
    || ((SkillMasteryLevel = (_DWORD *)Actor_GetSkillMasteryLevel(v10), (v16 = (_DWORD *)FormHeapAlloc(8u)) == 0)
      ? (v80 = 0)
      : (*v16 = 0, v16[1] = 0, v80 = (int)v16),
        strcpy(Str, FormModelPAth),
        (v17 = strrchr(Str, 0x5C)) == 0) )
  {
LABEL_57:
    JUMPOUT(0x476CDA);
  }
  strcpy(v75, "1");
  v89 = 1;
  v90 = 2;
  v91 = 2;
  v92 = 3;
  v93 = 4;
  v82 = 0x16;
  v83 = 0x19;
  v84 = 0x1A;
  v85 = 0x18;
  v86 = 0x17;
  v77 = &off_B102B8;
  do
  {
    v76 = 0;
    do
    {
      if ( *(_DWORD *)&Str[v76 - 4] > (int)SkillMasteryLevel )
        goto LABEL_36;
      switch ( v79 )
      {
        case 0xE:
          v29 = *v77;
          v30 = v17 + 1;
          do
          {
            v31 = *v29;
            *v30++ = *v29++;
          }
          while ( v31 );
          qmemcpy(
            &v17[strlen(v17)],
            *(const void **)(4 * v78 + 0xB102C8),
            *(_DWORD *)(4 * v78 + 0xB102C8)
          + strlen(*(const char **)(4 * v78 + 0xB102C8))
          + 1
          - *(_DWORD *)(4 * v78 + 0xB102C8));
          v32 = &v17[strlen(v17)];
          *(_DWORD *)v32 = aBladeskill;
          *((_DWORD *)v32 + 1) = dword_A3CB18;
          *((_WORD *)v32 + 4) = word_A3CB1C;
          v32[0xA] = byte_A3CB1E;
          v75[0] = Str[v76 - 4] + 0x30;
          v33 = strlen(v75) + 1;
          v34 = &v17[strlen(v17)];
          v35 = v76;
          qmemcpy(v34, v75, 4 * (v33 >> 2));
          v37 = &v75[4 * (v33 >> 2)];
          v36 = &v34[4 * (v33 >> 2)];
          v38 = v33;
          v39 = *(int *)((char *)&v86 + v35);
          qmemcpy(v36, v37, v38 & 3);
          strcat(v17, *(const char **)(0x24 * v39 + 0xB102E0));
          *(_DWORD *)&v17[strlen(v17)] = *(_DWORD *)a_kf;
          break;
        case 0x10:
          v18 = *v77;
          v19 = v17 + 1;
          do
          {
            v20 = *v18;
            *v19++ = *v18++;
          }
          while ( v20 );
          qmemcpy(
            &v17[strlen(v17)],
            *(const void **)(4 * v78 + 0xB102C8),
            *(_DWORD *)(4 * v78 + 0xB102C8)
          + strlen(*(const char **)(4 * v78 + 0xB102C8))
          + 1
          - *(_DWORD *)(4 * v78 + 0xB102C8));
          v21 = &v17[strlen(v17)];
          *(_DWORD *)v21 = aBluntskill;
          *((_DWORD *)v21 + 1) = dword_A3CB28;
          *((_WORD *)v21 + 4) = word_A3CB2C;
          v21[0xA] = byte_A3CB2E;
          v75[0] = Str[v76 - 4] + 0x30;
          v22 = strlen(v75) + 1;
          v23 = &v17[strlen(v17)];
          v24 = v76;
          qmemcpy(v23, v75, 4 * (v22 >> 2));
          v26 = &v75[4 * (v22 >> 2)];
          v25 = &v23[4 * (v22 >> 2)];
          v27 = v22;
          v28 = *(int *)((char *)&v86 + v24);
          qmemcpy(v25, v26, v27 & 3);
          strcat(v17, *(const char **)(0x24 * v28 + 0xB102E0));
          *(_DWORD *)&v17[strlen(v17)] = *(_DWORD *)a_kf;
          break;
        case 0x11:
          goto LABEL_33;
      }
      if ( sub_434870((int)ModelLoaderPtr, (int)Str, (int)Str) )
        goto LABEL_49;
LABEL_33:
      v40 = *v77;
      v41 = v17 + 1;
      do
      {
        v42 = *v40;
        *v41++ = *v40++;
      }
      while ( v42 );
      qmemcpy(
        &v17[strlen(v17)],
        *(const void **)(4 * v78 + 0xB102C8),
        *(_DWORD *)(4 * v78 + 0xB102C8)
      + strlen(*(const char **)(4 * v78 + 0xB102C8))
      + 1
      - *(_DWORD *)(4 * v78 + 0xB102C8));
      v43 = &v17[strlen(v17)];
      *(_DWORD *)v43 = aSkill;
      v44 = v76;
      *((_WORD *)v43 + 2) = word_A3CB10;
      v75[0] = Str[v44 - 4] + 0x30;
      strcat(v17, v75);
      v45 = 9 * *(int *)((char *)&v86 + v76);
      v46 = *(const char **)(0x24 * *(int *)((char *)&v86 + v76) + 0xB102E0);
      strcat(v17, v46);
      *(_DWORD *)&v17[strlen(v17)] = *(_DWORD *)a_kf;
      if ( sub_434870((int)ModelLoaderPtr, v45, (int)Str) )
      {
LABEL_49:
        v69 = (char *)FormHeapAlloc(strlen(Str) + 1);
        strcpy(v69, Str);
        BSSimpleList_PushBack((_DWORD *)v80, (int)v69);
        goto LABEL_50;
      }
LABEL_36:
      switch ( v79 )
      {
        case 0xE:
          v52 = *v77;
          v53 = v17 + 1;
          do
          {
            v54 = *v52;
            *v53++ = *v52++;
          }
          while ( v54 );
          qmemcpy(
            &v17[strlen(v17)],
            *(const void **)(4 * v78 + 0xB102C8),
            *(_DWORD *)(4 * v78 + 0xB102C8)
          + strlen(*(const char **)(4 * v78 + 0xB102C8))
          + 1
          - *(_DWORD *)(4 * v78 + 0xB102C8));
          v55 = &v17[strlen(v17)];
          *(_DWORD *)v55 = aBlade;
          v56 = v76;
          *((_WORD *)v55 + 2) = word_A3CB00;
          v57 = *(const char **)(0x24 * *(int *)((char *)&v86 + v56) + 0xB102E0);
          strcat(v17, v57);
          *(_DWORD *)&v17[strlen(v17)] = *(_DWORD *)a_kf;
          break;
        case 0x10:
          v47 = *v77;
          v48 = v17 + 1;
          do
          {
            v49 = *v47;
            *v48++ = *v47++;
          }
          while ( v49 );
          qmemcpy(
            &v17[strlen(v17)],
            *(const void **)(4 * v78 + 0xB102C8),
            *(_DWORD *)(4 * v78 + 0xB102C8)
          + strlen(*(const char **)(4 * v78 + 0xB102C8))
          + 1
          - *(_DWORD *)(4 * v78 + 0xB102C8));
          v50 = &v17[strlen(v17)];
          *(_DWORD *)v50 = aBlunt;
          *((_WORD *)v50 + 2) = word_A3CB08;
          v51 = *(const char **)(0x24 * *(int *)((char *)&v86 + v76) + 0xB102E0);
          strcat(v17, v51);
          *(_DWORD *)&v17[strlen(v17)] = *(_DWORD *)a_kf;
          break;
        case 0x11:
          goto LABEL_46;
      }
      if ( sub_434870((int)ModelLoaderPtr, (int)Str, (int)Str) )
        goto LABEL_49;
LABEL_46:
      v58 = *v77;
      v59 = v17 + 1;
      do
      {
        v60 = *v58;
        *v59++ = *v58++;
      }
      while ( v60 );
      v61 = *(_DWORD *)(4 * v78 + 0xB102C8)
          + strlen(*(const char **)(4 * v78 + 0xB102C8))
          + 1
          - *(_DWORD *)(4 * v78 + 0xB102C8);
      v62 = *(char **)(4 * v78 + 0xB102C8);
      v63 = &v17[strlen(v17)];
      v64 = v76;
      qmemcpy(v63, v62, 4 * (v61 >> 2));
      v66 = &v62[4 * (v61 >> 2)];
      v65 = &v63[4 * (v61 >> 2)];
      v67 = v61;
      v68 = *(int *)((char *)&v86 + v64);
      qmemcpy(v65, v66, v67 & 3);
      strcat(v17, *(const char **)(0x24 * v68 + 0xB102E0));
      *(_DWORD *)&v17[strlen(v17)] = *(_DWORD *)a_kf;
      if ( sub_434870((int)ModelLoaderPtr, (int)Str, (int)Str) )
        goto LABEL_49;
LABEL_50:
      v76 -= 4;
    }
    while ( v76 >= (int)0xFFFFFFF0 );
    ++v77;
  }
  while ( (int)v77 < (int)&off_B102C8 );
  v70 = v87;
  sub_4761C0(v87, v80);
  v71 = v81;
  if ( !(_BYTE)a6 )
    sub_476D10(v70, (int)v70, st5_0, st6_0, 0.0, v81, 0.0, flt_A30634);
  if ( sub_45A500(SaveLoad_CurrentSavegame) || !(*(int (__thiscall **)(int))(*(_DWORD *)v71 + 0x330))(v71) )
    goto LABEL_57;
  v72 = (void **)(*(int (__thiscall **)(int))(*(_DWORD *)v71 + 0x330))(v71);
  sub_61E8A0(v72);
  return def_4764B1(a6, a7);
}
