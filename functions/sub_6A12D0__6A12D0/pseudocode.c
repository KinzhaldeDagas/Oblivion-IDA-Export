void __thiscall sub_6A12D0(int this)
{
  PlayerCharacter *v5; // ecx
  bool v6; // bl
  NiNode *PlayerNode; // ebx
  int v8; // eax
  UInt32 *p_m_worldTransform; // esi
  NiNode *v10; // esi
  InterfaceManager *Singleton; // eax
  _DWORD *v12; // esi
  NiTransform *v13; // eax
  int v14; // edi
  float *v15; // esi
  NiNode *v16; // eax
  NiObject *v17; // eax
  int v18; // ecx
  int v19; // edi
  float *v20; // eax
  _DWORD *v21; // esi
  int v22; // edi
  NiTransform *v23; // eax
  NiTransform *v24; // eax
  _DWORD *v25; // eax
  NiPoint3 *v26; // [esp+Ch] [ebp-CCh]
  char v27; // [esp+21h] [ebp-B7h]
  char v28; // [esp+22h] [ebp-B6h]
  char v29; // [esp+23h] [ebp-B5h] BYREF
  NiNode *v30; // [esp+24h] [ebp-B4h] BYREF
  float v31; // [esp+28h] [ebp-B0h] BYREF
  float *v32; // [esp+2Ch] [ebp-ACh] BYREF
  NiTransform a2; // [esp+30h] [ebp-A8h] BYREF
  float v34[9]; // [esp+6Ch] [ebp-6Ch] BYREF
  float v35[9]; // [esp+90h] [ebp-48h] BYREF
  float v36[9]; // [esp+B4h] [ebp-24h] BYREF

  v5 = TESDataHandler_g_PlayerRef;
  v6 = *(_DWORD *)(this + 0x1C) == (_DWORD)TESDataHandler_g_PlayerRef;
  if ( *(PlayerCharacter **)(this + 0x1C) != TESDataHandler_g_PlayerRef || !v5 || (v27 = 1, v5->unk5E0 != this) )
    v27 = 0;
  if ( *(PlayerCharacter **)(this + 0x1C) == TESDataHandler_g_PlayerRef && v5 )
  {
    if ( PlayerCharacter_GetPlayerNode(v5, 0)
      && (PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0)->members.super.m_flags & 1) != 0 )
    {
      v5 = TESDataHandler_g_PlayerRef;
      v28 = 1;
      goto LABEL_12;
    }
    v5 = TESDataHandler_g_PlayerRef;
  }
  v28 = 0;
LABEL_12:
  if ( *(_BYTE *)(this + 0x28) )
  {
    sub_6A0D90(this, &v29, &v29, &v31, &v32, (float **)&v30);
    PlayerNode = v30;
  }
  else if ( v6 )
  {
    PlayerNode = PlayerCharacter_GetPlayerNode(v5, 0);
  }
  else
  {
    PlayerNode = (NiNode *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 0x1C) + 0x154))(*(_DWORD *)(this + 0x1C));
  }
  v8 = *(_DWORD *)(this + 0x40);
  if ( v8 && PlayerNode )
  {
    p_m_worldTransform = (UInt32 *)&PlayerNode->members.super.m_worldTransform;
    if ( !*(_BYTE *)(this + 0x28) )
      p_m_worldTransform = &stru_B26AF0[0xA].unk2C;
    qmemcpy(a2.rot.data[1], p_m_worldTransform, 0x24u);
    if ( v27 )
    {
      v10 = *(NiNode **)(v8 + 0x1C);
      if ( v10 != InterfaceManager_GetSingleton(0, 1)->unk054[3] )
      {
        Singleton = InterfaceManager_GetSingleton(0, 1);
        ((void (__thiscall *)(NiNode *, _DWORD, int))Singleton->unk054[3]->members.super.m_parent->vtbl->AddObject)(
          Singleton->unk054[3]->members.super.m_parent,
          *(_DWORD *)(this + 0x40),
          1);
      }
      v12 = *(_DWORD **)(this + 0x40);
      v13 = sub_7101F0((NiTransform *)(v12[7] + 0x64), &a2, &PlayerNode->members.super.m_worldTransform.pos);
      v12[0x15] = LODWORD(v13->rot.data[0][0]);
      v12[0x16] = LODWORD(v13->rot.data[0][1]);
      v12[0x17] = LODWORD(v13->rot.data[0][2]);
      v14 = *(_DWORD *)(this + 0x40);
      v15 = NiMAtrix33_Multiply((float *)(*(_DWORD *)(v14 + 0x1C) + 0x64), v34, a2.rot.data[1]);
      goto LABEL_32;
    }
    if ( !v28 || !PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1) )
    {
      v25 = (_DWORD *)(*(_DWORD *)(this + 0x40) + 0x54);
      *v25 = LODWORD(PlayerNode->members.super.m_worldTransform.pos.x);
      v25[1] = LODWORD(PlayerNode->members.super.m_worldTransform.pos.y);
      v25[2] = LODWORD(PlayerNode->members.super.m_worldTransform.pos.z);
      v14 = *(_DWORD *)(this + 0x40);
      v15 = a2.rot.data[1];
LABEL_32:
      qmemcpy((void *)(v14 + 0x30), v15, 0x24u);
      goto LABEL_33;
    }
    v16 = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1);
    v17 = NiRTTI_Cast((BSStringT *)dword_B3FAB0, (NiObject *)v16);
    if ( v17 )
    {
      v18 = *(_DWORD *)(this + 0x40);
      if ( v17 != *(NiObject **)(v18 + 0x1C) )
        ((void (__thiscall *)(NiObject *, int, int))v17->__vftable[1].Unk_0E)(v17, v18, 1);
    }
    v19 = *(_DWORD *)(this + 0x40);
    v20 = sub_7103C0((float *)(*(_DWORD *)(v19 + 0x1C) + 0x64), v35);
    qmemcpy((void *)(v19 + 0x30), NiMAtrix33_Multiply(v20, v34, a2.rot.data[1]), 0x24u);
    v21 = *(_DWORD **)(this + 0x40);
    v22 = v21[7];
    v26 = (NiPoint3 *)sub_4121A0(&PlayerNode->members.super.m_worldTransform.pos.x, (float *)&a2, (float *)(v22 + 0x88));
    v23 = (NiTransform *)sub_7103C0((float *)(v22 + 0x64), v36);
    v24 = sub_7101F0(v23, (NiTransform *)&a2.scale, v26);
    v21[0x15] = LODWORD(v24->rot.data[0][0]);
    v21[0x16] = LODWORD(v24->rot.data[0][1]);
    v21[0x17] = LODWORD(v24->rot.data[0][2]);
    NiAVObject_UpdateNiAVObject(*(NiAVObject **)(this + 0x40), 0.0, 0);
  }
LABEL_33:
  if ( v28 || v27 )
    sub_69DC90((TESObjectREFR **)this, 0);
  else
    sub_69DC90((TESObjectREFR **)this, *(_DWORD *)(this + 0x40));
}
