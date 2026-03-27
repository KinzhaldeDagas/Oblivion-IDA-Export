unsigned int *__thiscall sub_48D110(ExtraDataList *****this, BSExtraDataVtbl *arg0, int a3, char a2)
{
  ExtraDataList *****v4; // ebp
  unsigned int *EquippedInstance; // eax
  unsigned int *v6; // esi
  TESObjectREFR *v8; // ecx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // eax
  unsigned __int16 *v11; // esi
  ExtraDataList ****v12; // eax
  char v13; // dl
  ExtraDataList ***v14; // edi
  int v15; // ebp
  ExtraDataList **v16; // eax
  ExtraDataList *v17; // esi
  BSExtraDataVtbl *Owner; // eax
  ExtraDataList **i; // esi
  ExtraDataList **v20; // eax
  ExtraDataList *v21; // esi
  int v22; // eax
  unsigned __int16 *v23; // esi
  int *v24; // ebp
  int v25; // edi
  unsigned int v26; // eax
  unsigned int *v27; // eax
  unsigned int *v28; // esi
  _DWORD *v29; // eax
  unsigned int v30; // eax
  unsigned int *v31; // eax
  ExtraDataList ****v32; // esi
  void *v33; // eax
  ExtraDataList ***v34; // edi
  ExtraDataList **v35; // eax
  ExtraDataList *v36; // esi
  ExtraDataList **v37; // eax
  ExtraDataList *v38; // esi
  BSExtraDataVtbl *v39; // eax
  TESObjectREFR *v40; // ecx
  TESContainer *v41; // eax
  int *v42; // ebp
  int v43; // edi
  unsigned int v44; // eax
  unsigned int *v45; // eax
  unsigned int *v46; // esi
  _DWORD *v47; // eax
  unsigned int v48; // eax
  unsigned int *v49; // eax
  unsigned int *v50; // [esp+8h] [ebp-14h]
  float v51; // [esp+Ch] [ebp-10h]
  unsigned __int16 *v52; // [esp+10h] [ebp-Ch]
  ExtraDataList ****v53; // [esp+10h] [ebp-Ch]
  float v54; // [esp+14h] [ebp-8h]
  float v55; // [esp+14h] [ebp-8h]
  float v56; // [esp+14h] [ebp-8h]
  float v57; // [esp+14h] [ebp-8h]
  int a2a; // [esp+28h] [ebp+Ch]
  int a2b; // [esp+28h] [ebp+Ch]

  v51 = flt_A3B888;
  v4 = this;
  v50 = 0;
  if ( a2 )
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
  p_list = &Container->list;
  a2a = (int)p_list;
  if ( p_list )
  {
    while ( p_list->next || p_list->data )
    {
      v11 = (unsigned __int16 *)OblivionDynamicCast(
                                  p_list->data->type,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                  &TESObjectCLOT `RTTI Type Descriptor',
                                  0);
      v12 = *v4;
      v52 = v11;
      v13 = 1;
      if ( !*v4 )
        goto LABEL_23;
      while ( v13 )
      {
        if ( *v12 && (*v12)[2] == (ExtraDataList **)v11 )
          v13 = 0;
        else
          v12 = (ExtraDataList ****)v12[1];
        if ( !v12 )
          goto LABEL_23;
      }
      if ( v12 )
        v14 = *v12;
      else
LABEL_23:
        v14 = 0;
      v15 = 0;
      if ( !v14 )
        goto LABEL_46;
      v16 = *v14;
      if ( *v14 && (v17 = *v16) != 0 && ExtraDataList_GetOwner(*v16) )
        Owner = ExtraDataList_GetOwner(v17);
      else
        Owner = 0;
      if ( Owner != arg0 && (int)v14[1] > 0 )
      {
        for ( i = *v14; i; i = (ExtraDataList **)i[1] )
        {
          if ( !*i )
            break;
          if ( ExtraDataList_GetOwner(*i) )
            ++v15;
        }
      }
      v20 = *v14;
      if ( !*v14
        || (v21 = *v20) == 0
        || !ExtraDataList_GetOwner(*v20)
        || !ExtraDataList_GetOwner(v21)
        || v15 < (int)v14[1] + **(_DWORD **)a2a )
      {
        v22 = **(_DWORD **)a2a;
        if ( (int)v14[1] + v22 > 0 || v22 < 0 )
        {
LABEL_46:
          if ( v52 )
          {
            if ( a3 != 0xFFFFFFFF )
            {
              v23 = v52;
              if ( TESBipedModelForm_CoversSlot(v52 + 0x2E, a3, 0) )
              {
                if ( v14 && *v14 && **v14 )
                {
                  v24 = (int *)*v14;
                  do
                  {
                    v25 = *v24;
                    if ( !*v24 )
                      break;
                    sub_470520(v23);
                    v54 = Calc_ClothingRatingFromValue_(v26);
                    if ( v51 < (double)v54 )
                    {
                      v51 = v54;
                      if ( v50 )
                      {
                        if ( *v50 )
                          BSSimpleList_Clear((_DWORD *)*v50);
                        FormHeapFree(*v50);
                        *v50 = 0;
                        FormHeapFree((unsigned int)v50);
                      }
                      v27 = (unsigned int *)FormHeapAlloc(0xCu);
                      if ( v27 )
                      {
                        v27[2] = 0;
                        *v27 = 0;
                        v27[1] = 0;
                        v28 = v27;
                      }
                      else
                      {
                        v28 = 0;
                      }
                      v50 = v28;
                      v28[2] = (unsigned int)v52;
                      v29 = (_DWORD *)FormHeapAlloc(8u);
                      if ( v29 )
                      {
                        *v29 = 0;
                        v29[1] = 0;
                        *v28 = (unsigned int)v29;
                        BSSimpleList_PushFront(v29, v25);
                      }
                      else
                      {
                        *v28 = 0;
                        BSSimpleList_PushFront(0, v25);
                      }
                      v23 = v52;
                    }
                    v24 = (int *)v24[1];
                  }
                  while ( v24 );
                }
                else
                {
                  sub_470520(v52);
                  v55 = Calc_ClothingRatingFromValue_(v30);
                  if ( v51 < (double)v55 )
                  {
                    v51 = v55;
                    if ( v50 )
                    {
                      if ( *v50 )
                        BSSimpleList_Clear((_DWORD *)*v50);
                      FormHeapFree(*v50);
                      *v50 = 0;
                      FormHeapFree((unsigned int)v50);
                    }
                    v31 = (unsigned int *)FormHeapAlloc(0xCu);
                    if ( v31 )
                    {
                      v31[2] = 0;
                      *v31 = 0;
                      v31[1] = 0;
                      v50 = v31;
                      v31[2] = (unsigned int)v52;
                    }
                    else
                    {
                      v50 = 0;
                      *(_DWORD *)8 = v52;
                    }
                  }
                }
              }
            }
          }
        }
      }
      v4 = this;
      a2a = *(_DWORD *)(a2a + 4);
      if ( !a2a )
        break;
      p_list = (TESContainer_Entry *)a2a;
    }
  }
  v32 = *v4;
  v53 = *v4;
  if ( *v4 )
  {
    while ( v32[1] || *v32 )
    {
      v33 = OblivionDynamicCast(
              (*v32)[2],
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESObjectCLOT `RTTI Type Descriptor',
              0);
      v34 = *v32;
      a2b = (int)v33;
      if ( v33 )
      {
        v35 = *v34;
        if ( !*v34
          || (v36 = *v35) == 0
          || !ExtraDataList_GetOwner(*v35)
          || !ExtraDataList_GetOwner(v36)
          || ((v37 = *v34) == 0 || (v38 = *v37) == 0 || !ExtraDataList_GetOwner(*v37)
            ? (v39 = 0)
            : (v39 = ExtraDataList_GetOwner(v38)),
              v39 == arg0) )
        {
          if ( v34[1] )
          {
            v40 = (TESObjectREFR *)v4[1];
            if ( v40 )
              v41 = TESObjectREFR_GetContainer(v40);
            else
              v41 = 0;
            if ( !TESContainer_HasForm(v41, (TESForm *)a2b)
              && a3 != 0xFFFFFFFF
              && TESBipedModelForm_CoversSlot((unsigned __int16 *)(a2b + 0x5C), a3, 0)
              && (!sub_4846D0((TESForm *)v34) || (int)v34[1] >= 0) )
            {
              if ( *v34 && **v34 )
              {
                v42 = (int *)*v34;
                do
                {
                  v43 = *v42;
                  if ( !*v42 )
                    break;
                  sub_470520((void *)a2b);
                  v56 = Calc_ClothingRatingFromValue_(v44);
                  if ( v51 < (double)v56 )
                  {
                    v51 = v56;
                    if ( v50 )
                    {
                      if ( *v50 )
                        BSSimpleList_Clear((_DWORD *)*v50);
                      FormHeapFree(*v50);
                      *v50 = 0;
                      FormHeapFree((unsigned int)v50);
                    }
                    v45 = (unsigned int *)FormHeapAlloc(0xCu);
                    if ( v45 )
                    {
                      v45[2] = 0;
                      *v45 = 0;
                      v45[1] = 0;
                      v46 = v45;
                    }
                    else
                    {
                      v46 = 0;
                    }
                    v50 = v46;
                    v46[2] = a2b;
                    v47 = (_DWORD *)FormHeapAlloc(8u);
                    if ( v47 )
                    {
                      *v47 = 0;
                      v47[1] = 0;
                      *v46 = (unsigned int)v47;
                      BSSimpleList_PushFront(v47, v43);
                    }
                    else
                    {
                      *v46 = 0;
                      BSSimpleList_PushFront(0, v43);
                    }
                  }
                  v42 = (int *)v42[1];
                }
                while ( v42 );
              }
              else
              {
                sub_470520((void *)a2b);
                v57 = Calc_ClothingRatingFromValue_(v48);
                if ( v51 < (double)v57 )
                {
                  v51 = v57;
                  if ( v50 )
                  {
                    if ( *v50 )
                      BSSimpleList_Clear((_DWORD *)*v50);
                    FormHeapFree(*v50);
                    *v50 = 0;
                    FormHeapFree((unsigned int)v50);
                  }
                  v49 = (unsigned int *)FormHeapAlloc(0xCu);
                  if ( v49 )
                  {
                    v49[2] = 0;
                    *v49 = 0;
                    v49[1] = 0;
                    v50 = v49;
                    v49[2] = a2b;
                  }
                  else
                  {
                    v50 = 0;
                    *(_DWORD *)8 = a2b;
                  }
                }
              }
            }
          }
        }
      }
      v53 = (ExtraDataList ****)v53[1];
      v32 = v53;
      if ( !v53 )
        break;
      v4 = this;
    }
  }
  return v50;
}
