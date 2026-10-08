unsigned int *__thiscall sub_48D110(ExtraDataList *****this, TESForm *arg0, int a3, char a2)
{
  ExtraDataList *****v4; // ebp
  unsigned int *EquippedInstance; // eax
  unsigned int *v6; // esi
  TESObjectREFR *v8; // ecx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // eax
  TESForm *v11; // esi
  ExtraDataList ****v12; // eax
  char v13; // dl
  ExtraDataList ***v14; // edi
  int v15; // ebp
  ExtraDataList **v16; // eax
  ExtraDataList *v17; // esi
  TESForm *Owner; // eax
  ExtraDataList **i; // esi
  ExtraDataList **v20; // eax
  ExtraDataList *v21; // esi
  int v22; // eax
  TESForm *v23; // esi
  int *v24; // ebp
  int v25; // edi
  int Value; // eax
  unsigned int *v27; // eax
  unsigned int *v28; // esi
  _DWORD *v29; // eax
  int v30; // eax
  unsigned int *v31; // eax
  _DWORD *p_vtbl; // esi
  void *v33; // eax
  int v34; // edi
  ExtraDataList **v35; // eax
  ExtraDataList *v36; // esi
  ExtraDataList **v37; // eax
  ExtraDataList *v38; // esi
  TESForm *v39; // eax
  TESObjectREFR *v40; // ecx
  TESContainer *v41; // eax
  int *v42; // ebp
  int v43; // edi
  int v44; // eax
  unsigned int *v45; // eax
  unsigned int *v46; // esi
  _DWORD *v47; // eax
  int v48; // eax
  unsigned int *v49; // eax
  unsigned int *v50; // [esp+8h] [ebp-14h]
  float v51; // [esp+Ch] [ebp-10h]
  TESForm *form; // [esp+10h] [ebp-Ch]
  TESForm *forma; // [esp+10h] [ebp-Ch]
  float v54; // [esp+14h] [ebp-8h]
  float v55; // [esp+14h] [ebp-8h]
  float v56; // [esp+14h] [ebp-8h]
  float v57; // [esp+14h] [ebp-8h]
  int a2a; // [esp+28h] [ebp+Ch]
  int a2b; // [esp+28h] [ebp+Ch]

  v51 = flt_A3B888; /*0x48d11b*/
  v4 = this; /*0x48d125*/
  v50 = 0; /*0x48d12c*/
  if ( a2 ) /*0x48d130*/
  {
    EquippedInstance = ContainerExtraData_GetEquippedInstance(this, a3, 0); /*0x48d138*/
    v6 = EquippedInstance; /*0x48d13d*/
    if ( EquippedInstance ) /*0x48d141*/
    {
      if ( sub_41DF40(*(_BYTE **)*EquippedInstance) ) /*0x48d147*/
        return v6; /*0x48d158*/
      if ( *v6 ) /*0x48d15b*/
        BSSimpleList_Clear((_DWORD *)*v6); /*0x48d161*/
      FormHeapFree(*v6); /*0x48d169*/
      *v6 = 0; /*0x48d16f*/
      FormHeapFree((unsigned int)v6); /*0x48d171*/
    }
  }
  v8 = (TESObjectREFR *)v4[1]; /*0x48d179*/
  if ( v8 ) /*0x48d17e*/
    Container = TESObjectREFR_GetContainer(v8); /*0x48d180*/
  else
    Container = 0; /*0x48d187*/
  p_list = &Container->list; /*0x48d189*/
  a2a = (int)p_list; /*0x48d18f*/
  if ( p_list ) /*0x48d193*/
  {
    while ( p_list->next || p_list->data ) /*0x48d1a4*/
    {
      v11 = (TESForm *)OblivionDynamicCast( /*0x48d1c8*/
                         p_list->data->type,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                         &TESObjectCLOT `RTTI Type Descriptor',
                         0);
      v12 = *v4; /*0x48d1ca*/
      form = v11; /*0x48d1d2*/
      v13 = 1; /*0x48d1d6*/
      if ( !*v4 ) /*0x48d1ca*/
        goto LABEL_23; /*0x48d1ca*/
      while ( v13 ) /*0x48d1e2*/
      {
        if ( *v12 && (*v12)[2] == (ExtraDataList **)v11 ) /*0x48d1ed*/
          v13 = 0; /*0x48d1ef*/
        else
          v12 = (ExtraDataList ****)v12[1]; /*0x48d1f3*/
        if ( !v12 ) /*0x48d1f8*/
          goto LABEL_23; /*0x48d1f8*/
      }
      if ( v12 ) /*0x48d228*/
        v14 = *v12; /*0x48d22a*/
      else
LABEL_23:
        v14 = 0; /*0x48d1fa*/
      v15 = 0; /*0x48d1fc*/
      if ( !v14 ) /*0x48d200*/
        goto LABEL_46; /*0x48d200*/
      v16 = *v14; /*0x48d206*/
      if ( *v14 && (v17 = *v16) != 0 && ExtraDataList_GetOwner(*v16) ) /*0x48d214*/
        Owner = ExtraDataList_GetOwner(v17); /*0x48d21f*/
      else
        Owner = 0; /*0x48d22e*/
      if ( Owner != arg0 && (int)v14[1] > 0 ) /*0x48d239*/
      {
        for ( i = *v14; i; i = (ExtraDataList **)i[1] ) /*0x48d23b*/
        {
          if ( !*i ) /*0x48d241*/
            break; /*0x48d245*/
          if ( ExtraDataList_GetOwner(*i) ) /*0x48d247*/
            ++v15; /*0x48d250*/
        }
      }
      v20 = *v14; /*0x48d25a*/
      if ( !*v14 /*0x48d289*/
        || (v21 = *v20) == 0
        || !ExtraDataList_GetOwner(*v20)
        || !ExtraDataList_GetOwner(v21)
        || v15 < (int)v14[1] + **(_DWORD **)a2a )
      {
        v22 = **(_DWORD **)a2a; /*0x48d295*/
        if ( (int)v14[1] + v22 > 0 || v22 < 0 ) /*0x48d2a2*/
        {
LABEL_46:
          if ( form ) /*0x48d2ac*/
          {
            if ( a3 != 0xFFFFFFFF ) /*0x48d2b7*/
            {
              v23 = form; /*0x48d2c1*/
              if ( TESBipedModelForm_CoversSlot((unsigned __int16 *)&form[3].member.modlist.next, a3, 0) ) /*0x48d2ca*/
              {
                if ( v14 && *v14 && **v14 ) /*0x48d2e9*/
                {
                  v24 = (int *)*v14; /*0x48d2f1*/
                  do /*0x48d3b3*/
                  {
                    v25 = *v24; /*0x48d2f3*/
                    if ( !*v24 ) /*0x48d2f3*/
                      break; /*0x48d2f8*/
                    Value = TESForm_GetValue(v23); /*0x48d2ff*/
                    v54 = Calc_ClothingRatingFromValue_(Value); /*0x48d30a*/
                    if ( v51 < (double)v54 ) /*0x48d320*/
                    {
                      v51 = v54; /*0x48d32a*/
                      if ( v50 ) /*0x48d330*/
                      {
                        if ( *v50 ) /*0x48d332*/
                          BSSimpleList_Clear((_DWORD *)*v50); /*0x48d338*/
                        FormHeapFree(*v50); /*0x48d340*/
                        *v50 = 0; /*0x48d346*/
                        FormHeapFree((unsigned int)v50); /*0x48d348*/
                      }
                      v27 = (unsigned int *)FormHeapAlloc(0xCu); /*0x48d352*/
                      if ( v27 ) /*0x48d35c*/
                      {
                        v27[2] = 0; /*0x48d35e*/
                        *v27 = 0; /*0x48d361*/
                        v27[1] = 0; /*0x48d363*/
                        v28 = v27; /*0x48d366*/
                      }
                      else
                      {
                        v28 = 0; /*0x48d36a*/
                      }
                      v50 = v28; /*0x48d372*/
                      v28[2] = (unsigned int)form; /*0x48d376*/
                      v29 = (_DWORD *)FormHeapAlloc(8u); /*0x48d379*/
                      if ( v29 ) /*0x48d383*/
                      {
                        *v29 = 0; /*0x48d385*/
                        v29[1] = 0; /*0x48d387*/
                        *v28 = (unsigned int)v29; /*0x48d38d*/
                        BSSimpleList_PushFront(v29, v25); /*0x48d38f*/
                      }
                      else
                      {
                        *v28 = 0; /*0x48d39f*/
                        BSSimpleList_PushFront(0, v25); /*0x48d3a1*/
                      }
                      v23 = form; /*0x48d394*/
                    }
                    v24 = (int *)v24[1]; /*0x48d3ae*/
                  }
                  while ( v24 ); /*0x48d3b3*/
                }
                else
                {
                  v30 = TESForm_GetValue(form); /*0x48d3bc*/
                  v55 = Calc_ClothingRatingFromValue_(v30); /*0x48d3c7*/
                  if ( v51 < (double)v55 ) /*0x48d3dd*/
                  {
                    v51 = v55; /*0x48d3e3*/
                    if ( v50 ) /*0x48d3e9*/
                    {
                      if ( *v50 ) /*0x48d3eb*/
                        BSSimpleList_Clear((_DWORD *)*v50); /*0x48d3f1*/
                      FormHeapFree(*v50); /*0x48d3f9*/
                      *v50 = 0; /*0x48d3ff*/
                      FormHeapFree((unsigned int)v50); /*0x48d401*/
                    }
                    v31 = (unsigned int *)FormHeapAlloc(0xCu); /*0x48d40b*/
                    if ( v31 ) /*0x48d415*/
                    {
                      v31[2] = 0; /*0x48d417*/
                      *v31 = 0; /*0x48d41a*/
                      v31[1] = 0; /*0x48d41c*/
                      v50 = v31; /*0x48d41f*/
                      v31[2] = (unsigned int)form; /*0x48d423*/
                    }
                    else
                    {
                      v50 = 0; /*0x48d42a*/
                      *(_DWORD *)8 = form; /*0x48d42e*/
                    }
                  }
                }
              }
            }
          }
        }
      }
      v4 = this; /*0x48d43e*/
      a2a = *(_DWORD *)(a2a + 4); /*0x48d442*/
      if ( !a2a ) /*0x48d446*/
        break; /*0x48d446*/
      p_list = (TESContainer_Entry *)a2a; /*0x48d1a0*/
    }
  }
  p_vtbl = *v4; /*0x48d44c*/
  forma = (TESForm *)*v4; /*0x48d451*/
  if ( *v4 )
  {
    while ( p_vtbl[1] || *p_vtbl )
    {
      v33 = OblivionDynamicCast( /*0x48d483*/
              *(void **)(*p_vtbl + 8),
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESObjectCLOT `RTTI Type Descriptor',
              0);
      v34 = *p_vtbl; /*0x48d488*/
      a2b = (int)v33; /*0x48d48f*/
      if ( v33 )
      {
        v35 = *(ExtraDataList ***)v34; /*0x48d499*/
        if ( !*(_DWORD *)v34
          || (v36 = *v35) == 0
          || !ExtraDataList_GetOwner(*v35)
          || !ExtraDataList_GetOwner(v36)
          || ((v37 = *(ExtraDataList ***)v34) == 0 || (v38 = *v37) == 0 || !ExtraDataList_GetOwner(*v37)
            ? (v39 = 0)
            : (v39 = ExtraDataList_GetOwner(v38)),
              v39 == arg0) )
        {
          if ( *(_DWORD *)(v34 + 4) ) /*0x48d4e7*/
          {
            v40 = (TESObjectREFR *)v4[1]; /*0x48d4f0*/
            if ( v40 ) /*0x48d4f5*/
              v41 = TESObjectREFR_GetContainer(v40); /*0x48d4f7*/
            else
              v41 = 0; /*0x48d4fe*/
            if ( !TESContainer_HasForm(v41, (TESForm *)a2b) /*0x48d541*/
              && a3 != 0xFFFFFFFF
              && TESBipedModelForm_CoversSlot((unsigned __int16 *)(a2b + 0x5C), a3, 0)
              && (!sub_4846D0((TESForm *)v34) || *(int *)(v34 + 4) >= 0) )
            {
              if ( *(_DWORD *)v34 && **(_DWORD **)v34 ) /*0x48d551*/
              {
                v42 = *(int **)v34; /*0x48d559*/
                do /*0x48d618*/
                {
                  v43 = *v42; /*0x48d560*/
                  if ( !*v42 ) /*0x48d560*/
                    break; /*0x48d565*/
                  v44 = TESForm_GetValue((TESForm *)a2b); /*0x48d570*/
                  v56 = Calc_ClothingRatingFromValue_(v44); /*0x48d57b*/
                  if ( v51 < (double)v56 ) /*0x48d591*/
                  {
                    v51 = v56; /*0x48d597*/
                    if ( v50 ) /*0x48d59d*/
                    {
                      if ( *v50 ) /*0x48d59f*/
                        BSSimpleList_Clear((_DWORD *)*v50); /*0x48d5a5*/
                      FormHeapFree(*v50); /*0x48d5ad*/
                      *v50 = 0; /*0x48d5b3*/
                      FormHeapFree((unsigned int)v50); /*0x48d5b5*/
                    }
                    v45 = (unsigned int *)FormHeapAlloc(0xCu); /*0x48d5bf*/
                    if ( v45 ) /*0x48d5c9*/
                    {
                      v45[2] = 0; /*0x48d5cb*/
                      *v45 = 0; /*0x48d5ce*/
                      v45[1] = 0; /*0x48d5d0*/
                      v46 = v45; /*0x48d5d3*/
                    }
                    else
                    {
                      v46 = 0; /*0x48d5d7*/
                    }
                    v50 = v46; /*0x48d5df*/
                    v46[2] = a2b; /*0x48d5e3*/
                    v47 = (_DWORD *)FormHeapAlloc(8u); /*0x48d5e6*/
                    if ( v47 ) /*0x48d5f0*/
                    {
                      *v47 = 0; /*0x48d5f2*/
                      v47[1] = 0; /*0x48d5f4*/
                      *v46 = (unsigned int)v47; /*0x48d5fa*/
                      BSSimpleList_PushFront(v47, v43); /*0x48d5fc*/
                    }
                    else
                    {
                      *v46 = 0; /*0x48d608*/
                      BSSimpleList_PushFront(0, v43); /*0x48d60a*/
                    }
                  }
                  v42 = (int *)v42[1]; /*0x48d613*/
                }
                while ( v42 ); /*0x48d618*/
              }
              else
              {
                v48 = TESForm_GetValue((TESForm *)a2b); /*0x48d621*/
                v57 = Calc_ClothingRatingFromValue_(v48); /*0x48d62c*/
                if ( v51 < (double)v57 ) /*0x48d642*/
                {
                  v51 = v57; /*0x48d648*/
                  if ( v50 ) /*0x48d64e*/
                  {
                    if ( *v50 ) /*0x48d650*/
                      BSSimpleList_Clear((_DWORD *)*v50); /*0x48d656*/
                    FormHeapFree(*v50); /*0x48d65e*/
                    *v50 = 0; /*0x48d664*/
                    FormHeapFree((unsigned int)v50); /*0x48d666*/
                  }
                  v49 = (unsigned int *)FormHeapAlloc(0xCu); /*0x48d670*/
                  if ( v49 ) /*0x48d67a*/
                  {
                    v49[2] = 0; /*0x48d67c*/
                    *v49 = 0; /*0x48d67f*/
                    v49[1] = 0; /*0x48d681*/
                    v50 = v49; /*0x48d684*/
                    v49[2] = a2b; /*0x48d688*/
                  }
                  else
                  {
                    v50 = 0; /*0x48d68f*/
                    *(_DWORD *)8 = a2b; /*0x48d693*/
                  }
                }
              }
            }
          }
        }
      }
      forma = *(TESForm **)&forma->member.type; /*0x48d6a3*/
      p_vtbl = &forma->vtbl; /*0x48d69e*/
      if ( !forma ) /*0x48d6a7*/
        break; /*0x48d6a7*/
      v4 = this; /*0x48d460*/
    }
  }
  return v50; /*0x48d153*/
}
