AnimSequenceSingle *__thiscall sub_476080(AnimSequenceSingle *this, AnimSequenceSingle *a2, const char *a3)
{
  AnimSequenceSingle *result; // eax
  AnimSequenceSingle *v7; // esi
  const char **v8; // ebp
  int v9; // edi
  NiNode *v10; // esi
  volatile LONG *v11; // [esp+8h] [ebp-110h]
  char ArgList[260]; // [esp+10h] [ebp-108h] BYREF

  result = a2;
  v7 = this;
  if ( a2 )
  {
    v8 = (const char **)a2;
    do
    {
      _sprintf(ArgList, "%s\\%s\\%s", a3, (const char *)&dword_A3407C, *v8);
      v9 = sub_439FF0(ModelLoaderPtr, ArgList);
      LOBYTE(v11) = 1;
      if ( !TESDataHandler_g_PlayerRef
        || !PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0)
        || !dword_B06548
        || *((NiNode **)v7 + 1) == PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0)
        || (v10 = *((NiNode **)v7 + 1), v10 == PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1))
        || v10 == TESDataHandler_g_PlayerRef->inventoryPC
        || sub_45A500(SaveLoad_CurrentSavegame)
        || InterfaceManager_IsMenuMode()
        || sub_404F20(TES) )
      {
        LOBYTE(v11) = 0;
      }
      if ( v9 )
      {
        v7 = this;
        result = AnimSequenceSingle::AnimSequenceSingle(this, v9, v11);
      }
      else
      {
        result = (AnimSequenceSingle *)PrintError("Failed to load animation file '%s'.", ArgList);
        v7 = this;
      }
      v8 = (const char **)v8[1];
    }
    while ( v8 );
  }
  return result;
}
