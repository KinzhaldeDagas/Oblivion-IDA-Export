unsigned int *__thiscall ContainerChanges_SelectBestArmorForSlot(
        ExtraDataList *****this,
        BSExtraDataVtbl *a2,
        int a3,
        char a4)
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
  char *v28; // esi
  unsigned int *v29; // eax
  unsigned int *v30; // esi
  _DWORD *v31; // eax
  double v32; // st7
  char *v33; // esi
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

  v72 = flt_A3B888; /*0x48c87f*/
  v4 = this; /*0x48c884*/
  v71 = 0; /*0x48c88a*/
  if ( a4 ) /*0x48c892*/
  {
    EquippedInstance = ContainerExtraData_GetEquippedInstance(this, a3, 0); /*0x48c89b*/
    v6 = EquippedInstance; /*0x48c8a0*/
    if ( EquippedInstance ) /*0x48c8a4*/
    {
      if ( sub_41DF40(*(_BYTE **)*EquippedInstance) ) /*0x48c8aa*/
        return v6; /*0x48c8ba*/
      if ( *v6 ) /*0x48c8bd*/
        BSSimpleList_Clear((_DWORD *)*v6); /*0x48c8c3*/
      FormHeapFree(*v6); /*0x48c8cb*/
      *v6 = 0; /*0x48c8d1*/
      FormHeapFree((unsigned int)v6); /*0x48c8d7*/
    }
  }
  v8 = (TESObjectREFR *)v4[1]; /*0x48c8df*/
  if ( v8 ) /*0x48c8e4*/
    Container = TESObjectREFR_GetContainer(v8); /*0x48c8e6*/
  else
    Container = 0; /*0x48c8ed*/
  v10 = &Container->list == 0; /*0x48c8f0*/
  p_list = &Container->list; /*0x48c8f0*/
  v73 = p_list; /*0x48c8f4*/
  if ( !v10 ) /*0x48c8f8*/
  {
    while ( p_list->next || p_list->data ) /*0x48c904*/
    {
      v12 = (unsigned __int16 *)OblivionDynamicCast( /*0x48c92c*/
                                  p_list->data->type,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                  &TESObjectARMO `RTTI Type Descriptor',
                                  0);
      v13 = *v4; /*0x48c92e*/
      v14 = 1; /*0x48c935*/
      if ( !*v4 ) /*0x48c92e*/
        goto LABEL_23; /*0x48c92e*/
      while ( v14 ) /*0x48c942*/
      {
        if ( *v13 && (*v13)[2] == (ExtraDataList **)v12 ) /*0x48c94d*/
          v14 = 0; /*0x48c94f*/
        else
          v13 = (ExtraDataList ****)v13[1]; /*0x48c953*/
        if ( !v13 ) /*0x48c958*/
          goto LABEL_23; /*0x48c958*/
      }
      if ( v13 ) /*0x48c988*/
        v15 = *v13; /*0x48c98a*/
      else
LABEL_23:
        v15 = 0; /*0x48c95a*/
      v16 = 0; /*0x48c95c*/
      if ( !v15 ) /*0x48c960*/
        goto LABEL_46; /*0x48c960*/
      v17 = *v15; /*0x48c966*/
      if ( *v15 && (v18 = *v17) != 0 && ExtraDataList_GetOwner(*v17) ) /*0x48c974*/
        Owner = ExtraDataList_GetOwner(v18); /*0x48c97f*/
      else
        Owner = 0; /*0x48c98e*/
      if ( Owner != a2 && (int)v15[1] > 0 ) /*0x48c99a*/
      {
        for ( i = *v15; i; i = (ExtraDataList **)i[1] ) /*0x48c99c*/
        {
          if ( !*i ) /*0x48c9a2*/
            break; /*0x48c9a6*/
          if ( ExtraDataList_GetOwner(*i) ) /*0x48c9a8*/
            ++v16; /*0x48c9b1*/
        }
      }
      v21 = *v15; /*0x48c9bb*/
      if ( !*v15 /*0x48c9ea*/
        || (v22 = *v21) == 0
        || !ExtraDataList_GetOwner(*v21)
        || !ExtraDataList_GetOwner(v22)
        || v16 < (int)v15[1] + v73->data->count )
      {
        count = v73->data->count; /*0x48c9f6*/
        if ( (int)v15[1] + count > 0 || count < 0 ) /*0x48ca03*/
        {
LABEL_46:
          if ( v12 ) /*0x48ca0b*/
          {
            if ( a3 != 0xFFFFFFFF && TESBipedModelForm_CoversSlot(v12 + 0x32, a3, 0) ) /*0x48ca26*/
            {
              if ( v15 && *v15 && **v15 ) /*0x48ca45*/
              {
                v24 = *v15; /*0x48ca52*/
                v75 = *v15; /*0x48ca54*/
                do /*0x48cc01*/
                {
                  v25 = *v24; /*0x48ca60*/
                  if ( !*v24 ) /*0x48ca60*/
                    break; /*0x48ca64*/
                  if ( !ExtraDataList_GetOwner(*v24) || ExtraDataList_GetOwner(v25) == a2 ) /*0x48ca7e*/
                  {
                    if ( BaseExtraList_GetExtraData(v25, kExtraData_Health) ) /*0x48ca88*/
                    {
                      HealthData = ExtraDataList_GetHealthData(v25); /*0x48ca93*/
                    }
                    else
                    {
                      HealthForForm = TESHealthForm_GetHealthForForm(v12); /*0x48caa5*/
                      HealthData = (double)HealthForForm; /*0x48caa9*/
                      if ( HealthForForm < 0 ) /*0x48caad*/
                        HealthData = HealthData + flt_A2FC78; /*0x48caaf*/
                    }
                    v81 = HealthData; /*0x48cab5*/
                    v27 = v81; /*0x48cac3*/
                    if ( v81 > 0.0 ) /*0x48cac8*/
                    {
                      v28 = (char *)a2->Destructor + 0x12C; /*0x48caf2*/
                      v82 = (double)v12[0x72] / fCostant_100; /*0x48caf8*/
                      v65 = v27; /*0x48cafc*/
                      v66 = ((double (__thiscall *)(BSExtraDataVtbl *, int, _DWORD))*(_DWORD *)v28)(a2, 7, LODWORD(v65)); /*0x48cb06*/
                      v61 = COERCE_FLOAT(TESObjectARMO_GetArmorSkillAV(v12));// Paired Medium boundary 3/7 in ContainerChanges_SelectBestArmorForSlot; armor skill selection precedes Calc_ArmorRating at 0x48CB41. /*0x48cb10*/
                      v57 = ((double (__thiscall *)(BSExtraDataVtbl *))*(_DWORD *)v28)(a2); /*0x48cb16*/
                      v83 = Calc_ArmorRating((int)v82, v57, v61, v66);// Paired Medium boundary 3/7: candidate armor rating used while selecting the best armor for a slot. /*0x48cb46*/
                      if ( v72 >= (double)v83 ) /*0x48cb5c*/
                      {
                        v24 = v75; /*0x48cbf2*/
                      }
                      else
                      {
                        v72 = v83; /*0x48cb66*/
                        if ( v71 ) /*0x48cb6c*/
                        {
                          if ( *v71 ) /*0x48cb6e*/
                            BSSimpleList_Clear((_DWORD *)*v71); /*0x48cb74*/
                          FormHeapFree(*v71); /*0x48cb7c*/
                          *v71 = 0; /*0x48cb82*/
                          FormHeapFree((unsigned int)v71); /*0x48cb88*/
                        }
                        v29 = (unsigned int *)FormHeapAlloc(0xCu); /*0x48cb92*/
                        if ( v29 ) /*0x48cb9c*/
                        {
                          v29[2] = 0; /*0x48cba0*/
                          *v29 = 0; /*0x48cba3*/
                          v29[1] = 0; /*0x48cba5*/
                          v30 = v29; /*0x48cba8*/
                        }
                        else
                        {
                          v30 = 0; /*0x48cbac*/
                        }
                        v71 = v30; /*0x48cbb0*/
                        v30[2] = (unsigned int)v12; /*0x48cbb4*/
                        v31 = (_DWORD *)FormHeapAlloc(8u); /*0x48cbb7*/
                        if ( v31 ) /*0x48cbc1*/
                        {
                          *v31 = 0; /*0x48cbc3*/
                          v31[1] = 0; /*0x48cbc9*/
                          *v30 = (unsigned int)v31; /*0x48cbd3*/
                          BSSimpleList_PushFront(v31, (int)v25); /*0x48cbd5*/
                        }
                        else
                        {
                          *v30 = 0; /*0x48cbe5*/
                          BSSimpleList_PushFront(0, (int)v25); /*0x48cbe7*/
                        }
                        v24 = v75; /*0x48cbda*/
                      }
                    }
                  }
                  v24 = (ExtraDataList **)v24[1]; /*0x48cbf8*/
                  v75 = v24; /*0x48cbfd*/
                }
                while ( v24 ); /*0x48cc01*/
              }
              else
              {
                v84 = TESHealthForm_GetHealthForForm(v12); /*0x48cc14*/
                v32 = (double)v84; /*0x48cc18*/
                if ( v84 < 0 ) /*0x48cc1c*/
                  v32 = v32 + flt_A2FC78; /*0x48cc1e*/
                v78 = v32; /*0x48cc2b*/
                v33 = (char *)a2->Destructor + 0x12C; /*0x48cc4d*/
                v85 = (double)v12[0x72] / fCostant_100; /*0x48cc53*/
                v67 = ((double (__thiscall *)(BSExtraDataVtbl *, int, _DWORD))*(_DWORD *)v33)(a2, 7, LODWORD(v78)); /*0x48cc65*/
                v62 = COERCE_FLOAT(TESObjectARMO_GetArmorSkillAV(v12));// Paired Medium boundary 4/7 in ContainerChanges_SelectBestArmorForSlot; consumer is Calc_ArmorRating at 0x48CCA0. /*0x48cc6d*/
                v58 = ((double (__thiscall *)(BSExtraDataVtbl *))*(_DWORD *)v33)(a2); /*0x48cc75*/
                v86 = Calc_ArmorRating((int)v85, v58, v62, v67);// Paired Medium boundary 4/7: candidate armor rating used while selecting the best armor for a slot. /*0x48cca5*/
                if ( v72 < (double)v86 ) /*0x48ccbb*/
                {
                  v72 = v86; /*0x48ccc1*/
                  if ( v71 ) /*0x48ccc9*/
                  {
                    if ( *v71 ) /*0x48cccb*/
                      BSSimpleList_Clear((_DWORD *)*v71); /*0x48ccd1*/
                    FormHeapFree(*v71); /*0x48ccd9*/
                    *v71 = 0; /*0x48ccdf*/
                    FormHeapFree((unsigned int)v71); /*0x48cce1*/
                  }
                  v34 = (unsigned int *)FormHeapAlloc(0xCu); /*0x48cceb*/
                  if ( v34 ) /*0x48ccf5*/
                  {
                    v34[2] = 0; /*0x48ccf7*/
                    *v34 = 0; /*0x48ccfa*/
                    v34[1] = 0; /*0x48ccfc*/
                    v71 = v34; /*0x48ccff*/
                    v34[2] = (unsigned int)v12; /*0x48cd03*/
                  }
                  else
                  {
                    v71 = 0; /*0x48cd0a*/
                    *(_DWORD *)8 = v12; /*0x48cd0e*/
                  }
                }
              }
            }
          }
        }
      }
      v4 = this; /*0x48cd1e*/
      v73 = v73->next; /*0x48cd22*/
      if ( !v73 ) /*0x48cd26*/
        break; /*0x48cd26*/
      p_list = v73; /*0x48c900*/
    }
  }
  for ( j = *v4; j; j = (ExtraDataList ****)j[1] ) /*0x48cd30*/
  {
    if ( !j[1] && !*j ) /*0x48cd4d*/
      return v71; /*0x48cd4d*/
    v35 = OblivionDynamicCast( /*0x48cd67*/
            (*j)[2],
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
            &TESObjectARMO `RTTI Type Descriptor',
            0);
    v36 = *j; /*0x48cd6c*/
    v37 = v35; /*0x48cd6e*/
    if ( v35 ) /*0x48cd75*/
    {
      v38 = *v36; /*0x48cd7b*/
      if ( *v36 && (v39 = *v38) != 0 && ExtraDataList_GetOwner(*v38) && ExtraDataList_GetOwner(v39) ) /*0x48cd95*/
      {
        v40 = *v36; /*0x48cd9e*/
        if ( *v36 && (v41 = *v40) != 0 && ExtraDataList_GetOwner(*v40) ) /*0x48cdad*/
          v42 = ExtraDataList_GetOwner(v41); /*0x48cdb8*/
        else
          v42 = 0; /*0x48cdbf*/
        v43 = a2; /*0x48cdc1*/
        if ( v42 != a2 ) /*0x48cdc7*/
          continue; /*0x48cdc7*/
      }
      else
      {
        v43 = a2; /*0x48cdcf*/
      }
      if ( v36[1] ) /*0x48cdd3*/
      {
        v44 = (TESObjectREFR *)*(this + 1); /*0x48cde1*/
        if ( v44 ) /*0x48cde6*/
          v45 = TESObjectREFR_GetContainer(v44); /*0x48cde8*/
        else
          v45 = 0; /*0x48cdef*/
        if ( !TESContainer_HasForm(v45, (TESForm *)v37) /*0x48ce25*/
          && a3 != 0xFFFFFFFF
          && TESBipedModelForm_CoversSlot((unsigned __int16 *)v37 + 0x32, a3, 0)
          && (int)v36[1] >= 0 )
        {
          v46 = *v36; /*0x48ce2b*/
          if ( *v36 && *v46 ) /*0x48ce36*/
          {
            v74 = *v36; /*0x48ce3f*/
            do /*0x48cfda*/
            {
              v47 = *v46; /*0x48ce43*/
              if ( !*v46 ) /*0x48ce43*/
                break; /*0x48ce47*/
              if ( !ExtraDataList_GetOwner(*v46) || ExtraDataList_GetOwner(v47) == v43 ) /*0x48ce61*/
              {
                if ( BaseExtraList_GetExtraData(v47, kExtraData_Health) ) /*0x48ce6b*/
                {
                  v48 = ExtraDataList_GetHealthData(v47); /*0x48ce76*/
                }
                else
                {
                  v87 = TESHealthForm_GetHealthForForm(v37); /*0x48ce88*/
                  v48 = (double)v87; /*0x48ce8c*/
                  if ( v87 < 0 ) /*0x48ce90*/
                    v48 = v48 + flt_A2FC78; /*0x48ce92*/
                }
                v88 = v48; /*0x48ce98*/
                v49 = v88; /*0x48cea6*/
                if ( v88 > 0.0 ) /*0x48ceab*/
                {
                  v50 = (double (__thiscall **)(BSExtraDataVtbl *))((char *)v43->Destructor + 0x12C); /*0x48ced3*/
                  v89 = (double)*((unsigned __int16 *)v37 + 0x72) / fCostant_100; /*0x48ced9*/
                  v68 = v49; /*0x48cedd*/
                  v69 = ((double (__thiscall *)(BSExtraDataVtbl *, int, _DWORD))*v50)(v43, 7, LODWORD(v68)); /*0x48cee7*/
                  v63 = COERCE_FLOAT(TESObjectARMO_GetArmorSkillAV(v37));// Paired Medium boundary 5/7 in ContainerChanges_SelectBestArmorForSlot; consumer is Calc_ArmorRating at 0x48CF22. /*0x48cef1*/
                  v59 = (*v50)(v43); /*0x48cef7*/
                  v90 = Calc_ArmorRating((int)v89, v59, v63, v69);// Paired Medium boundary 5/7: candidate armor rating used while selecting the best armor for a slot. /*0x48cf27*/
                  if ( v72 < (double)v90 ) /*0x48cf3d*/
                  {
                    v72 = v90; /*0x48cf47*/
                    if ( v71 ) /*0x48cf4d*/
                    {
                      if ( *v71 ) /*0x48cf4f*/
                        BSSimpleList_Clear((_DWORD *)*v71); /*0x48cf55*/
                      FormHeapFree(*v71); /*0x48cf5d*/
                      *v71 = 0; /*0x48cf63*/
                      FormHeapFree((unsigned int)v71); /*0x48cf69*/
                    }
                    v51 = (unsigned int *)FormHeapAlloc(0xCu); /*0x48cf73*/
                    if ( v51 ) /*0x48cf7d*/
                    {
                      v51[2] = 0; /*0x48cf81*/
                      *v51 = 0; /*0x48cf84*/
                      v51[1] = 0; /*0x48cf86*/
                      v52 = v51; /*0x48cf89*/
                    }
                    else
                    {
                      v52 = 0; /*0x48cf8d*/
                    }
                    v71 = v52; /*0x48cf91*/
                    v52[2] = (unsigned int)v37; /*0x48cf95*/
                    v53 = (_DWORD *)FormHeapAlloc(8u); /*0x48cf98*/
                    if ( v53 ) /*0x48cfa2*/
                    {
                      *v53 = 0; /*0x48cfa4*/
                      v53[1] = 0; /*0x48cfaa*/
                      *v52 = (unsigned int)v53; /*0x48cfb4*/
                      BSSimpleList_PushFront(v53, (int)v47); /*0x48cfb6*/
                    }
                    else
                    {
                      *v52 = 0; /*0x48cfc2*/
                      BSSimpleList_PushFront(0, (int)v47); /*0x48cfc4*/
                    }
                  }
                }
              }
              v74 = (ExtraDataList **)v74[1]; /*0x48cfd6*/
              v46 = v74; /*0x48cfd1*/
            }
            while ( v74 ); /*0x48cfda*/
          }
          else
          {
            v91 = TESHealthForm_GetHealthForForm(v37); /*0x48cfed*/
            v54 = (double)v91; /*0x48cff1*/
            if ( v91 < 0 ) /*0x48cff5*/
              v54 = v54 + flt_A2FC78; /*0x48cff7*/
            v79 = v54; /*0x48d004*/
            v55 = (double (__thiscall **)(BSExtraDataVtbl *))((char *)v43->Destructor + 0x12C); /*0x48d01c*/
            v92 = (double)*((unsigned __int16 *)v37 + 0x72) / fCostant_100; /*0x48d028*/
            v70 = ((double (__thiscall *)(BSExtraDataVtbl *, int, _DWORD))*v55)(v43, 7, LODWORD(v79)); /*0x48d03a*/
            v64 = COERCE_FLOAT(TESObjectARMO_GetArmorSkillAV(v37));// Paired Medium boundary 6/7 in ContainerChanges_SelectBestArmorForSlot; consumer is Calc_ArmorRating at 0x48D075. /*0x48d044*/
            v60 = (*v55)(v43); /*0x48d04a*/
            v93 = Calc_ArmorRating((int)v92, v60, v64, v70);// Paired Medium boundary 6/7: candidate armor rating used while selecting the best armor for a slot. /*0x48d07a*/
            if ( v72 < (double)v93 ) /*0x48d090*/
            {
              v72 = v93; /*0x48d096*/
              if ( v71 ) /*0x48d09e*/
              {
                if ( *v71 ) /*0x48d0a0*/
                  BSSimpleList_Clear((_DWORD *)*v71); /*0x48d0a6*/
                FormHeapFree(*v71); /*0x48d0ae*/
                *v71 = 0; /*0x48d0b4*/
                FormHeapFree((unsigned int)v71); /*0x48d0b6*/
              }
              v56 = (unsigned int *)FormHeapAlloc(0xCu); /*0x48d0c0*/
              if ( v56 ) /*0x48d0ca*/
              {
                v56[2] = 0; /*0x48d0cc*/
                *v56 = 0; /*0x48d0cf*/
                v56[1] = 0; /*0x48d0d1*/
                v71 = v56; /*0x48d0d4*/
                v56[2] = (unsigned int)v37; /*0x48d0d8*/
              }
              else
              {
                v71 = 0; /*0x48d0df*/
                *(_DWORD *)8 = v37; /*0x48d0e3*/
              }
            }
          }
        }
      }
    }
  }
  return v71; /*0x48c8b6*/
}
