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
  _DWORD *v26; // ecx
  int FXEffect; // edi
  int StrongestItem; // eax
  unsigned int v29; // ecx
  int v30; // eax

  *(_DWORD *)this = &BoundItemEffect::`vftable';
  v2 = *((_DWORD *)this + 0xF);
  IsFemale = 0;
  if ( v2 )
  {
    if ( *((_BYTE *)this + 0x86) )
    {
      v4 = OblivionDynamicCast(
             *(void **)(v2 + 8),
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
             &TESObjectWEAP `RTTI Type Descriptor',
             0);
      if ( v4 )
      {
        LOWORD(v5) = *((_WORD *)v4 + 0x1C);
        if ( (_WORD)v5 == 0xFFFF )
          v5 = strlen(*((const char **)v4 + 0xD));
        else
          v5 = (unsigned __int16)v5;
        if ( v5 )
        {
          v6 = (*(int (__thiscall **)(int))(*((_DWORD *)v4 + 0xC) + 0x14))((int)v4 + 0x30);
          QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, v6, 0, 1);
        }
      }
    }
  }
  if ( *((_BYTE *)this + 0x87) )
  {
    v7 = *((_DWORD *)this + 8);
    if ( v7 )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7) )
      {
        v8 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 8) + 4))(*((_DWORD *)this + 8));
        v9 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x170))(v8);
        v10 = OblivionDynamicCast(
                v9,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                &TESNPC `RTTI Type Descriptor',
                0);
        if ( v10 )
          IsFemale = TESActorBase_IsFemale(v10);
      }
    }
    v11 = (char *)this + 0x40;
    v12 = 0x10;
    do
    {
      if ( *(_DWORD *)v11 )
      {
        v13 = *(void **)(*(_DWORD *)v11 + 8);
        if ( v13 )
        {
          v14 = (const char **)OblivionDynamicCast(
                                 v13,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                 &TESBipedModelForm `RTTI Type Descriptor',
                                 0);
          if ( v14 )
          {
            *((_BYTE *)this + 0x87) = 1;
            ModelPath = TESBipedModelForm_GetModelPath(v14, IsFemale);
            QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, ModelPath, 0, 1);
          }
        }
      }
      v11 += 4;
      --v12;
    }
    while ( v12 );
  }
  v16 = *((ExtraDataList ****)this + 0xF);
  if ( v16 )
  {
    if ( *v16 )
      v17 = **v16;
    else
      v17 = 0;
    if ( v17 )
      sub_41F670(v17);
    ContainerEntryExtraData_ClearDataTable(*((int **)this + 0xF));
    v19 = *((_DWORD *)this + 0xF);
    if ( v19 )
    {
      ContainerEntryExtraData_DestroyDataTable(*((unsigned int **)this + 0xF), v18);
      FormHeapFree(v19);
    }
  }
  v20 = (int **)((char *)this + 0x40);
  v21 = 0x10;
  do
  {
    v22 = *v20;
    if ( *v20 )
    {
      if ( *v22 )
        v23 = *(ExtraDataList **)*v22;
      else
        v23 = 0;
      if ( v23 )
        sub_41F670(v23);
      ContainerEntryExtraData_ClearDataTable(*v20);
      v25 = *v20;
      if ( *v20 )
      {
        ContainerEntryExtraData_DestroyDataTable((unsigned int *)*v20, v24);
        FormHeapFree((unsigned int)v25);
      }
    }
    ++v20;
    --v21;
  }
  while ( v21 );
  if ( *((_BYTE *)this + 0x85) )
  {
    v26 = *((_DWORD **)this + 2);
    if ( v26 )
    {
      if ( *((_DWORD *)this + 3) )
      {
        FXEffect = MagicItem_GetFXEffect(v26, 0);
        StrongestItem = EffectItemList_GetStrongestItem(*(_DWORD *)(*((_DWORD *)this + 3) + 0x10), 0);
        LOWORD(v29) = *(_WORD *)(FXEffect + 0x20);
        if ( (_WORD)v29 == 0xFFFF )
          v29 = strlen(*(const char **)(FXEffect + 0x1C));
        else
          v29 = (unsigned __int16)v29;
        if ( v29 )
        {
          if ( *((_DWORD *)this + 3) == StrongestItem )
          {
            v30 = (*(int (__thiscall **)(int))(*(_DWORD *)(FXEffect + 0x18) + 0x14))(FXEffect + 0x18);
            QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, v30, 0, 1);
          }
        }
        *((_BYTE *)this + 0x85) = 0;
      }
    }
  }
  ActiveEffect::~ActiveEffect((ActiveEffect *)this);
}
