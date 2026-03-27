_DWORD *__thiscall sub_5234F0(char *this, char a2, char a3)
{
  _DWORD *v4; // eax
  unsigned __int8 *BestArmorForSlot; // ebx
  char *v6; // esi
  unsigned __int8 *v7; // ebp
  void *v8; // eax
  unsigned __int16 *v9; // esi
  const char **v10; // ebp
  int v11; // eax
  _DWORD *v12; // ebx
  const char **v13; // eax
  int ModelPath; // eax
  const char **v15; // eax
  int v16; // eax
  int v17; // eax
  const char **v18; // eax
  int v19; // eax
  const char **v20; // eax
  int v21; // eax
  unsigned int i; // ebx
  int v23; // esi
  int BodyModel; // eax
  int v25; // eax
  void *v26; // eax
  int v27; // eax
  int v29; // [esp+0h] [ebp-4Ch]
  int v30; // [esp+4h] [ebp-48h]
  float v31; // [esp+8h] [ebp-44h]
  int v32; // [esp+Ch] [ebp-40h]
  _DWORD *v33; // [esp+10h] [ebp-3Ch]
  int IsFemale; // [esp+14h] [ebp-38h]
  unsigned __int8 *BestClothingForSlot; // [esp+18h] [ebp-34h]
  unsigned __int8 *v36; // [esp+1Ch] [ebp-30h]
  unsigned __int8 *v37; // [esp+20h] [ebp-2Ch]
  unsigned __int8 *v38; // [esp+24h] [ebp-28h]
  unsigned __int8 *v39; // [esp+28h] [ebp-24h]
  const char **v40; // [esp+2Ch] [ebp-20h]
  unsigned __int16 *v41; // [esp+30h] [ebp-1Ch]
  void *v42; // [esp+34h] [ebp-18h]
  _DWORD v43[5]; // [esp+38h] [ebp-14h]
  unsigned __int16 *v44; // [esp+50h] [ebp+4h]
  unsigned __int16 *v45; // [esp+54h] [ebp+8h]

  v4 = (_DWORD *)FormHeapAlloc(8u);
  BestArmorForSlot = 0;
  if ( v4 )
  {
    *v4 = 0;
    v4[1] = 0;
    v33 = v4;
  }
  else
  {
    v33 = 0;
  }
  IsFemale = TESActorBase_IsFemale(this);
  if ( this )
    v6 = this + 0x44;
  else
    v6 = 0;
  v7 = 0;
  BestClothingForSlot = 0;
  v37 = 0;
  v38 = 0;
  v36 = 0;
  v39 = 0;
  v42 = 0;
  if ( a2 )
  {
    BestArmorForSlot = TESContainer_GetBestArmorForSlot(v6, (int *)this, 2);
    BestClothingForSlot = TESContainer_GetBestArmorForSlot(v6, (int *)this, 3);
    v37 = TESContainer_GetBestArmorForSlot(v6, (int *)this, 5);
    v36 = TESContainer_GetBestArmorForSlot(v6, (int *)this, 4);
    v38 = TESContainer_GetBestArmorForSlot(v6, (int *)this, 1);
    v7 = TESContainer_GetBestArmorForSlot(v6, (int *)this, 0);
    v39 = TESContainer_GetBestArmorForSlot(v6, (int *)this, 0xD);
  }
  if ( a3 )
  {
    TESContainer_GetBestWeapon(v6, (int)this, v29, v30, v31, v32, *(float *)&v33);
    v42 = v8;
  }
  if ( !BestArmorForSlot )
    BestArmorForSlot = TESContainer_GetBestClothingForSlot(v6, (int *)this, 2);
  if ( !BestClothingForSlot )
    BestClothingForSlot = TESContainer_GetBestClothingForSlot(v6, (int *)this, 3);
  if ( !v37 )
    v37 = TESContainer_GetBestClothingForSlot(v6, (int *)this, 5);
  if ( !v36 )
    v36 = TESContainer_GetBestClothingForSlot(v6, (int *)this, 4);
  if ( !v38 )
    v38 = TESContainer_GetBestClothingForSlot(v6, (int *)this, 1);
  if ( !v7 )
    TESContainer_GetBestClothingForSlot(v6, (int *)this, 0);
  if ( !v39 )
    v39 = TESContainer_GetBestClothingForSlot(v6, (int *)this, 0xD);
  v9 = 0;
  v10 = 0;
  v44 = 0;
  v45 = 0;
  v40 = 0;
  v41 = 0;
  if ( !BestArmorForSlot
    || (v10 = (const char **)OblivionDynamicCast(
                               BestArmorForSlot,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                               &TESBipedModelForm `RTTI Type Descriptor',
                               0)) == 0 )
  {
    v12 = v33;
LABEL_32:
    if ( BestClothingForSlot )
    {
      v13 = (const char **)OblivionDynamicCast(
                             BestClothingForSlot,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                             &TESBipedModelForm `RTTI Type Descriptor',
                             0);
      v44 = (unsigned __int16 *)v13;
      if ( v13 )
      {
        ModelPath = TESBipedModelForm_GetModelPath(v13, IsFemale);
        if ( ModelPath )
          BSSimpleList_PushFront(v12, ModelPath);
      }
      v9 = v44;
    }
    goto LABEL_37;
  }
  v11 = TESBipedModelForm_GetModelPath(v10, IsFemale);
  v12 = v33;
  if ( v11 )
    BSSimpleList_PushFront(v33, v11);
  if ( !TESBipedModelForm_CoversSlot((unsigned __int16 *)v10, 3, 0) )
    goto LABEL_32;
LABEL_37:
  if ( (!v10 || !TESBipedModelForm_CoversSlot((unsigned __int16 *)v10, 4, 0))
    && (!v9 || !TESBipedModelForm_CoversSlot(v9, 4, 0)) )
  {
    if ( v36 )
    {
      v15 = (const char **)OblivionDynamicCast(
                             v36,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                             &TESBipedModelForm `RTTI Type Descriptor',
                             0);
      v45 = (unsigned __int16 *)v15;
      if ( v15 )
      {
        v16 = TESBipedModelForm_GetModelPath(v15, IsFemale);
        if ( v16 )
          BSSimpleList_PushFront(v12, v16);
      }
    }
  }
  if ( (!v10 || !TESBipedModelForm_CoversSlot((unsigned __int16 *)v10, 5, 0))
    && (!v9 || !TESBipedModelForm_CoversSlot(v9, 5, 0))
    && (!v45 || !TESBipedModelForm_CoversSlot(v45, 5, 0)) )
  {
    if ( v37 )
    {
      v40 = (const char **)OblivionDynamicCast(
                             v37,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                             &TESBipedModelForm `RTTI Type Descriptor',
                             0);
      if ( v40 )
      {
        v17 = TESBipedModelForm_GetModelPath(v40, IsFemale);
        if ( v17 )
          BSSimpleList_PushFront(v12, v17);
      }
    }
  }
  if ( (!v10 || !TESBipedModelForm_CoversSlot((unsigned __int16 *)v10, 1, 0))
    && (!v9 || !TESBipedModelForm_CoversSlot(v9, 1, 0))
    && (!v45 || !TESBipedModelForm_CoversSlot(v45, 1, 0))
    && (!v40 || !TESBipedModelForm_CoversSlot((unsigned __int16 *)v40, 1, 0)) )
  {
    if ( v38 )
    {
      v18 = (const char **)OblivionDynamicCast(
                             v38,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                             &TESBipedModelForm `RTTI Type Descriptor',
                             0);
      v41 = (unsigned __int16 *)v18;
      if ( v18 )
      {
        v19 = TESBipedModelForm_GetModelPath(v18, IsFemale);
        if ( v19 )
          BSSimpleList_PushFront(v12, v19);
      }
    }
  }
  if ( v39 )
  {
    v20 = (const char **)OblivionDynamicCast(
                           v39,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                           &TESBipedModelForm `RTTI Type Descriptor',
                           0);
    if ( v20 )
    {
      v21 = TESBipedModelForm_GetModelPath(v20, IsFemale);
      if ( v21 )
        BSSimpleList_PushFront(v12, v21);
    }
  }
  v43[0] = 2;
  v43[1] = 3;
  v43[2] = 4;
  v43[3] = 5;
  v43[4] = 0xF;
  for ( i = 0; i < 5; ++i )
  {
    v23 = v43[i];
    if ( (!v10 || !TESBipedModelForm_CoversSlot((unsigned __int16 *)v10, v23, 0))
      && (!v44 || !TESBipedModelForm_CoversSlot(v44, v23, 0))
      && (!v45 || !TESBipedModelForm_CoversSlot(v45, v23, 0))
      && (!v40 || !TESBipedModelForm_CoversSlot((unsigned __int16 *)v40, v23, 0))
      && (!v41 || !TESBipedModelForm_CoversSlot(v41, v23, 0)) )
    {
      BodyModel = TESRace_GetBodyModel__(*((void **)this + 0x3A), IsFemale, v23);
      if ( BodyModel )
      {
        v25 = (*(int (__thiscall **)(int))(*(_DWORD *)BodyModel + 0x14))(BodyModel);
        if ( v25 )
          BSSimpleList_PushFront(v33, v25);
      }
    }
  }
  if ( !v42 )
    return v33;
  v26 = OblivionDynamicCast(
          v42,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
          &TESModel `RTTI Type Descriptor',
          0);
  if ( !v26 )
    return v33;
  v27 = (*(int (__thiscall **)(void *))(*(_DWORD *)v26 + 0x14))(v26);
  if ( !v27 )
    return v33;
  BSSimpleList_PushFront(v33, v27);
  return v33;
}
