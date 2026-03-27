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
  int v49; // ebx
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
  int v88; // [esp+40h] [ebp-4Ch]
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

  v89 = flt_A3B888;
  v7 = *(TESObjectREFR **)(a1 + 4);
  v93 = a1;
  v90 = 0;
  if ( v7 )
    Container = TESObjectREFR_GetContainer(v7);
  else
    Container = 0;
  v9 = (Actor *)OblivionDynamicCast(
                  Container,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESContainer `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
  if ( a6 )
  {
    EquippedInstance = ContainerExtraData_GetEquippedInstance((ExtraDataList *****)a1, 9, 0);
    if ( EquippedInstance )
    {
      if ( sub_41DF40(*(_BYTE **)*EquippedInstance) )
        return EquippedInstance;
      if ( *EquippedInstance )
        BSSimpleList_Clear((_DWORD *)*EquippedInstance);
      FormHeapFree(*EquippedInstance);
      *EquippedInstance = 0;
      FormHeapFree((unsigned int)EquippedInstance);
    }
  }
  v12 = (int *)(*(int (__thiscall **)(int *, int))(*a3 + 0x120))(a3, a2);
  if ( v12 || (v12 = sub_4A98C0()) != 0 )
    (*(void (__thiscall **)(int *, int))(*v12 + 0x16C))(v12, 0x40);
  v13 = *(TESObjectREFR **)(v94 + 4);
  if ( v13 )
    v14 = TESObjectREFR_GetContainer(v13);
  else
    v14 = 0;
  p_list = &v14->list;
  v105 = ((double (__thiscall *)(int *, int))*(_DWORD *)(*a3 + 0x12C))(a3, 7);
  v104 = (float)(*(int (__thiscall **)(int *, _DWORD))(*a3 + 0x128))(a3, 0);
  if ( v9 )
    FatigueFraction = Actor_GetFatigueFraction(v9);
  else
    FatigueFraction = 1.0;
  v99 = FatigueFraction;
  v95 = 1.0;
  if ( p_list )
  {
    do
    {
      if ( !p_list->data )
        goto LABEL_121;
      v17 = (ExtraDataList **)OblivionDynamicCast(
                                p_list->data->type,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                &TESObjectWEAP `RTTI Type Descriptor',
                                0);
      v18 = v17;
      v88 = (int)v17;
      if ( !v17 )
        goto LABEL_121;
      if ( *((_BYTE *)v17 + 0x90) == 4 )
      {
        v19 = v17 == (ExtraDataList **)0xFFFFFFA0 ? 0 : v17[0x19];
        if ( v19 && !EffectItemList_HasHostile(&v19[1].members.m_presenceBitfield[8]) )
          goto LABEL_121;
      }
      v20 = *(ExtraDataList *****)v93;
      v21 = 1;
      if ( !*(_DWORD *)v93 )
        goto LABEL_36;
      while ( v21 )
      {
        if ( *v20 && (*v20)[2] == v18 )
          v21 = 0;
        else
          v20 = (ExtraDataList ****)v20[1];
        if ( !v20 )
          goto LABEL_36;
      }
      if ( v20 )
        v22 = *v20;
      else
LABEL_36:
        v22 = 0;
      v23 = sub_48B9C0((ExtraDataList *****)v93, a3, a6);
      v119 = v23;
      if ( v23 )
        OblivionDynamicCast(
          (void *)v23[2],
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
          &TESAmmo `RTTI Type Descriptor',
          0);
      v24 = 0;
      if ( !v22 )
        goto LABEL_62;
      v25 = *v22;
      if ( *v22 && (v26 = *v25) != 0 && ExtraDataList_GetOwner(*v25) )
        Owner = (int *)ExtraDataList_GetOwner(v26);
      else
        Owner = 0;
      if ( Owner != a3 && (int)v22[1] > 0 )
      {
        for ( i = *v22; i; i = (ExtraDataList **)i[1] )
        {
          if ( !*i )
            break;
          if ( ExtraDataList_GetOwner(*i) )
            ++v24;
        }
      }
      v29 = *v22;
      if ( !*v22
        || (v30 = *v29) == 0
        || !ExtraDataList_GetOwner(*v29)
        || !ExtraDataList_GetOwner(v30)
        || v24 < (int)v22[1] + v102->data->count )
      {
        count = v102->data->count;
        if ( (int)v22[1] + count > 0 || count < 0 )
        {
LABEL_62:
          if ( a5 == 0xFFFFFFFF || a5 == *(char *)(v88 + 0x90) )
          {
            if ( *(_BYTE *)(v88 + 0x90) == 5 && !v119 )
              goto LABEL_121;
            v93 = (*(unsigned __int16 (__thiscall **)(int, int))(*(_DWORD *)(v88 + 0x88) + 0x10))(
                    v88 + 0x88,
                    WeaponSkillAV);
            if ( HIDWORD(v108) )
            {
              if ( *(_BYTE *)(v88 + 0x90) == 5 )
                v93 += (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)(HIDWORD(v108) + 0x74) + 0x10))(HIDWORD(v108) + 0x74);
            }
            if ( HIBYTE(v88) )
            {
              v32 = *(_BYTE *)(v88 + 0x90);
              if ( v32 == 5 || v32 == 4 )
                v93 = Double_To_SInt32((double)v93 + flt_A3D8F4);
            }
            v33 = (double (__thiscall **)(int *))(*a3 + 0x12C);
            WeaponSkillAV = TESObjectWEAP_GetWeaponSkillAV((char *)LODWORD(v89));
            v100 = (*v33)(a3);
            if ( v22 && *v22 && **v22 )
            {
              if ( v97 )
              {
                v108 = sub_4849C0((void **)v22);
                if ( ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(v97 + 0x24))(v97 + 0x24, 0) > v108 )
                  v97 = 0;
              }
              v34 = *v22;
              v106 = *v22;
              if ( *v22 )
              {
                v35 = v90;
                do
                {
                  v91 = *v34;
                  if ( *v34 )
                  {
                    if ( BaseExtraList_GetExtraData(*v34, kExtraData_Health) )
                    {
                      HealthData = ExtraDataList_GetHealthData(v91);
                    }
                    else
                    {
                      HealthForForm = TESHealthForm_GetHealthForForm((void *)v88);
                      HealthData = (double)HealthForForm;
                      if ( HealthForForm < 0 )
                        HealthData = HealthData + flt_A2FC78;
                    }
                    v110 = HealthData;
                    if ( v110 > 0.0 )
                    {
                      v96 = v110;
                      v111 = TESHealthForm_GetHealthForForm((void *)v88);
                      v37 = (double)v111;
                      if ( v111 < 0 )
                        v37 = v37 + flt_A2FC78;
                      v95 = v96 / v37;
                      if ( v97 )
                        v38 = v97 + 0x18;
                      else
                        v38 = 0;
                      v83 = (float)v92;
                      v80 = Double_To_SInt32(v104);
                      v76 = Double_To_SInt32(v105);
                      v39 = Double_To_SInt32(v100);
                      v112 = sub_547140(v88, v38, v95, v39, v76, v80, v99, v83);
                      if ( v89 < (double)v112 )
                      {
                        v89 = v112;
                        if ( v35 )
                        {
                          if ( *v35 )
                            BSSimpleList_Clear((_DWORD *)*v35);
                          FormHeapFree(*v35);
                          *v35 = 0;
                          FormHeapFree((unsigned int)v35);
                        }
                        v40 = (unsigned int *)FormHeapAlloc(0xCu);
                        if ( v40 )
                        {
                          v40[2] = 0;
                          *v40 = 0;
                          v40[1] = 0;
                          v41 = v40;
                        }
                        else
                        {
                          v41 = 0;
                        }
                        v35 = v41;
                        v41[2] = v88;
                        v42 = (_DWORD *)FormHeapAlloc(8u);
                        if ( v42 )
                        {
                          *v42 = 0;
                          v42[1] = 0;
                          *v41 = (unsigned int)v42;
                          BSSimpleList_PushFront(v42, (int)v91);
                        }
                        else
                        {
                          *v41 = 0;
                          BSSimpleList_PushFront(0, (int)v91);
                        }
                      }
                      v34 = v106;
                    }
                  }
                  v34 = (ExtraDataList **)v34[1];
                  v106 = v34;
                }
                while ( v34 );
                v90 = v35;
              }
            }
            else
            {
              if ( v97 )
                v43 = v97 + 0x18;
              else
                v43 = 0;
              v84 = (float)v92;
              v81 = Double_To_SInt32(v104);
              v77 = Double_To_SInt32(v105);
              v44 = Double_To_SInt32(v100);
              v113 = sub_547140(v88, v43, v95, v44, v77, v81, v99, v84);
              if ( v89 < (double)v113 )
              {
                v89 = v113;
                if ( v90 )
                {
                  if ( *v90 )
                    BSSimpleList_Clear((_DWORD *)*v90);
                  FormHeapFree(*v90);
                  *v90 = 0;
                  FormHeapFree((unsigned int)v90);
                }
                v45 = (unsigned int *)FormHeapAlloc(0xCu);
                if ( v45 )
                {
                  v45[2] = 0;
                  *v45 = 0;
                  v45[1] = 0;
                  v90 = v45;
                  v45[2] = v88;
                }
                else
                {
                  v90 = 0;
                  *(_DWORD *)8 = v88;
                }
              }
            }
          }
        }
      }
      if ( v119 )
      {
        if ( *v119 )
          BSSimpleList_Clear((_DWORD *)*v119);
        FormHeapFree(*v119);
        *v119 = 0;
        FormHeapFree((unsigned int)v119);
      }
LABEL_121:
      v102 = v102->next;
      p_list = v102;
    }
    while ( v102 );
  }
  v46 = *(ExtraDataList *****)v93;
  v103 = *(ExtraDataList *****)v93;
  if ( *(_DWORD *)v93 )
  {
    while ( v46[1] || *v46 )
    {
      v47 = (char *)OblivionDynamicCast(
                      (*v103)[2],
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &TESObjectWEAP `RTTI Type Descriptor',
                      0);
      v48 = *v103;
      v49 = (int)v47;
      if ( v47 )
      {
        if ( a5 == 0xFFFFFFFF || a5 == v47[0x90] )
        {
          v50 = *v48;
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
              v55 = *(TESObjectREFR **)(v93 + 4);
              v56 = v55 ? TESObjectREFR_GetContainer(v55) : 0;
              if ( !TESContainer_HasForm(v56, (TESForm *)v49) )
              {
                v57 = *v48;
                if ( *v48 )
                {
                  while ( *v57 )
                  {
                    if ( sub_41DEF0((TESForm *)*v57) )
                    {
                      if ( (int)v48[1] < 0 )
                        goto LABEL_194;
                      break;
                    }
                    v57 = (ExtraDataList **)v57[1];
                    if ( !v57 )
                      break;
                  }
                }
                if ( *(_BYTE *)(v49 + 0x90) == 5 )
                {
                  v58 = sub_48B9C0((ExtraDataList *****)v93, a3, a6);
                  v59 = v58;
                  if ( !v58 )
                    goto LABEL_194;
                  if ( *v58 )
                    BSSimpleList_Clear((_DWORD *)*v58);
                  FormHeapFree(*v59);
                  *v59 = 0;
                  FormHeapFree((unsigned int)v59);
                }
                v60 = (double (__thiscall **)(int *, int))(*a3 + 0x12C);
                v61 = TESObjectWEAP_GetWeaponSkillAV((char *)v49);
                v101 = (*v60)(a3, v61);
                v62 = (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)(v49 + 0x88) + 0x10))(v49 + 0x88);
                if ( *v48 && **v48 )
                {
                  v120 = *v48;
                  do
                  {
                    v63 = *v120;
                    v107 = (int)*v120;
                    if ( !*v120 )
                      break;
                    if ( BaseExtraList_GetExtraData(v63, kExtraData_Health) )
                    {
                      v64 = ExtraDataList_GetHealthData(v63);
                    }
                    else
                    {
                      v114 = TESHealthForm_GetHealthForForm((void *)v49);
                      v64 = (double)v114;
                      if ( v114 < 0 )
                        v64 = v64 + flt_A2FC78;
                    }
                    v115 = v64;
                    if ( v115 > 0.0 )
                    {
                      if ( v49 == 0xFFFFFFA0 )
                        v65 = 0;
                      else
                        v65 = *(_DWORD *)(v49 + 0x64);
                      v98 = v115;
                      v116 = TESHealthForm_GetHealthForForm((void *)v49);
                      v66 = (double)v116;
                      if ( v116 < 0 )
                        v66 = v66 + flt_A2FC78;
                      v95 = v98 / v66;
                      if ( v65 )
                        v67 = v65 + 0x18;
                      else
                        v67 = 0;
                      v85 = flt_A30634;
                      v82 = Double_To_SInt32(v104);
                      v78 = Double_To_SInt32(v105);
                      v68 = Double_To_SInt32(v101);
                      v117 = sub_547140(v49, v67, v95, v68, v78, v82, v99, v85);
                      if ( v89 < (double)v117 )
                      {
                        v89 = v117;
                        if ( v90 )
                        {
                          if ( *v90 )
                            BSSimpleList_Clear((_DWORD *)*v90);
                          FormHeapFree(*v90);
                          *v90 = 0;
                          FormHeapFree((unsigned int)v90);
                        }
                        v69 = (unsigned int *)FormHeapAlloc(0xCu);
                        if ( v69 )
                        {
                          v69[2] = 0;
                          *v69 = 0;
                          v69[1] = 0;
                          v70 = v69;
                        }
                        else
                        {
                          v70 = 0;
                        }
                        v90 = v70;
                        v70[2] = v49;
                        v71 = (_DWORD *)FormHeapAlloc(8u);
                        if ( v71 )
                        {
                          *v71 = 0;
                          v71[1] = 0;
                          *v70 = (unsigned int)v71;
                          BSSimpleList_PushFront(v71, v107);
                        }
                        else
                        {
                          *v70 = 0;
                          BSSimpleList_PushFront(0, v107);
                        }
                      }
                    }
                    v120 = (ExtraDataList **)v120[1];
                  }
                  while ( v120 );
                }
                else
                {
                  v79 = v62;
                  v75 = Double_To_SInt32(v104);
                  v74 = Double_To_SInt32(v105);
                  v72 = Double_To_SInt32(v101);
                  v118 = Calc_WeaponDamage(v72, v74, v75, v99, v79, v95, 1.0, 0.0);
                  if ( v89 < (double)v118 )
                  {
                    v89 = v118;
                    if ( v90 )
                    {
                      if ( *v90 )
                        BSSimpleList_Clear((_DWORD *)*v90);
                      FormHeapFree(*v90);
                      *v90 = 0;
                      FormHeapFree((unsigned int)v90);
                    }
                    v73 = (unsigned int *)FormHeapAlloc(0xCu);
                    if ( v73 )
                    {
                      v73[2] = 0;
                      *v73 = 0;
                      v73[1] = 0;
                      v90 = v73;
                      v73[2] = v49;
                    }
                    else
                    {
                      v90 = 0;
                      *(_DWORD *)8 = v49;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_194:
      v103 = (ExtraDataList ****)v103[1];
      if ( !v103 )
        break;
      v46 = v103;
    }
  }
  *a4 = sub_546C60(v89, 0, 0.0);
  return v90;
}
