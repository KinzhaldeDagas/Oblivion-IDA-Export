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
  Actor *ParentActor; // edi
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

  AssociatedItemEffect_Link(a1, a10); /*0x69159e*/
  v11 = *(MagicTarget **)(a1 + 0x20); /*0x6915a3*/
  IsFemale = 0; /*0x6915a6*/
  if ( v11 ) /*0x6915aa*/
  {
    ParentActor = MagicTarget_GetParentActor(v11); /*0x6915b1*/
    v50 = (PlayerCharacter *)ParentActor; /*0x6915b3*/
  }
  else
  {
    v50 = 0; /*0x6915b9*/
    ParentActor = 0; /*0x6915bd*/
  }
  if ( *(_BYTE *)(a1 + 0x84) ) /*0x6915bf*/
  {
    v14 = *(_DWORD *)(a1 + 0x3C); /*0x6915cc*/
    if ( v14 ) /*0x6915d1*/
    {
      v15 = OblivionDynamicCast( /*0x6915e3*/
              *(void **)(v14 + 8),
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESObjectWEAP `RTTI Type Descriptor',
              0);
      if ( v15 ) /*0x6915ed*/
      {
        LOWORD(v16) = *((_WORD *)v15 + 0x1C); /*0x6915ef*/
        if ( (_WORD)v16 == 0xFFFF ) /*0x6915f8*/
          v16 = strlen(*((const char **)v15 + 0xD)); /*0x6915fd*/
        else
          v16 = (unsigned __int16)v16; /*0x69160d*/
        if ( v16 ) /*0x691612*/
        {
          *(_BYTE *)(a1 + 0x86) = 1; /*0x69161d*/
          v17 = (const char *)(*(int (__thiscall **)(int))(*((_DWORD *)v15 + 0xC) + 0x14))((int)v15 + 0x30); /*0x69162b*/
          sub_43B420((int *)MEMORY[0xB33A1C], (IOTask **)&v44, v17, 0, 0, 0, 0, 1, 1); /*0x691639*/
          sub_4BDDC0(&v44); /*0x691642*/
        }
      }
    }
    if ( ParentActor ) /*0x691649*/
    {
      v18 = ParentActor->vtbl->super.super.GetBaseForm((TESObjectREFR *)ParentActor); /*0x691661*/
      v19 = OblivionDynamicCast( /*0x691664*/
              v18,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESNPC `RTTI Type Descriptor',
              0);
      if ( v19 ) /*0x69166e*/
        IsFemale = (unsigned __int8 ***)TESActorBase_IsFemale(v19); /*0x691677*/
    }
    v20 = a1 + 0x40; /*0x691679*/
    v44 = 0x10; /*0x69167c*/
    do /*0x691706*/
    {
      if ( *(_DWORD *)v20 ) /*0x691684*/
      {
        v21 = *(void **)(*(_DWORD *)v20 + 8); /*0x69168a*/
        if ( v21 ) /*0x69168f*/
        {
          v22 = (const char **)OblivionDynamicCast( /*0x6916a0*/
                                 v21,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                 &TESBipedModelForm `RTTI Type Descriptor',
                                 0);
          if ( v22 ) /*0x6916aa*/
          {
            *(_BYTE *)(a1 + 0x87) = 1; /*0x6916bb*/
            ModelPath = (const char *)TESBipedModelForm_GetModelPath(v22, (int)IsFemale); /*0x6916c2*/
            sub_43B420((int *)MEMORY[0xB33A1C], &v45, ModelPath, 0, 0, 0, 0, 1, 1); /*0x6916d3*/
            if ( v45 ) /*0x6916de*/
            {
              v24 = v45; /*0x6916e0*/
              if ( !InterlockedDecrement((volatile LONG *)&v45->members.unk08) ) /*0x6916e6*/
                (*(void (__thiscall **)(IOTask *, int))v24->vtbl)(v24, 1); /*0x6916fc*/
            }
          }
        }
      }
      v20 += 4; /*0x6916fe*/
      --v44; /*0x691701*/
    }
    while ( v44 ); /*0x691706*/
    ParentActor = (Actor *)v50; /*0x69170c*/
  }
  v25 = *(_DWORD **)(a1 + 0x3C); /*0x691710*/
  if ( v25 ) /*0x691715*/
  {
    sub_485BC0(v25); /*0x691717*/
    if ( g_TESSaveLoadGame->currentVersion < 0x61u ) /*0x691726*/
    {
      v26 = (IOTask *)FormHeapAlloc(0xCu); /*0x69172a*/
      v44 = (int)v26; /*0x691732*/
      v49 = 0; /*0x691738*/
      if ( v26 ) /*0x691740*/
        v28 = sub_4844A0((unsigned __int8 ***)v26, *(_DWORD *)(a1 + 0x3C)); /*0x69174d*/
      else
        v28 = 0; /*0x691751*/
      v29 = *(unsigned int **)(a1 + 0x3C); /*0x691753*/
      v49 = 0xFFFFFFFF; /*0x691758*/
      if ( v29 ) /*0x691760*/
      {
        ContainerEntryExtraData_DestroyDataTable(v29, v27); /*0x691764*/
        FormHeapFree((unsigned int)v29); /*0x69176a*/
      }
      *(_DWORD *)(a1 + 0x3C) = v28; /*0x691772*/
      ParentActor = (Actor *)v50; /*0x691775*/
    }
    a9 = Actor_UnequipItem(ParentActor, a9, a7, a8, *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 8), 1, 0, 0, 0, 0); /*0x69178c*/
  }
  v30 = (int *)(a1 + 0x40); /*0x691791*/
  v44 = 0x10; /*0x691794*/
  do /*0x691824*/
  {
    if ( *v30 ) /*0x6917a0*/
    {
      sub_485BC0((_DWORD *)*v30); /*0x6917a6*/
      if ( g_TESSaveLoadGame->currentVersion < 0x61u ) /*0x6917b5*/
      {
        v31 = (unsigned __int8 ***)FormHeapAlloc(0xCu); /*0x6917b9*/
        v46 = v31; /*0x6917c1*/
        v49 = 1; /*0x6917c7*/
        if ( v31 ) /*0x6917cf*/
          IsFemale = sub_4844A0(v31, *v30); /*0x6917db*/
        else
          IsFemale = 0; /*0x6917df*/
        v33 = (unsigned int *)*v30; /*0x6917e1*/
        v34 = *v30 == 0; /*0x6917e3*/
        v49 = 0xFFFFFFFF; /*0x6917e5*/
        if ( !v34 ) /*0x6917ed*/
        {
          ContainerEntryExtraData_DestroyDataTable(v33, v32); /*0x6917f1*/
          FormHeapFree((unsigned int)v33); /*0x6917f7*/
        }
        ParentActor = (Actor *)v50; /*0x6917ff*/
        *v30 = (int)IsFemale; /*0x691803*/
      }
      a9 = Actor_UnequipItem(ParentActor, a9, a7, a8, *(_DWORD *)(*v30 + 8), 1, 0, 0, 0, 0); /*0x691817*/
    }
    ++v30; /*0x69181c*/
    --v44; /*0x69181f*/
  }
  while ( v44 ); /*0x691824*/
  if ( *(_BYTE *)(a1 + 0x84) ) /*0x69182a*/
  {
    ContainerChanges = ExtraDataList_GetContainerChanges(&ParentActor->members.super.super.baseExtraList); /*0x691847*/
    v36 = (TESForm *)OblivionDynamicCast( /*0x69184f*/
                       *(void **)(a1 + 0x38),
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                       (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
                       0);
    v37 = v36; /*0x691859*/
    if ( ContainerChanges ) /*0x69185b*/
    {
      if ( !ContainerExtraData_GetItemCount(ContainerChanges, v36) ) /*0x691860*/
      {
        v38 = ((double (__thiscall *)(PlayerCharacter *, TESForm *, _DWORD, int))v50->vtbl->super.super.super.AddItem)( /*0x69187b*/
                v50,
                v37,
                0,
                1);
        Actor_EquipItem( /*0x691888*/
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
