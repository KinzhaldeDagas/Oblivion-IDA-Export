void __stdcall sub_525400(PlayerCharacter *a1)
{
  PlayerCharacter *v1; // ecx
  bool v2; // zf
  NiNode *PlayerNode; // eax
  NiAVObjectVtbl *vtbl; // ebx
  float v5[9]; // [esp+4h] [ebp-48h] BYREF
  float v6[9]; // [esp+28h] [ebp-24h] BYREF

  g_bUpdatePlayerModel = 1;
  ((void (__thiscall *)(LowProcess *, PlayerCharacter *))a1->super.super.super.process->Unk_C5)(
    a1->super.super.super.process,
    a1);
  v1 = TESDataHandler_g_PlayerRef;
  v2 = a1 == TESDataHandler_g_PlayerRef;
  g_bUpdatePlayerModel = 0;
  if ( v2 )
  {
    PlayerNode = PlayerCharacter_GetPlayerNode(v1, 1);
    if ( PlayerNode && PlayerNode->members.children.end )
      vtbl = PlayerNode->members.children.data->vtbl;
    else
      vtbl = 0;
    qmemcpy(v5, &stru_B26AF0[0xA].unk2C, sizeof(v5));
    if ( vtbl )
      qmemcpy(&vtbl->super.DumpAttributes, sub_4D7C50(TESDataHandler_g_PlayerRef, v6, v5, 0), 0x24u);
  }
}
