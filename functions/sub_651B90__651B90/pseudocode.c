void *__thiscall sub_651B90(void *this, float source)
{
  __m128 *v2; // esi
  void *result; // eax
  volatile LONG *v4; // edi
  float v5; // edi
  int StateId; // eax
  TESSaveLoadGame_SerializationView *v7; // ecx
  TESSaveLoadGame_SerializationView *v8; // ecx
  char *v9; // ecx
  __m128 *LinearVelocityPtr; // eax
  volatile LONG *v11; // [esp+8h] [ebp-20h] BYREF
  int Src; // [esp+Ch] [ebp-1Ch] BYREF
  float v13[3]; // [esp+10h] [ebp-18h] BYREF
  float v14[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v2 = *(__m128 **)(*(int (__thiscall **)(void *, volatile LONG **))(*(_DWORD *)this + 0x18C))(this, &v11); /*0x651ba4*/
  result = (void *)v11; /*0x651ba6*/
  if ( v11 ) /*0x651bac*/
  {
    v4 = v11; /*0x651bae*/
    result = (void *)InterlockedDecrement(v11 + 1); /*0x651bb4*/
    if ( !result ) /*0x651bbc*/
      result = (void *)(**(int (__thiscall ***)(volatile LONG *, int))v4)(v4, 1); /*0x651bca*/
  }
  if ( v2 ) /*0x651bce*/
  {
    v5 = source; /*0x651bd4*/
    result = (void *)(*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(source) + 0x198))(LODWORD(source), 0); /*0x651be4*/
    if ( !(_BYTE)result ) /*0x651be8*/
    {
      StateId = hkCharacterContext_GetStateId((__m128 *)v2[0x1E].m128_i32); /*0x651bf4*/
      v7 = g_TESSaveLoadGame; /*0x651c00*/
      Src = StateId; /*0x651c06*/
      SaveLoad_SaveData(v7, &Src, 4u); /*0x651c0a*/
      SaveLoad_SaveData(g_TESSaveLoadGame, &v2[0x2A], 4u); /*0x651c1e*/
      v8 = g_TESSaveLoadGame; /*0x651c30*/
      source = v2[0x1F].m128_f32[1]; /*0x651c36*/
      SaveLoad_SaveData(v8, &source, 4u); /*0x651c3a*/
      if ( (LOWORD(source) & 0x800) != 0 ) /*0x651c47*/
      {
        sub_5E1500(v2, v13); /*0x651c50*/
        SaveLoad_SaveData(g_TESSaveLoadGame, v13, 0xCu); /*0x651c62*/
      }
      SaveLoad_SaveData(g_TESSaveLoadGame, &v2[0x2E], 0x10u); /*0x651c76*/
      SaveLoad_SaveData(g_TESSaveLoadGame, &v2[0x2F], 0x10u); /*0x651c8a*/
      v9 = (char *)v2->m128_i32[2]; /*0x651c8f*/
      if ( v9 ) /*0x651c94*/
      {
        LinearVelocityPtr = (__m128 *)bhkWorldObject_GetLinearVelocityPtr(v9); /*0x651c96*/
        HavokVector_ToWorldVector(v14, LinearVelocityPtr); /*0x651ca1*/
      }
      SaveLoad_SaveData(g_TESSaveLoadGame, v14, 0xCu); /*0x651cb6*/
      if ( (*(unsigned __int8 (__thiscall **)(float))(*(_DWORD *)LODWORD(v5) + 0x190))(COERCE_FLOAT(LODWORD(v5))) ) /*0x651cc5*/
      {
        SaveLoad_SaveData(g_TESSaveLoadGame, &v2[0x31].m128_u32[3], 4u); /*0x651cda*/
        SaveLoad_SaveData(g_TESSaveLoadGame, &v2[0x32], 4u); /*0x651cee*/
      }
      else
      {
        SaveLoad_SaveData(g_TESSaveLoadGame, &v2[0x32].m128_u16[4], 4u); /*0x651d0b*/
      }
      result = SaveLoad_SaveData(g_TESSaveLoadGame, &v2[0x32].m128_i16[2], 4u); /*0x651cfc*/
      if ( g_TESSaveLoadGame->currentVersion >= 0x77u ) /*0x651d2e*/
      {
        SaveLoad_SaveData(g_TESSaveLoadGame, &v2[0x32].m128_u32[3], 4u); /*0x651d39*/
        return SaveLoad_SaveData(g_TESSaveLoadGame, &v2[0x33], 4u); /*0x651d4d*/
      }
    }
  }
  return result; /*0x651d52*/
}
