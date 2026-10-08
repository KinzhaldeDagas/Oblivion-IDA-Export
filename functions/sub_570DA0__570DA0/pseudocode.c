// Verified: saves base temp-effect state and particle model path/transform/position/scale; includes optional controller-state chunk.
void __thiscall BSTempEffectParticle_SaveGame(BSTempEffectParticle *self)
{
  TESSaveLoadGame_SerializationView *v2; // ecx
  unsigned __int8 *bufferCursor; // ebp
  TESSaveLoadGame_SerializationView *v4; // ecx
  TESSaveLoadGame_SerializationView *v5; // ecx
  const char *modelPath; // eax
  char v7; // dl
  unsigned int v8; // eax
  TESSaveLoadGame_SerializationView *v9; // ecx
  NiAVObject *particleNode; // eax
  TESSaveLoadGame_SerializationView *v11; // ecx
  TESSaveLoadGame_SerializationView *v12; // ecx
  NiAVObject *v13; // ecx
  int m_controller; // esi
  NiRTTI *v15; // eax
  char v16; // al
  int v17; // eax
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v19; // esi
  TESForm *v20; // eax
  const char *v21; // eax
  unsigned __int8 *v22; // edi
  unsigned __int8 *v23; // esi
  int v24; // [esp-8h] [ebp-4Ch]
  int v25; // [esp-4h] [ebp-48h]
  const char *v26; // [esp+0h] [ebp-44h]
  unsigned __int8 v27; // [esp+13h] [ebp-31h] BYREF
  int v28; // [esp+14h] [ebp-30h] BYREF
  unsigned __int8 *v29; // [esp+18h] [ebp-2Ch]
  int Src; // [esp+1Ch] [ebp-28h] BYREF
  int source; // [esp+20h] [ebp-24h] BYREF
  float scale; // [esp+24h] [ebp-20h] BYREF
  _DWORD v33[3]; // [esp+28h] [ebp-1Ch] BYREF
  float v34[4]; // [esp+34h] [ebp-10h] BYREF

  v2 = g_TESSaveLoadGame; /*0x570da7*/
  source = 0; /*0x570dad*/
  bufferCursor = v2->bufferCursor; /*0x570db5*/
  v29 = 0; /*0x570db9*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x570dc1*/
  {
    v4 = g_TESSaveLoadGame; /*0x570dca*/
    Src = 0x4B4F4C42; /*0x570dd7*/
    SaveLoad_SaveData(v4, &Src, 4u); /*0x570ddf*/
    v5 = g_TESSaveLoadGame; /*0x570de4*/
    v29 = g_TESSaveLoadGame->bufferCursor; /*0x570df4*/
    SaveLoad_SaveData(v5, &source, 2u); /*0x570df8*/
  }
  BSTempEffect_SaveGame(&self->base); /*0x570dff*/
  modelPath = self->modelPath; /*0x570e04*/
  v7 = (_BYTE)modelPath + 1; /*0x570e07*/
  v8 = (unsigned int)&modelPath[strlen(modelPath) + 1]; /*0x570e17*/
  v9 = g_TESSaveLoadGame; /*0x570e22*/
  v27 = v8 - v7; /*0x570e28*/
  SaveLoad_SaveData(v9, &v27, 1u); /*0x570e2c*/
  SaveLoad_SaveData(g_TESSaveLoadGame, self->modelPath, v27); /*0x570e41*/
  sub_7150F0(v34, (float *)&self->particleNode->members.m_localTransform); /*0x570e51*/
  SaveLoad_SaveData(g_TESSaveLoadGame, v34, 0x10u); /*0x570e63*/
  particleNode = self->particleNode; /*0x570e68*/
  v33[0] = LODWORD(particleNode->members.m_localTransform.pos.x); /*0x570e6e*/
  v33[1] = LODWORD(particleNode->members.m_localTransform.pos.y); /*0x570e7b*/
  v11 = g_TESSaveLoadGame; /*0x570e83*/
  v33[2] = LODWORD(particleNode->members.m_localTransform.pos.z); /*0x570e89*/
  SaveLoad_SaveData(v11, v33, 0xCu); /*0x570e8d*/
  v12 = g_TESSaveLoadGame; /*0x570e98*/
  scale = self->particleNode->members.m_localTransform.scale; /*0x570ea0*/
  SaveLoad_SaveData(v12, &scale, 4u); /*0x570ea9*/
  v13 = self->particleNode; /*0x570eae*/
  v28 = 0; /*0x570eb1*/
  m_controller = (int)v13->members.super.m_controller; /*0x570eb9*/
  if ( m_controller )
  {
    v15 = (NiRTTI *)(*(int (__thiscall **)(NiInterpController *))(*(_DWORD *)m_controller + 4))(v13->members.super.m_controller); /*0x570ec7*/
    if ( v15 ) /*0x570ecb*/
    {
      while ( v15 != &stru_B3CAC0 ) /*0x570ed5*/
      {
        v15 = v15->parent; /*0x570edb*/
        if ( !v15 ) /*0x570ee0*/
          goto LABEL_7; /*0x570ee0*/
      }
      v16 = 1; /*0x570f81*/
    }
    else
    {
LABEL_7:
      v16 = 0; /*0x570ee2*/
    }
    v17 = v16 != 0 ? m_controller : 0;
    m_controller = v17; /*0x570eea*/
    if ( v17 ) /*0x570eec*/
      v28 = (unsigned __int16)sub_4DA760(v17); /*0x570efa*/
  }
  SaveLoad_SaveData(g_TESSaveLoadGame, &v28, 2u); /*0x570f0b*/
  if ( (_WORD)v28 ) /*0x570f16*/
    sub_4DA7F0(m_controller, kTerrainLODQuadRayDirectionZ); /*0x570f23*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x570f39*/
    v19 = g_TESSaveLoadGame->bufferCursor; /*0x570f41*/
    if ( currentlySavingFormHeader )
    {
      v20 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x570f49*/
      v21 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v20->vtbl->GetEditorName)( /*0x570f69*/
                            v20,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x12B,
                            "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v19 - bufferCursor,
        *currentlySavingFormHeader,
        v21,
        v24,
        v25,
        v26);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v19 - bufferCursor,
        0x12B,
        "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x570fa8*/
  {
    v22 = v29; /*0x570fb7*/
    v23 = g_TESSaveLoadGame->bufferCursor; /*0x570fbb*/
    if ( v23 > v29 + 0xFFFF ) /*0x570fc6*/
      PrintError( /*0x570fd7*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp",
        0x12B);
    *(_WORD *)v22 = (_WORD)v23 - (_WORD)v22; /*0x570fe1*/
  }
}
