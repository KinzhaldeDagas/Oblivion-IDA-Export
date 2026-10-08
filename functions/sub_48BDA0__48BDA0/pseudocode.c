// Sidecar NPC decode: deeper equippable-item selector carries actor/base interface context used by weapon rating paths. Wrapper must forward four stack args unchanged while pushing/popping owner context.
unsigned int *__userpurge sub_48BDA0@<eax>(int a1@<ecx>, int a2@<edi>, int *a3, float *a4, int a5, char a6)
{
  TESObjectREFR *v7; // ecx
  TESContainer *Container; // eax
  Actor *v9; // edi
  unsigned int *EquippedInstance; // esi
  int *v12; // eax
  TESObjectREFR *v13; // ecx
  TESContainer *v14; // eax
  TESContainer_Entry *p_list; // esi
  double FatigueFraction; // st7
  ExtraDataList **v17; // eax
  ExtraDataList **v18; // esi
  ExtraDataList *v19; // eax
  ExtraDataList ****v20; // eax
  char v21; // dl
  ExtraDataList ***v22; // edi
  unsigned int *v23; // eax
  int v24; // ebx
  ExtraDataList **v25; // eax
  ExtraDataList *v26; // esi
  int *Owner; // eax
  ExtraDataList **i; // esi
  ExtraDataList **v29; // eax
  ExtraDataList *v30; // esi
  int count; // eax
  char v32; // al
  double (__thiscall **v33)(int *); // esi
  ExtraDataList **v34; // esi
  unsigned int *v35; // edi
  double HealthData; // st7
  double v37; // st7
  int v38; // esi
  int v39; // eax
  unsigned int *v40; // eax
  unsigned int *v41; // esi
  _DWORD *v42; // eax
  int v43; // esi
  int v44; // eax
  unsigned int *v45; // eax
  ExtraDataList ****v46; // eax
  char *v47; // eax
  ExtraDataList ***v48; // edi
  char *v49; // ebx
  ExtraDataList **v50; // eax
  ExtraDataList *v51; // esi
  ExtraDataList **v52; // eax
  ExtraDataList *v53; // esi
  int *v54; // eax
  TESObjectREFR *v55; // ecx
  TESContainer *v56; // eax
  ExtraDataList **v57; // esi
  unsigned int *v58; // eax
  unsigned int *v59; // esi
  double (__thiscall **v60)(int *, int); // esi
  int v61; // eax
  int v62; // eax
  ExtraDataList *v63; // esi
  double v64; // st7
  int v65; // esi
  double v66; // st7
  int v67; // esi
  int v68; // eax
  unsigned int *v69; // eax
  unsigned int *v70; // esi
  _DWORD *v71; // eax
  int v72; // eax
  unsigned int *v73; // eax
  int v74; // [esp+10h] [ebp-7Ch]
  int v75; // [esp+14h] [ebp-78h]
  int v76; // [esp+1Ch] [ebp-70h]
  int v77; // [esp+1Ch] [ebp-70h]
  int v78; // [esp+1Ch] [ebp-70h]
  int v79; // [esp+1Ch] [ebp-70h]
  int v80; // [esp+20h] [ebp-6Ch]
  int v81; // [esp+20h] [ebp-6Ch]
  int v82; // [esp+20h] [ebp-6Ch]
  float v83; // [esp+28h] [ebp-64h]
  float v84; // [esp+28h] [ebp-64h]
  float v85; // [esp+28h] [ebp-64h]
  int WeaponSkillAV; // [esp+2Ch] [ebp-60h]
  ExtraDataList **v88; // [esp+40h] [ebp-4Ch]
  float v89; // [esp+44h] [ebp-48h]
  unsigned int *v90; // [esp+48h] [ebp-44h]
  ExtraDataList *v91; // [esp+48h] [ebp-44h]
  int v92; // [esp+4Ch] [ebp-40h]
  int v93; // [esp+50h] [ebp-3Ch]
  int v94; // [esp+54h] [ebp-38h]
  float v95; // [esp+54h] [ebp-38h]
  double v96; // [esp+54h] [ebp-38h]
  int v97; // [esp+5Ch] [ebp-30h]
  double v98; // [esp+5Ch] [ebp-30h]
  float v99; // [esp+64h] [ebp-28h]
  float v100; // [esp+68h] [ebp-24h]
  float v101; // [esp+68h] [ebp-24h]
  TESContainer_Entry *v102; // [esp+6Ch] [ebp-20h]
  ExtraDataList ****v103; // [esp+6Ch] [ebp-20h]
  float v104; // [esp+70h] [ebp-1Ch]
  float v105; // [esp+74h] [ebp-18h]
  ExtraDataList **v106; // [esp+78h] [ebp-14h]
  int v107; // [esp+78h] [ebp-14h]
  double v108; // [esp+7Ch] [ebp-10h]
  int HealthForForm; // [esp+7Ch] [ebp-10h]
  float v110; // [esp+7Ch] [ebp-10h]
  int v111; // [esp+7Ch] [ebp-10h]
  float v112; // [esp+7Ch] [ebp-10h]
  float v113; // [esp+7Ch] [ebp-10h]
  int v114; // [esp+7Ch] [ebp-10h]
  float v115; // [esp+7Ch] [ebp-10h]
  int v116; // [esp+7Ch] [ebp-10h]
  float v117; // [esp+7Ch] [ebp-10h]
  float v118; // [esp+7Ch] [ebp-10h]
  unsigned int *v119; // [esp+88h] [ebp-4h]
  ExtraDataList **v120; // [esp+88h] [ebp-4h]

  v89 = flt_A3B888; /*0x48bdb1*/
  v7 = *(TESObjectREFR **)(a1 + 4); /*0x48bdb7*/
  v93 = a1; /*0x48bdbd*/
  v90 = 0; /*0x48bdc1*/
  if ( v7 ) /*0x48bdc9*/
    Container = TESObjectREFR_GetContainer(v7); /*0x48bdcb*/
  else
    Container = 0; /*0x48bdd2*/
  v9 = (Actor *)OblivionDynamicCast( /*0x48bdef*/
                  Container,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESContainer `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
  if ( a6 ) /*0x48bdf1*/
  {
    EquippedInstance = ContainerExtraData_GetEquippedInstance((ExtraDataList *****)a1, 9, 0); /*0x48bdfe*/
    if ( EquippedInstance ) /*0x48be02*/
    {
      if ( sub_41DF40(*(_BYTE **)*EquippedInstance) ) /*0x48be08*/
        return EquippedInstance; /*0x48be19*/
      if ( *EquippedInstance ) /*0x48be1c*/
        BSSimpleList_Clear((_DWORD *)*EquippedInstance); /*0x48be22*/
      FormHeapFree(*EquippedInstance); /*0x48be2a*/
      *EquippedInstance = 0; /*0x48be30*/
      FormHeapFree((unsigned int)EquippedInstance); /*0x48be36*/
    }
  }
  v12 = (int *)(*(int (__thiscall **)(int *, int))(*a3 + 0x120))(a3, a2); /*0x48be50*/
  if ( v12 || (v12 = sub_4A98C0()) != 0 ) /*0x48be5d*/
    (*(void (__thiscall **)(int *, int))(*v12 + 0x16C))(v12, 0x40); /*0x48be6b*/
  v13 = *(TESObjectREFR **)(v94 + 4); /*0x48be75*/
  if ( v13 ) /*0x48be7a*/
    v14 = TESObjectREFR_GetContainer(v13); /*0x48be7c*/
  else
    v14 = 0; /*0x48be83*/
  p_list = &v14->list; /*0x48be87*/
  v105 = ((double (__thiscall *)(int *, int))*(_DWORD *)(*a3 + 0x12C))(a3, 7); /*0x48be9a*/
  v104 = (float)(*(int (__thiscall **)(int *, _DWORD))(*a3 + 0x128))(a3, 0); /*0x48beb6*/
  if ( v9 ) /*0x48beba*/
    FatigueFraction = Actor_GetFatigueFraction(v9, (int)a3, (int)v9); /*0x48bebe*/
  else
    FatigueFraction = 1.0; /*0x48bec5*/
  v99 = FatigueFraction; /*0x48bec9*/
  v95 = 1.0; /*0x48becf*/
  if ( p_list )
  {
    do
    {
      if ( !p_list->data ) /*0x48bee0*/
        goto LABEL_121; /*0x48bee0*/
      v17 = (ExtraDataList **)OblivionDynamicCast( /*0x48bf00*/
                                p_list->data->type,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                &TESObjectWEAP `RTTI Type Descriptor',
                                0);
      v18 = v17; /*0x48bf05*/
      v88 = v17; /*0x48bf0c*/
      if ( !v17 ) /*0x48bf10*/
        goto LABEL_121; /*0x48bf10*/
      if ( *((_BYTE *)v17 + 0x90) == 4 )
      {
        v19 = v17 == (ExtraDataList **)0xFFFFFFA0 ? 0 : v17[0x19];
        if ( v19 && !EffectItemList_HasHostile(&v19[1].members.m_presenceBitfield[8]) ) /*0x48bf34*/
          goto LABEL_121; /*0x48bf3b*/
      }
      v20 = *(ExtraDataList *****)v93; /*0x48bf41*/
      v21 = 1; /*0x48bf45*/
      if ( !*(_DWORD *)v93 ) /*0x48bf41*/
        goto LABEL_36; /*0x48bf41*/
      while ( v21 ) /*0x48bf52*/
      {
        if ( *v20 && (*v20)[2] == v18 ) /*0x48bf5d*/
          v21 = 0; /*0x48bf5f*/
        else
          v20 = (ExtraDataList ****)v20[1]; /*0x48bf63*/
        if ( !v20 ) /*0x48bf68*/
          goto LABEL_36; /*0x48bf68*/
      }
      if ( v20 ) /*0x48bfd5*/
        v22 = *v20; /*0x48bfd7*/
      else
LABEL_36:
        v22 = 0; /*0x48bf6a*/
      v23 = sub_48B9C0((ExtraDataList *****)v93, a3, a6); /*0x48bf7e*/
      v119 = v23; /*0x48bf85*/
      if ( v23 ) /*0x48bf89*/
        OblivionDynamicCast( /*0x48bf9d*/
          (void *)v23[2],
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
          &TESAmmo `RTTI Type Descriptor',
          0);
      v24 = 0; /*0x48bfa9*/
      if ( !v22 ) /*0x48bfad*/
        goto LABEL_62; /*0x48bfad*/
      v25 = *v22; /*0x48bfb3*/
      if ( *v22 && (v26 = *v25) != 0 && ExtraDataList_GetOwner(*v25) ) /*0x48bfc1*/
        Owner = (int *)ExtraDataList_GetOwner(v26); /*0x48bfcc*/
      else
        Owner = 0; /*0x48bfdb*/
      if ( Owner != a3 && (int)v22[1] > 0 ) /*0x48bfe6*/
      {
        for ( i = *v22; i; i = (ExtraDataList **)i[1] ) /*0x48bfe8*/
        {
          if ( !*i ) /*0x48bfee*/
            break; /*0x48bff2*/
          if ( ExtraDataList_GetOwner(*i) ) /*0x48bff4*/
            ++v24; /*0x48bffd*/
        }
      }
      v29 = *v22; /*0x48c007*/
      if ( !*v22 /*0x48c036*/
        || (v30 = *v29) == 0
        || !ExtraDataList_GetOwner(*v29)
        || !ExtraDataList_GetOwner(v30)
        || v24 < (int)v22[1] + v102->data->count )
      {
        count = v102->data->count; /*0x48c042*/
        if ( (int)v22[1] + count > 0 || count < 0 ) /*0x48c04f*/
        {
LABEL_62:
          if ( a5 == 0xFFFFFFFF || a5 == *((char *)v88 + 0x90) ) /*0x48c06a*/
          {
            if ( *((_BYTE *)v88 + 0x90) == 5 && !v119 ) /*0x48c082*/
              goto LABEL_121; /*0x48c082*/
            v93 = (*(unsigned __int16 (__thiscall **)(_BYTE *, int))&v88[0x22]->members.m_presenceBitfield[8])( /*0x48c0a6*/
                    (_BYTE *)v88 + 0x88,
                    WeaponSkillAV);
            if ( HIDWORD(v108) ) /*0x48c0aa*/
            {
              if ( *((_BYTE *)v88 + 0x90) == 5 ) /*0x48c0b3*/
                v93 += (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)(HIDWORD(v108) + 0x74) + 0x10))(HIDWORD(v108) + 0x74); /*0x48c0c3*/
            }
            if ( HIBYTE(v88) ) /*0x48c0cc*/
            {
              v32 = *((_BYTE *)v88 + 0x90); /*0x48c0ce*/
              if ( v32 == 5 || v32 == 4 ) /*0x48c0da*/
                v93 = Double_To_SInt32((double)v93 + flt_A3D8F4); /*0x48c0eb*/
            }
            v33 = (double (__thiscall **)(int *))(*a3 + 0x12C); /*0x48c10a*/
            WeaponSkillAV = TESObjectWEAP_GetWeaponSkillAV((char *)LODWORD(v89));// Equippable weapon-rating branch A: TESObjectWEAP_GetWeaponSkillAV returns at 0x48C115 and the joined Calc_WeaponDamage call returns at 0x48C7C0. /*0x48c117*/
            v100 = (*v33)(a3); /*0x48c11c*/
            if ( v22 && *v22 && **v22 ) /*0x48c134*/
            {
              if ( v97 ) /*0x48c142*/
              {
                v108 = EquippedEntryData_GetCharge((void **)v22); /*0x48c14b*/
                if ( ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(v97 + 0x24))(v97 + 0x24, 0) > v108 ) /*0x48c163*/
                  v97 = 0; /*0x48c165*/
              }
              v34 = *v22; /*0x48c169*/
              v106 = *v22; /*0x48c16d*/
              if ( *v22 ) /*0x48c16d*/
              {
                v35 = v90; /*0x48c177*/
                do /*0x48c30c*/
                {
                  v91 = *v34; /*0x48c184*/
                  if ( *v34 ) /*0x48c184*/
                  {
                    if ( BaseExtraList_GetExtraData(*v34, kExtraData_Health) ) /*0x48c192*/
                    {
                      HealthData = ExtraDataList_GetHealthData(v91); /*0x48c19f*/
                    }
                    else
                    {
                      HealthForForm = TESHealthForm_GetHealthForForm(v88); /*0x48c1b5*/
                      HealthData = (double)HealthForForm; /*0x48c1b9*/
                      if ( HealthForForm < 0 ) /*0x48c1bd*/
                        HealthData = HealthData + flt_A2FC78; /*0x48c1bf*/
                    }
                    v110 = HealthData; /*0x48c1c5*/
                    if ( v110 > 0.0 ) /*0x48c1d8*/
                    {
                      v96 = v110; /*0x48c1e2*/
                      v111 = TESHealthForm_GetHealthForForm(v88); /*0x48c1f1*/
                      v37 = (double)v111; /*0x48c1f5*/
                      if ( v111 < 0 ) /*0x48c1f9*/
                        v37 = v37 + flt_A2FC78; /*0x48c1fb*/
                      v95 = v96 / v37; /*0x48c209*/
                      if ( v97 ) /*0x48c20d*/
                        v38 = v97 + 0x18; /*0x48c213*/
                      else
                        v38 = 0; /*0x48c218*/
                      v83 = (float)v92; /*0x48c221*/
                      v80 = Double_To_SInt32(v104); /*0x48c239*/
                      v76 = Double_To_SInt32(v105); /*0x48c243*/
                      v39 = Double_To_SInt32(v100); /*0x48c244*/
                      v112 = AI_CalculateWeaponAndEnchantmentThreat(v88, v38, v95, v39, v76, v80, v99, v83); /*0x48c25d*/
                      if ( v89 < (double)v112 ) /*0x48c273*/
                      {
                        v89 = v112; /*0x48c27b*/
                        if ( v35 ) /*0x48c27f*/
                        {
                          if ( *v35 ) /*0x48c281*/
                            BSSimpleList_Clear((_DWORD *)*v35); /*0x48c287*/
                          FormHeapFree(*v35); /*0x48c28f*/
                          *v35 = 0; /*0x48c295*/
                          FormHeapFree((unsigned int)v35); /*0x48c297*/
                        }
                        v40 = (unsigned int *)FormHeapAlloc(0xCu); /*0x48c2a1*/
                        if ( v40 ) /*0x48c2ab*/
                        {
                          v40[2] = 0; /*0x48c2ad*/
                          *v40 = 0; /*0x48c2b0*/
                          v40[1] = 0; /*0x48c2b2*/
                          v41 = v40; /*0x48c2b5*/
                        }
                        else
                        {
                          v41 = 0; /*0x48c2b9*/
                        }
                        v35 = v41; /*0x48c2c1*/
                        v41[2] = (unsigned int)v88; /*0x48c2c3*/
                        v42 = (_DWORD *)FormHeapAlloc(8u); /*0x48c2c6*/
                        if ( v42 ) /*0x48c2d0*/
                        {
                          *v42 = 0; /*0x48c2d6*/
                          v42[1] = 0; /*0x48c2d8*/
                          *v41 = (unsigned int)v42; /*0x48c2de*/
                          BSSimpleList_PushFront(v42, (int)v91); /*0x48c2e0*/
                        }
                        else
                        {
                          *v41 = 0; /*0x48c2f0*/
                          BSSimpleList_PushFront(0, (int)v91); /*0x48c2f2*/
                        }
                      }
                      v34 = v106; /*0x48c2ff*/
                    }
                  }
                  v34 = (ExtraDataList **)v34[1]; /*0x48c303*/
                  v106 = v34; /*0x48c308*/
                }
                while ( v34 ); /*0x48c30c*/
                v90 = v35; /*0x48c312*/
              }
            }
            else
            {
              if ( v97 ) /*0x48c321*/
                v43 = v97 + 0x18; /*0x48c323*/
              else
                v43 = 0; /*0x48c328*/
              v84 = (float)v92; /*0x48c331*/
              v81 = Double_To_SInt32(v104); /*0x48c349*/
              v77 = Double_To_SInt32(v105); /*0x48c353*/
              v44 = Double_To_SInt32(v100); /*0x48c354*/
              v113 = AI_CalculateWeaponAndEnchantmentThreat(v88, v43, v95, v44, v77, v81, v99, v84); /*0x48c36d*/
              if ( v89 < (double)v113 ) /*0x48c383*/
              {
                v89 = v113; /*0x48c389*/
                if ( v90 ) /*0x48c38f*/
                {
                  if ( *v90 ) /*0x48c391*/
                    BSSimpleList_Clear((_DWORD *)*v90); /*0x48c397*/
                  FormHeapFree(*v90); /*0x48c39f*/
                  *v90 = 0; /*0x48c3a5*/
                  FormHeapFree((unsigned int)v90); /*0x48c3a7*/
                }
                v45 = (unsigned int *)FormHeapAlloc(0xCu); /*0x48c3b1*/
                if ( v45 ) /*0x48c3bb*/
                {
                  v45[2] = 0; /*0x48c3bd*/
                  *v45 = 0; /*0x48c3c0*/
                  v45[1] = 0; /*0x48c3c2*/
                  v90 = v45; /*0x48c3c5*/
                  v45[2] = (unsigned int)v88; /*0x48c3c9*/
                }
                else
                {
                  v90 = 0; /*0x48c3d0*/
                  *(_DWORD *)8 = v88; /*0x48c3d4*/
                }
              }
            }
          }
        }
      }
      if ( v119 ) /*0x48c3e3*/
      {
        if ( *v119 ) /*0x48c3e9*/
          BSSimpleList_Clear((_DWORD *)*v119); /*0x48c3ef*/
        FormHeapFree(*v119); /*0x48c3f7*/
        *v119 = 0; /*0x48c3fd*/
        FormHeapFree((unsigned int)v119); /*0x48c403*/
      }
LABEL_121:
      v102 = v102->next; /*0x48c40b*/
      p_list = v102; /*0x48c40f*/
    }
    while ( v102 );
  }
  v46 = *(ExtraDataList *****)v93; /*0x48c41e*/
  v103 = *(ExtraDataList *****)v93; /*0x48c426*/
  if ( *(_DWORD *)v93 )
  {
    while ( v46[1] || *v46 )
    {
      v47 = (char *)OblivionDynamicCast( /*0x48c45d*/
                      (*v103)[2],
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &TESObjectWEAP `RTTI Type Descriptor',
                      0);
      v48 = *v103; /*0x48c462*/
      v49 = v47; /*0x48c464*/
      if ( v47 )
      {
        if ( a5 == 0xFFFFFFFF || a5 == v47[0x90] )
        {
          v50 = *v48; /*0x48c488*/
          if ( !*v48
            || (v51 = *v50) == 0
            || !ExtraDataList_GetOwner(*v50)
            || !ExtraDataList_GetOwner(v51)
            || ((v52 = *v48) == 0 || (v53 = *v52) == 0 || !ExtraDataList_GetOwner(*v52)
              ? (v54 = 0)
              : (v54 = (int *)ExtraDataList_GetOwner(v53)),
                v54 == a3) )
          {
            if ( v48[1] )
            {
              v55 = *(TESObjectREFR **)(v93 + 4); /*0x48c4e3*/
              v56 = v55 ? TESObjectREFR_GetContainer(v55) : 0;
              if ( !TESContainer_HasForm(v56, (TESForm *)v49) ) /*0x48c4f6*/
              {
                v57 = *v48; /*0x48c503*/
                if ( *v48 ) /*0x48c503*/
                {
                  while ( *v57 ) /*0x48c514*/
                  {
                    if ( sub_41DEF0((TESForm *)*v57) ) /*0x48c516*/
                    {
                      if ( (int)v48[1] < 0 ) /*0x48c52c*/
                        goto LABEL_194; /*0x48c52c*/
                      break; /*0x48c52c*/
                    }
                    v57 = (ExtraDataList **)v57[1]; /*0x48c51f*/
                    if ( !v57 ) /*0x48c524*/
                      break; /*0x48c524*/
                  }
                }
                if ( v49[0x90] == 5 ) /*0x48c539*/
                {
                  v58 = sub_48B9C0((ExtraDataList *****)v93, a3, a6); /*0x48c547*/
                  v59 = v58; /*0x48c54c*/
                  if ( !v58 ) /*0x48c550*/
                    goto LABEL_194; /*0x48c550*/
                  if ( *v58 ) /*0x48c556*/
                    BSSimpleList_Clear((_DWORD *)*v58); /*0x48c55c*/
                  FormHeapFree(*v59); /*0x48c564*/
                  *v59 = 0; /*0x48c56a*/
                  FormHeapFree((unsigned int)v59); /*0x48c570*/
                }
                v60 = (double (__thiscall **)(int *, int))(*a3 + 0x12C); /*0x48c57f*/
                v61 = TESObjectWEAP_GetWeaponSkillAV(v49);// Equippable weapon-rating branch B: TESObjectWEAP_GetWeaponSkillAV returns at 0x48C58A and the joined Calc_WeaponDamage call returns at 0x48C7C0. /*0x48c585*/
                v101 = (*v60)(a3, v61); /*0x48c592*/
                v62 = (*(unsigned __int16 (__thiscall **)(char *))(*((_DWORD *)v49 + 0x22) + 0x10))(v49 + 0x88); /*0x48c5ac*/
                if ( *v48 && **v48 ) /*0x48c5de*/
                {
                  v120 = *v48; /*0x48c5e7*/
                  do /*0x48c777*/
                  {
                    v63 = *v120; /*0x48c5ef*/
                    v107 = (int)*v120; /*0x48c5f3*/
                    if ( !*v120 ) /*0x48c5f3*/
                      break; /*0x48c5f7*/
                    if ( BaseExtraList_GetExtraData(v63, kExtraData_Health) ) /*0x48c601*/
                    {
                      v64 = ExtraDataList_GetHealthData(v63); /*0x48c60c*/
                    }
                    else
                    {
                      v114 = TESHealthForm_GetHealthForForm(v49); /*0x48c61e*/
                      v64 = (double)v114; /*0x48c622*/
                      if ( v114 < 0 ) /*0x48c626*/
                        v64 = v64 + flt_A2FC78; /*0x48c628*/
                    }
                    v115 = v64; /*0x48c62e*/
                    if ( v115 > 0.0 ) /*0x48c641*/
                    {
                      if ( v49 == (char *)0xFFFFFFA0 ) /*0x48c64c*/
                        v65 = 0; /*0x48c653*/
                      else
                        v65 = *((_DWORD *)v49 + 0x19); /*0x48c64e*/
                      v98 = v115; /*0x48c656*/
                      v116 = TESHealthForm_GetHealthForForm(v49); /*0x48c664*/
                      v66 = (double)v116; /*0x48c668*/
                      if ( v116 < 0 ) /*0x48c66c*/
                        v66 = v66 + flt_A2FC78; /*0x48c66e*/
                      v95 = v98 / v66; /*0x48c67a*/
                      if ( v65 ) /*0x48c67e*/
                        v67 = v65 + 0x18; /*0x48c680*/
                      else
                        v67 = 0; /*0x48c685*/
                      v85 = kTerrainLODQuadRayDirectionZ; /*0x48c690*/
                      v82 = Double_To_SInt32(v104); /*0x48c6a8*/
                      v78 = Double_To_SInt32(v105); /*0x48c6b2*/
                      v68 = Double_To_SInt32(v101); /*0x48c6b3*/
                      v117 = AI_CalculateWeaponAndEnchantmentThreat(v49, v67, v95, v68, v78, v82, v99, v85); /*0x48c6c8*/
                      if ( v89 < (double)v117 ) /*0x48c6de*/
                      {
                        v89 = v117; /*0x48c6e8*/
                        if ( v90 ) /*0x48c6f0*/
                        {
                          if ( *v90 ) /*0x48c6f2*/
                            BSSimpleList_Clear((_DWORD *)*v90); /*0x48c6f8*/
                          FormHeapFree(*v90); /*0x48c700*/
                          *v90 = 0; /*0x48c706*/
                          FormHeapFree((unsigned int)v90); /*0x48c708*/
                        }
                        v69 = (unsigned int *)FormHeapAlloc(0xCu); /*0x48c712*/
                        if ( v69 ) /*0x48c71c*/
                        {
                          v69[2] = 0; /*0x48c71e*/
                          *v69 = 0; /*0x48c721*/
                          v69[1] = 0; /*0x48c723*/
                          v70 = v69; /*0x48c726*/
                        }
                        else
                        {
                          v70 = 0; /*0x48c72a*/
                        }
                        v90 = v70; /*0x48c72e*/
                        v70[2] = (unsigned int)v49; /*0x48c732*/
                        v71 = (_DWORD *)FormHeapAlloc(8u); /*0x48c735*/
                        if ( v71 ) /*0x48c73f*/
                        {
                          *v71 = 0; /*0x48c745*/
                          v71[1] = 0; /*0x48c747*/
                          *v70 = (unsigned int)v71; /*0x48c74d*/
                          BSSimpleList_PushFront(v71, v107); /*0x48c74f*/
                        }
                        else
                        {
                          *v70 = 0; /*0x48c75f*/
                          BSSimpleList_PushFront(0, v107); /*0x48c761*/
                        }
                      }
                    }
                    v120 = (ExtraDataList **)v120[1]; /*0x48c773*/
                  }
                  while ( v120 ); /*0x48c777*/
                }
                else
                {
                  v79 = v62; /*0x48c798*/
                  v75 = Double_To_SInt32(v104); /*0x48c7aa*/
                  v74 = Double_To_SInt32(v105); /*0x48c7b4*/
                  v72 = Double_To_SInt32(v101); /*0x48c7b5*/
                  v118 = Calc_WeaponDamage(v72, v74, v75, v99, v79, v95, 1.0, 0.0); /*0x48c7c0*/
                  if ( v89 < (double)v118 ) /*0x48c7d6*/
                  {
                    v89 = v118; /*0x48c7dc*/
                    if ( v90 ) /*0x48c7e4*/
                    {
                      if ( *v90 ) /*0x48c7e6*/
                        BSSimpleList_Clear((_DWORD *)*v90); /*0x48c7ec*/
                      FormHeapFree(*v90); /*0x48c7f4*/
                      *v90 = 0; /*0x48c7fa*/
                      FormHeapFree((unsigned int)v90); /*0x48c7fc*/
                    }
                    v73 = (unsigned int *)FormHeapAlloc(0xCu); /*0x48c806*/
                    if ( v73 ) /*0x48c810*/
                    {
                      v73[2] = 0; /*0x48c812*/
                      *v73 = 0; /*0x48c815*/
                      v73[1] = 0; /*0x48c817*/
                      v90 = v73; /*0x48c81a*/
                      v73[2] = (unsigned int)v49; /*0x48c81e*/
                    }
                    else
                    {
                      v90 = 0; /*0x48c825*/
                      *(_DWORD *)8 = v49; /*0x48c829*/
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_194:
      v103 = (ExtraDataList ****)v103[1]; /*0x48c830*/
      if ( !v103 ) /*0x48c83d*/
        break; /*0x48c83d*/
      v46 = v103; /*0x48c432*/
    }
  }
  *a4 = sub_546C60(v89, 0, 0.0); /*0x48c843*/
  return v90; /*0x48be14*/
}
