void __userpurge BoundItemEffect_Link(
        int a1@<ecx>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        int a10)
{
  MagicTarget *v11; // ecx
  unsigned __int8 ***IsFemale; // ebp
  PlayerCharacter *ParentActor; // edi
  int v14; // eax
  void *v15; // eax
  unsigned int v16; // ecx
  const char *v17; // eax
  TESForm *v18; // eax
  _BYTE *v19; // eax
  int v20; // edi
  void *v21; // eax
  const char **v22; // eax
  const char *ModelPath; // eax
  IOTask *v24; // esi
  _DWORD *v25; // ecx
  IOTask *v26; // eax
  int v27; // edx
  unsigned __int8 ***v28; // edi
  unsigned int *v29; // esi
  int *v30; // esi
  unsigned __int8 ***v31; // eax
  int v32; // edx
  unsigned int *v33; // edi
  bool v34; // zf
  ExtraContainerChanges_Data *ContainerChanges; // edi
  TESForm *v36; // eax
  TESForm *v37; // esi
  double v38; // st7
  int v39; // [esp+0h] [ebp-2Ch]
  int v40; // [esp+4h] [ebp-28h]
  int v41; // [esp+8h] [ebp-24h]
  int v42; // [esp+Ch] [ebp-20h]
  int v43; // [esp+10h] [ebp-1Ch]
  int v44; // [esp+14h] [ebp-18h] BYREF
  IOTask *v45; // [esp+18h] [ebp-14h] BYREF
  unsigned __int8 ***v46; // [esp+1Ch] [ebp-10h]
  int v47; // [esp+20h] [ebp-Ch]
  int v48; // [esp+24h] [ebp-8h]
  int v49; // [esp+28h] [ebp-4h]
  PlayerCharacter *v50; // [esp+30h] [ebp+4h]

  AssociatedItemEffect_Link(a10);
  v11 = *(MagicTarget **)(a1 + 0x20);
  IsFemale = 0;
  if ( v11 )
  {
    ParentActor = (PlayerCharacter *)MagicTarget_GetParentActor(v11);
    v50 = ParentActor;
  }
  else
  {
    v50 = 0;
    ParentActor = 0;
  }
  if ( *(_BYTE *)(a1 + 0x84) )
  {
    v14 = *(_DWORD *)(a1 + 0x3C);
    if ( v14 )
    {
      v15 = OblivionDynamicCast(
              *(void **)(v14 + 8),
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESObjectWEAP `RTTI Type Descriptor',
              0);
      if ( v15 )
      {
        LOWORD(v16) = *((_WORD *)v15 + 0x1C);
        if ( (_WORD)v16 == 0xFFFF )
          v16 = strlen(*((const char **)v15 + 0xD));
        else
          v16 = (unsigned __int16)v16;
        if ( v16 )
        {
          *(_BYTE *)(a1 + 0x86) = 1;
          v17 = (const char *)(*(int (__thiscall **)(int))(*((_DWORD *)v15 + 0xC) + 0x14))((int)v15 + 0x30);
          sub_43B420((int *)ModelLoaderPtr, (IOTask **)&v44, v17, 0, 0, 0, 0, 1, 1);
          sub_4BDDC0(&v44);
        }
      }
    }
    if ( ParentActor )
    {
      v18 = ParentActor->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)ParentActor);
      v19 = OblivionDynamicCast(
              v18,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESNPC `RTTI Type Descriptor',
              0);
      if ( v19 )
        IsFemale = (unsigned __int8 ***)TESActorBase_IsFemale(v19);
    }
    v20 = a1 + 0x40;
    v44 = 0x10;
    do
    {
      if ( *(_DWORD *)v20 )
      {
        v21 = *(void **)(*(_DWORD *)v20 + 8);
        if ( v21 )
        {
          v22 = (const char **)OblivionDynamicCast(
                                 v21,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                 &TESBipedModelForm `RTTI Type Descriptor',
                                 0);
          if ( v22 )
          {
            *(_BYTE *)(a1 + 0x87) = 1;
            ModelPath = (const char *)TESBipedModelForm_GetModelPath(v22, (int)IsFemale);
            sub_43B420((int *)ModelLoaderPtr, &v45, ModelPath, 0, 0, 0, 0, 1, 1);
            if ( v45 )
            {
              v24 = v45;
              if ( !InterlockedDecrement((volatile LONG *)&v45->members.unk08) )
                (*(void (__thiscall **)(IOTask *, int))v24->vtbl)(v24, 1);
            }
          }
        }
      }
      v20 += 4;
      --v44;
    }
    while ( v44 );
    ParentActor = v50;
  }
  v25 = *(_DWORD **)(a1 + 0x3C);
  if ( v25 )
  {
    sub_485BC0(v25);
    if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x61u )
    {
      v26 = (IOTask *)FormHeapAlloc(0xCu);
      v44 = (int)v26;
      v49 = 0;
      if ( v26 )
        v28 = sub_4844A0((unsigned __int8 ***)v26, *(_DWORD *)(a1 + 0x3C));
      else
        v28 = 0;
      v29 = *(unsigned int **)(a1 + 0x3C);
      v49 = 0xFFFFFFFF;
      if ( v29 )
      {
        ContainerEntryExtraData_DestroyDataTable(v29, v27);
        FormHeapFree((unsigned int)v29);
      }
      *(_DWORD *)(a1 + 0x3C) = v28;
      ParentActor = v50;
    }
    a9 = Actor_UnequipItem(ParentActor, a9, a7, a8, *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 8), 1, 0, 0, 0, 0);
  }
  v30 = (int *)(a1 + 0x40);
  v44 = 0x10;
  do
  {
    if ( *v30 )
    {
      sub_485BC0((_DWORD *)*v30);
      if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x61u )
      {
        v31 = (unsigned __int8 ***)FormHeapAlloc(0xCu);
        v46 = v31;
        v49 = 1;
        if ( v31 )
          IsFemale = sub_4844A0(v31, *v30);
        else
          IsFemale = 0;
        v33 = (unsigned int *)*v30;
        v34 = *v30 == 0;
        v49 = 0xFFFFFFFF;
        if ( !v34 )
        {
          ContainerEntryExtraData_DestroyDataTable(v33, v32);
          FormHeapFree((unsigned int)v33);
        }
        ParentActor = v50;
        *v30 = (int)IsFemale;
      }
      a9 = Actor_UnequipItem(ParentActor, a9, a7, a8, *(_DWORD *)(*v30 + 8), 1, 0, 0, 0, 0);
    }
    ++v30;
    --v44;
  }
  while ( v44 );
  if ( *(_BYTE *)(a1 + 0x84) )
  {
    ContainerChanges = ExtraDataList_GetContainerChanges(&ParentActor->super.super.super.super.baseExtraList);
    v36 = (TESForm *)OblivionDynamicCast(
                       *(void **)(a1 + 0x38),
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                       (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
                       0);
    v37 = v36;
    if ( ContainerChanges )
    {
      if ( !ContainerExtraData_GetItemCount(ContainerChanges, v36) )
      {
        v38 = ((double (__thiscall *)(PlayerCharacter *, TESForm *, _DWORD, int))v50->vtbl->super.super.super.AddItem)(
                v50,
                v37,
                0,
                1);
        Actor_EquipItem(
          v50,
          (unsigned __int16 *)IsFemale,
          a7,
          a8,
          a5,
          v38,
          a2,
          a6,
          a4,
          a3,
          v37,
          1,
          0,
          1,
          0,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44,
          (int)v45,
          (int)v46,
          v47,
          v48,
          v49);
      }
    }
  }
}
