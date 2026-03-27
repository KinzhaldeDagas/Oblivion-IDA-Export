double __usercall ExtraContainerChanges_RunScripts@<st0>(float *this@<ecx>, double result@<st0>, double a3@<st1>)
{
  TESObjectREFR *v3; // ecx
  TESContainer *Container; // eax
  bool v5; // zf
  TESContainer_Entry *p_list; // eax
  int *p_count; // esi
  _DWORD *v8; // eax
  Script *v9; // ecx
  int v10; // ebx
  int *v11; // eax
  int *v12; // edi
  int v13; // eax
  int i; // ebp
  ExtraDataList *v15; // edi
  TESChildCELL *v16; // eax
  TESForm *v17; // esi
  char **ExtraScriptEventList; // eax
  _DWORD *v19; // eax
  int *v20; // eax
  _DWORD *v21; // eax
  int v22; // ebp
  ExtraDataList *v23; // esi
  char *ExtraScript; // eax
  char **EventList; // eax
  TESChildCELL *v26; // eax
  TESForm *v27; // edi
  char **v28; // eax
  _DWORD *v29; // eax
  ExtraDataList *v30; // esi
  ExtraDataList **v31; // edi
  ExtraDataList **v32; // eax
  char *v33; // eax
  char **v34; // eax
  TESChildCELL *v35; // eax
  TESForm *v36; // edi
  char **v37; // eax
  int *v38; // eax
  int v39; // eax
  void *v40; // eax
  int v41; // ebx
  ExtraDataList **j; // esi
  ExtraDataList *v43; // edi
  ExtraDataList **v44; // eax
  ExtraDataList **v45; // ebp
  ExtraDataList *v46; // esi
  char *v47; // eax
  char **v48; // eax
  TESChildCELL *v49; // eax
  TESForm *v50; // edi
  char **v51; // eax
  _DWORD *v52; // eax
  ExtraDataList *v53; // esi
  ExtraDataList **v54; // edi
  ExtraDataList **v55; // eax
  char *v56; // eax
  char **v57; // eax
  TESChildCELL *v58; // eax
  TESForm *v59; // edi
  char **v60; // eax
  ExtraDataList **k; // ebp
  ExtraDataList *v62; // edi
  TESChildCELL *v63; // eax
  TESForm *v64; // esi
  char **v65; // eax
  int v66; // [esp+8h] [ebp-3Ch]
  int v67; // [esp+Ch] [ebp-38h]
  int v68; // [esp+10h] [ebp-34h]
  int v69; // [esp+14h] [ebp-30h]
  int v70; // [esp+18h] [ebp-2Ch]
  char v71; // [esp+1Fh] [ebp-25h]
  Script *v72; // [esp+20h] [ebp-24h]
  Script *v73; // [esp+20h] [ebp-24h]
  int *v74; // [esp+24h] [ebp-20h]
  ExtraDataList ***v75; // [esp+24h] [ebp-20h]
  TESContainer_Entry *v76; // [esp+28h] [ebp-1Ch]
  int *v78; // [esp+2Ch] [ebp-18h]
  int v79; // [esp+30h] [ebp-14h]
  int v80; // [esp+30h] [ebp-14h]

  v3 = *((TESObjectREFR **)this + 1);
  if ( v3 )
    Container = TESObjectREFR_GetContainer(v3);
  else
    Container = 0;
  v5 = &Container->list == 0;
  p_list = &Container->list;
  v76 = p_list;
  if ( !v5 )
  {
    while ( p_list->next || p_list->data )
    {
      p_count = &p_list->data->count;
      v8 = OblivionDynamicCast(
             p_list->data->type,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESScriptableForm `RTTI Type Descriptor',
             0);
      v9 = v8 ? (Script *)v8[1] : 0;
      v10 = abs32(*p_count);
      v72 = v9;
      if ( v9 )
      {
        if ( v10 > 0 )
        {
          ContainerExtraData_GetEntryForForm((_DWORD **)this, p_count[1], 1, 0);
          v12 = v11;
          v74 = v11;
          if ( v11 && (sub_484F20(v11), v13) )
          {
            for ( i = *v12; i; i = *(_DWORD *)(i + 4) )
            {
              v15 = *(ExtraDataList **)i;
              if ( !*(_DWORD *)i )
                break;
              v16 = (TESChildCELL *)FormHeapAlloc(0x58u);
              v17 = v16 ? (TESForm *)TESObjectREFR_constr(v16) : 0;
              TESForm_MakeTemporary(v17);
              ExtraScriptEventList = (char **)ExtraDataList_GetExtraScriptEventList(v15);
              result = Script_Run(v72, result, a3, (TESObjectREFR *)v17, ExtraScriptEventList, 0, 0);
              if ( v17 )
                v17->vtbl->Destroy(v17, 1);
            }
          }
          else
          {
            v71 = 0;
            if ( !v12 )
            {
              v71 = 1;
              v19 = (_DWORD *)FormHeapAlloc(0xCu);
              if ( v19 )
                v20 = ContainerEntryExtraData_constr(v19, p_count[1], 0);
              else
                v20 = 0;
              v12 = v20;
              v74 = v20;
            }
            if ( *v12 )
            {
              v22 = *v12;
              do
              {
                v23 = *(ExtraDataList **)v22;
                if ( !*(_DWORD *)v22 )
                  break;
                if ( !ExtraDataList_GetExtraScript(*(ExtraDataList **)v22) )
                {
                  ExtraDataList_AddScript(v23, (int)v72);
                  ExtraScript = (char *)ExtraDataList_GetExtraScript(v23);
                  EventList = Script_CreateEventList(ExtraScript);
                  ExtraDataList_SetScriptEventList(v23, (int)EventList);
                  v26 = (TESChildCELL *)FormHeapAlloc(0x58u);
                  if ( v26 )
                    v27 = (TESForm *)TESObjectREFR_constr(v26);
                  else
                    v27 = 0;
                  TESForm_MakeTemporary(v27);
                  v28 = (char **)ExtraDataList_GetExtraScriptEventList(v23);
                  result = Script_Run(v72, result, a3, (TESObjectREFR *)v27, v28, 0, 0);
                  if ( v27 )
                    v27->vtbl->Destroy(v27, 1);
                  --v10;
                }
                v22 = *(_DWORD *)(v22 + 4);
              }
              while ( v22 );
            }
            else
            {
              v21 = (_DWORD *)FormHeapAlloc(8u);
              if ( v21 )
              {
                *v21 = 0;
                v21[1] = 0;
                *v12 = (int)v21;
              }
              else
              {
                *v12 = 0;
              }
            }
            if ( v10 )
            {
              v79 = v10;
              do
              {
                v29 = (_DWORD *)FormHeapAlloc(0x14u);
                if ( v29 )
                  v30 = (ExtraDataList *)ExtraDataList_constr(v29);
                else
                  v30 = 0;
                v31 = (ExtraDataList **)*v74;
                if ( v30 )
                {
                  if ( *v31 )
                  {
                    v32 = (ExtraDataList **)FormHeapAlloc(8u);
                    if ( v32 )
                    {
                      *v32 = *v31;
                      v32[1] = 0;
                    }
                    else
                    {
                      v32 = 0;
                    }
                    v32[1] = v31[1];
                    v31[1] = (ExtraDataList *)v32;
                  }
                  *v31 = v30;
                }
                ExtraDataList_SetExtraCount(v30, 1);
                if ( v30 )
                {
                  if ( !ExtraDataList_GetExtraScript(v30) )
                  {
                    ExtraDataList_AddScript(v30, (int)v72);
                    v33 = (char *)ExtraDataList_GetExtraScript(v30);
                    v34 = Script_CreateEventList(v33);
                    ExtraDataList_SetScriptEventList(v30, (int)v34);
                    v35 = (TESChildCELL *)FormHeapAlloc(0x58u);
                    if ( v35 )
                      v36 = (TESForm *)TESObjectREFR_constr(v35);
                    else
                      v36 = 0;
                    TESForm_MakeTemporary(v36);
                    v37 = (char **)ExtraDataList_GetExtraScriptEventList(v30);
                    result = Script_Run(v72, result, a3, (TESObjectREFR *)v36, v37, 0, 0);
                    if ( v36 )
                      v36->vtbl->Destroy(v36, 1);
                  }
                }
                --v79;
              }
              while ( v79 );
            }
            if ( v71 )
              ContainerExtraData_AddEntry(this, v74, 1, v66, v67, v68, v69, v70);
          }
        }
      }
      v76 = v76->next;
      if ( !v76 )
        break;
      p_list = v76;
    }
  }
  v38 = *(int **)this;
  v78 = *(int **)this;
  if ( v78 )
  {
    while ( 1 )
    {
      v39 = *v38;
      v75 = (ExtraDataList ***)v39;
      if ( !v39 )
        break;
      v40 = OblivionDynamicCast(
              *(void **)(v39 + 8),
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESScriptableForm `RTTI Type Descriptor',
              0);
      if ( v40 )
        v73 = *((Script **)v40 + 1);
      else
        v73 = 0;
      v41 = abs32((int)v75[1]);
      if ( v73 && v41 > 0 )
      {
        for ( j = *v75; j; j = (ExtraDataList **)j[1] )
        {
          v43 = *j;
          if ( !*j )
            break;
          if ( ExtraDataList_GetExtraScript(*j) )
          {
            if ( !ExtraDataList_GetExtraScript(v43) )
              break;
            for ( k = *v75; k; k = (ExtraDataList **)k[1] )
            {
              v62 = *k;
              if ( !*k )
                break;
              v63 = (TESChildCELL *)FormHeapAlloc(0x58u);
              v64 = v63 ? (TESForm *)TESObjectREFR_constr(v63) : 0;
              TESForm_MakeTemporary(v64);
              v65 = (char **)ExtraDataList_GetExtraScriptEventList(v62);
              result = Script_Run(v73, result, a3, (TESObjectREFR *)v64, v65, 0, 0);
              if ( v64 )
                v64->vtbl->Destroy(v64, 1);
            }
            goto LABEL_125;
          }
        }
        if ( *v75 )
        {
          v45 = *v75;
          do
          {
            v46 = *v45;
            if ( !*v45 )
              break;
            if ( !ExtraDataList_GetExtraScript(*v45) )
            {
              ExtraDataList_AddScript(v46, (int)v73);
              v47 = (char *)ExtraDataList_GetExtraScript(v46);
              v48 = Script_CreateEventList(v47);
              ExtraDataList_SetScriptEventList(v46, (int)v48);
              v49 = (TESChildCELL *)FormHeapAlloc(0x58u);
              if ( v49 )
                v50 = (TESForm *)TESObjectREFR_constr(v49);
              else
                v50 = 0;
              TESForm_MakeTemporary(v50);
              v51 = (char **)ExtraDataList_GetExtraScriptEventList(v46);
              result = Script_Run(v73, result, a3, (TESObjectREFR *)v50, v51, 0, 0);
              if ( v50 )
                v50->vtbl->Destroy(v50, 1);
              --v41;
            }
            v45 = (ExtraDataList **)v45[1];
          }
          while ( v45 );
        }
        else
        {
          v44 = (ExtraDataList **)FormHeapAlloc(8u);
          if ( v44 )
          {
            *v44 = 0;
            v44[1] = 0;
            *v75 = v44;
          }
          else
          {
            *v75 = 0;
          }
        }
        if ( v41 )
        {
          v80 = v41;
          do
          {
            v52 = (_DWORD *)FormHeapAlloc(0x14u);
            if ( v52 )
              v53 = (ExtraDataList *)ExtraDataList_constr(v52);
            else
              v53 = 0;
            v54 = *v75;
            if ( v53 )
            {
              if ( *v54 )
              {
                v55 = (ExtraDataList **)FormHeapAlloc(8u);
                if ( v55 )
                {
                  *v55 = *v54;
                  v55[1] = 0;
                }
                else
                {
                  v55 = 0;
                }
                v55[1] = v54[1];
                v54[1] = (ExtraDataList *)v55;
              }
              *v54 = v53;
            }
            ExtraDataList_SetExtraCount(v53, 1);
            if ( v53 )
            {
              if ( !ExtraDataList_GetExtraScript(v53) )
              {
                ExtraDataList_AddScript(v53, (int)v73);
                v56 = (char *)ExtraDataList_GetExtraScript(v53);
                v57 = Script_CreateEventList(v56);
                ExtraDataList_SetScriptEventList(v53, (int)v57);
                v58 = (TESChildCELL *)FormHeapAlloc(0x58u);
                if ( v58 )
                  v59 = (TESForm *)TESObjectREFR_constr(v58);
                else
                  v59 = 0;
                TESForm_MakeTemporary(v59);
                v60 = (char **)ExtraDataList_GetExtraScriptEventList(v53);
                result = Script_Run(v73, result, a3, (TESObjectREFR *)v59, v60, 0, 0);
                if ( v59 )
                  v59->vtbl->Destroy(v59, 1);
              }
            }
            --v80;
          }
          while ( v80 );
        }
      }
LABEL_125:
      v78 = (int *)v78[1];
      if ( !v78 )
        break;
      v38 = v78;
    }
  }
  return result;
}
