ExtraLight *__userpurge sub_6397D0@<eax>(float *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5)
{
  _DWORD **v7; // ebp
  double v8; // st7
  double v9; // st7
  char v10; // al
  float v11; // ebp
  TESObjectCELL *ParentCell; // eax
  ExtraLight *result; // eax
  int v14; // ebp
  char v15; // al
  float v16; // ebp
  TESObjectCELL *v17; // eax
  ExtraDataList *****ContainerChanges; // ebx
  EntryData *v19; // ebx
  _DWORD **v20; // esi
  _DWORD **v21; // esi
  TESWorldSpace *v22; // [esp+24h] [ebp-24h]
  TESWorldSpace *WorldSpace; // [esp+28h] [ebp-20h]
  float v24; // [esp+28h] [ebp-20h]
  int **EquippedInstance; // [esp+3Ch] [ebp-Ch]
  int v26; // [esp+40h] [ebp-8h]
  int **v27; // [esp+40h] [ebp-8h]
  EntryData *v28; // [esp+44h] [ebp-4h]
  int v29; // [esp+4Ch] [ebp+4h]

  v26 = (*(int (__usercall **)@<eax>(float *@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x184))(a1, a4, a3);
  if ( !*((_DWORD *)a1 + 0xB) )
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)a1 + 0x558))(a1, a5);
  v7 = 0;
  if ( *((_DWORD *)a1 + 0xB) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(**((_DWORD **)a1 + 0xB) + 0x190))(*((_DWORD *)a1 + 0xB)) )
      v7 = *((_DWORD ***)a1 + 0xB);
  }
  v8 = sub_4D7E30((float *)a5, a1 + 0x4A);
  v9 = (double)Double_To_SInt32(v8);
  if ( v9 > flt_A56F84 )
  {
    if ( *((_BYTE *)a1 + 0xD0) )
    {
      v11 = *a1;
      WorldSpace = TESObjectREFR_GetWorldSpace(*((TESObjectREFR **)a1 + 0xB));
      ParentCell = TESObjectREFR_GetParentCell(*((TESObjectREFR **)a1 + 0xB));
      return (ExtraLight *)(*(void *(__thiscall **)(float *, int, int, int, int, TESObjectCELL *, TESWorldSpace *))(LODWORD(v11) + 0x3DC))(
                             a1,
                             a5,
                             *((_DWORD *)a1 + 0x4A),
                             *((_DWORD *)a1 + 0x4B),
                             *((_DWORD *)a1 + 0x4C),
                             ParentCell,
                             WorldSpace);
    }
    v10 = 0;
  }
  else
  {
    v10 = 1;
  }
  if ( !*((_BYTE *)a1 + 0xD0) && !v10 )
  {
    v14 = 0x101;
    if ( *(_BYTE *)(a5 + 0xC8)
      || (*(_DWORD *)(v26 + 0x1C) & 0x2000) != 0
      || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)a5 + 0x334))(a5, 1)
      || (v15 = *(_BYTE *)(*((_DWORD *)a1 + 2) + 0x20), v15 == 0xF)
      || v15 == 0xC )
    {
      v14 = 0x201;
    }
    (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)a1 + 0x238))(a1, a5, v14);
    v16 = *a1;
    v24 = flt_A417B4;
    v22 = TESObjectREFR_GetWorldSpace(*((TESObjectREFR **)a1 + 0x48));
    v17 = TESObjectREFR_GetParentCell(*((TESObjectREFR **)a1 + 0x48));
    return (ExtraLight *)(*(void *(__thiscall **)(float *, int, int *, TESObjectCELL *, TESWorldSpace *, _DWORD))(LODWORD(v16) + 0x414))(
                           a1,
                           a5,
                           (int *)a1 + 0x4A,
                           v17,
                           v22,
                           LODWORD(v24));
  }
  v28 = (EntryData *)(*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0xF0))(a1, 0);
  v29 = (*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0xF8))(a1, 0);
  ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(a5 + 0x44));
  EquippedInstance = 0;
  v27 = 0;
  if ( ContainerChanges )
  {
    EquippedInstance = (int **)ContainerExtraData_GetEquippedInstance(ContainerChanges, 0xD, 0);
    v27 = (int **)ContainerExtraData_GetEquippedInstance(ContainerChanges, 0xE, 0);
  }
  if ( !*((_BYTE *)a1 + 0xD0) )
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)a1 + 0x194))(a1, a5);
  if ( (*(int (__thiscall **)(float *, int))(*(_DWORD *)a1 + 0xF8))(a1, 1) )
  {
    if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(*((EntryData **)a1 + 0x3C), 0) )
    {
      sub_4853B0((EntryData *)v29, 0, 0, 0);
      v9 = sub_4DC8F0((TESObjectREFR *)a5, v9, a2, a3, (int)v7, 0);
    }
  }
  if ( (*(int (__thiscall **)(float *, int))(*(_DWORD *)a1 + 0xF0))(a1, 1)
    && (unsigned __int8)ContainerEntryExtraData_HasWorn(*((EntryData **)a1 + 0x3A), 0) )
  {
    v19 = v28;
    sub_4853B0(v28, 0, 0, 0);
    UnequipLight((TESObjectREFR *)a5, a2, a3, v9);
  }
  else
  {
    v19 = v28;
  }
  if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 0x304))(a1) )
    (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0x300))(a1, 0);
  if ( (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 0x36C))(a1) == 4
    || (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 0x36C))(a1) == 9 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a5 + 0x264))(a5, 1);
    (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)a1 + 0x188))(a1, a5, 1);
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*v7[0x16] + 0x178))(v7[0x16], 0);
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)a1 + 0x394))(a1, 1);
    result = (ExtraLight *)((int (__thiscall *)(_DWORD **, int, int))(*v7)[0x90])(v7, a5, 1);
    v21 = *((_DWORD ***)a1 + 0x3C);
    if ( v21 )
    {
      if ( *v21 )
        BSSimpleList_PushFront(*v21, **EquippedInstance);
      return (ExtraLight *)EquipShield((TESObjectREFR *)a5, v9, a2, a3, *(_DWORD *)(v29 + 8));
    }
    if ( !v29 )
    {
      if ( v19 )
      {
        result = (ExtraLight *)ContainerEntryExtraData_HasWorn(v19, 0);
        if ( !(_BYTE)result )
        {
          if ( v27 )
          {
            if ( v19->extendData )
              BSSimpleList_PushFront(&v19->extendData->node.data, **v27);
          }
          return EquipLight((TESObjectREFR *)a5, v9, a2, a3, (int *)v19->type);
        }
      }
    }
  }
  else
  {
    result = (ExtraLight *)(*(int (__thiscall **)(float *, int))(*(_DWORD *)a1 + 0x1B4))(a1, a5);
    if ( (_BYTE)result )
      return result;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a5 + 0x264))(a5, 1);
    ((void (__thiscall *)(_DWORD **, int, int))(*v7)[0x90])(v7, a5, 1);
    (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)a1 + 0x188))(a1, a5, 1);
    result = (ExtraLight *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*v7[0x16] + 0x178))(v7[0x16], 0);
    v20 = *((_DWORD ***)a1 + 0x3C);
    if ( v20 )
    {
      if ( *v20 )
        BSSimpleList_PushFront(*v20, **EquippedInstance);
      return (ExtraLight *)EquipShield((TESObjectREFR *)a5, v9, a2, a3, *(_DWORD *)(v29 + 8));
    }
    if ( !v29 )
    {
      if ( v19 )
      {
        result = (ExtraLight *)ContainerEntryExtraData_HasWorn(v19, 0);
        if ( !(_BYTE)result )
        {
          if ( v27 )
          {
            if ( v19->extendData )
              BSSimpleList_PushFront(&v19->extendData->node.data, **v27);
          }
          return EquipLight((TESObjectREFR *)a5, v9, a2, a3, (int *)v19->type);
        }
      }
    }
  }
  return result;
}
