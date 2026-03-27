double __userpurge sub_492E70@<st0>(
        float *this@<ecx>,
        double st5_0@<st2>,
        double result@<st0>,
        double st6_0@<st1>,
        TESObjectREFR *a5,
        TESForm *a6,
        int a7,
        char a8,
        char a9)
{
  float *v9; // ebp
  PlayerCharacter *v10; // ecx
  bool v11; // zf
  TESObjectREFR *v12; // ecx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // eax
  TESObjectARMO *v15; // ebx
  void *v16; // esi
  TESForm::ModReferenceList **v17; // edi
  EntryData **v18; // eax
  char v19; // dl
  EntryData *v20; // esi
  int **v21; // eax
  char v22; // dl
  int *v23; // edx
  int i; // esi
  int count; // eax
  int v26; // ebx
  int v27; // eax
  _DWORD *v28; // ecx
  int v29; // edx
  _DWORD *v30; // eax
  ExtraDataList **v31; // ebp
  ExtraDataList *v32; // esi
  _DWORD *v33; // ecx
  TESForm *Owner; // eax
  TESForm *v35; // edi
  char v36; // al
  int v37; // edi
  signed __int16 ExtraCount; // ax
  _DWORD *v39; // eax
  ExtraDataList ***v40; // esi
  ExtraDataList *v41; // esi
  float *v42; // ebp
  int *v43; // ebx
  int v44; // edi
  TESForm::ModReferenceList **v45; // eax
  ExtraDataList **v46; // esi
  TESObjectREFR *v47; // ecx
  TESObjectREFR *v48; // ecx
  TESContainer *v49; // eax
  int v50; // esi
  int v51; // esi
  TESObjectREFR *v52; // ecx
  int v53; // eax
  SInt32 FormCount; // esi
  TESObjectREFR *v55; // ecx
  TESContainer *v56; // eax
  signed int v57; // eax
  ExtraDataList **v58; // esi
  ExtraDataList *v59; // ebp
  ExtraDataList **v60; // eax
  float *v61; // esi
  unsigned int v62; // eax
  TESForm *v63; // eax
  TESForm *v64; // esi
  TESObjectARMO *v65; // ebx
  char v66; // al
  int v67; // esi
  signed __int16 v68; // ax
  signed __int16 v69; // ax
  int v70; // eax
  unsigned __int8 *v71; // esi
  TESForm *v72; // eax
  TESForm *v73; // ebp
  char v74; // al
  TESContainer_Entry *v75; // eax
  ExtraDataList *v76; // eax
  float *v77; // esi
  signed int v78; // [esp-20h] [ebp-5Ch]
  unsigned __int8 *v79; // [esp-1Ch] [ebp-58h]
  TESForm *v80; // [esp-14h] [ebp-50h]
  char v81; // [esp+15h] [ebp-27h]
  char v82; // [esp+16h] [ebp-26h] BYREF
  bool IsJailed; // [esp+17h] [ebp-25h]
  TESObjectARMO *type; // [esp+18h] [ebp-24h]
  float *v85; // [esp+1Ch] [ebp-20h]
  int *v86; // [esp+20h] [ebp-1Ch]
  float v87; // [esp+24h] [ebp-18h]
  TESContainer_Entry *v88; // [esp+28h] [ebp-14h]
  int v89; // [esp+2Ch] [ebp-10h]
  int v90; // [esp+38h] [ebp-4h]

  v9 = this;
  v85 = this;
  v10 = TESDataHandler_g_PlayerRef;
  v11 = a5 == (TESObjectREFR *)TESDataHandler_g_PlayerRef;
  v87 = 0.0;
  IsJailed = 0;
  if ( v11 )
    IsJailed = PlayerCharacter::IsJailed(v10);
  v12 = *((TESObjectREFR **)v9 + 1);
  if ( v12 )
    Container = TESObjectREFR_GetContainer(v12);
  else
    Container = 0;
  v11 = &Container->list == 0;
  p_list = &Container->list;
  v88 = p_list;
  if ( !v11 )
  {
    while ( p_list->next || p_list->data )
    {
      type = (TESObjectARMO *)p_list->data->type;
      v15 = type;
      v16 = OblivionDynamicCast(
              type,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESLevItem `RTTI Type Descriptor',
              0);
      v17 = sub_4691B0(v15);
      if ( (*(unsigned __int8 (__thiscall **)(TESObjectARMO *))(*(_DWORD *)v15 + 0x78))(v15)
        && a5 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
      {
        v18 = *(EntryData ***)v9;
        v19 = 1;
        if ( *(_DWORD *)v9 )
        {
          while ( v19 )
          {
            if ( *v18 && (TESObjectARMO *)(*v18)->type == v15 )
              v19 = 0;
            else
              v18 = (EntryData **)v18[1];
            if ( !v18 )
              goto LABEL_98;
          }
          if ( v18 )
          {
            v20 = *v18;
            if ( *v18 )
            {
              if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v20, 0) )
                ContainerExtraData_UnequipItem(
                  v85,
                  (int)v9,
                  (int)v17,
                  st5_0,
                  st6_0,
                  result,
                  &v82,
                  type,
                  v20->countDelta + v88->data->count,
                  a5,
                  0,
                  0,
                  0);
            }
          }
        }
      }
      else if ( !v16 && (!v17 || TESBipedModelForm_IsPlayable(v17)) )
      {
        v21 = *(int ***)v85;
        v22 = 1;
        if ( !*(_DWORD *)v85 )
          goto LABEL_35;
        while ( v22 )
        {
          if ( *v21 && (TESObjectARMO *)(*v21)[2] == type )
            v22 = 0;
          else
            v21 = (int **)v21[1];
          if ( !v21 )
            goto LABEL_35;
        }
        if ( v21 )
        {
          v23 = *v21;
          v86 = *v21;
          if ( v86 )
          {
            for ( i = *v23; i; v23 = v86 )
            {
              if ( !*(_DWORD *)i )
                break;
              if ( sub_41DEF0(*(TESForm **)i) )
                goto LABEL_98;
              i = *(_DWORD *)(i + 4);
            }
          }
        }
        else
        {
LABEL_35:
          v23 = 0;
          v86 = 0;
        }
        count = v88->data->count;
        if ( count < 0 )
          count = -count;
        if ( v23 )
          v26 = v23[1] + count;
        else
          v26 = count;
        if ( v26 > 0 )
        {
          sub_470520(type);
          v89 = v26 * v27;
          v87 = (double)(v26 * v27) + v87;
          if ( v86 )
          {
            v28 = (_DWORD *)*v86;
            if ( *v86 )
            {
              v29 = 0;
              v30 = (_DWORD *)*v86;
              do
              {
                if ( *v30 )
                  ++v29;
                v30 = (_DWORD *)v30[1];
              }
              while ( v30 );
              if ( v29 )
              {
                v31 = (ExtraDataList **)*v86;
                if ( v28 )
                {
                  if ( *v28 )
                  {
                    v81 = 0;
                    do
                    {
                      v32 = *v31;
                      if ( !*v31 )
                        break;
                      if ( BaseExtraList_Count(*v31) )
                      {
                        v33 = (_DWORD *)*v86;
                        v82 = 0;
                        if ( (unsigned int)BSSimpleList_Count(v33) > 1 )
                          v82 = 1;
                        else
                          v81 = 1;
                        if ( a5->vtbl->IsActor(a5) )
                          Owner = a5->vtbl->GetBaseForm(a5);
                        else
                          Owner = (TESForm *)TESObjectREFR_GetOwner(a5);
                        v35 = Owner;
                        if ( !(_BYTE)a7 && !a8
                          || sub_469980((int)type)
                          || (sub_4DE880(v35), v36)
                          || *((_BYTE *)type + 4) == 0x22 )
                        {
                          if ( a9 )
                          {
                            v37 = BaseExtraList_Count(v32);
                            if ( ExtraDataList_GetOwner(v32)
                              && (ExtraDataList_GetExtraCount(v32) > 1 && v37 <= 2 || v37 <= 1) )
                            {
                              ExtraDataList_RemoveOwner(v32);
                              v32 = 0;
                            }
                            else
                            {
                              ExtraDataList_RemoveOwner(v32);
                            }
                          }
                        }
                        else if ( !ExtraDataList_GetOwner(v32) )
                        {
                          ExtraDataList::SetOrRemoveExtraOwnership(v32, v35);
                        }
                        v26 -= ExtraDataList_GetExtraCount(v32);
                        ExtraCount = ExtraDataList_GetExtraCount(v32);
                        ContainerExtraData_RemoveForm(
                          (int ***)v85,
                          st5_0,
                          result,
                          st6_0,
                          a5,
                          (int)type,
                          a7,
                          ExtraCount,
                          (unsigned __int8 *)v32,
                          0,
                          a6,
                          0,
                          0,
                          1,
                          0);
                        if ( v81 )
                          break;
                        if ( v82 )
                          v31 = (ExtraDataList **)*v86;
                        else
                          v31 = (ExtraDataList **)v31[1];
                      }
                      else
                      {
                        sub_67F100(v31);
                        if ( !v31[1] && !*v31 )
                        {
                          BSSimpleList_Clear(v31);
                          FormHeapFree((unsigned int)v31);
                          *v86 = 0;
                          break;
                        }
                        v31 = (ExtraDataList **)*v86;
                      }
                    }
                    while ( v31 );
                  }
                }
              }
            }
          }
          if ( v26 > 0 )
          {
            if ( (_BYTE)a7 || a8 )
            {
              v39 = (_DWORD *)FormHeapAlloc(0xCu);
              v89 = (int)v39;
              v90 = 0;
              if ( v39 )
                v40 = (ExtraDataList ***)ContainerEntryExtraData_constr(v39, (int)type, v26);
              else
                v40 = 0;
              v90 = 0xFFFFFFFF;
              sub_484A40(v40, (TESForm *)a5);
              v41 = **v40;
              ExtraDataList_SetExtraCount(v41, v26);
              v78 = ExtraDataList_GetExtraCount(v41);
              ContainerExtraData_RemoveForm(
                (int ***)v85,
                st5_0,
                result,
                st6_0,
                a5,
                (int)type,
                a7,
                v78,
                (unsigned __int8 *)v41,
                0,
                a6,
                0,
                0,
                1,
                0);
            }
            else
            {
              ContainerExtraData_RemoveForm(
                (int ***)v85,
                st5_0,
                result,
                st6_0,
                a5,
                (int)type,
                0,
                v26,
                0,
                0,
                a6,
                0,
                0,
                1,
                0);
            }
          }
        }
      }
LABEL_98:
      v88 = v88->next;
      if ( !v88 )
        break;
      p_list = v88;
      v9 = v85;
    }
  }
  v42 = v85;
  v43 = *(int **)v85;
  if ( *(_DWORD *)v85 )
  {
    while ( 1 )
    {
      if ( !v43[1] && !*v43 )
        return result;
      v44 = *v43;
      if ( !*v43 )
      {
        v43 = (int *)v43[1];
        goto LABEL_191;
      }
      v45 = sub_4691B0(*(TESObjectARMO **)(v44 + 8));
      if ( v45 && !TESBipedModelForm_IsPlayable(v45) )
        goto LABEL_115;
      v46 = *(ExtraDataList ***)v44;
      if ( *(_DWORD *)v44 )
      {
        do
        {
          if ( !*v46 )
            break;
          if ( sub_41DEF0((TESForm *)*v46) )
            goto LABEL_116;
          v46 = (ExtraDataList **)v46[1];
        }
        while ( v46 );
      }
      v47 = *((TESObjectREFR **)v42 + 1);
      if ( v47 )
      {
        if ( TESObjectREFR_GetContainer(v47) )
        {
          v48 = *((TESObjectREFR **)v42 + 1);
          v49 = v48 ? TESObjectREFR_GetContainer(v48) : 0;
          if ( TESContainer_HasForm(v49, *(TESForm **)(v44 + 8)) )
          {
LABEL_115:
            v43 = (int *)v43[1];
            goto LABEL_191;
          }
        }
      }
LABEL_116:
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v44 + 8) + 0x78))(*(_DWORD *)(v44 + 8))
        && a5 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
      {
        if ( (unsigned __int8)ContainerEntryExtraData_HasWorn((EntryData *)v44, 0) )
        {
          v50 = *(_DWORD *)(v44 + 4);
          LOBYTE(v89) = ContainerEntryExtraData_HasWorn((EntryData *)v44, 1);
          ContainerExtraData_UnequipItem(
            v42,
            (int)v42,
            v44,
            st5_0,
            st6_0,
            result,
            &v82,
            *(TESObjectARMO **)(v44 + 8),
            v50,
            a5,
            0,
            v89,
            0);
        }
LABEL_120:
        v43 = (int *)v43[1];
        goto LABEL_191;
      }
      if ( *(int *)(v44 + 4) <= 0
        || IsJailed && (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v44 + 8) + 0x78))(*(_DWORD *)(v44 + 8)) )
      {
        goto LABEL_120;
      }
      v51 = *(_DWORD *)(v44 + 4);
      type = *(TESObjectARMO **)(v44 + 8);
      sub_470520(type);
      v52 = *((TESObjectREFR **)v42 + 1);
      v88 = (TESContainer_Entry *)(v51 * v53);
      FormCount = 0;
      v82 = 0;
      v87 = (double)(int)v88 + v87;
      if ( v52 )
      {
        if ( TESObjectREFR_GetContainer(v52) )
        {
          v55 = *((TESObjectREFR **)v42 + 1);
          if ( v55 )
            v56 = TESObjectREFR_GetContainer(v55);
          else
            v56 = 0;
          FormCount = TESContainer_GetFormCount(v56, *(TESForm **)(v44 + 8));
        }
      }
      v57 = FormCount + *(_DWORD *)(v44 + 4);
      v58 = *(ExtraDataList ***)v44;
      v11 = *(_DWORD *)v44 == 0;
      v88 = (TESContainer_Entry *)v57;
      if ( !v11 )
      {
        if ( *v58 )
          break;
      }
      v71 = 0;
      if ( a5->vtbl->IsActor(a5) )
        v72 = a5->vtbl->GetBaseForm(a5);
      else
        v72 = (TESForm *)TESObjectREFR_GetOwner(a5);
      v73 = v72;
      if ( ((_BYTE)a7 || a8) && !sub_469980((int)type) )
      {
        sub_4DE880(v73);
        if ( !v74 && *((_BYTE *)type + 4) != 0x22 )
        {
          v75 = (TESContainer_Entry *)FormHeapAlloc(0x14u);
          v88 = v75;
          v90 = 1;
          if ( v75 )
            v76 = (ExtraDataList *)ExtraDataList_constr(v75);
          else
            v76 = 0;
          v90 = 0xFFFFFFFF;
          v71 = (unsigned __int8 *)v76;
          ExtraDataList::SetOrRemoveExtraOwnership(v76, v73);
        }
      }
      v80 = a6;
      v79 = v71;
LABEL_188:
      v77 = v85;
      ContainerExtraData_RemoveForm(
        (int ***)v85,
        st5_0,
        result,
        st6_0,
        a5,
        (int)type,
        a7,
        *(_DWORD *)(v44 + 4),
        v79,
        0,
        v80,
        0,
        0,
        1,
        0);
      v43 = *(int **)v77;
      v42 = v77;
LABEL_191:
      if ( !v43 )
        return result;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v59 = *v58;
        if ( !*v58 || v82 )
        {
LABEL_144:
          if ( (int)v88 <= 0 )
          {
            v42 = v85;
          }
          else
          {
            v61 = v85;
            ContainerExtraData_RemoveForm(
              (int ***)v85,
              st5_0,
              result,
              st6_0,
              a5,
              (int)type,
              a7,
              (signed int)v88,
              0,
              0,
              a6,
              0,
              0,
              1,
              0);
            v43 = *(int **)v61;
            v42 = v61;
          }
          goto LABEL_191;
        }
        if ( ExtraDataList_GetExtraCount(v59) >= 1 )
          break;
        v58 = (ExtraDataList **)v58[1];
        if ( !v58 )
        {
          v80 = a6;
          v79 = 0;
          goto LABEL_188;
        }
      }
      if ( BaseExtraList_Count(v59) )
        break;
      v60 = (ExtraDataList **)v58[1];
      if ( v60 )
      {
        v58[1] = v60[1];
        *v58 = *v60;
        FormHeapFree((unsigned int)v60);
      }
      else
      {
        *v58 = 0;
      }
      if ( !v58[1] && !*v58 )
      {
        BSSimpleList_Clear(v58);
        FormHeapFree((unsigned int)v58);
        *(_DWORD *)v44 = 0;
        goto LABEL_144;
      }
LABEL_173:
      v58 = *(ExtraDataList ***)v44;
      if ( !*(_DWORD *)v44 )
        goto LABEL_144;
    }
    v62 = 0;
    do
    {
      if ( *v58 )
        ++v62;
      v58 = (ExtraDataList **)v58[1];
    }
    while ( v58 );
    if ( v62 <= 1 )
      v82 = 1;
    if ( ((unsigned __int8 (__usercall *)@<al>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->IsActor)(
           a5,
           result,
           st6_0,
           st5_0) )
    {
      v63 = a5->vtbl->GetBaseForm(a5);
    }
    else
    {
      v63 = (TESForm *)TESObjectREFR_GetOwner(a5);
    }
    v64 = v63;
    if ( (_BYTE)a7 || a8 )
    {
      v65 = type;
      if ( !sub_469980((int)type) )
      {
        result = sub_4DE880(v64);
        if ( !v66 && *((_BYTE *)v65 + 4) != 0x22 )
        {
          if ( !ExtraDataList_GetOwner(v59) )
            ExtraDataList::SetOrRemoveExtraOwnership(v59, v64);
          goto LABEL_170;
        }
      }
    }
    else
    {
      v65 = type;
    }
    if ( a9 )
    {
      v67 = BaseExtraList_Count(v59);
      if ( ExtraDataList_GetOwner(v59) && (ExtraDataList_GetExtraCount(v59) > 1 && v67 <= 2 || v67 <= 1) )
      {
        ExtraDataList_RemoveOwner(v59);
        goto LABEL_172;
      }
      ExtraDataList_RemoveOwner(v59);
    }
LABEL_170:
    if ( v59 )
    {
      v68 = ExtraDataList_GetExtraCount(v59);
      v88 = (TESContainer_Entry *)((char *)v88 - v68);
      v69 = ExtraDataList_GetExtraCount(v59);
      ContainerExtraData_RemoveForm(
        (int ***)v85,
        st5_0,
        result,
        st6_0,
        a5,
        (int)v65,
        a7,
        v69,
        (unsigned __int8 *)v59,
        0,
        a6,
        0,
        0,
        1,
        0);
    }
LABEL_172:
    v43 = *(int **)v85;
    ContainerExtraData_GetEntryForForm((_DWORD **)v85, (int)type, 1, 0);
    v44 = v70;
    if ( !v70 )
      goto LABEL_144;
    goto LABEL_173;
  }
  return result;
}
