_DWORD *__thiscall sub_5234F0(char *this, char a2, char a3)
{
  _DWORD *v4; // eax
  TESForm *BestArmorForSlot; // ebx
  char *v6; // esi
  TESForm *v7; // ebp
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
  TESForm *BestClothingForSlot; // [esp+18h] [ebp-34h]
  TESForm *v36; // [esp+1Ch] [ebp-30h]
  TESForm *v37; // [esp+20h] [ebp-2Ch]
  TESForm *v38; // [esp+24h] [ebp-28h]
  TESForm *v39; // [esp+28h] [ebp-24h]
  const char **v40; // [esp+2Ch] [ebp-20h]
  unsigned __int16 *v41; // [esp+30h] [ebp-1Ch]
  void *v42; // [esp+34h] [ebp-18h]
  _DWORD v43[5]; // [esp+38h] [ebp-14h]
  unsigned __int16 *v44; // [esp+50h] [ebp+4h]
  unsigned __int16 *v45; // [esp+54h] [ebp+8h]

  v4 = (_DWORD *)FormHeapAlloc(8u); /*0x5234fb*/
  BestArmorForSlot = 0; /*0x523500*/
  if ( v4 ) /*0x523507*/
  {
    *v4 = 0; /*0x523509*/
    v4[1] = 0; /*0x52350b*/
    v33 = v4; /*0x52350e*/
  }
  else
  {
    v33 = 0; /*0x523514*/
  }
  IsFemale = TESActorBase_IsFemale(this); /*0x523521*/
  if ( this ) /*0x523525*/
    v6 = this + 0x44; /*0x523527*/
  else
    v6 = 0; /*0x52352c*/
  v7 = 0; /*0x523530*/
  BestClothingForSlot = 0; /*0x523536*/
  v37 = 0; /*0x52353a*/
  v38 = 0; /*0x52353e*/
  v36 = 0; /*0x523542*/
  v39 = 0; /*0x523546*/
  v42 = 0; /*0x52354a*/
  if ( a2 ) /*0x52354e*/
  {
    BestArmorForSlot = TESContainer_GetBestArmorForSlot(v6, (TESActorBase *)this, 2); /*0x52355f*/
    BestClothingForSlot = TESContainer_GetBestArmorForSlot(v6, (TESActorBase *)this, 3); /*0x52356b*/
    v37 = TESContainer_GetBestArmorForSlot(v6, (TESActorBase *)this, 5); /*0x523579*/
    v36 = TESContainer_GetBestArmorForSlot(v6, (TESActorBase *)this, 4); /*0x523587*/
    v38 = TESContainer_GetBestArmorForSlot(v6, (TESActorBase *)this, 1); /*0x523594*/
    v7 = TESContainer_GetBestArmorForSlot(v6, (TESActorBase *)this, 0); /*0x5235a2*/
    v39 = TESContainer_GetBestArmorForSlot(v6, (TESActorBase *)this, 0xD); /*0x5235a9*/
  }
  if ( a3 ) /*0x5235b2*/
  {
    TESContainer_GetBestWeapon(v6, (int *)this, v29, v30, v31, v32, *(float *)&v33); /*0x5235b7*/
    v42 = v8; /*0x5235bc*/
  }
  if ( !BestArmorForSlot ) /*0x5235c2*/
    BestArmorForSlot = TESContainer_GetBestClothingForSlot(v6, (TESActorBase *)this, 2); /*0x5235ce*/
  if ( !BestClothingForSlot ) /*0x5235d5*/
    BestClothingForSlot = TESContainer_GetBestClothingForSlot(v6, (TESActorBase *)this, 3); /*0x5235e1*/
  if ( !v37 ) /*0x5235ea*/
    v37 = TESContainer_GetBestClothingForSlot(v6, (TESActorBase *)this, 5); /*0x5235f6*/
  if ( !v36 ) /*0x5235ff*/
    v36 = TESContainer_GetBestClothingForSlot(v6, (TESActorBase *)this, 4); /*0x52360b*/
  if ( !v38 ) /*0x523614*/
    v38 = TESContainer_GetBestClothingForSlot(v6, (TESActorBase *)this, 1); /*0x523620*/
  if ( !v7 ) /*0x523626*/
    TESContainer_GetBestClothingForSlot(v6, (TESActorBase *)this, 0); /*0x52362c*/
  if ( !v39 ) /*0x523636*/
    v39 = TESContainer_GetBestClothingForSlot(v6, (TESActorBase *)this, 0xD); /*0x523642*/
  v9 = 0; /*0x523646*/
  v10 = 0; /*0x523648*/
  v44 = 0; /*0x52364c*/
  v45 = 0; /*0x523650*/
  v40 = 0; /*0x523654*/
  v41 = 0; /*0x523658*/
  if ( !BestArmorForSlot /*0x523677*/
    || (v10 = (const char **)OblivionDynamicCast(
                               BestArmorForSlot,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                               &TESBipedModelForm `RTTI Type Descriptor',
                               0)) == 0 )
  {
    v12 = v33; /*0x5236a6*/
LABEL_32:
    if ( BestClothingForSlot ) /*0x5236b0*/
    {
      v13 = (const char **)OblivionDynamicCast( /*0x5236c1*/
                             BestClothingForSlot,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                             &TESBipedModelForm `RTTI Type Descriptor',
                             0);
      v44 = (unsigned __int16 *)v13; /*0x5236cb*/
      if ( v13 ) /*0x5236cf*/
      {
        ModelPath = TESBipedModelForm_GetModelPath(v13, IsFemale); /*0x5236d8*/
        if ( ModelPath ) /*0x5236df*/
          BSSimpleList_PushFront(v12, ModelPath); /*0x5236e4*/
      }
      v9 = v44; /*0x5236e9*/
    }
    goto LABEL_37; /*0x5236e9*/
  }
  v11 = TESBipedModelForm_GetModelPath(v10, IsFemale); /*0x523680*/
  v12 = v33; /*0x523687*/
  if ( v11 ) /*0x52368b*/
    BSSimpleList_PushFront(v33, v11); /*0x523690*/
  if ( !TESBipedModelForm_CoversSlot((unsigned __int16 *)v10, 3, 0) ) /*0x52369b*/
    goto LABEL_32; /*0x5236a2*/
LABEL_37:
  if ( (!v10 || !TESBipedModelForm_CoversSlot((unsigned __int16 *)v10, 4, 0)) /*0x52370a*/
    && (!v9 || !TESBipedModelForm_CoversSlot(v9, 4, 0)) )
  {
    if ( v36 ) /*0x523719*/
    {
      v15 = (const char **)OblivionDynamicCast( /*0x52372a*/
                             v36,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                             &TESBipedModelForm `RTTI Type Descriptor',
                             0);
      v45 = (unsigned __int16 *)v15; /*0x523734*/
      if ( v15 ) /*0x523738*/
      {
        v16 = TESBipedModelForm_GetModelPath(v15, IsFemale); /*0x523741*/
        if ( v16 ) /*0x523748*/
          BSSimpleList_PushFront(v12, v16); /*0x52374d*/
      }
    }
  }
  if ( (!v10 || !TESBipedModelForm_CoversSlot((unsigned __int16 *)v10, 5, 0)) /*0x523784*/
    && (!v9 || !TESBipedModelForm_CoversSlot(v9, 5, 0))
    && (!v45 || !TESBipedModelForm_CoversSlot(v45, 5, 0)) )
  {
    if ( v37 ) /*0x523793*/
    {
      v40 = (const char **)OblivionDynamicCast( /*0x5237ae*/
                             v37,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                             &TESBipedModelForm `RTTI Type Descriptor',
                             0);
      if ( v40 ) /*0x5237b2*/
      {
        v17 = TESBipedModelForm_GetModelPath(v40, IsFemale); /*0x5237bd*/
        if ( v17 ) /*0x5237c4*/
          BSSimpleList_PushFront(v12, v17); /*0x5237c9*/
      }
    }
  }
  if ( (!v10 || !TESBipedModelForm_CoversSlot((unsigned __int16 *)v10, 1, 0)) /*0x523815*/
    && (!v9 || !TESBipedModelForm_CoversSlot(v9, 1, 0))
    && (!v45 || !TESBipedModelForm_CoversSlot(v45, 1, 0))
    && (!v40 || !TESBipedModelForm_CoversSlot((unsigned __int16 *)v40, 1, 0)) )
  {
    if ( v38 ) /*0x523824*/
    {
      v18 = (const char **)OblivionDynamicCast( /*0x523835*/
                             v38,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                             &TESBipedModelForm `RTTI Type Descriptor',
                             0);
      v41 = (unsigned __int16 *)v18; /*0x52383f*/
      if ( v18 ) /*0x523843*/
      {
        v19 = TESBipedModelForm_GetModelPath(v18, IsFemale); /*0x52384c*/
        if ( v19 ) /*0x523853*/
          BSSimpleList_PushFront(v12, v19); /*0x523858*/
      }
    }
  }
  if ( v39 ) /*0x523863*/
  {
    v20 = (const char **)OblivionDynamicCast( /*0x523874*/
                           v39,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                           &TESBipedModelForm `RTTI Type Descriptor',
                           0);
    if ( v20 ) /*0x52387e*/
    {
      v21 = TESBipedModelForm_GetModelPath(v20, IsFemale); /*0x523887*/
      if ( v21 ) /*0x52388e*/
        BSSimpleList_PushFront(v12, v21); /*0x523893*/
    }
  }
  v43[0] = 2; /*0x523898*/
  v43[1] = 3; /*0x5238a0*/
  v43[2] = 4; /*0x5238a8*/
  v43[3] = 5; /*0x5238b0*/
  v43[4] = 0xF; /*0x5238b8*/
  for ( i = 0; i < 5; ++i ) /*0x5238c0*/
  {
    v23 = v43[i]; /*0x5238c4*/
    if ( (!v10 || !TESBipedModelForm_CoversSlot((unsigned __int16 *)v10, v23, 0)) /*0x52391f*/
      && (!v44 || !TESBipedModelForm_CoversSlot(v44, v23, 0))
      && (!v45 || !TESBipedModelForm_CoversSlot(v45, v23, 0))
      && (!v40 || !TESBipedModelForm_CoversSlot((unsigned __int16 *)v40, v23, 0))
      && (!v41 || !TESBipedModelForm_CoversSlot(v41, v23, 0)) )
    {
      BodyModel = TESRace_GetBodyModel__(*((void **)this + 0x3A), IsFemale, v23); /*0x523934*/
      if ( BodyModel ) /*0x52393b*/
      {
        v25 = (*(int (__thiscall **)(int))(*(_DWORD *)BodyModel + 0x14))(BodyModel); /*0x523944*/
        if ( v25 ) /*0x523948*/
          BSSimpleList_PushFront(v33, v25); /*0x52394f*/
      }
    }
  }
  if ( !v42 ) /*0x523966*/
    return v33; /*0x523966*/
  v26 = OblivionDynamicCast( /*0x523977*/
          v42,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
          &TESModel `RTTI Type Descriptor',
          0);
  if ( !v26 ) /*0x523981*/
    return v33; /*0x523981*/
  v27 = (*(int (__thiscall **)(void *))(*(_DWORD *)v26 + 0x14))(v26); /*0x52398a*/
  if ( !v27 ) /*0x52398e*/
    return v33; /*0x5239a8*/
  BSSimpleList_PushFront(v33, v27); /*0x523997*/
  return v33; /*0x52399c*/
}
