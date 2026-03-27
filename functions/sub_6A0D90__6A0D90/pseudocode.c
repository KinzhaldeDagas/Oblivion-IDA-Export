float **__thiscall sub_6A0D90(int this, _BYTE *arg0, _BYTE *a3, float *a4, float **a5, float **a6)
{
  int v7; // eax
  bool v8; // bl
  float *PlayerNode; // edi
  PlayerCharacter *v10; // eax
  _DWORD *v11; // ebp
  PlayerCharacter *v12; // ecx
  int v13; // eax
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
  float a2[3]; // [esp+28h] [ebp-Ch] BYREF

  v7 = *(_DWORD *)(this + 0x2C);
  v34 = v7 == 0x45574944;
  v8 = v7 == 0x52414944;
  PlayerNode = 0;
  v35 = 0;
  v10 = (PlayerCharacter *)OblivionDynamicCast(
                             *(void **)(this + 0x1C),
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
  v11 = 0;
  if ( v10 )
  {
    v12 = TESDataHandler_g_PlayerRef;
    if ( v10 != TESDataHandler_g_PlayerRef )
    {
      v13 = ((int (__thiscall *)(PlayerCharacter *))v10->vtbl->super.super.super.Unk_5A)(v10);
LABEL_8:
      v11 = (_DWORD *)v13;
      goto LABEL_9;
    }
    if ( !v12->inventoryPC || v12->unk5E0 != this )
    {
      v13 = sub_6600D0(v12, *(_BYTE *)(this + 0x44) == 0);
      goto LABEL_8;
    }
    v35 = 1;
  }
LABEL_9:
  if ( *(_BYTE *)(this + 0x28) || v34 )
  {
    v24 = *(_DWORD *)(this + 0x1C);
    if ( !v24 )
      goto LABEL_48;
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v24 + 0x190))(v24) )
      goto LABEL_48;
    v25 = *(int **)(*(_DWORD *)(this + 0x1C) + 0x58);
    if ( !v25 )
      goto LABEL_48;
    if ( !(*(int (__thiscall **)(int *, int))(*v25 + 0xEC))(v25, 1) )
      goto LABEL_48;
    if ( !v34 && (*(unsigned __int8 (__thiscall **)(int *))(*v25 + 0x13C))(v25) )
      goto LABEL_48;
    v26 = *v25;
    if ( v35 )
    {
      inventoryPC = TESDataHandler_g_PlayerRef->inventoryPC;
      v28 = (*(unsigned __int8 (__thiscall **)(int *))(v26 + 0x138))(v25) == 0;
      GetObjectByName = inventoryPC->vtbl->super.GetObjectByName;
      PlayerNode = v28
                 ? (float *)GetObjectByName((NiAVObject *)inventoryPC, "Weapon")
                 : (float *)GetObjectByName((NiAVObject *)inventoryPC, "Torch");
    }
    else
    {
      v30 = (*(int (__thiscall **)(int *))(v26 + 0x304))(v25);
      v31 = *v25;
      if ( v30 )
      {
        PlayerNode = (float *)(*(int (__thiscall **)(int *, _DWORD *))(v31 + 0x118))(v25, v11);
      }
      else
      {
        v32 = (*(int (__thiscall **)(int *, _DWORD *))(v31 + 0x124))(v25, v11);
        PlayerNode = v32 ? (float *)sub_405790(v32, 0) : 0;
      }
    }
    v33 = (*(int (__thiscall **)(int *, int))(*v25 + 0xEC))(v25, 1);
    v23 = OblivionDynamicCast(
            *(void **)(v33 + 8),
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
            &TESObjectWEAP `RTTI Type Descriptor',
            0);
    if ( !PlayerNode )
      goto LABEL_48;
    goto LABEL_43;
  }
  if ( v8 )
  {
    v14 = OblivionDynamicCast(
            *(void **)(this + 0x18),
            0,
            (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
            &DisintegrateArmorEffect `RTTI Type Descriptor',
            0);
    if ( v14 )
    {
      v15 = v14[0xE];
      if ( v15 )
        *(_DWORD *)(this + 0x30) = *(_DWORD *)(v15 + 8);
    }
    v16 = *(_DWORD *)(this + 0x1C);
    if ( v16 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v16 + 0x190))(v16) )
      {
        v17 = *(_DWORD *)(this + 0x30);
        if ( v17 )
        {
          if ( v11 )
          {
            v18 = sub_477E90(v11, v17);
            if ( v18 )
            {
              v19 = *(float **)(v18 + 8);
              *a5 = v19;
              *a6 = v19;
              return a6;
            }
          }
        }
      }
    }
    goto LABEL_48;
  }
  v21 = *(_DWORD *)(this + 0x1C);
  if ( !v21 )
  {
LABEL_48:
    *a5 = PlayerNode;
    *a6 = PlayerNode;
    return a6;
  }
  PlayerNode = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v21 + 0x154))(v21);
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 0x1C) + 0x190))(*(_DWORD *)(this + 0x1C)) )
  {
    v22 = (void *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 0x1C) + 0x170))(*(_DWORD *)(this + 0x1C));
    v23 = OblivionDynamicCast(
            v22,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
            &TESObjectWEAP `RTTI Type Descriptor',
            0);
LABEL_43:
    if ( v23 )
    {
      if ( v23[0x90] <= 1u )
      {
        *a3 = 1;
        if ( PlayerNode[0xB] <= 0.0 )
          NiAVObject_UpdateNiAVObject((NiAVObject *)PlayerNode, 0.0, 0);
        sub_4121A0(PlayerNode + 8, a2, PlayerNode + 0x22);
        *a4 = sub_404C90(a2) + PlayerNode[0xB];
      }
    }
    goto LABEL_48;
  }
  if ( *(PlayerCharacter **)(this + 0x1C) == TESDataHandler_g_PlayerRef )
    PlayerNode = (float *)PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, *(_BYTE *)(this + 0x44) == 0);
  *arg0 = 1;
  *a5 = PlayerNode;
  *a6 = PlayerNode;
  return a6;
}
