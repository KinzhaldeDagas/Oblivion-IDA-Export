// [Verified] ActorProcessManager_LoadTempEffects reads a UInt16 count and one-byte type tags. Type 0 constructs BSTempEffectDecal; type 1 constructs BSTempEffectGeometryDecal; type 2 constructs BSTempEffectParticle; types 5/6 construct MagicModelHitEffect/MagicShaderHitEffect. Successful virtual LoadGame results are re-registered by GetTypeID. The base BSTempEffect type returns 3 but is not saveable; type 4 has no handler in this switch and its producer/restore role remains Unknown.
void __thiscall ActorProcessManager_LoadTempEffects(ActorProcessManager *self)
{
  TESSaveLoadGame_SerializationView *v1; // ecx
  void (__stdcall *v2)(volatile LONG *); // ebp
  NiObject *v3; // eax
  void *v4; // eax
  int v5; // esi
  char v6; // al
  int v7; // edx
  int v8; // eax
  NiObject *v9; // eax
  BSTempEffectParticle *v10; // eax
  NiObject *v11; // eax
  NiObject *v12; // eax
  int v13; // [esp-4h] [ebp-34h] BYREF
  unsigned __int8 destination; // [esp+13h] [ebp-1Dh] BYREF
  unsigned __int16 Dst; // [esp+14h] [ebp-1Ch] BYREF
  ActorProcessManager *v16; // [esp+18h] [ebp-18h]
  unsigned int v17; // [esp+1Ch] [ebp-14h]
  int *v18; // [esp+20h] [ebp-10h]
  int v19; // [esp+2Ch] [ebp-4h]

  v16 = self; /*0x679876*/
  v1 = g_TESSaveLoadGame; /*0x67987a*/
  if ( g_TESSaveLoadGame->currentVersion < 0x26u ) /*0x679885*/
  {
    SaveLoad_AdvanceBufferOffset(v1, 6); /*0x679889*/
    v1 = g_TESSaveLoadGame; /*0x67988e*/
  }
  SaveLoad_LoadData(v1, &Dst, 2u); /*0x67989b*/
  v17 = 0; /*0x6798a6*/
  if ( Dst )
  {
    v2 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement; /*0x6798b4*/
    do
    {
      SaveLoad_LoadData(g_TESSaveLoadGame, &destination, 1u); /*0x6798ca*/
      switch ( destination )
      {
        case 0u:
          v3 = (NiObject *)FormHeapAlloc(0x1Cu); /*0x6798e6*/
          v18 = (int *)v3; /*0x6798ee*/
          v19 = 0; /*0x6798f4*/
          if ( !v3 ) /*0x6798fc*/
            goto LABEL_8; /*0x6798fc*/
          v4 = BSTempEffectDecal_DefaultInit(v3);// [Verified] Serialized type 0 allocates 0x1C bytes and calls BSTempEffectDecal_DefaultInit. Type 2 is a separate switch case at 0x679982 and calls BSTempEffectParticle_DefaultInit at 0x6799A0 after allocating 0x20 bytes. /*0x679900*/
          goto LABEL_9; /*0x679905*/
        case 1u:
          v9 = (NiObject *)FormHeapAlloc(0x54u); /*0x67995f*/
          v18 = (int *)v9; /*0x679967*/
          v19 = 1; /*0x67996d*/
          if ( !v9 ) /*0x679975*/
            goto LABEL_8; /*0x679975*/
          v4 = BSTempEffectGeometryDecal_DefaultInit(v9);// Verified type-1 restore initializer installs default geometry-decal state with base.initializeCallbackDone=false, then virtual LoadGame reconstructs the generated mesh through saved data instead of invoking Initialize. /*0x679979*/
          goto LABEL_9; /*0x67997e*/
        case 2u:
          v10 = (BSTempEffectParticle *)FormHeapAlloc(0x20u); /*0x679982*/
          v18 = (int *)v10; /*0x67998a*/
          v19 = 2; /*0x679990*/
          if ( !v10 ) /*0x679998*/
            goto LABEL_8; /*0x679998*/
          v4 = BSTempEffectParticle_DefaultInit(v10);// Verified BSTempEffectParticle default initialization is selected only for serialized type ID 2; allocation size matches the 0x20-byte Oblivion particle structure. /*0x6799a0*/
          goto LABEL_9; /*0x6799a5*/
        case 5u:
          v11 = (NiObject *)FormHeapAlloc(0x38u); /*0x6799ac*/
          v18 = (int *)v11; /*0x6799b4*/
          v19 = 3; /*0x6799ba*/
          if ( !v11 ) /*0x6799c2*/
            goto LABEL_8; /*0x6799c2*/
          v4 = MagicModelHitEffect_constr(v11); /*0x6799ca*/
          goto LABEL_9; /*0x6799cf*/
        case 6u:
          v12 = (NiObject *)FormHeapAlloc(0x4Cu); /*0x6799d6*/
          v18 = (int *)v12; /*0x6799de*/
          v19 = 4; /*0x6799e4*/
          if ( v12 ) /*0x6799ec*/
            v4 = MagicShaderHitEffect_constr(v12); /*0x6799f4*/
          else
LABEL_8:
            v4 = 0; /*0x679907*/
LABEL_9:
          v5 = (int)v4; /*0x679909*/
          v19 = 0xFFFFFFFF; /*0x67990d*/
          if ( v4 ) /*0x679911*/
          {
            v6 = (*(int (__thiscall **)(void *))(*(_DWORD *)v4 + 0x64))(v4);// Verified load dispatcher calls the newly created effect's virtual LoadGame (+0x64), then reads GetTypeID (+0x54) and routes IDs 4..6 to manager +0x48, other supported types including particle 2 to +0x40. Effects returning false are destroyed instead of registered. /*0x67991e*/
            v7 = *(_DWORD *)v5; /*0x679922*/
            if ( v6 ) /*0x679926*/
            {
              v8 = (*(int (__thiscall **)(int))(v7 + 0x54))(v5); /*0x67992f*/
              v18 = &v13; /*0x67993a*/
              v13 = v5; /*0x67993e*/
              if ( (unsigned int)(v8 - 4) > 2 ) /*0x679940*/
              {
                v2((volatile LONG *)(v5 + 4)); /*0x679a12*/
                sub_677CF0((int *)&v16->activeTempEffects, v13); /*0x679a1b*/
              }
              else
              {
                v2((volatile LONG *)(v5 + 4)); /*0x67994a*/
                sub_677CF0((int *)&v16->extendedTempEffects, v13); /*0x679953*/
              }
            }
            else
            {
              (*(void (__thiscall **)(int, int))v7)(v5, 1); /*0x679a26*/
            }
          }
          break; /*0x679958*/
        default:
          PrintError("Unknown temp effect type: %i", destination);
          break; /*0x679a0c*/
      }
      ++v17; /*0x679a36*/
    }
    while ( v17 < Dst );
  }
}
