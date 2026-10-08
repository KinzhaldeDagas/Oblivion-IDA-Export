double __userpurge sub_492E70@<st0>(
        ExtraContainerChanges_Data *this@<ecx>,
        double st5_0@<st2>,
        double result@<st0>,
        double st6_0@<st1>,
        TESObjectREFR *a5,
        TESForm *a6,
        int a7,
        char a8,
        char a9)
{
  ExtraContainerChanges_Data *v9; // ebp
  PlayerCharacter *v10; // ecx
  bool v11; // zf
  TESObjectREFR *owner; // ecx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // eax
  TESObjectARMO *v15; // ebx
  void *v16; // esi
  TESForm::ModReferenceList **v17; // edi
  tListEntryData *objList; // eax
  char v19; // dl
  EntryData *data; // esi
  tListEntryData *next; // eax
  char v22; // dl
  EntryData *v23; // edx
  tListVoid *i; // esi
  int count; // eax
  int v26; // ebx
  tListVoid *extendData; // ecx
  int v28; // edx
  tListVoid *v29; // eax
  ExtraDataList **v30; // ebp
  ExtraDataList *v31; // esi
  tListVoid *v32; // ecx
  TESForm *v33; // eax
  TESForm *v34; // edi
  int v35; // edi
  signed __int16 ExtraCount; // ax
  _DWORD *v37; // eax
  ExtraDataList ***v38; // esi
  ExtraDataList *v39; // esi
  ExtraContainerChanges_Data *v40; // ebp
  tListEntryData *v41; // ebx
  EntryData *EntryForForm; // edi
  TESForm::ModReferenceList **v43; // eax
  tListVoid *j; // esi
  TESObjectREFR *v45; // ecx
  TESObjectREFR *v46; // ecx
  TESContainer *v47; // eax
  SInt32 countDelta; // esi
  SInt32 v49; // esi
  int Value; // eax
  TESObjectREFR *v51; // ecx
  SInt32 FormCount; // esi
  TESObjectREFR *v53; // ecx
  TESContainer *v54; // eax
  signed int v55; // eax
  tListVoid *v56; // esi
  ExtraDataList *v57; // ebp
  NodeVoid *v58; // eax
  ExtraContainerChanges_Data *v59; // esi
  unsigned int v60; // eax
  TESForm *v61; // eax
  TESForm *v62; // esi
  TESForm *v63; // ebx
  int v64; // esi
  signed __int16 v65; // ax
  signed __int16 v66; // ax
  ExtraDataList *v67; // esi
  TESObjectREFR *v68; // ebx
  TESForm *v69; // eax
  TESForm *v70; // ebp
  TESContainer_Entry *v71; // eax
  ExtraDataList *v72; // eax
  ExtraContainerChanges_Data *v73; // esi
  signed int v74; // [esp-20h] [ebp-5Ch]
  ExtraDataList *v75; // [esp-1Ch] [ebp-58h]
  TESForm *v76; // [esp-14h] [ebp-50h]
  char v77; // [esp+15h] [ebp-27h]
  char v78; // [esp+16h] [ebp-26h] BYREF
  bool IsJailed; // [esp+17h] [ebp-25h]
  TESForm *form; // [esp+18h] [ebp-24h]
  ExtraContainerChanges_Data *v81; // [esp+1Ch] [ebp-20h]
  EntryData *v82; // [esp+20h] [ebp-1Ch]
  float v83; // [esp+24h] [ebp-18h]
  TESContainer_Entry *v84; // [esp+28h] [ebp-14h]
  int v85; // [esp+2Ch] [ebp-10h]
  int v86; // [esp+38h] [ebp-4h]

  v9 = this; /*0x492e97*/
  v81 = this; /*0x492e99*/
  v10 = reference; /*0x492e9f*/
  v11 = a5 == (TESObjectREFR *)reference; /*0x492ea5*/
  v83 = 0.0; /*0x492ea9*/
  IsJailed = 0; /*0x492ead*/
  if ( v11 ) /*0x492eb2*/
    IsJailed = PlayerCharacter::IsJailed(v10); /*0x492ebd*/
  owner = v9->owner; /*0x492ec2*/
  if ( owner ) /*0x492ec7*/
    Container = TESObjectREFR_GetContainer(owner); /*0x492ec9*/
  else
    Container = 0; /*0x492ed0*/
  v11 = &Container->list == 0; /*0x492ed2*/
  p_list = &Container->list; /*0x492ed2*/
  v84 = p_list; /*0x492ed5*/
  if ( !v11 ) /*0x492ed9*/
  {
    while ( p_list->next || p_list->data ) /*0x492ee9*/
    {
      form = p_list->data->type; /*0x492f0e*/
      v15 = (TESObjectARMO *)form; /*0x492efa*/
      v16 = OblivionDynamicCast( /*0x492f18*/
              form,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESLevItem `RTTI Type Descriptor',
              0);
      v17 = sub_4691B0(v15); /*0x492f21*/
      if ( (*(unsigned __int8 (__thiscall **)(TESObjectARMO *))(*(_DWORD *)v15 + 0x78))(v15) /*0x492f3f*/
        && a5 == (TESObjectREFR *)reference )
      {
        objList = v9->objList; /*0x492f45*/
        v19 = 1; /*0x492f4a*/
        if ( v9->objList ) /*0x492f45*/
        {
          while ( v19 ) /*0x492f56*/
          {
            if ( objList->node.data && (TESObjectARMO *)objList->node.data->type == v15 ) /*0x492f61*/
              v19 = 0; /*0x492f63*/
            else
              objList = (tListEntryData *)objList->node.next; /*0x492f67*/
            if ( !objList ) /*0x492f6c*/
              goto LABEL_98; /*0x492f6c*/
          }
          if ( objList ) /*0x492f75*/
          {
            data = objList->node.data; /*0x492f7b*/
            if ( objList->node.data ) /*0x492f7b*/
            {
              if ( ContainerEntryExtraData_HasWorn(data, 0) ) /*0x492f89*/
                ContainerExtraData_UnequipItem( /*0x492fbd*/
                  (float *)v81,
                  (int)v9,
                  (int)v17,
                  st5_0,
                  st6_0,
                  result,
                  &v78,
                  (TESObjectARMO *)form,
                  data->countDelta + v84->data->count,
                  a5,
                  0,
                  0,
                  0);
            }
          }
        }
      }
      else if ( !v16 && (!v17 || TESBipedModelForm_IsPlayable(v17)) ) /*0x492fd5*/
      {
        next = v81->objList; /*0x492fe6*/
        v22 = 1; /*0x492fea*/
        if ( !v81->objList ) /*0x492fe6*/
          goto LABEL_35; /*0x492fe6*/
        while ( v22 ) /*0x492ff4*/
        {
          if ( next->node.data && next->node.data->type == form ) /*0x492fff*/
            v22 = 0; /*0x493001*/
          else
            next = (tListEntryData *)next->node.next; /*0x493005*/
          if ( !next ) /*0x49300a*/
            goto LABEL_35; /*0x49300a*/
        }
        if ( next ) /*0x493016*/
        {
          v23 = next->node.data; /*0x493018*/
          v82 = next->node.data; /*0x49301c*/
          if ( v82 ) /*0x493020*/
          {
            for ( i = v23->extendData; i; v23 = v82 ) /*0x493022*/
            {
              if ( !i->node.data ) /*0x493028*/
                break; /*0x49302c*/
              if ( sub_41DEF0((TESForm *)i->node.data) ) /*0x49302e*/
                goto LABEL_98; /*0x493035*/
              i = (tListVoid *)i->node.next; /*0x49303b*/
            }
          }
        }
        else
        {
LABEL_35:
          v23 = 0; /*0x49300c*/
          v82 = 0; /*0x49300e*/
        }
        count = v84->data->count; /*0x49304c*/
        if ( count < 0 ) /*0x493050*/
          count = -count; /*0x493052*/
        if ( v23 ) /*0x493056*/
          v26 = v23->countDelta + count; /*0x49305b*/
        else
          v26 = count; /*0x493060*/
        if ( v26 > 0 ) /*0x493064*/
        {
          v85 = v26 * TESForm_GetValue(form); /*0x493077*/
          v83 = (double)v85 + v83; /*0x49308b*/
          if ( v82 ) /*0x49308f*/
          {
            extendData = v82->extendData; /*0x493099*/
            if ( v82->extendData ) /*0x493099*/
            {
              v28 = 0; /*0x4930a3*/
              v29 = v82->extendData; /*0x4930a7*/
              do /*0x4930bd*/
              {
                if ( v29->node.data ) /*0x4930b0*/
                  ++v28; /*0x4930b5*/
                v29 = (tListVoid *)v29->node.next; /*0x4930b8*/
              }
              while ( v29 ); /*0x4930bd*/
              if ( v28 ) /*0x4930c1*/
              {
                v30 = (ExtraDataList **)v82->extendData; /*0x4930c7*/
                if ( extendData ) /*0x4930cb*/
                {
                  if ( extendData->node.data ) /*0x4930d1*/
                  {
                    v77 = 0; /*0x4930da*/
                    do /*0x4930e0*/
                    {
                      v31 = *v30; /*0x4930e0*/
                      if ( !*v30 ) /*0x4930e0*/
                        break; /*0x4930e0*/
                      if ( BaseExtraList_Count(*v30) ) /*0x4930ed*/
                      {
                        v32 = v82->extendData; /*0x49311d*/
                        v78 = 0; /*0x49311f*/
                        if ( (unsigned int)BSSimpleList_Count(v32) > 1 ) /*0x49312c*/
                          v78 = 1; /*0x493135*/
                        else
                          v77 = 1; /*0x49312e*/
                        if ( a5->vtbl->IsActor(a5) ) /*0x493146*/
                          v33 = a5->vtbl->GetBaseForm(a5); /*0x493158*/
                        else
                          v33 = TESObjectREFR_GetOwner(a5); /*0x49315c*/
                        v34 = v33; /*0x493166*/
                        if ( !(_BYTE)a7 && !a8 /*0x493198*/
                          || sub_469980((int)form)
                          || sub_4DE880(a5, (BSExtraDataVtbl *)v34)
                          || form->member.type == kFormType_Ammo )
                        {
                          if ( a9 ) /*0x4931b4*/
                          {
                            v35 = BaseExtraList_Count(v31); /*0x4931bf*/
                            if ( ExtraDataList_GetOwner(v31) /*0x4931df*/
                              && (ExtraDataList_GetExtraCount(v31) > 1 && v35 <= 2 || v35 <= 1) )
                            {
                              ExtraDataList_RemoveOwner(v31); /*0x4931e3*/
                              v31 = 0; /*0x4931e8*/
                            }
                            else
                            {
                              ExtraDataList_RemoveOwner(v31); /*0x4931ee*/
                            }
                          }
                        }
                        else if ( !ExtraDataList_GetOwner(v31) ) /*0x49319c*/
                        {
                          ExtraDataList::SetOrRemoveExtraOwnership(v31, v34); /*0x4931a8*/
                        }
                        v26 -= ExtraDataList_GetExtraCount(v31); /*0x49320f*/
                        ExtraCount = ExtraDataList_GetExtraCount(v31); /*0x493211*/
                        ContainerExtraData_RemoveForm( /*0x49322d*/
                          (int ***)v81,
                          st5_0,
                          result,
                          st6_0,
                          a5,
                          form,
                          a7,
                          ExtraCount,
                          v31,
                          0,
                          a6,
                          0,
                          0,
                          1,
                          0);
                        if ( v77 ) /*0x493237*/
                          break; /*0x493237*/
                        if ( v78 ) /*0x49323e*/
                          v30 = (ExtraDataList **)v82->extendData; /*0x493244*/
                        else
                          v30 = (ExtraDataList **)v30[1]; /*0x493248*/
                      }
                      else
                      {
                        BSSimpleList_PopHeadWithoutPayloadFree(v30); /*0x4930f9*/
                        if ( !v30[1] && !*v30 ) /*0x493108*/
                        {
                          BSSimpleList_Clear(v30); /*0x493257*/
                          FormHeapFree((unsigned int)v30); /*0x49325d*/
                          v82->extendData = 0; /*0x493269*/
                          break; /*0x493269*/
                        }
                        v30 = (ExtraDataList **)v82->extendData; /*0x493112*/
                      }
                    }
                    while ( v30 ); /*0x4930e0*/
                  }
                }
              }
            }
          }
          if ( v26 > 0 ) /*0x493271*/
          {
            if ( (_BYTE)a7 || a8 ) /*0x493283*/
            {
              v37 = (_DWORD *)FormHeapAlloc(0xCu); /*0x4932a7*/
              v85 = (int)v37; /*0x4932af*/
              v86 = 0; /*0x4932b5*/
              if ( v37 ) /*0x4932bd*/
                v38 = (ExtraDataList ***)ContainerEntryExtraData_constr(v37, (int)form, v26); /*0x4932cc*/
              else
                v38 = 0; /*0x4932d0*/
              v86 = 0xFFFFFFFF; /*0x4932d9*/
              sub_484A40(v38, (TESForm *)a5); /*0x4932e1*/
              v39 = **v38; /*0x4932e8*/
              ExtraDataList_SetExtraCount(v39, v26); /*0x4932ed*/
              v74 = ExtraDataList_GetExtraCount(v39); /*0x493314*/
              ContainerExtraData_RemoveForm( /*0x49331c*/
                (int ***)v81,
                st5_0,
                result,
                st6_0,
                a5,
                form,
                a7,
                v74,
                v39,
                0,
                a6,
                0,
                0,
                1,
                0);
            }
            else
            {
              ContainerExtraData_RemoveForm((int ***)v81, st5_0, result, st6_0, a5, form, 0, v26, 0, 0, a6, 0, 0, 1, 0); /*0x4932a3*/
            }
          }
        }
      }
LABEL_98:
      v84 = v84->next; /*0x49332a*/
      if ( !v84 ) /*0x49332e*/
        break; /*0x49332e*/
      p_list = v84; /*0x492ee1*/
      v9 = v81; /*0x492ee5*/
    }
  }
  v40 = v81; /*0x493334*/
  v41 = v81->objList; /*0x493338*/
  if ( v81->objList )
  {
    while ( 1 )
    {
      if ( !v41->node.next && !v41->node.data ) /*0x49334c*/
        return result; /*0x49334c*/
      EntryForForm = v41->node.data; /*0x493352*/
      if ( !v41->node.data ) /*0x493356*/
      {
        v41 = (tListEntryData *)v41->node.next; /*0x4937ad*/
        goto LABEL_191; /*0x4937af*/
      }
      v43 = sub_4691B0((TESObjectARMO *)EntryForForm->type); /*0x493360*/
      if ( v43 && !TESBipedModelForm_IsPlayable(v43) ) /*0x49336e*/
        goto LABEL_115; /*0x49336e*/
      for ( j = EntryForForm->extendData; j; j = (tListVoid *)j->node.next ) /*0x493377*/
      {
        if ( !j->node.data ) /*0x493380*/
          break; /*0x493384*/
        if ( sub_41DEF0((TESForm *)j->node.data) ) /*0x493386*/
          goto LABEL_116; /*0x49338d*/
      }
      v45 = v40->owner; /*0x493396*/
      if ( v45 )
      {
        if ( TESObjectREFR_GetContainer(v45) )
        {
          v46 = v40->owner; /*0x4933a6*/
          v47 = v46 ? TESObjectREFR_GetContainer(v46) : 0;
          if ( TESContainer_HasForm(v47, EntryForForm->type) ) /*0x4933bc*/
          {
LABEL_115:
            v41 = (tListEntryData *)v41->node.next; /*0x4933c5*/
            goto LABEL_191; /*0x4933c8*/
          }
        }
      }
LABEL_116:
      if ( ((unsigned __int8 (__thiscall *)(TESForm *))EntryForForm->type->vtbl->Unk_1E)(EntryForForm->type) /*0x4933e5*/
        && a5 == (TESObjectREFR *)reference )
      {
        if ( ContainerEntryExtraData_HasWorn(EntryForForm, 0) ) /*0x4933eb*/
        {
          countDelta = EntryForForm->countDelta; /*0x4933f4*/
          LOBYTE(v85) = ContainerEntryExtraData_HasWorn(EntryForForm, 1); /*0x493406*/
          ContainerExtraData_UnequipItem( /*0x49341e*/
            (float *)v40,
            (int)v40,
            (int)EntryForForm,
            st5_0,
            st6_0,
            result,
            &v78,
            (TESObjectARMO *)EntryForForm->type,
            countDelta,
            a5,
            0,
            v85,
            0);
        }
LABEL_120:
        v41 = (tListEntryData *)v41->node.next; /*0x493423*/
        goto LABEL_191; /*0x493426*/
      }
      if ( EntryForForm->countDelta <= 0 /*0x493440*/
        || IsJailed && ((unsigned __int8 (__thiscall *)(TESForm *))EntryForForm->type->vtbl->Unk_1E)(EntryForForm->type) )
      {
        goto LABEL_120; /*0x493444*/
      }
      v49 = EntryForForm->countDelta; /*0x493449*/
      form = EntryForForm->type; /*0x49344d*/
      Value = TESForm_GetValue(form); /*0x493451*/
      v51 = v40->owner; /*0x493459*/
      v84 = (TESContainer_Entry *)(v49 * Value); /*0x49345c*/
      FormCount = 0; /*0x493467*/
      v78 = 0; /*0x49346b*/
      v83 = (double)(int)v84 + v83; /*0x493474*/
      if ( v51 ) /*0x493478*/
      {
        if ( TESObjectREFR_GetContainer(v51) ) /*0x49347a*/
        {
          v53 = v40->owner; /*0x493483*/
          if ( v53 ) /*0x493488*/
            v54 = TESObjectREFR_GetContainer(v53); /*0x49348a*/
          else
            v54 = 0; /*0x493491*/
          FormCount = TESContainer_GetFormCount(v54, EntryForForm->type); /*0x49349e*/
        }
      }
      v55 = FormCount + EntryForForm->countDelta; /*0x4934a3*/
      v56 = EntryForForm->extendData; /*0x4934a5*/
      v11 = EntryForForm->extendData == 0; /*0x4934a7*/
      v84 = (TESContainer_Entry *)v55; /*0x4934a9*/
      if ( !v11 ) /*0x4934ad*/
      {
        if ( v56->node.data ) /*0x4934b3*/
          break; /*0x4934b3*/
      }
      v67 = 0; /*0x4936e4*/
      if ( a5->vtbl->IsActor(a5) ) /*0x4936e6*/
      {
        v68 = a5; /*0x4936ec*/
        v69 = a5->vtbl->GetBaseForm(a5); /*0x4936fa*/
      }
      else
      {
        v69 = TESObjectREFR_GetOwner(a5); /*0x493702*/
        v68 = a5; /*0x493707*/
      }
      v70 = v69; /*0x493710*/
      if ( ((_BYTE)a7 || a8) /*0x493740*/
        && !sub_469980((int)form)
        && !sub_4DE880(v68, (BSExtraDataVtbl *)v70)
        && form->member.type != kFormType_Ammo )
      {
        v71 = (TESContainer_Entry *)FormHeapAlloc(0x14u); /*0x493744*/
        v84 = v71; /*0x49374c*/
        v86 = 1; /*0x493752*/
        if ( v71 ) /*0x49375a*/
          v72 = (ExtraDataList *)ExtraDataList_constr(v71); /*0x49375e*/
        else
          v72 = 0; /*0x493765*/
        v86 = 0xFFFFFFFF; /*0x49376a*/
        v67 = v72; /*0x493772*/
        ExtraDataList::SetOrRemoveExtraOwnership(v72, v70); /*0x493774*/
      }
      v76 = a6; /*0x493785*/
      v75 = v67; /*0x493788*/
LABEL_188:
      v73 = v81; /*0x493789*/
      ContainerExtraData_RemoveForm( /*0x4937a2*/
        (int ***)v81,
        st5_0,
        result,
        st6_0,
        a5,
        form,
        a7,
        EntryForForm->countDelta,
        v75,
        0,
        v76,
        0,
        0,
        1,
        0);
      v41 = v73->objList; /*0x4937a7*/
      v40 = v73; /*0x4937a9*/
LABEL_191:
      if ( !v41 ) /*0x4937b7*/
        return result; /*0x4937b7*/
    }
    while ( 1 ) /*0x4934e0*/
    {
      while ( 1 ) /*0x4934c0*/
      {
        v57 = (ExtraDataList *)v56->node.data; /*0x4934c0*/
        if ( !v56->node.data || v78 ) /*0x4934cf*/
        {
LABEL_144:
          if ( (int)v84 <= 0 ) /*0x49355a*/
          {
            v40 = v81; /*0x4937b1*/
          }
          else
          {
            v59 = v81; /*0x49356c*/
            ContainerExtraData_RemoveForm( /*0x49358b*/
              (int ***)v81,
              st5_0,
              result,
              st6_0,
              a5,
              form,
              a7,
              (signed int)v84,
              0,
              0,
              a6,
              0,
              0,
              1,
              0);
            v41 = v59->objList; /*0x493590*/
            v40 = v59; /*0x493592*/
          }
          goto LABEL_191; /*0x493594*/
        }
        if ( ExtraDataList_GetExtraCount(v57) >= 1 ) /*0x4934e0*/
          break; /*0x4934e0*/
        v56 = (tListVoid *)v56->node.next; /*0x4934e2*/
        if ( !v56 ) /*0x4934e7*/
        {
          v76 = a6; /*0x4934f2*/
          v75 = 0; /*0x4934f4*/
          goto LABEL_188; /*0x4934f5*/
        }
      }
      if ( BaseExtraList_Count(v57) ) /*0x4934fc*/
        break; /*0x4934fc*/
      v58 = v56->node.next; /*0x49350a*/
      if ( v58 ) /*0x49350f*/
      {
        v56->node.next = v58->next; /*0x493514*/
        v56->node.data = v58->data; /*0x49351a*/
        FormHeapFree((unsigned int)v58); /*0x49351c*/
      }
      else
      {
        v56->node.data = 0; /*0x493526*/
      }
      if ( !v56->node.next && !v56->node.data ) /*0x493536*/
      {
        BSSimpleList_Clear(v56); /*0x493541*/
        FormHeapFree((unsigned int)v56); /*0x493547*/
        EntryForForm->extendData = 0; /*0x49354f*/
        goto LABEL_144; /*0x49354f*/
      }
LABEL_173:
      v56 = EntryForForm->extendData; /*0x4936c9*/
      if ( !EntryForForm->extendData ) /*0x4936c9*/
        goto LABEL_144; /*0x4936cd*/
    }
    v60 = 0; /*0x493599*/
    do /*0x4935ad*/
    {
      if ( v56->node.data ) /*0x4935a0*/
        ++v60; /*0x4935a5*/
      v56 = (tListVoid *)v56->node.next; /*0x4935a8*/
    }
    while ( v56 ); /*0x4935ad*/
    if ( v60 <= 1 ) /*0x4935b2*/
      v78 = 1; /*0x4935b4*/
    if ( a5->vtbl->IsActor(a5) ) /*0x4935c7*/
      v61 = a5->vtbl->GetBaseForm(a5); /*0x4935d7*/
    else
      v61 = TESObjectREFR_GetOwner(a5); /*0x4935db*/
    v62 = v61; /*0x4935e5*/
    if ( (_BYTE)a7 || a8 ) /*0x4935ee*/
    {
      v63 = form; /*0x4935f0*/
      if ( !sub_469980((int)form) && !sub_4DE880(a5, (BSExtraDataVtbl *)v62) && v63->member.type != kFormType_Ammo ) /*0x493611*/
      {
        if ( !ExtraDataList_GetOwner(v57) ) /*0x493615*/
          ExtraDataList::SetOrRemoveExtraOwnership(v57, v62); /*0x493621*/
        goto LABEL_170; /*0x493626*/
      }
    }
    else
    {
      v63 = form; /*0x493628*/
    }
    if ( a9 ) /*0x493631*/
    {
      v64 = BaseExtraList_Count(v57); /*0x49363c*/
      if ( ExtraDataList_GetOwner(v57) && (ExtraDataList_GetExtraCount(v57) > 1 && v64 <= 2 || v64 <= 1) ) /*0x49365c*/
      {
        ExtraDataList_RemoveOwner(v57); /*0x493660*/
        goto LABEL_172; /*0x493665*/
      }
      ExtraDataList_RemoveOwner(v57); /*0x493669*/
    }
LABEL_170:
    if ( v57 ) /*0x493670*/
    {
      v65 = ExtraDataList_GetExtraCount(v57); /*0x493674*/
      v84 = (TESContainer_Entry *)((char *)v84 - v65); /*0x493688*/
      v66 = ExtraDataList_GetExtraCount(v57); /*0x493692*/
      ContainerExtraData_RemoveForm((int ***)v81, st5_0, result, st6_0, a5, v63, a7, v66, v57, 0, a6, 0, 0, 1, 0); /*0x4936a6*/
    }
LABEL_172:
    v41 = v81->objList; /*0x4936ab*/
    EntryForForm = ContainerExtraData_GetEntryForForm(v81, form, 1, 0); /*0x4936bf*/
    if ( !EntryForForm ) /*0x4936c3*/
      goto LABEL_144; /*0x4936c3*/
    goto LABEL_173; /*0x4936c3*/
  }
  return result; /*0x4937c1*/
}
