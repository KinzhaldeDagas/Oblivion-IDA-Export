void __userpurge ContainerExtraData_EquipItemForActor(
        float *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        TESForm *a5,
        signed int a6,
        int a7,
        TESForm *a8,
        int a9,
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
  unsigned __int8 *v28; // esi
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
  int v46; // edx
  char v47; // bl
  _DWORD *v48; // eax
  _DWORD *v49; // ebx
  unsigned __int8 (__thiscall **v50)(_DWORD *, unsigned __int16 *, int); // esi
  int v51; // eax
  void **AnimData; // eax
  float *v53; // edx
  unsigned __int16 *v54; // eax
  _DWORD *v55; // eax
  bool v56; // al
  unsigned __int16 *v57; // eax
  _DWORD *v58; // eax
  int v59; // esi
  unsigned __int16 *v60; // eax
  _DWORD *v61; // eax
  int v62; // [esp+0h] [ebp-2Ch]
  EntryData *v63; // [esp+14h] [ebp-18h]
  int v64; // [esp+18h] [ebp-14h]
  tListVoid *v66; // [esp+3Ch] [ebp+10h]

  v11 = flt_A30634;
  v12 = *((_DWORD *)this + 1);
  *(this + 2) = flt_A30634;
  *(this + 3) = v11;
  if ( v12 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 0x40))(v12, 0x8000000);
    v13 = a5;
    type = a5->member.type;
    if ( type == kFormType_Clothing || type == kFormType_Armor )
    {
      v15 = (unsigned __int16 *)sub_4691B0((TESObjectARMO *)a5);
      if ( !TESBipedModelForm_CoversSlot(v15, 7, 0)
        && !TESBipedModelForm_CoversSlot(v15, 6, 0)
        && !TESBipedModelForm_CoversSlot(v15, 8, 0)
        && !TESBipedModelForm_CoversSlot(v15, 0xD, 0) )
      {
        if ( a8 && sub_41DEF0(a8) )
          (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 1) + 0x48))(*((_DWORD *)this + 1), 0x20000000);
        else
          (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 1) + 0x40))(*((_DWORD *)this + 1), 0x20000000);
      }
    }
  }
  else
  {
    v13 = a5;
  }
  v16 = *(int ***)this;
  v17 = 1;
  if ( !*(_DWORD *)this )
    goto LABEL_20;
  while ( v17 )
  {
    if ( *v16 && (TESForm *)(*v16)[2] == v13 )
      v17 = 0;
    else
      v16 = (int **)v16[1];
    if ( !v16 )
      goto LABEL_20;
  }
  if ( v16 )
    v18 = *v16;
  else
LABEL_20:
    v18 = 0;
  v19 = *((TESObjectREFR **)this + 1);
  v63 = (EntryData *)v18;
  if ( v19 )
    Container = TESObjectREFR_GetContainer(v19);
  else
    Container = 0;
  FormCount = TESContainer_GetFormCount(Container, v13);
  v22 = FormCount;
  v23 = FormCount;
  if ( FormCount < 0 )
    v22 = -FormCount;
  if ( v18 )
    v23 = v18[1] + FormCount;
  v24 = 0;
  if ( v18 )
  {
    if ( *v18 )
    {
      v25 = sub_4845D0(v18);
      v24 = sub_484620(v18) + v25;
    }
  }
  v64 = v23 - v24;
  if ( v18 )
  {
    v26 = (TESForm **)*v18;
    if ( *v18 )
    {
      if ( *v26 )
      {
        if ( sub_41DEF0(*v26) )
          v64 = v22 - v24;
      }
      if ( a8 )
      {
        v27 = *v18;
        if ( !sub_446C30((BSSimpleList_VoidPtr *)*v18, a8) )
        {
          for ( ; v27; v27 = *(_DWORD *)(v27 + 4) )
          {
            v28 = *(unsigned __int8 **)v27;
            if ( !*(_DWORD *)v27 )
              break;
            if ( !ExtraDataList_CompareList((ExtraDataList *)v28, (ExtraDataList *)a8) )
            {
              a8 = (TESForm *)v28;
              goto LABEL_45;
            }
          }
          a8 = 0;
        }
      }
    }
  }
LABEL_45:
  v29 = (ExtraDataList *)a8;
  data = 0;
  v31 = 1;
  if ( !a8 && v64 > 0 )
  {
    v32 = v63;
    if ( v63 )
      goto LABEL_84;
    goto LABEL_59;
  }
  v32 = v63;
  if ( !v63 )
  {
LABEL_59:
    v36 = (_DWORD *)FormHeapAlloc(0xCu);
    if ( v36 )
      v37 = (EntryData *)ContainerEntryExtraData_constr(v36, (int)a5, 0);
    else
      v37 = 0;
    v32 = v37;
    BSSimpleList_PushBack(*(_DWORD **)this, (int)v37);
    goto LABEL_84;
  }
  if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v63, 0) )
    return;
  extendData = v63->extendData;
  v66 = v63->extendData;
  while ( extendData )
  {
    if ( !v31 )
      break;
    data = (ExtraDataList *)extendData->node.data;
    if ( v29 && v29 == data )
    {
      if ( ExtraDataList_GetExtraCount((ExtraDataList *)extendData->node.data) <= 1 || a5->member.type == kFormType_Ammo )
      {
        SetWorn(data, 1, a9);
        ExtraDataList_SetExtraCount(data, v32->countDelta);
        extendData = v66;
        v31 = 0;
      }
      else
      {
        v34 = (_DWORD *)FormHeapAlloc(0x14u);
        v35 = v34 ? (ExtraDataList *)ExtraDataList_constr(v34) : 0;
        v29 = v35;
        BaseExtraList_Copy(v35, data);
        ExtraDataList_SetExtraCount(v35, 1);
        LOWORD(v38) = ExtraDataList_GetExtraCount(data) - 1;
        ExtraDataList_SetExtraCount(data, v38);
        v32 = v63;
        extendData = v66;
        v31 = 0;
      }
    }
    else if ( !data || v29 )
    {
      extendData = (tListVoid *)extendData->node.next;
      v66 = extendData;
    }
    else
    {
      v29 = (ExtraDataList *)extendData->node.data;
      v31 = 0;
    }
  }
  if ( v29 && !sub_41DF40(v29) )
  {
    SetWorn(v29, 1, a9);
    ExtraDataList_SetExtraCount(v29, a6);
    if ( !v32->extendData )
    {
      v39 = (tListVoid *)FormHeapAlloc(8u);
      if ( v39 )
      {
        v39->node.data = 0;
        v39->node.next = 0;
      }
      else
      {
        v39 = 0;
      }
      v32->extendData = v39;
    }
    v40 = (ExtraDataList **)v32->extendData;
    if ( v32->extendData )
    {
      while ( *v40 != v29 )
      {
        v40 = (ExtraDataList **)v40[1];
        if ( !v40 )
          goto LABEL_81;
      }
    }
    else
    {
LABEL_81:
      BSSimpleList_PushFront(&v32->extendData->node.data, (int)v29);
    }
    data = v29;
    goto LABEL_98;
  }
  if ( v31 )
  {
LABEL_84:
    v41 = (_DWORD *)FormHeapAlloc(0x14u);
    if ( v41 )
      data = (ExtraDataList *)ExtraDataList_constr(v41);
    else
      data = 0;
    SetWorn(data, 1, a9);
    if ( a6 > 1 )
      ExtraDataList_SetExtraCount(data, a6);
    if ( !v32->extendData )
    {
      v42 = (tListVoid *)FormHeapAlloc(8u);
      if ( v42 )
      {
        v42->node.data = 0;
        v42->node.next = 0;
      }
      else
      {
        v42 = 0;
      }
      v32->extendData = v42;
    }
    v43 = (ExtraDataList **)v32->extendData;
    if ( v32->extendData )
    {
      while ( *v43 != data )
      {
        v43 = (ExtraDataList **)v43[1];
        if ( !v43 )
          goto LABEL_97;
      }
    }
    else
    {
LABEL_97:
      BSSimpleList_PushFront(&v32->extendData->node.data, (int)data);
    }
  }
LABEL_98:
  if ( data )
    sub_41F370(data, a10);
  if ( *(_DWORD *)(a7 + 0x58) )
  {
    v44 = (unsigned __int16 *)sub_4691B0((TESObjectARMO *)a5);
    switch ( a5->member.type )
    {
      case kFormType_Armor:
        v56 = TESBipedModelForm_CoversSlot(v44, 0xD, 0);
        v46 = **(_DWORD **)(a7 + 0x58);
        if ( !v56 )
          goto LABEL_107;
        v57 = (unsigned __int16 *)(*(int (__stdcall **)(int))(v46 + 0xF8))(1);
        v44 = v57;
        if ( v57 )
        {
          BSSimpleList_Clear(*(_DWORD **)v57);
          BSSimpleList_PushFront(*(_DWORD **)v44, (int)data);
          *((_DWORD *)v44 + 2) = a5;
        }
        else
        {
          v58 = (_DWORD *)FormHeapAlloc(0xCu);
          if ( v58 )
            v44 = (unsigned __int16 *)ContainerEntryExtraData_constr(v58, (int)a5, a6);
          else
            v44 = 0;
          BSSimpleList_PushFront(*(_DWORD **)v44, (int)data);
          if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, unsigned __int16 *))(**(_DWORD **)(a7 + 0x58) + 0x110))(
                  *(_DWORD *)(a7 + 0x58),
                  v44) )
          {
            if ( *(_DWORD *)v44 )
              BSSimpleList_Clear(*(_DWORD **)v44);
            FormHeapFree(*(_DWORD *)v44);
            *(_DWORD *)v44 = 0;
            FormHeapFree((unsigned int)v44);
          }
        }
        v59 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a7 + 0x58) + 0xF8))(*(_DWORD *)(a7 + 0x58), 1);
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a7 + 0x58) + 0x320))(*(_DWORD *)(a7 + 0x58)) )
        {
          if ( v59 )
            EquipShield((TESObjectREFR *)a7, st7_0, st5_0, st6_0, *(_DWORD *)(v59 + 8));
        }
        break;
      case kFormType_Clothing:
        if ( TESBipedModelForm_CoversSlot(v44, 7, 0) || TESBipedModelForm_CoversSlot(v44, 6, 0) )
        {
          if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a7 + 0x58) + 0x320))(*(_DWORD *)(a7 + 0x58)) )
            sub_4DCE60((_DWORD *)a7, st7_0, a7, st5_0, st6_0, (int)a5, a9);
        }
        else
        {
          v45 = TESBipedModelForm_CoversSlot(v44, 8, 0);
          v46 = **(_DWORD **)(a7 + 0x58);
          if ( v45 )
          {
            if ( !(*(unsigned __int8 (**)(void))(v46 + 0x320))() )
              sub_4DCF90((TESObjectREFR *)a7, st5_0, st6_0, st7_0, (int)a5);
          }
          else
          {
LABEL_107:
            (*(void (__stdcall **)(int))(v46 + 0x31C))(1);
          }
        }
        break;
      case kFormType_Light:
        v54 = (unsigned __int16 *)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a7 + 0x58) + 0xF0))(
                                    *(_DWORD *)(a7 + 0x58),
                                    1);
        v44 = v54;
        if ( v54 )
        {
          BSSimpleList_Clear(*(_DWORD **)v54);
          BSSimpleList_PushFront(*(_DWORD **)v44, (int)data);
          *((_DWORD *)v44 + 2) = a5;
        }
        else
        {
          v55 = (_DWORD *)FormHeapAlloc(0xCu);
          if ( v55 )
            v44 = (unsigned __int16 *)ContainerEntryExtraData_constr(v55, (int)a5, a6);
          else
            v44 = 0;
          BSSimpleList_PushFront(*(_DWORD **)v44, (int)data);
          if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, unsigned __int16 *))(**(_DWORD **)(a7 + 0x58) + 0x108))(
                  *(_DWORD *)(a7 + 0x58),
                  v44) )
          {
            if ( *(_DWORD *)v44 )
              BSSimpleList_Clear(*(_DWORD **)v44);
            FormHeapFree(*(_DWORD *)v44);
            *(_DWORD *)v44 = 0;
            FormHeapFree((unsigned int)v44);
            v44 = 0;
          }
        }
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a7 + 0x58) + 0x320))(*(_DWORD *)(a7 + 0x58)) )
        {
          if ( v44 )
            EquipLight((TESObjectREFR *)a7, st7_0, st5_0, st6_0, *((int **)v44 + 2));
        }
        break;
      case kFormType_Weapon:
        v44 = (unsigned __int16 *)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a7 + 0x58) + 0xEC))(
                                    *(_DWORD *)(a7 + 0x58),
                                    1);
        if ( v44 )
        {
          v47 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a7 + 0x58) + 0x138))(*(_DWORD *)(a7 + 0x58));
          BSSimpleList_Clear(*(_DWORD **)v44);
          BSSimpleList_PushFront(*(_DWORD **)v44, (int)data);
          *((_DWORD *)v44 + 2) = a5;
          if ( v47 )
            sub_5E13D0((TESObjectREFR *)a7, 0);
        }
        else
        {
          v48 = (_DWORD *)FormHeapAlloc(0xCu);
          if ( v48 )
            v44 = (unsigned __int16 *)ContainerEntryExtraData_constr(v48, (int)a5, a6);
          else
            v44 = 0;
          BSSimpleList_PushFront(*(_DWORD **)v44, (int)data);
          v49 = *(_DWORD **)(a7 + 0x58);
          v50 = (unsigned __int8 (__thiscall **)(_DWORD *, unsigned __int16 *, int))(*v49 + 0x104);
          v51 = (*(int (__thiscall **)(int))(*(_DWORD *)a7 + 0x154))(a7);
          if ( (*v50)(v49, v44, v51) )
          {
            AnimData = TESObjectREFR_GetAnimData((Actor *)a7);
            if ( AnimData )
            {
              v53 = *((float **)v44 + 2);
              st7_0 = v53[0x25];
              AnimData[0x30] = *((void **)v53 + 0x25);
            }
          }
          else
          {
            if ( *(_DWORD *)v44 )
              BSSimpleList_Clear(*(_DWORD **)v44);
            FormHeapFree(*(_DWORD *)v44);
            *(_DWORD *)v44 = 0;
            FormHeapFree((unsigned int)v44);
            v44 = 0;
          }
        }
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a7 + 0x58) + 0x320))(*(_DWORD *)(a7 + 0x58)) )
        {
          if ( v44 )
            EquipWeapon((TESObjectREFR *)a7, st7_0, st5_0, st6_0, *((_DWORD *)v44 + 2), v62);
        }
        break;
      case kFormType_Ammo:
        v60 = (unsigned __int16 *)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a7 + 0x58) + 0xF4))(
                                    *(_DWORD *)(a7 + 0x58),
                                    1);
        v44 = v60;
        if ( v60 )
        {
          BSSimpleList_Clear(*(_DWORD **)v60);
          BSSimpleList_PushFront(*(_DWORD **)v44, (int)data);
          *((_DWORD *)v44 + 2) = a5;
        }
        else
        {
          v61 = (_DWORD *)FormHeapAlloc(0xCu);
          if ( v61 )
            v44 = (unsigned __int16 *)ContainerEntryExtraData_constr(v61, (int)a5, 0);
          else
            v44 = 0;
          BSSimpleList_PushFront(*(_DWORD **)v44, (int)data);
          *((_DWORD *)v44 + 1) = a6;
          if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, unsigned __int16 *))(**(_DWORD **)(a7 + 0x58) + 0x10C))(
                  *(_DWORD *)(a7 + 0x58),
                  v44) )
          {
            if ( *(_DWORD *)v44 )
              BSSimpleList_Clear(*(_DWORD **)v44);
            FormHeapFree(*(_DWORD *)v44);
            *(_DWORD *)v44 = 0;
            FormHeapFree((unsigned int)v44);
            v44 = 0;
          }
        }
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a7 + 0x58) + 0x320))(*(_DWORD *)(a7 + 0x58)) )
        {
          if ( v44 )
            sub_4E1DF0((_DWORD *)a7, st7_0, st5_0, st6_0, *((_DWORD *)v44 + 2));
        }
        break;
      default:
        break;
    }
    sub_5EA1A0(a7, (int)v44, *(_DWORD **)(a7 + 0x3C));
  }
}
