void __thiscall sub_48AA10(int ****this, TESObjectREFR *a2, signed int a3, int a4, char a5)
{
  int v6; // ecx
  ExtraDataList *v7; // edi
  TESForm *v9; // eax
  unsigned int **v10; // ecx
  TESForm *v11; // ebp
  char v12; // al
  unsigned int *v13; // ebx
  _DWORD *v14; // eax
  int ****v15; // ebp
  int ***v16; // eax
  int **v17; // ecx
  int v18; // eax
  TESForm *v19; // ebp
  _DWORD *v20; // eax
  int *v21; // ebp
  bool v22; // zf
  char v23; // bl
  ExtraDataList *v24; // esi
  int v25; // eax
  _DWORD *v26; // eax
  _DWORD *v27; // eax
  _DWORD *v28; // ebp
  TESForm *v29; // eax
  _DWORD *v30; // ebp
  _DWORD *v31; // eax
  int v32; // [esp+8h] [ebp-2Ch]
  int v33; // [esp+Ch] [ebp-28h]
  ExtraDataList *v34; // [esp+1Ch] [ebp-18h]
  TESChildCELL *v36; // [esp+38h] [ebp+4h]

  v6 = (int)*(this + 1);
  v7 = 0;
  *((float *)this + 2) = flt_A30634;
  if ( v6 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x40))(v6, 0x8000000);
  v9 = a2->vtbl->GetBaseForm(a2);
  v10 = (unsigned int **)*this;
  v11 = v9;
  v12 = 1;
  if ( !*this )
    goto LABEL_10;
  while ( v12 )
  {
    if ( *v10 && (TESForm *)(*v10)[2] == v11 )
      v12 = 0;
    else
      v10 = (unsigned int **)v10[1];
    if ( !v10 )
      goto LABEL_10;
  }
  if ( v10 )
  {
    v13 = *v10;
    v36 = (TESChildCELL *)*v10;
  }
  else
  {
LABEL_10:
    v36 = 0;
    v13 = 0;
  }
  sub_41F620(&a2->member.baseExtraList.vtbl);
  v14 = (_DWORD *)FormHeapAlloc(0x14u);
  if ( v14 )
    v7 = (ExtraDataList *)ExtraDataList_constr(v14);
  v34 = v7;
  if ( a2->member.baseExtraList.members.m_data
    && (ExtraDataList_CopyListForContainer(v7, &a2->member.baseExtraList, 0),
        sub_423A30(v7, a2->member.scale),
        ExtraDataList_GetOwner(v7) == (BSExtraDataVtbl *)TESDataHandler_g_PlayerRef) )
  {
    v15 = this;
    if ( *(this + 1) == (int ***)TESDataHandler_g_PlayerRef )
      ExtraDataList_RemoveOwner(v7);
  }
  else
  {
    v15 = this;
  }
  if ( ((unsigned __int8 (__thiscall *)(int ***))(*v15[1])[0x64])(v15[1])
    && (v16 = v15[1]) != 0
    && (v17 = v16[0x16]) != 0
    && (v18 = ((int (__thiscall *)(int **, _DWORD))(*v17)[0x3D])(v17, 0)) != 0
    && (v19 = *(TESForm **)(v18 + 8), v19 == a2->vtbl->GetBaseForm(a2))
    || a5 )
  {
    SetWorn(v7, 1, 0);
  }
  if ( !v13 )
  {
    v28 = (_DWORD *)FormHeapAlloc(0xCu);
    if ( v28 )
    {
      v29 = a2->vtbl->GetBaseForm(a2);
      v30 = ContainerEntryExtraData_constr(v28, (int)v29, a3);
    }
    else
    {
      v30 = 0;
    }
    if ( a3 > 1 )
      ExtraDataList_SetExtraCount(v7, a3);
    if ( TESObjectREFR_IsPersistent_(a2) )
    {
      ExtraDataList_SetReferencePointer(v7, a2);
      if ( !*v30 )
      {
        v31 = (_DWORD *)FormHeapAlloc(8u);
        if ( v31 )
        {
          *v31 = 0;
          v31[1] = 0;
LABEL_83:
          *v30 = v31;
          goto LABEL_84;
        }
        goto LABEL_82;
      }
      goto LABEL_84;
    }
    if ( v7 )
    {
      if ( v7->members.m_data )
      {
        if ( !*v30 )
        {
          v31 = (_DWORD *)FormHeapAlloc(8u);
          if ( v31 )
          {
            *v31 = 0;
            v31[1] = 0;
            goto LABEL_83;
          }
LABEL_82:
          v31 = 0;
          goto LABEL_83;
        }
LABEL_84:
        BSSimpleList_PushFront((_DWORD *)*v30, (int)v7);
        goto LABEL_85;
      }
      (*(void (__thiscall **)(ExtraDataList *, int))v7->vtbl)(v7, 1);
      v34 = 0;
    }
LABEL_85:
    BSSimpleList_PushBack(*this, (int)v30);
    goto LABEL_86;
  }
  v13[1] += a3;
  if ( !TESObjectREFR_IsPersistent_(a2) )
  {
    v21 = (int *)*v13;
    v22 = *v13 == 0;
    v23 = 1;
    if ( !v22 )
    {
      do
      {
        v24 = (ExtraDataList *)*v21;
        if ( !*v21 )
          break;
        if ( !v23 )
          goto LABEL_54;
        if ( v7 && !(unsigned __int8)ExtraDataList_CompareListForContainer(*v21, v32, v33) )
        {
          LOWORD(v25) = a3 + ExtraDataList_GetExtraCount(v24);
          ExtraDataList_SetExtraCount(v24, v25);
          if ( !v24->members.m_data )
          {
            BSSimpleList_Remove(v36->vtbl, (int)v24);
            (*(void (__thiscall **)(ExtraDataList *, int))v24->vtbl)(v24, 1);
          }
          v23 = 0;
        }
        else
        {
          v21 = (int *)v21[1];
        }
      }
      while ( v21 );
      if ( v23 )
        goto LABEL_47;
LABEL_54:
      if ( !v7 )
        goto LABEL_56;
      goto LABEL_55;
    }
LABEL_47:
    if ( v7 && !v7->members.m_data )
    {
LABEL_55:
      (*(void (__thiscall **)(ExtraDataList *, int))v7->vtbl)(v7, 1);
LABEL_56:
      v34 = 0;
      goto LABEL_57;
    }
    if ( !v36->vtbl )
    {
      v26 = (_DWORD *)FormHeapAlloc(8u);
      if ( v26 )
      {
        *v26 = 0;
        v26[1] = 0;
        v36->vtbl = v26;
        BSSimpleList_PushFront(v26, (int)v7);
LABEL_57:
        v13 = (unsigned int *)v36;
        goto LABEL_58;
      }
      v36->vtbl = 0;
    }
    BSSimpleList_PushFront(v36->vtbl, (int)v7);
    goto LABEL_57;
  }
  ExtraDataList_SetReferencePointer(v7, a2);
  if ( a3 > 1 )
    ExtraDataList_SetExtraCount(v7, a3);
  if ( *v13 )
    goto LABEL_35;
  v20 = (_DWORD *)FormHeapAlloc(8u);
  if ( !v20 )
  {
    *v13 = 0;
LABEL_35:
    BSSimpleList_PushFront((_DWORD *)*v13, (int)v7);
    goto LABEL_58;
  }
  *v20 = 0;
  v20[1] = 0;
  *v13 = (unsigned int)v20;
  BSSimpleList_PushFront(v20, (int)v7);
LABEL_58:
  v27 = (_DWORD *)*v13;
  if ( *v13 && !v27[1] && !*v27 && !v13[1] )
  {
    BSSimpleList_Remove(*this, (int)v13);
    if ( v34 )
      (*(void (__thiscall **)(ExtraDataList *, int))v34->vtbl)(v34, 1);
    if ( *v13 )
      BSSimpleList_Clear((_DWORD *)*v13);
    FormHeapFree(*v13);
    *v13 = 0;
    FormHeapFree((unsigned int)v13);
    return;
  }
LABEL_86:
  if ( v34 )
  {
    if ( !v34->members.m_data )
      (*(void (__stdcall **)(int))v34->vtbl)(1);
  }
}
