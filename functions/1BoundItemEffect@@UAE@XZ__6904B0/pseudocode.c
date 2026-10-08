void __thiscall BoundItemEffect::~BoundItemEffect(BoundItemEffect *this)
{
  int v2; // eax
  int IsFemale; // ebx
  void *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  void *v9; // eax
  _BYTE *v10; // eax
  char *v11; // edi
  int v12; // ebp
  void *v13; // eax
  const char **v14; // eax
  int ModelPath; // eax
  ExtraDataList ***v16; // eax
  ExtraDataList *v17; // ecx
  int v18; // edx
  unsigned int v19; // edi
  int **v20; // edi
  int v21; // ebx
  int *v22; // eax
  ExtraDataList *v23; // ecx
  int v24; // edx
  int *v25; // ebp
  void *v26; // ecx
  EffectSetting *FXEffect; // edi
  int StrongestItem; // eax
  unsigned int v29; // ecx
  int v30; // eax
  int v31; // [esp+0h] [ebp-24h]
  int v32; // [esp+4h] [ebp-20h]
  int v33; // [esp+8h] [ebp-1Ch]
  int v34; // [esp+Ch] [ebp-18h]
  char v35; // [esp+10h] [ebp-14h]

  *(_DWORD *)this = &BoundItemEffect::`vftable'; /*0x6904db*/
  v2 = *((_DWORD *)this + 0xF); /*0x6904e1*/
  IsFemale = 0; /*0x6904e4*/
  if ( v2 ) /*0x6904ec*/
  {
    if ( *((_BYTE *)this + 0x86) ) /*0x6904ee*/
    {
      v4 = OblivionDynamicCast( /*0x690506*/
             *(void **)(v2 + 8),
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
             &TESObjectWEAP `RTTI Type Descriptor',
             0);
      if ( v4 ) /*0x690510*/
      {
        LOWORD(v5) = *((_WORD *)v4 + 0x1C); /*0x690512*/
        if ( (_WORD)v5 == 0xFFFF ) /*0x69051b*/
          v5 = strlen(*((const char **)v4 + 0xD)); /*0x690520*/
        else
          v5 = (unsigned __int16)v5; /*0x690530*/
        if ( v5 ) /*0x690535*/
        {
          v6 = (*(int (__thiscall **)(int))(*((_DWORD *)v4 + 0xC) + 0x14))((int)v4 + 0x30); /*0x690542*/
          QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], v6, 0, 1); /*0x69054b*/
        }
      }
    }
  }
  if ( *((_BYTE *)this + 0x87) ) /*0x690550*/
  {
    v7 = *((_DWORD *)this + 8); /*0x69055c*/
    if ( v7 ) /*0x690561*/
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7) ) /*0x690568*/
      {
        v8 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 8) + 4))(*((_DWORD *)this + 8)); /*0x690576*/
        v9 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x170))(v8); /*0x69058e*/
        v10 = OblivionDynamicCast( /*0x690591*/
                v9,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                &TESNPC `RTTI Type Descriptor',
                0);
        if ( v10 ) /*0x69059b*/
          IsFemale = TESActorBase_IsFemale(v10); /*0x6905a4*/
      }
    }
    v11 = (char *)this + 0x40; /*0x6905a6*/
    v12 = 0x10; /*0x6905a9*/
    do /*0x6905fd*/
    {
      if ( *(_DWORD *)v11 ) /*0x6905b0*/
      {
        v13 = *(void **)(*(_DWORD *)v11 + 8); /*0x6905b6*/
        if ( v13 ) /*0x6905bb*/
        {
          v14 = (const char **)OblivionDynamicCast( /*0x6905cc*/
                                 v13,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                 &TESBipedModelForm `RTTI Type Descriptor',
                                 0);
          if ( v14 ) /*0x6905d6*/
          {
            *((_BYTE *)this + 0x87) = 1; /*0x6905df*/
            ModelPath = TESBipedModelForm_GetModelPath(v14, IsFemale); /*0x6905e6*/
            QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], ModelPath, 0, 1); /*0x6905f2*/
          }
        }
      }
      v11 += 4; /*0x6905f7*/
      --v12; /*0x6905fa*/
    }
    while ( v12 ); /*0x6905fd*/
  }
  v16 = *((ExtraDataList ****)this + 0xF); /*0x6905ff*/
  if ( v16 ) /*0x690604*/
  {
    if ( *v16 ) /*0x690606*/
      v17 = **v16; /*0x69060d*/
    else
      v17 = 0; /*0x690611*/
    if ( v17 ) /*0x690615*/
      sub_41F670(v17); /*0x690617*/
    ContainerEntryExtraData_ClearDataTable(*((int **)this + 0xF)); /*0x69061f*/
    v19 = *((_DWORD *)this + 0xF); /*0x690624*/
    if ( v19 ) /*0x690629*/
    {
      ContainerEntryExtraData_DestroyDataTable(*((unsigned int **)this + 0xF), v18); /*0x69062d*/
      FormHeapFree(v19); /*0x690633*/
    }
  }
  v20 = (int **)((char *)this + 0x40); /*0x69063b*/
  v21 = 0x10; /*0x69063e*/
  do /*0x690682*/
  {
    v22 = *v20; /*0x690643*/
    if ( *v20 ) /*0x690643*/
    {
      if ( *v22 ) /*0x690649*/
        v23 = *(ExtraDataList **)*v22; /*0x690650*/
      else
        v23 = 0; /*0x690654*/
      if ( v23 ) /*0x690658*/
        sub_41F670(v23); /*0x69065a*/
      ContainerEntryExtraData_ClearDataTable(*v20); /*0x690661*/
      v25 = *v20; /*0x690666*/
      if ( *v20 ) /*0x690666*/
      {
        ContainerEntryExtraData_DestroyDataTable((unsigned int *)*v20, v24); /*0x69066e*/
        FormHeapFree((unsigned int)v25); /*0x690674*/
      }
    }
    ++v20; /*0x69067c*/
    --v21; /*0x69067f*/
  }
  while ( v21 ); /*0x690682*/
  if ( *((_BYTE *)this + 0x85) ) /*0x690684*/
  {
    v26 = *((void **)this + 2); /*0x69068d*/
    if ( v26 ) /*0x690692*/
    {
      if ( *((_DWORD *)this + 3) ) /*0x690694*/
      {
        FXEffect = MagicItem_GetFXEffect(v26, 0); /*0x6906a4*/
        StrongestItem = EffectItemList_GetStrongestItem( /*0x6906b2*/
                          (_DWORD *)(*((_DWORD *)this + 2) + 0xC),
                          *(_DWORD *)(*((_DWORD *)this + 3) + 0x10),
                          0,
                          v31,
                          v32,
                          v33,
                          v34,
                          v35);
        LOWORD(v29) = FXEffect->model.nifModel.m_dataLen; /*0x6906b7*/
        if ( (_WORD)v29 == 0xFFFF ) /*0x6906c0*/
          v29 = strlen(FXEffect->model.nifModel.m_data); /*0x6906c5*/
        else
          v29 = (unsigned __int16)v29; /*0x6906d5*/
        if ( v29 ) /*0x6906da*/
        {
          if ( *((_DWORD *)this + 3) == StrongestItem ) /*0x6906df*/
          {
            v30 = (int)FXEffect->model.vtbl->GetModelPath(&FXEffect->model); /*0x6906ee*/
            QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], v30, 0, 1); /*0x6906f7*/
          }
        }
        *((_BYTE *)this + 0x85) = 0; /*0x6906fc*/
      }
    }
  }
  ActiveEffect::~ActiveEffect((ActiveEffect *)this); /*0x69070d*/
}
