// Verified: BSTempEffectParticle save-load restoration path. Reads base temp-effect state, path, transform, position, scale and optional controller data; reloads and clones the NIF, attaches it under the cell node, initializes properties/controllers, and returns failure when base/model/controller restoration fails.
bool __thiscall BSTempEffectParticle_LoadGame(BSTempEffectParticle *self)
{
  UInt32 *currentlyLoadingFormHeader; // esi
  TESForm *v3; // eax
  const char *v4; // eax
  TESSaveLoadGame_SerializationView *v5; // ecx
  NiObject *ModelData; // eax
  NiAVObject **p_particleNode; // ebp
  Ni2DBuffer *v8; // eax
  int v9; // edx
  const char *v10; // edx
  float *v11; // eax
  float v12; // ecx
  signed int v13; // eax
  int v14; // eax
  double v15; // st7
  NiAVObject *v16; // ecx
  NiObject *v17; // eax
  TESSaveLoadGame_SerializationView *v18; // ecx
  UInt32 *v19; // edi
  unsigned __int8 *v20; // esi
  TESForm *v21; // eax
  unsigned __int8 *v22; // ebx
  unsigned __int8 *v23; // ecx
  const char *v24; // eax
  const char *v25; // eax
  unsigned __int8 *v26; // edi
  int v28; // [esp+Ch] [ebp-178h]
  int v29; // [esp+Ch] [ebp-178h]
  int v30; // [esp+Ch] [ebp-178h]
  int v31; // [esp+10h] [ebp-174h]
  int v32; // [esp+10h] [ebp-174h]
  int v33; // [esp+10h] [ebp-174h]
  bool Game; // [esp+22h] [ebp-162h]
  unsigned __int8 v35; // [esp+23h] [ebp-161h] BYREF
  float v36; // [esp+24h] [ebp-160h] BYREF
  int destination; // [esp+28h] [ebp-15Ch] BYREF
  float a2; // [esp+2Ch] [ebp-158h]
  unsigned __int8 *bufferCursor; // [esp+30h] [ebp-154h]
  int Dst; // [esp+34h] [ebp-150h] BYREF
  float v41; // [esp+38h] [ebp-14Ch] BYREF
  float v42[3]; // [esp+3Ch] [ebp-148h] BYREF
  NiTransform v43; // [esp+48h] [ebp-13Ch] BYREF
  char v44[260]; // [esp+7Ch] [ebp-108h] BYREF

  destination = 0; /*0x571011*/
  bufferCursor = 0; /*0x571015*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 4u); /*0x571033*/
    if ( Dst != 0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x571047*/
      if ( currentlyLoadingFormHeader )
      {
        v3 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x571054*/
        v4 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v3->vtbl->GetEditorName)( /*0x57106f*/
                             v3,
                             *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                             *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp",
          0x134,
          *currentlyLoadingFormHeader,
          v4,
          v28,
          v31);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp",
          0x134,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    v5 = g_TESSaveLoadGame; /*0x5710aa*/
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x5710ba*/
    SaveLoad_LoadData(v5, &destination, 2u); /*0x5710be*/
  }
  Game = BSTempEffect_LoadGame(&self->base); /*0x5710d1*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &v35, 1u); /*0x5710dc*/
  _memset((int)v44, 0, sizeof(v44)); /*0x5710ec*/
  SaveLoad_LoadData(g_TESSaveLoadGame, v44, v35); /*0x571105*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &v43, 0x10u); /*0x571117*/
  sub_47C600(&v43, (NiTransform *)&v43.rot.data[1][1]); /*0x571125*/
  SaveLoad_LoadData(g_TESSaveLoadGame, v42, 0xCu); /*0x571137*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &v41, 4u); /*0x571149*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &v36, 2u); /*0x57115b*/
  if ( !Game ) /*0x571165*/
    goto LABEL_16; /*0x571165*/
  ModelData = (NiObject *)ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], v44, 0, 0, 1); /*0x57117a*/
  if ( !ModelData /*0x571199*/
    || (p_particleNode = &self->particleNode,
        v8 = (Ni2DBuffer *)NiObject_CloneWithPointerMap(ModelData),
        NiSmartPointer_Set__((Ni2DBuffer **)&self->particleNode, v8),
        !self->particleNode) )
  {
LABEL_15:
    Game = 0; /*0x57129f*/
LABEL_16:
    if ( LOWORD(v36) ) /*0x5712ac*/
      SaveLoad_AdvanceBufferOffset(g_TESSaveLoadGame, LOWORD(v36)); /*0x5712b8*/
    goto LABEL_18; /*0x5712b8*/
  }
  v10 = *(const char **)ModelLoader_IsModelLoaded__(MEMORY[0xB33A1C], v9, (int)v44); /*0x5711b2*/
  v11 = (float *)*p_particleNode; /*0x5711b4*/
  v12 = v42[0]; /*0x5711b7*/
  self->modelPath = v10; /*0x5711bb*/
  v11[0x15] = v12; /*0x5711be*/
  v11 += 0x15; /*0x5711c5*/
  v11[1] = v42[1]; /*0x5711c8*/
  v11[2] = v42[2]; /*0x5711cf*/
  qmemcpy(&(*p_particleNode)->members.m_localTransform, &v43.rot.data[1][1], 0x24u); /*0x5711e1*/
  a2 = fabs(v41); /*0x5711e9*/
  (*p_particleNode)->members.m_localTransform.scale = a2; /*0x5711f9*/
  v13 = sub_4C9C80(self->base.parentCell, v42); /*0x5711ff*/
  v14 = sub_441800(self->base.parentCell, v13, 3u); /*0x57120a*/
  (*(void (__thiscall **)(int, NiAVObject *, int))(*(_DWORD *)v14 + 0x84))(v14, *p_particleNode, 1); /*0x57121f*/
  NiAVObject_InitializePropertyState(*p_particleNode); /*0x571224*/
  v15 = (double)*(int *)&MEMORY[0xB33E90][0x10]; /*0x571229*/
  if ( *(int *)&MEMORY[0xB33E90][0x10] < 0 ) /*0x571238*/
    v15 = v15 + flt_A2FC78; /*0x57123a*/
  v16 = *p_particleNode; /*0x571247*/
  a2 = v15 / dbl_A2FC70; /*0x57124a*/
  NiAVObject_UpdateNiAVObject(v16, a2, 1); /*0x571255*/
  NiObjectNET_StartControllersRecursive((int)*p_particleNode); /*0x57125e*/
  if ( LOWORD(v36) ) /*0x57126c*/
  {
    v17 = NiRTTI_Cast((BSStringT *)&stru_B3CAC0, (NiObject *)(*p_particleNode)->members.super.m_controller); /*0x57127a*/
    if ( v17 ) /*0x571284*/
    {
      sub_4DA8F0((int)v17, *p_particleNode, kTerrainLODQuadRayDirectionZ); /*0x571295*/
      goto LABEL_18; /*0x57129d*/
    }
    goto LABEL_15; /*0x571284*/
  }
LABEL_18:
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x5712c3*/
  {
    v18 = g_TESSaveLoadGame; /*0x5712d1*/
    v19 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x5712d7*/
    v20 = g_TESSaveLoadGame->bufferCursor; /*0x5712df*/
    if ( v19 ) /*0x5712e2*/
    {
      v21 = TESForm_LookupByFormID(*v19); /*0x5712eb*/
      v22 = bufferCursor; /*0x5712f5*/
      v23 = &bufferCursor[(unsigned __int16)destination]; /*0x5712f9*/
      if ( v20 <= v23 ) /*0x571300*/
      {
        if ( v20 < v23 ) /*0x571341*/
        {
          v25 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v21->vtbl->GetEditorName)( /*0x57135a*/
                                v21,
                                *((unsigned __int8 *)v19 + 9),
                                *(UInt32 *)((char *)v19 + 5));
          PrintError( /*0x571379*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            &v22[(unsigned __int16)destination - (_DWORD)v20],
            "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp",
            0x17A,
            *v19,
            v25,
            v30,
            v33);
        }
      }
      else
      {
        v24 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v21->vtbl->GetEditorName)( /*0x571315*/
                              v21,
                              *((unsigned __int8 *)v19 + 9),
                              *(UInt32 *)((char *)v19 + 5));
        PrintError( /*0x571334*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &v20[-(unsigned __int16)destination] - v22,
          "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp",
          0x17A,
          *v19,
          v24,
          v29,
          v32);
      }
    }
    else
    {
      v26 = &bufferCursor[(unsigned __int16)destination]; /*0x57138c*/
      if ( v20 <= v26 ) /*0x571391*/
      {
        if ( v20 < v26 ) /*0x5713ae*/
          PrintError( /*0x5713c9*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            &bufferCursor[(unsigned __int16)destination - (_DWORD)v20],
            "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp",
            0x17A,
            v18->currentVersion);
      }
      else
      {
        PrintError( /*0x5713ac*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &v20[-(unsigned __int16)destination] - bufferCursor,
          "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp",
          0x17A,
          v18->currentVersion);
      }
    }
  }
  return Game; /*0x5713d1*/
}
