unsigned int *__thiscall sub_48C870(ExtraDataList *****this, BSExtraDataVtbl *a2, int a3, char a4)
{
  ExtraDataList *****v4; // edi
  unsigned int *EquippedInstance; // eax
  unsigned int *v6; // esi
  TESObjectREFR *v8; // ecx
  TESContainer *Container; // eax
  bool v10; // zf
  TESContainer_Entry *p_list; // eax
  unsigned __int16 *v12; // ebx
  ExtraDataList ****v13; // eax
  char v14; // dl
  ExtraDataList ***v15; // edi
  int v16; // ebp
  ExtraDataList **v17; // eax
  ExtraDataList *v18; // esi
  BSExtraDataVtbl *Owner; // eax
  ExtraDataList **i; // esi
  ExtraDataList **v21; // eax
  ExtraDataList *v22; // esi
  int count; // eax
  ExtraDataList **v24; // esi
  ExtraDataList *v25; // edi
  double HealthData; // st7
  double v27; // st7
  double (__thiscall **v28)(BSExtraDataVtbl *); // esi
  unsigned int *v29; // eax
  unsigned int *v30; // esi
  _DWORD *v31; // eax
  double v32; // st7
  double (__thiscall **v33)(BSExtraDataVtbl *); // esi
  unsigned int *v34; // eax
  _BYTE *v35; // eax
  ExtraDataList ***v36; // ebp
  _BYTE *v37; // edi
  ExtraDataList **v38; // eax
  ExtraDataList *v39; // esi
  ExtraDataList **v40; // eax
  ExtraDataList *v41; // esi
  BSExtraDataVtbl *v42; // eax
  BSExtraDataVtbl *v43; // ebx
  TESObjectREFR *v44; // ecx
  TESContainer *v45; // eax
  ExtraDataList **v46; // eax
  ExtraDataList *v47; // ebp
  double v48; // st7
  double v49; // st7
  double (__thiscall **v50)(BSExtraDataVtbl *); // esi
  unsigned int *v51; // eax
  unsigned int *v52; // esi
  _DWORD *v53; // eax
  double v54; // st7
  double (__thiscall **v55)(BSExtraDataVtbl *); // esi
  unsigned int *v56; // eax
  float v57; // [esp+10h] [ebp-34h]
  float v58; // [esp+10h] [ebp-34h]
  float v59; // [esp+10h] [ebp-34h]
  float v60; // [esp+10h] [ebp-34h]
  float v61; // [esp+14h] [ebp-30h]
  float v62; // [esp+14h] [ebp-30h]
  float v63; // [esp+14h] [ebp-30h]
  float v64; // [esp+14h] [ebp-30h]
  float v65; // [esp+18h] [ebp-2Ch]
  float v66; // [esp+18h] [ebp-2Ch]
  float v67; // [esp+18h] [ebp-2Ch]
  float v68; // [esp+18h] [ebp-2Ch]
  float v69; // [esp+18h] [ebp-2Ch]
  float v70; // [esp+18h] [ebp-2Ch]
  unsigned int *v71; // [esp+2Ch] [ebp-18h]
  float v72; // [esp+30h] [ebp-14h]
  TESContainer_Entry *v73; // [esp+34h] [ebp-10h]
  ExtraDataList **v74; // [esp+34h] [ebp-10h]
  ExtraDataList **v75; // [esp+38h] [ebp-Ch]
  ExtraDataList ****j; // [esp+38h] [ebp-Ch]
  float v78; // [esp+40h] [ebp-4h]
  float v79; // [esp+40h] [ebp-4h]
  int HealthForForm; // [esp+50h] [ebp+Ch]
  float v81; // [esp+50h] [ebp+Ch]
  float v82; // [esp+50h] [ebp+Ch]
  float v83; // [esp+50h] [ebp+Ch]
  int v84; // [esp+50h] [ebp+Ch]
  float v85; // [esp+50h] [ebp+Ch]
  float v86; // [esp+50h] [ebp+Ch]
  int v87; // [esp+50h] [ebp+Ch]
  float v88; // [esp+50h] [ebp+Ch]
  float v89; // [esp+50h] [ebp+Ch]
  float v90; // [esp+50h] [ebp+Ch]
  int v91; // [esp+50h] [ebp+Ch]
  float v92; // [esp+50h] [ebp+Ch]
  float v93; // [esp+50h] [ebp+Ch]

  v72 = flt_A3B888;
  v4 = this;
  v71 = 0;
  if ( a4 )
  {
    EquippedInstance = ContainerExtraData_GetEquippedInstance(this, a3, 0);
    v6 = EquippedInstance;
    if ( EquippedInstance )
    {
      if ( sub_41DF40(*(_BYTE **)*EquippedInstance) )
        return v6;
      if ( *v6 )
        BSSimpleList_Clear((_DWORD *)*v6);
      FormHeapFree(*v6);
      *v6 = 0;
      FormHeapFree((unsigned int)v6);
    }
  }
  v8 = (TESObjectREFR *)v4[1];
  if ( v8 )
    Container = TESObjectREFR_GetContainer(v8);
  else
    Container = 0;
  v10 = &Container->list == 0;
  p_list = &Container->list;
  v73 = p_list;
  if ( !v10 )
  {
    while ( p_list->next || p_list->data )
    {
      v12 = (unsigned __int16 *)OblivionDynamicCast(
                                  p_list->data->type,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                  &TESObjectARMO `RTTI Type Descriptor',
                                  0);
      v13 = *v4;
      v14 = 1;
      if ( !*v4 )
        goto LABEL_23;
      while ( v14 )
      {
        if ( *v13 && (*v13)[2] == (ExtraDataList **)v12 )
          v14 = 0;
        else
          v13 = (ExtraDataList ****)v13[1];
        if ( !v13 )
          goto LABEL_23;
      }
      if ( v13 )
        v15 = *v13;
      else
LABEL_23:
        v15 = 0;
      v16 = 0;
      if ( !v15 )
        goto LABEL_46;
      v17 = *v15;
      if ( *v15 && (v18 = *v17) != 0 && ExtraDataList_GetOwner(*v17) )
        Owner = ExtraDataList_GetOwner(v18);
      else
        Owner = 0;
      if ( Owner != a2 && (int)v15[1] > 0 )
      {
        for ( i = *v15; i; i = (ExtraDataList **)i[1] )
        {
          if ( !*i )
            break;
          if ( ExtraDataList_GetOwner(*i) )
            ++v16;
        }
      }
      v21 = *v15;
      if ( !*v15
        || (v22 = *v21) == 0
        || !ExtraDataList_GetOwner(*v21)
        || !ExtraDataList_GetOwner(v22)
        || v16 < (int)v15[1] + v73->data->count )
      {
        count = v73->data->count;
        if ( (int)v15[1] + count > 0 || count < 0 )
        {
LABEL_46:
          if ( v12 )
          {
            if ( a3 != 0xFFFFFFFF && TESBipedModelForm_CoversSlot(v12 + 0x32, a3, 0) )
            {
              if ( v15 && *v15 && **v15 )
              {
                v24 = *v15;
                v75 = *v15;
                do
                {
                  v25 = *v24;
                  if ( !*v24 )
                    break;
                  if ( !ExtraDataList_GetOwner(*v24) || ExtraDataList_GetOwner(v25) == a2 )
                  {
                    if ( BaseExtraList_GetExtraData(v25, kExtraData_Health) )
                    {
                      HealthData = ExtraDataList_GetHealthData(v25);
                    }
                    else
                    {
                      HealthForForm = TESHealthForm_GetHealthForForm(v12);
                      HealthData = (double)HealthForForm;
                      if ( HealthForForm < 0 )
                        HealthData = HealthData + flt_A2FC78;
                    }
                    v81 = HealthData;
                    v27 = v81;
                    if ( v81 > 0.0 )
                    {
                      v28 = (double (__thiscall **)(BSExtraDataVtbl *))((char *)a2->Destructor + 0x12C);
                      v82 = (double)v12[0x72] / fCostant_100;
                      v65 = v27;
                      v66 = ((double (__thiscall *)(BSExtraDataVtbl *, int, _DWORD))*v28)(a2, 7, LODWORD(v65));
                      v61 = COERCE_FLOAT(TESObjectARMO_GetArmorSkillAV(v12));
                      v57 = (*v28)(a2);
                      v83 = Calc_ArmorRating((unsigned __int16)(int)v82, v57, v61, v66);
                      if ( v72 >= (double)v83 )
                      {
                        v24 = v75;
                      }
                      else
                      {
                        v72 = v83;
                        if ( v71 )
                        {
                          if ( *v71 )
                            BSSimpleList_Clear((_DWORD *)*v71);
                          FormHeapFree(*v71);
                          *v71 = 0;
                          FormHeapFree((unsigned int)v71);
                        }
                        v29 = (unsigned int *)FormHeapAlloc(0xCu);
                        if ( v29 )
                        {
                          v29[2] = 0;
                          *v29 = 0;
                          v29[1] = 0;
                          v30 = v29;
                        }
                        else
                        {
                          v30 = 0;
                        }
                        v71 = v30;
                        v30[2] = (unsigned int)v12;
                        v31 = (_DWORD *)FormHeapAlloc(8u);
                        if ( v31 )
                        {
                          *v31 = 0;
                          v31[1] = 0;
                          *v30 = (unsigned int)v31;
                          BSSimpleList_PushFront(v31, (int)v25);
                        }
                        else
                        {
                          *v30 = 0;
                          BSSimpleList_PushFront(0, (int)v25);
                        }
                        v24 = v75;
                      }
                    }
                  }
                  v24 = (ExtraDataList **)v24[1];
                  v75 = v24;
                }
                while ( v24 );
              }
              else
              {
                v84 = TESHealthForm_GetHealthForForm(v12);
                v32 = (double)v84;
                if ( v84 < 0 )
                  v32 = v32 + flt_A2FC78;
                v78 = v32;
                v33 = (double (__thiscall **)(BSExtraDataVtbl *))((char *)a2->Destructor + 0x12C);
                v85 = (double)v12[0x72] / fCostant_100;
                v67 = ((double (__thiscall *)(BSExtraDataVtbl *, int, _DWORD))*v33)(a2, 7, LODWORD(v78));
                v62 = COERCE_FLOAT(TESObjectARMO_GetArmorSkillAV(v12));
                v58 = (*v33)(a2);
                v86 = Calc_ArmorRating((unsigned __int16)(int)v85, v58, v62, v67);
                if ( v72 < (double)v86 )
                {
                  v72 = v86;
                  if ( v71 )
                  {
                    if ( *v71 )
                      BSSimpleList_Clear((_DWORD *)*v71);
                    FormHeapFree(*v71);
                    *v71 = 0;
                    FormHeapFree((unsigned int)v71);
                  }
                  v34 = (unsigned int *)FormHeapAlloc(0xCu);
                  if ( v34 )
                  {
                    v34[2] = 0;
                    *v34 = 0;
                    v34[1] = 0;
                    v71 = v34;
                    v34[2] = (unsigned int)v12;
                  }
                  else
                  {
                    v71 = 0;
                    *(_DWORD *)8 = v12;
                  }
                }
              }
            }
          }
        }
      }
      v4 = this;
      v73 = v73->next;
      if ( !v73 )
        break;
      p_list = v73;
    }
  }
  for ( j = *v4; j; j = (ExtraDataList ****)j[1] )
  {
    if ( !j[1] && !*j )
      return v71;
    v35 = OblivionDynamicCast(
            (*j)[2],
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
            &TESObjectARMO `RTTI Type Descriptor',
            0);
    v36 = *j;
    v37 = v35;
    if ( v35 )
    {
      v38 = *v36;
      if ( *v36 && (v39 = *v38) != 0 && ExtraDataList_GetOwner(*v38) && ExtraDataList_GetOwner(v39) )
      {
        v40 = *v36;
        if ( *v36 && (v41 = *v40) != 0 && ExtraDataList_GetOwner(*v40) )
          v42 = ExtraDataList_GetOwner(v41);
        else
          v42 = 0;
        v43 = a2;
        if ( v42 != a2 )
          continue;
      }
      else
      {
        v43 = a2;
      }
      if ( v36[1] )
      {
        v44 = (TESObjectREFR *)*(this + 1);
        if ( v44 )
          v45 = TESObjectREFR_GetContainer(v44);
        else
          v45 = 0;
        if ( !TESContainer_HasForm(v45, (TESForm *)v37)
          && a3 != 0xFFFFFFFF
          && TESBipedModelForm_CoversSlot((unsigned __int16 *)v37 + 0x32, a3, 0)
          && (int)v36[1] >= 0 )
        {
          v46 = *v36;
          if ( *v36 && *v46 )
          {
            v74 = *v36;
            do
            {
              v47 = *v46;
              if ( !*v46 )
                break;
              if ( !ExtraDataList_GetOwner(*v46) || ExtraDataList_GetOwner(v47) == v43 )
              {
                if ( BaseExtraList_GetExtraData(v47, kExtraData_Health) )
                {
                  v48 = ExtraDataList_GetHealthData(v47);
                }
                else
                {
                  v87 = TESHealthForm_GetHealthForForm(v37);
                  v48 = (double)v87;
                  if ( v87 < 0 )
                    v48 = v48 + flt_A2FC78;
                }
                v88 = v48;
                v49 = v88;
                if ( v88 > 0.0 )
                {
                  v50 = (double (__thiscall **)(BSExtraDataVtbl *))((char *)v43->Destructor + 0x12C);
                  v89 = (double)*((unsigned __int16 *)v37 + 0x72) / fCostant_100;
                  v68 = v49;
                  v69 = ((double (__thiscall *)(BSExtraDataVtbl *, int, _DWORD))*v50)(v43, 7, LODWORD(v68));
                  v63 = COERCE_FLOAT(TESObjectARMO_GetArmorSkillAV(v37));
                  v59 = (*v50)(v43);
                  v90 = Calc_ArmorRating((unsigned __int16)(int)v89, v59, v63, v69);
                  if ( v72 < (double)v90 )
                  {
                    v72 = v90;
                    if ( v71 )
                    {
                      if ( *v71 )
                        BSSimpleList_Clear((_DWORD *)*v71);
                      FormHeapFree(*v71);
                      *v71 = 0;
                      FormHeapFree((unsigned int)v71);
                    }
                    v51 = (unsigned int *)FormHeapAlloc(0xCu);
                    if ( v51 )
                    {
                      v51[2] = 0;
                      *v51 = 0;
                      v51[1] = 0;
                      v52 = v51;
                    }
                    else
                    {
                      v52 = 0;
                    }
                    v71 = v52;
                    v52[2] = (unsigned int)v37;
                    v53 = (_DWORD *)FormHeapAlloc(8u);
                    if ( v53 )
                    {
                      *v53 = 0;
                      v53[1] = 0;
                      *v52 = (unsigned int)v53;
                      BSSimpleList_PushFront(v53, (int)v47);
                    }
                    else
                    {
                      *v52 = 0;
                      BSSimpleList_PushFront(0, (int)v47);
                    }
                  }
                }
              }
              v74 = (ExtraDataList **)v74[1];
              v46 = v74;
            }
            while ( v74 );
          }
          else
          {
            v91 = TESHealthForm_GetHealthForForm(v37);
            v54 = (double)v91;
            if ( v91 < 0 )
              v54 = v54 + flt_A2FC78;
            v79 = v54;
            v55 = (double (__thiscall **)(BSExtraDataVtbl *))((char *)v43->Destructor + 0x12C);
            v92 = (double)*((unsigned __int16 *)v37 + 0x72) / fCostant_100;
            v70 = ((double (__thiscall *)(BSExtraDataVtbl *, int, _DWORD))*v55)(v43, 7, LODWORD(v79));
            v64 = COERCE_FLOAT(TESObjectARMO_GetArmorSkillAV(v37));
            v60 = (*v55)(v43);
            v93 = Calc_ArmorRating((unsigned __int16)(int)v92, v60, v64, v70);
            if ( v72 < (double)v93 )
            {
              v72 = v93;
              if ( v71 )
              {
                if ( *v71 )
                  BSSimpleList_Clear((_DWORD *)*v71);
                FormHeapFree(*v71);
                *v71 = 0;
                FormHeapFree((unsigned int)v71);
              }
              v56 = (unsigned int *)FormHeapAlloc(0xCu);
              if ( v56 )
              {
                v56[2] = 0;
                *v56 = 0;
                v56[1] = 0;
                v71 = v56;
                v56[2] = (unsigned int)v37;
              }
              else
              {
                v71 = 0;
                *(_DWORD *)8 = v37;
              }
            }
          }
        }
      }
    }
  }
  return v71;
}
