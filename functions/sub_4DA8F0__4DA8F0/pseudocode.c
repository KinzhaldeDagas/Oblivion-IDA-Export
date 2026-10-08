int __cdecl sub_4DA8F0(int a1, NiAVObject *arg4, float a2)
{
  double v5; // st7
  int v6; // esi
  int result; // eax
  unsigned int v8; // ebx
  TESSaveLoadGame_SerializationView *v9; // ecx
  unsigned __int8 currentVersion; // al
  char *v11; // eax
  char *v12; // edx
  char v13; // cl
  unsigned __int8 v14; // al
  unsigned int v15; // edi
  int *v16; // ebp
  int v17; // esi
  unsigned __int16 SaveStateSize; // ax
  NiAVObject *v19; // edi
  double v20; // st5
  double v21; // st7
  float v22; // [esp+Ch] [ebp-140h]
  char v23; // [esp+23h] [ebp-129h]
  float v24; // [esp+24h] [ebp-128h]
  float v25; // [esp+24h] [ebp-128h]
  unsigned __int8 v26; // [esp+2Bh] [ebp-121h] BYREF
  float v27; // [esp+2Ch] [ebp-120h]
  int Dst; // [esp+30h] [ebp-11Ch] BYREF
  NiAVObject *v29; // [esp+34h] [ebp-118h]
  int v30; // [esp+38h] [ebp-114h]
  int v31; // [esp+3Ch] [ebp-110h]
  int destination; // [esp+40h] [ebp-10Ch] BYREF
  char v33[260]; // [esp+44h] [ebp-108h] BYREF

  v5 = kTerrainLODQuadRayDirectionZ; /*0x4da904*/
  v29 = arg4; /*0x4da919*/
  v6 = a1; /*0x4da91e*/
  v30 = a1; /*0x4da927*/
  if ( v5 == a2 ) /*0x4da92e*/
    a2 = source; /*0x4da936*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 2u); /*0x4da94a*/
  result = Dst; /*0x4da94f*/
  if ( (unsigned __int16)Dst > 0xFDE8u ) /*0x4da957*/
  {
    result = 0; /*0x4da959*/
    Dst = 0; /*0x4da95b*/
  }
  v8 = 0;                                       // EngineFix implementation 2026-05-11: animation-state count clamp installed after the engine's 0xFDE8 ceiling has already zeroed invalid large counts. The hook clamps only surviving counts to remaining save-record bytes / minimum entry size (4 bytes for save versions 0x15-0x16, otherwise at least one length byte), then re-emits the original setup through 0x4DA973. /*0x4da95f*/
  if ( a1 ) /*0x4da963*/
  {
    v8 = *(unsigned __int16 *)(a1 + 0x46); /*0x4da968*/
    if ( (_WORD)result ) /*0x4da96c*/
      *(_WORD *)(a1 + 8) |= 8u; /*0x4da96e*/
  }
  v23 = 0; /*0x4da976*/
  v31 = 0; /*0x4da97b*/
  if ( (_WORD)result ) /*0x4da983*/
  {
    do /*0x4daaad*/
    {
      v9 = g_TESSaveLoadGame; /*0x4da990*/
      currentVersion = g_TESSaveLoadGame->currentVersion; /*0x4da996*/
      if ( currentVersion >= 0x15u && currentVersion < 0x17u ) /*0x4da99f*/
      {
        SaveLoad_LoadData(v9, &destination, 4u); /*0x4da9a8*/
        if ( destination >= 0x2B ) /*0x4da9b4*/
        {
          _memset((int)v33, 0, sizeof(v33)); /*0x4da9e0*/
        }
        else
        {
          v11 = *(char **)(0x24 * destination + 0xB102E0); /*0x4da9b9*/
          v12 = (char *)(v33 - v11); /*0x4da9c4*/
          do /*0x4da9d0*/
          {
            v13 = *v11; /*0x4da9c6*/
            v11[(_DWORD)v12] = *v11; /*0x4da9c8*/
            ++v11; /*0x4da9cb*/
          }
          while ( v13 ); /*0x4da9d0*/
        }
        v9 = g_TESSaveLoadGame; /*0x4da9e8*/
      }
      v14 = v9->currentVersion; /*0x4da9ee*/
      if ( v14 < 0x15u || v14 >= 0x17u ) /*0x4da9f7*/
      {
        SaveLoad_LoadData(v9, &v26, 1u); /*0x4daa00*/
        _memset((int)v33, 0, sizeof(v33)); /*0x4daa11*/
        SaveLoad_LoadData(g_TESSaveLoadGame, v33, v26); /*0x4daa2a*/
      }
      if ( v6 && (v15 = 0, v8) ) /*0x4daa37*/
      {
        v16 = *(int **)(v6 + 0x40); /*0x4daa39*/
        while ( 1 ) /*0x4daa40*/
        {
          v17 = *v16; /*0x4daa40*/
          if ( *v16 ) /*0x4daa40*/
          {
            if ( !strcmp(*(const char **)(v17 + 8), v33) ) /*0x4daa54*/
              break; /*0x4daa54*/
          }
          ++v15; /*0x4daa79*/
          ++v16; /*0x4daa7c*/
          if ( v15 >= v8 ) /*0x4daa81*/
          {
            v6 = v30; /*0x4daa83*/
            goto LABEL_27; /*0x4daa83*/
          }
        }
        if ( !*(_DWORD *)(v17 + 0x44) ) /*0x4daaed*/
          NiControllerSequence_Activate((NiControllerSequence *)v17, 0, 0, 1.0, 0.0, 0, 0); /*0x4dab0b*/
        BSAnimGroupSequence_LoadState((float *)v17, a2); /*0x4dab1d*/
        v19 = v29; /*0x4dab22*/
        if ( v29 ) /*0x4dab28*/
        {
          if ( sub_4808A0((int)v29) ) /*0x4dab2f*/
          {
            v27 = *(float *)(v17 + 0x48) + a2; /*0x4dab4f*/
            v24 = a2 - v27; /*0x4dab5f*/
            if ( v24 >= 0.0 ) /*0x4dab70*/
              v20 = v24; /*0x4dab7e*/
            else
              v20 = (float)0.0; /*0x4dab78*/
            v27 = v27 / dbl_A46E48; /*0x4dab88*/
            if ( flt_A46E44 > (double)v27 ) /*0x4dab9b*/
              v27 = flt_A46E44; /*0x4dab9d*/
            v25 = v20; /*0x4daba5*/
            if ( v20 < a2 ) /*0x4dabb0*/
            {
              v21 = v25; /*0x4dabb2*/
              do /*0x4dabdf*/
              {
                v22 = v21; /*0x4dabb9*/
                sub_7073A0(v19, v22); /*0x4dabbc*/
                v25 = v25 + v27; /*0x4dabc9*/
                v21 = v25; /*0x4dabcd*/
              }
              while ( a2 > (double)v25 ); /*0x4dabdf*/
            }
          }
        }
        v6 = v30; /*0x4dabe3*/
        v23 = 1; /*0x4dabe7*/
      }
      else
      {
LABEL_27:
        SaveStateSize = BSAnimGroupSequence_GetSaveStateSize(); /*0x4daa87*/
        SaveLoad_AdvanceBufferOffset(g_TESSaveLoadGame, SaveStateSize); /*0x4daa96*/
      }
      result = ++v31; /*0x4daaa4*/
    }
    while ( v31 < (unsigned __int16)Dst ); /*0x4daaad*/
    if ( v23 ) /*0x4daaba*/
    {
      if ( v29 ) /*0x4daac2*/
        return NiAVObject_UpdateNiAVObject(v29, a2, 1); /*0x4daad1*/
    }
  }
  return result; /*0x4daadf*/
}
