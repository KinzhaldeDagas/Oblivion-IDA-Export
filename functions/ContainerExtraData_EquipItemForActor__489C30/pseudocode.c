// UCWUS pipeline note: container equip/inventory reference path is relevant to token persistence and recharge menu movement; current UCWUS bridge leaves recharge shuttling scripted.
void __userpurge ContainerExtraData_EquipItemForActor(
        float *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        TESForm *a5,
        signed int a6,
        TESObjectREFR *a7,
        TESForm *a8,
        char a9,
        char a10)
{
  double v11; // st4
  int v12; // ecx
  TESForm *v13; // ebp
  TESForm::FormType type; // al
  unsigned __int16 *v15; // esi
  int **v16; // eax
  char v17; // dl
  int *v18; // ebx
  TESObjectREFR *v19; // ecx
  TESContainer *Container; // eax
  SInt32 FormCount; // eax
  int v22; // ebp
  SInt32 v23; // esi
  int v24; // edi
  int v25; // edi
  TESForm **v26; // eax
  int v27; // ebp
  TESForm *v28; // esi
  ExtraDataList *v29; // ebp
  ExtraDataList *data; // esi
  char v31; // bl
  EntryData *v32; // edi
  tListVoid *extendData; // eax
  _DWORD *v34; // eax
  ExtraDataList *v35; // edi
  _DWORD *v36; // eax
  EntryData *v37; // eax
  int v38; // eax
  tListVoid *v39; // eax
  ExtraDataList **v40; // eax
  _DWORD *v41; // eax
  tListVoid *v42; // eax
  ExtraDataList **v43; // eax
  unsigned __int16 *v44; // ebp
  bool v45; // al
  void (__thiscall *InitializeComponent)(BaseFormComponent *); // edx
  char v47; // bl
  _DWORD *v48; // eax
  TESObjectREFRVtbl *vtbl; // ebx
  unsigned __int8 (__thiscall **v50)(TESObjectREFRVtbl *, unsigned __int16 *, int); // esi
  int v51; // eax
  BSExtraDataVtbl *AnimData; // eax
  unsigned __int16 *v53; // eax
  _DWORD *v54; // eax
  bool v55; // al
  unsigned __int16 *v56; // eax
  _DWORD *v57; // eax
  int v58; // esi
  unsigned __int16 *v59; // eax
  _DWORD *v60; // eax
  EntryData *v61; // [esp+14h] [ebp-18h]
  int v62; // [esp+18h] [ebp-14h]
  tListVoid *v64; // [esp+3Ch] [ebp+10h]

  v11 = kTerrainLODQuadRayDirectionZ; /*0x489c5d*/
  v12 = *((_DWORD *)this + 1); /*0x489c63*/
  *(this + 2) = kTerrainLODQuadRayDirectionZ; /*0x489c68*/
  *(this + 3) = v11; /*0x489c6b*/
  if ( v12 ) /*0x489c6e*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 0x40))(v12, 0x8000000); /*0x489c7e*/
    v13 = a5; /*0x489c80*/
    type = a5->member.type; /*0x489c84*/
    if ( type == kFormType_Clothing || type == kFormType_Armor ) /*0x489c8d*/
    {
      v15 = (unsigned __int16 *)sub_4691B0((TESObjectARMO *)a5); /*0x489c98*/
      if ( !TESBipedModelForm_CoversSlot(v15, 7, 0) /*0x489ccd*/
        && !TESBipedModelForm_CoversSlot(v15, 6, 0)
        && !TESBipedModelForm_CoversSlot(v15, 8, 0)
        && !TESBipedModelForm_CoversSlot(v15, 0xD, 0) )
      {
        if ( a8 && sub_41DEF0(a8) ) /*0x489cde*/
          (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 1) + 0x48))(*((_DWORD *)this + 1), 0x20000000); /*0x489cf4*/
        else
          (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 1) + 0x40))(*((_DWORD *)this + 1), 0x20000000); /*0x489d05*/
      }
    }
  }
  else
  {
    v13 = a5; /*0x489d09*/
  }
  v16 = *(int ***)this; /*0x489d0d*/
  v17 = 1; /*0x489d11*/
  if ( !*(_DWORD *)this ) /*0x489d0d*/
    goto LABEL_20; /*0x489d0d*/
  while ( v17 ) /*0x489d17*/
  {
    if ( *v16 && (TESForm *)(*v16)[2] == v13 ) /*0x489d22*/
      v17 = 0; /*0x489d24*/
    else
      v16 = (int **)v16[1]; /*0x489d28*/
    if ( !v16 ) /*0x489d2d*/
      goto LABEL_20; /*0x489d2d*/
  }
  if ( v16 ) /*0x489d45*/
    v18 = *v16; /*0x489d47*/
  else
LABEL_20:
    v18 = 0; /*0x489d2f*/
  v19 = *((TESObjectREFR **)this + 1); /*0x489d31*/
  v61 = (EntryData *)v18; /*0x489d36*/
  if ( v19 ) /*0x489d3a*/
    Container = TESObjectREFR_GetContainer(v19); /*0x489d3c*/
  else
    Container = 0; /*0x489d4b*/
  FormCount = TESContainer_GetFormCount(Container, v13); /*0x489d50*/
  v22 = FormCount; /*0x489d55*/
  v23 = FormCount; /*0x489d59*/
  if ( FormCount < 0 ) /*0x489d5b*/
    v22 = -FormCount; /*0x489d5d*/
  if ( v18 ) /*0x489d61*/
    v23 = v18[1] + FormCount; /*0x489d63*/
  v24 = 0; /*0x489d66*/
  if ( v18 ) /*0x489d6a*/
  {
    if ( *v18 ) /*0x489d6c*/
    {
      v25 = sub_4845D0(v18); /*0x489d79*/
      v24 = sub_484620(v18) + v25; /*0x489d80*/
    }
  }
  v62 = v23 - v24; /*0x489d86*/
  if ( v18 ) /*0x489d8a*/
  {
    v26 = (TESForm **)*v18; /*0x489d8c*/
    if ( *v18 ) /*0x489d8c*/
    {
      if ( *v26 ) /*0x489d92*/
      {
        if ( sub_41DEF0(*v26) ) /*0x489d99*/
          v62 = v22 - v24; /*0x489da4*/
      }
      if ( a8 ) /*0x489dae*/
      {
        v27 = *v18; /*0x489db0*/
        if ( !BSSimpleList::Contains((BSSimpleList_VoidPtr *)*v18, a8) ) /*0x489db5*/
        {
          for ( ; v27; v27 = *(_DWORD *)(v27 + 4) ) /*0x489dc0*/
          {
            v28 = *(TESForm **)v27; /*0x489dc2*/
            if ( !*(_DWORD *)v27 ) /*0x489dc2*/
              break; /*0x489dc2*/
            if ( !ExtraDataList_CompareList((ExtraDataList *)v28, (ExtraDataList *)a8) ) /*0x489dd3*/
            {
              a8 = v28; /*0x489e8e*/
              goto LABEL_45; /*0x489e92*/
            }
          }
          a8 = 0; /*0x489de0*/
        }
      }
    }
  }
LABEL_45:
  v29 = (ExtraDataList *)a8; /*0x489de8*/
  data = 0; /*0x489dec*/
  v31 = 1; /*0x489df0*/
  if ( !a8 && v62 > 0 ) /*0x489df8*/
  {
    v32 = v61; /*0x489e97*/
    if ( v61 ) /*0x489e9d*/
      goto LABEL_84; /*0x489e9d*/
    goto LABEL_59; /*0x489e9d*/
  }
  v32 = v61; /*0x489dfe*/
  if ( !v61 ) /*0x489e04*/
  {
LABEL_59:
    v36 = (_DWORD *)FormHeapAlloc(0xCu); /*0x489ea3*/
    if ( v36 ) /*0x489ebb*/
      v37 = (EntryData *)ContainerEntryExtraData_constr(v36, (int)a5, 0); /*0x489ec6*/
    else
      v37 = 0; /*0x489ecd*/
    v32 = v37; /*0x489ede*/
    BSSimpleList_PushBack(*(_DWORD **)this, (int)v37); /*0x489ee0*/
    goto LABEL_84; /*0x489ee5*/
  }
  if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v61, 0) ) /*0x489e0e*/
    return; /*0x489e15*/
  extendData = v61->extendData; /*0x489e1b*/
  v64 = v61->extendData; /*0x489e1f*/
  while ( extendData )
  {
    if ( !v31 ) /*0x489e32*/
      break; /*0x489e32*/
    data = (ExtraDataList *)extendData->node.data; /*0x489e3a*/
    if ( v29 && v29 == data )
    {
      if ( ExtraDataList_GetExtraCount((ExtraDataList *)extendData->node.data) <= 1 || a5->member.type == kFormType_Ammo )
      {
        SetWorn(data, 1, a9); /*0x489f2f*/
        ExtraDataList_SetExtraCount(data, v32->countDelta); /*0x489f3a*/
        extendData = v64; /*0x489f3f*/
        v31 = 0; /*0x489f43*/
      }
      else
      {
        v34 = (_DWORD *)FormHeapAlloc(0x14u); /*0x489e6b*/
        v35 = v34 ? (ExtraDataList *)ExtraDataList_constr(v34) : 0;
        v29 = v35; /*0x489ef7*/
        BaseExtraList_Copy(v35, data); /*0x489ef9*/
        ExtraDataList_SetExtraCount(v35, 1); /*0x489f02*/
        LOWORD(v38) = ExtraDataList_GetExtraCount(data) - 1; /*0x489f0e*/
        ExtraDataList_SetExtraCount(data, v38); /*0x489f15*/
        v32 = v61; /*0x489f1a*/
        extendData = v64; /*0x489f1e*/
        v31 = 0; /*0x489f22*/
      }
    }
    else if ( !data || v29 ) /*0x489f4d*/
    {
      extendData = (tListVoid *)extendData->node.next; /*0x489f55*/
      v64 = extendData; /*0x489f58*/
    }
    else
    {
      v29 = (ExtraDataList *)extendData->node.data; /*0x489f4f*/
      v31 = 0; /*0x489f51*/
    }
  }
  if ( v29 && !sub_41DF40(v29) ) /*0x489f6a*/
  {
    SetWorn(v29, 1, a9); /*0x489f7c*/
    ExtraDataList_SetExtraCount(v29, a6); /*0x489f88*/
    if ( !v32->extendData ) /*0x489f8d*/
    {
      v39 = (tListVoid *)FormHeapAlloc(8u); /*0x489f94*/
      if ( v39 ) /*0x489f9e*/
      {
        v39->node.data = 0; /*0x489fa0*/
        v39->node.next = 0; /*0x489fa6*/
      }
      else
      {
        v39 = 0; /*0x489faf*/
      }
      v32->extendData = v39; /*0x489fb1*/
    }
    v40 = (ExtraDataList **)v32->extendData; /*0x489fb5*/
    if ( v32->extendData ) /*0x489fb5*/
    {
      while ( *v40 != v29 ) /*0x489fc2*/
      {
        v40 = (ExtraDataList **)v40[1]; /*0x489fc4*/
        if ( !v40 ) /*0x489fc9*/
          goto LABEL_81; /*0x489fc9*/
      }
    }
    else
    {
LABEL_81:
      BSSimpleList_PushFront(&v32->extendData->node.data, (int)v29); /*0x489fcb*/
    }
    data = v29; /*0x489fd1*/
    goto LABEL_98; /*0x489fd3*/
  }
  if ( v31 ) /*0x489fda*/
  {
LABEL_84:
    v41 = (_DWORD *)FormHeapAlloc(0x14u); /*0x489fe0*/
    if ( v41 ) /*0x489ff8*/
      data = (ExtraDataList *)ExtraDataList_constr(v41); /*0x48a001*/
    else
      data = 0; /*0x48a005*/
    SetWorn(data, 1, a9); /*0x48a018*/
    if ( a6 > 1 ) /*0x48a024*/
      ExtraDataList_SetExtraCount(data, a6); /*0x48a029*/
    if ( !v32->extendData ) /*0x48a02e*/
    {
      v42 = (tListVoid *)FormHeapAlloc(8u); /*0x48a035*/
      if ( v42 ) /*0x48a03f*/
      {
        v42->node.data = 0; /*0x48a041*/
        v42->node.next = 0; /*0x48a047*/
      }
      else
      {
        v42 = 0; /*0x48a050*/
      }
      v32->extendData = v42; /*0x48a052*/
    }
    v43 = (ExtraDataList **)v32->extendData; /*0x48a056*/
    if ( v32->extendData ) /*0x48a056*/
    {
      while ( *v43 != data ) /*0x48a062*/
      {
        v43 = (ExtraDataList **)v43[1]; /*0x48a064*/
        if ( !v43 ) /*0x48a069*/
          goto LABEL_97; /*0x48a069*/
      }
    }
    else
    {
LABEL_97:
      BSSimpleList_PushFront(&v32->extendData->node.data, (int)data); /*0x48a06b*/
    }
  }
LABEL_98:
  if ( data ) /*0x48a073*/
    ExtraDataList_SetCannotWear(data, a10); /*0x48a07c*/
  if ( a7[1].vtbl ) /*0x48a085*/
  {
    v44 = (unsigned __int16 *)sub_4691B0((TESObjectARMO *)a5); /*0x48a099*/
    switch ( a5->member.type ) /*0x48a0b5*/
    {
      case kFormType_Armor: /*0x48a0b5*/
        v55 = TESBipedModelForm_CoversSlot(v44, 0xD, 0); /*0x48a339*/
        InitializeComponent = a7[1].vtbl->super.super.InitializeComponent; /*0x48a343*/
        if ( !v55 ) /*0x48a347*/
          goto LABEL_107; /*0x48a347*/
        v56 = (unsigned __int16 *)(*((int (__stdcall **)(int))InitializeComponent + 0x3E))(1); /*0x48a353*/
        v44 = v56; /*0x48a355*/
        if ( v56 ) /*0x48a359*/
        {
          BSSimpleList_Clear(*(_DWORD **)v56); /*0x48a35e*/
          BSSimpleList_PushFront(*(_DWORD **)v44, (int)data); /*0x48a367*/
          *((_DWORD *)v44 + 2) = a5; /*0x48a36c*/
        }
        else
        {
          v57 = (_DWORD *)FormHeapAlloc(0xCu); /*0x48a373*/
          if ( v57 ) /*0x48a389*/
            v44 = (unsigned __int16 *)ContainerEntryExtraData_constr(v57, (int)a5, a6); /*0x48a398*/
          else
            v44 = 0; /*0x48a39c*/
          BSSimpleList_PushFront(*(_DWORD **)v44, (int)data); /*0x48a3aa*/
          if ( !(*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *, unsigned __int16 *))a7[1].vtbl->super.super.InitializeComponent /*0x48a3bb*/
                 + 0x44))(
                  a7[1].vtbl,
                  v44) )
          {
            if ( *(_DWORD *)v44 ) /*0x48a3c1*/
              BSSimpleList_Clear(*(_DWORD **)v44); /*0x48a3c8*/
            FormHeapFree(*(_DWORD *)v44); /*0x48a3d1*/
            *(_DWORD *)v44 = 0; /*0x48a3d7*/
            FormHeapFree((unsigned int)v44); /*0x48a3de*/
          }
        }
        v58 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int))a7[1].vtbl->super.super.InitializeComponent + 0x3E))( /*0x48a3fa*/
                a7[1].vtbl,
                1);
        if ( !(*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))a7[1].vtbl->super.super.InitializeComponent + 0xC8))(a7[1].vtbl) ) /*0x48a402*/
        {
          if ( v58 ) /*0x48a40e*/
            EquipShield(a7, st7_0, st5_0, st6_0, *(_DWORD *)(v58 + 8)); /*0x48a41a*/
        }
        break; /*0x48a41f*/
      case kFormType_Clothing: /*0x48a0b5*/
        if ( TESBipedModelForm_CoversSlot(v44, 7, 0) || TESBipedModelForm_CoversSlot(v44, 6, 0) ) /*0x48a0d1*/
        {
          if ( !(*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))a7[1].vtbl->super.super.InitializeComponent /*0x48a125*/
                 + 0xC8))(a7[1].vtbl) )
            sub_4DCE60((Actor *)a7, st7_0, st5_0, st6_0, (int)v44, a5, a9); /*0x48a137*/
        }
        else
        {
          v45 = TESBipedModelForm_CoversSlot(v44, 8, 0); /*0x48a0e0*/
          InitializeComponent = a7[1].vtbl->super.super.InitializeComponent; /*0x48a0ea*/
          if ( v45 ) /*0x48a0ec*/
          {
            if ( !(*((unsigned __int8 (**)(void))InitializeComponent + 0xC8))() ) /*0x48a0f4*/
              sub_4DCF90(a7, st5_0, st6_0, st7_0, (int)v44, (int)a5); /*0x48a101*/
          }
          else
          {
LABEL_107:
            (*((void (__stdcall **)(int))InitializeComponent + 0xC7))(1); /*0x48a10d*/
          }
        }
        break; /*0x48a106*/
      case kFormType_Light: /*0x48a0b5*/
        v53 = (unsigned __int16 *)(*((int (__thiscall **)(TESObjectREFRVtbl *, int))a7[1].vtbl->super.super.InitializeComponent /*0x48a271*/
                                   + 0x3C))(
                                    a7[1].vtbl,
                                    1);
        v44 = v53; /*0x48a273*/
        if ( v53 ) /*0x48a277*/
        {
          BSSimpleList_Clear(*(_DWORD **)v53); /*0x48a27c*/
          BSSimpleList_PushFront(*(_DWORD **)v44, (int)data); /*0x48a285*/
          *((_DWORD *)v44 + 2) = a5; /*0x48a28a*/
        }
        else
        {
          v54 = (_DWORD *)FormHeapAlloc(0xCu); /*0x48a291*/
          if ( v54 ) /*0x48a2a7*/
            v44 = (unsigned __int16 *)ContainerEntryExtraData_constr(v54, (int)a5, a6); /*0x48a2b6*/
          else
            v44 = 0; /*0x48a2ba*/
          BSSimpleList_PushFront(*(_DWORD **)v44, (int)data); /*0x48a2c8*/
          if ( !(*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *, unsigned __int16 *))a7[1].vtbl->super.super.InitializeComponent /*0x48a2d9*/
                 + 0x42))(
                  a7[1].vtbl,
                  v44) )
          {
            if ( *(_DWORD *)v44 ) /*0x48a2df*/
              BSSimpleList_Clear(*(_DWORD **)v44); /*0x48a2e6*/
            FormHeapFree(*(_DWORD *)v44); /*0x48a2ef*/
            *(_DWORD *)v44 = 0; /*0x48a2f5*/
            FormHeapFree((unsigned int)v44); /*0x48a2fc*/
            v44 = 0; /*0x48a304*/
          }
        }
        if ( !(*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))a7[1].vtbl->super.super.InitializeComponent + 0xC8))(a7[1].vtbl) ) /*0x48a311*/
        {
          if ( v44 ) /*0x48a31d*/
            EquipLight(a7, st7_0, st5_0, st6_0, *((int **)v44 + 2)); /*0x48a329*/
        }
        break; /*0x48a32e*/
      case kFormType_Weapon: /*0x48a0b5*/
        v44 = (unsigned __int16 *)(*((int (__thiscall **)(TESObjectREFRVtbl *, int))a7[1].vtbl->super.super.InitializeComponent /*0x48a150*/
                                   + 0x3B))(
                                    a7[1].vtbl,
                                    1);
        if ( v44 ) /*0x48a154*/
        {
          v47 = (*((int (__thiscall **)(TESObjectREFRVtbl *))a7[1].vtbl->super.super.InitializeComponent + 0x4E))(a7[1].vtbl); /*0x48a166*/
          BSSimpleList_Clear(*(_DWORD **)v44); /*0x48a168*/
          BSSimpleList_PushFront(*(_DWORD **)v44, (int)data); /*0x48a171*/
          *((_DWORD *)v44 + 2) = a5; /*0x48a17c*/
          if ( v47 ) /*0x48a17f*/
            sub_5E13D0(a7, 0); /*0x48a189*/
        }
        else
        {
          v48 = (_DWORD *)FormHeapAlloc(0xCu); /*0x48a195*/
          if ( v48 ) /*0x48a1ab*/
            v44 = (unsigned __int16 *)ContainerEntryExtraData_constr(v48, (int)a5, a6); /*0x48a1ba*/
          else
            v44 = 0; /*0x48a1be*/
          BSSimpleList_PushFront(*(_DWORD **)v44, (int)data); /*0x48a1cc*/
          vtbl = a7[1].vtbl; /*0x48a1d1*/
          v50 = (unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *, unsigned __int16 *, int))((char *)vtbl->super.super.InitializeComponent /*0x48a1e0*/
                                                                                              + 0x104);
          v51 = (int)a7->vtbl->GetNiNode(a7); /*0x48a1e6*/
          if ( (*v50)(vtbl, v44, v51) ) /*0x48a1ee*/
          {
            AnimData = TESObjectREFR_GetAnimData((Actor *)a7); /*0x48a21f*/
            if ( AnimData ) /*0x48a226*/
              AnimData[0x18].Destructor = *(void (__thiscall **)(BSExtraData *))(*((_DWORD *)v44 + 2) + 0x94); /*0x48a231*/
          }
          else
          {
            if ( *(_DWORD *)v44 ) /*0x48a1f4*/
              BSSimpleList_Clear(*(_DWORD **)v44); /*0x48a1fb*/
            FormHeapFree(*(_DWORD *)v44); /*0x48a204*/
            *(_DWORD *)v44 = 0; /*0x48a20a*/
            FormHeapFree((unsigned int)v44); /*0x48a211*/
            v44 = 0; /*0x48a219*/
          }
        }
        if ( !(*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))a7[1].vtbl->super.super.InitializeComponent + 0xC8))(a7[1].vtbl) ) /*0x48a242*/
        {
          if ( v44 ) /*0x48a24e*/
            EquipWeapon(a7, *((TESForm **)v44 + 2)); /*0x48a25a*/
        }
        break; /*0x48a25f*/
      case kFormType_Ammo: /*0x48a0b5*/
        v59 = (unsigned __int16 *)(*((int (__thiscall **)(TESObjectREFRVtbl *, int))a7[1].vtbl->super.super.InitializeComponent /*0x48a431*/
                                   + 0x3D))(
                                    a7[1].vtbl,
                                    1);
        v44 = v59; /*0x48a433*/
        if ( v59 ) /*0x48a437*/
        {
          BSSimpleList_Clear(*(_DWORD **)v59); /*0x48a43c*/
          BSSimpleList_PushFront(*(_DWORD **)v44, (int)data); /*0x48a445*/
          *((_DWORD *)v44 + 2) = a5; /*0x48a44a*/
        }
        else
        {
          v60 = (_DWORD *)FormHeapAlloc(0xCu); /*0x48a451*/
          if ( v60 ) /*0x48a467*/
            v44 = (unsigned __int16 *)ContainerEntryExtraData_constr(v60, (int)a5, 0); /*0x48a473*/
          else
            v44 = 0; /*0x48a477*/
          BSSimpleList_PushFront(*(_DWORD **)v44, (int)data); /*0x48a485*/
          *((_DWORD *)v44 + 1) = a6; /*0x48a48e*/
          if ( !(*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *, unsigned __int16 *))a7[1].vtbl->super.super.InitializeComponent /*0x48a49d*/
                 + 0x43))(
                  a7[1].vtbl,
                  v44) )
          {
            if ( *(_DWORD *)v44 ) /*0x48a4a3*/
              BSSimpleList_Clear(*(_DWORD **)v44); /*0x48a4aa*/
            FormHeapFree(*(_DWORD *)v44); /*0x48a4b3*/
            *(_DWORD *)v44 = 0; /*0x48a4b9*/
            FormHeapFree((unsigned int)v44); /*0x48a4c0*/
            v44 = 0; /*0x48a4c8*/
          }
        }
        if ( !(*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))a7[1].vtbl->super.super.InitializeComponent + 0xC8))(a7[1].vtbl) ) /*0x48a4d5*/
        {
          if ( v44 ) /*0x48a4dd*/
            TESObjectREFR_RefreshEquippedAmmo3D(a7, *((TESForm **)v44 + 2)); /*0x48a4e5*/
        }
        break; /*0x48a4e5*/
      default:
        break;
    }
    sub_5EA1A0((int)a7, (int)v44, (_DWORD *)a7->member.niNode); /*0x48a4ea*/
  }
}
