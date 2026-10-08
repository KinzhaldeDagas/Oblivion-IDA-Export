// Verified (Oblivion): helper resolves target visual attachment nodes from target actor/player skin, perspective state, effect code, and weapon/torch context; writes two selected visual-node outputs plus geometry/perspective state. Renamed from sub_6A0D90.
float **__thiscall MagicShaderHitEffect_ResolveVisualAttachmentTargets(
        int this,
        _BYTE *a2,
        _BYTE *a3,
        float *a4,
        float **a5,
        float **a6)
{
  int v7; // eax
  bool v8; // bl
  float *PlayerNode; // edi
  PlayerCharacter *v10; // eax
  _DWORD *v11; // ebp
  PlayerCharacter *v12; // ecx
  int AnimDataByPerspective; // eax
  _DWORD *v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // esi
  int v18; // eax
  float *v19; // edi
  int v21; // ecx
  void *v22; // eax
  _BYTE *v23; // eax
  int v24; // ecx
  int *v25; // esi
  int v26; // edx
  NiNode *inventoryPC; // edi
  bool v28; // zf
  NiAVObject *(__thiscall *GetObjectByName)(NiAVObject *, const char *); // eax
  char v30; // al
  int v31; // edx
  int v32; // eax
  int v33; // eax
  bool v34; // [esp+26h] [ebp-Eh]
  char v35; // [esp+27h] [ebp-Dh]
  float v36[3]; // [esp+28h] [ebp-Ch] BYREF

  v7 = *(_DWORD *)(this + 0x2C); /*0x6a0d98*/
  v34 = v7 == 0x45574944;                       // Verified (Oblivion): effectCode_2C value 0x45574944 is DIWE, directly registered to DisintegrateWeaponEffect_Make by ActiveEffect_Register_DIWE_Factory. ResolveVisualAttachmentTargets uses that code to select the weapon-attachment path. /*0x6a0da1*/
  v8 = v7 == 0x52414944; /*0x6a0dae*/
  PlayerNode = 0; /*0x6a0db1*/
  v35 = 0; /*0x6a0dc0*/
  v10 = (PlayerCharacter *)OblivionDynamicCast( /*0x6a0dc5*/
                             *(void **)(this + 0x1C),
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
  v11 = 0; /*0x6a0dcd*/
  if ( v10 ) /*0x6a0dd1*/
  {
    v12 = reference; /*0x6a0dd3*/
    if ( v10 != reference ) /*0x6a0ddb*/
    {
      AnimDataByPerspective = ((int (__thiscall *)(PlayerCharacter *))v10->vtbl->super.super.super.GetActiveSkinInfo)(v10); /*0x6a0de7*/
LABEL_8:
      v11 = (_DWORD *)AnimDataByPerspective; /*0x6a0e0f*/
      goto LABEL_9; /*0x6a0e0f*/
    }
    if ( !v12->inventoryPC || v12->unk5E0 != this ) /*0x6a0df9*/
    {
      AnimDataByPerspective = Actor_GetSkinInfoByPerspective(v12, *(_BYTE *)(this + 0x44) == 0); /*0x6a0e0a*/
      goto LABEL_8; /*0x6a0e0a*/
    }
    v35 = 1; /*0x6a0dfb*/
  }
LABEL_9:
  if ( *(_BYTE *)(this + 0x28) || v34 )
  {
    v24 = *(_DWORD *)(this + 0x1C);             // Verified (Oblivion): if bWeaponEnchantment_28 is set, or effectCode_2C is DIWE, the resolver takes the weapon/torch scenegraph attachment path instead of the ordinary target-node path. /*0x6a0f3a*/
    if ( !v24 ) /*0x6a0f3f*/
      goto LABEL_48; /*0x6a0f3f*/
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v24 + 0x190))(v24) ) /*0x6a0f4d*/
      goto LABEL_48; /*0x6a0f4d*/
    v25 = *(int **)(*(_DWORD *)(this + 0x1C) + 0x58); /*0x6a0f5a*/
    if ( !v25 ) /*0x6a0f5f*/
      goto LABEL_48; /*0x6a0f5f*/
    if ( !(*(int (__thiscall **)(int *, int))(*v25 + 0xEC))(v25, 1) ) /*0x6a0f71*/
      goto LABEL_48; /*0x6a0f71*/
    if ( !v34 && (*(unsigned __int8 (__thiscall **)(int *))(*v25 + 0x13C))(v25) ) /*0x6a0f8c*/
      goto LABEL_48; /*0x6a0f8c*/
    v26 = *v25; /*0x6a0f9b*/
    if ( v35 )
    {
      inventoryPC = reference->inventoryPC; /*0x6a0fa5*/
      v28 = (*(unsigned __int8 (__thiscall **)(int *))(v26 + 0x138))(v25) == 0; /*0x6a0fb7*/
      GetObjectByName = inventoryPC->vtbl->super.GetObjectByName; /*0x6a0fb9*/
      PlayerNode = v28
                 ? (float *)GetObjectByName((NiAVObject *)inventoryPC, "Weapon")
                 : (float *)GetObjectByName((NiAVObject *)inventoryPC, "Torch");
    }
    else
    {
      v30 = (*(int (__thiscall **)(int *))(v26 + 0x304))(v25); /*0x6a0fde*/
      v31 = *v25; /*0x6a0fe2*/
      if ( v30 )
      {
        PlayerNode = (float *)(*(int (__thiscall **)(int *, _DWORD *))(v31 + 0x118))(v25, v11); /*0x6a0ff1*/
      }
      else
      {
        v32 = (*(int (__thiscall **)(int *, _DWORD *))(v31 + 0x124))(v25, v11); /*0x6a0ffb*/
        PlayerNode = v32 ? (float *)NiNode_GetChildAtIndex(v32, 0) : 0;
      }
    }
    v33 = (*(int (__thiscall **)(int *, int))(*v25 + 0xEC))(v25, 1); /*0x6a101c*/
    v23 = OblivionDynamicCast( /*0x6a1030*/
            *(void **)(v33 + 8),
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
            &TESObjectWEAP `RTTI Type Descriptor',
            0);
    if ( !PlayerNode ) /*0x6a103a*/
      goto LABEL_48; /*0x6a103a*/
    goto LABEL_43; /*0x6a103a*/
  }
  if ( v8 ) /*0x6a0e28*/
  {
    v14 = OblivionDynamicCast( /*0x6a0e40*/
            *(void **)(this + 0x18),
            0,
            (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
            &DisintegrateArmorEffect `RTTI Type Descriptor',
            0);
    if ( v14 ) /*0x6a0e4a*/
    {
      v15 = v14[0xE]; /*0x6a0e4c*/
      if ( v15 ) /*0x6a0e51*/
        *(_DWORD *)(this + 0x30) = *(_DWORD *)(v15 + 8);// Verified (Oblivion): when effectCode_2C is 0x52414944, the helper obtains the bound object from DisintegrateArmorEffect and stores it in +0x30. This directly supports the DisintegrateArmor enum value and TESBoundObject* member. /*0x6a0e56*/
    }
    v16 = *(_DWORD *)(this + 0x1C); /*0x6a0e59*/
    if ( v16 ) /*0x6a0e5e*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v16 + 0x190))(v16) ) /*0x6a0e6c*/
      {
        v17 = *(_DWORD *)(this + 0x30); /*0x6a0e76*/
        if ( v17 ) /*0x6a0e7b*/
        {
          if ( v11 ) /*0x6a0e83*/
          {
            v18 = sub_477E90(v11, v17); /*0x6a0e8c*/
            if ( v18 ) /*0x6a0e93*/
            {
              v19 = *(float **)(v18 + 8); /*0x6a0e99*/
              *a5 = v19; /*0x6a0ea4*/
              *a6 = v19; /*0x6a0ea6*/
              return a6; /*0x6a0eaf*/
            }
          }
        }
      }
    }
    goto LABEL_48; /*0x6a0e93*/
  }
  v21 = *(_DWORD *)(this + 0x1C); /*0x6a0eb2*/
  if ( !v21 ) /*0x6a0eb7*/
  {
LABEL_48:
    *a5 = PlayerNode; /*0x6a1098*/
    *a6 = PlayerNode; /*0x6a10a2*/
    return a6; /*0x6a109c*/
  }
  PlayerNode = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v21 + 0x154))(v21); /*0x6a0ecc*/
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 0x1C) + 0x190))(*(_DWORD *)(this + 0x1C)) ) /*0x6a0ed8*/
  {
    v22 = (void *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 0x1C) + 0x170))(*(_DWORD *)(this + 0x1C)); /*0x6a0f2a*/
    v23 = OblivionDynamicCast( /*0x6a0f2d*/
            v22,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
            &TESObjectWEAP `RTTI Type Descriptor',
            0);
LABEL_43:
    if ( v23 ) /*0x6a103e*/
    {
      if ( v23[0x90] <= 1u ) /*0x6a1048*/
      {
        *a3 = 1; /*0x6a1054*/
        if ( PlayerNode[0xB] <= 0.0 ) /*0x6a105f*/
          NiAVObject_UpdateNiAVObject((NiAVObject *)PlayerNode, 0.0, 0); /*0x6a1069*/
        sub_4121A0(PlayerNode + 8, v36, PlayerNode + 0x22); /*0x6a1081*/
        *a4 = NiPoint3_Length(v36) + PlayerNode[0xB]; /*0x6a1096*/
      }
    }
    goto LABEL_48; /*0x6a1096*/
  }
  if ( *(PlayerCharacter **)(this + 0x1C) == reference ) /*0x6a0ee3*/
    PlayerNode = (float *)PlayerCharacter_GetNodeByPerspective(reference, *(_BYTE *)(this + 0x44) == 0); /*0x6a0ef2*/
  *a2 = 1; /*0x6a0efc*/
  *a5 = PlayerNode; /*0x6a0f03*/
  *a6 = PlayerNode; /*0x6a0f05*/
  return a6; /*0x6a0ea8*/
}
