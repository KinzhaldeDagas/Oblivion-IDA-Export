void *__thiscall sub_651B90(void *this, float a2)
{
  __m128 *v2; // esi
  void *result; // eax
  volatile LONG *v4; // edi
  float v5; // edi
  int v6; // eax
  TESSaveLoad *v7; // ecx
  TESSaveLoad *v8; // ecx
  char *v9; // ecx
  __m128 *v10; // eax
  size_t v11; // [esp-4h] [ebp-2Ch]
  size_t v12; // [esp-4h] [ebp-2Ch]
  size_t v13; // [esp-4h] [ebp-2Ch]
  size_t v14; // [esp-4h] [ebp-2Ch]
  size_t v15; // [esp-4h] [ebp-2Ch]
  size_t v16; // [esp-4h] [ebp-2Ch]
  size_t v17; // [esp-4h] [ebp-2Ch]
  size_t v18; // [esp-4h] [ebp-2Ch]
  size_t v19; // [esp-4h] [ebp-2Ch]
  size_t v20; // [esp-4h] [ebp-2Ch]
  size_t v21; // [esp-4h] [ebp-2Ch]
  volatile LONG *v22; // [esp+8h] [ebp-20h] BYREF
  int Src; // [esp+Ch] [ebp-1Ch] BYREF
  float v24[3]; // [esp+10h] [ebp-18h] BYREF
  float v25[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v2 = *(__m128 **)(*(int (__thiscall **)(void *, volatile LONG **))(*(_DWORD *)this + 0x18C))(this, &v22);
  result = (void *)v22;
  if ( v22 )
  {
    v4 = v22;
    result = (void *)InterlockedDecrement(v22 + 1);
    if ( !result )
      result = (void *)(**(int (__thiscall ***)(volatile LONG *, int))v4)(v4, 1);
  }
  if ( v2 )
  {
    v5 = a2;
    result = (void *)(*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(a2) + 0x198))(LODWORD(a2), 0);
    if ( !(_BYTE)result )
    {
      v6 = sub_88D370((__m128 *)v2[0x1E].m128_i32);
      LODWORD(v11) = 4;
      v7 = SaveLoad_CurrentSavegame;
      Src = v6;
      SaveLoad_SaveData((int)v7, &Src, v11);
      LODWORD(v12) = 4;
      SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v2[0x2A], v12);
      LODWORD(v13) = 4;
      v8 = SaveLoad_CurrentSavegame;
      a2 = v2[0x1F].m128_f32[1];
      SaveLoad_SaveData((int)v8, &a2, v13);
      if ( (LOWORD(a2) & 0x800) != 0 )
      {
        sub_5E1500(v2, v24);
        LODWORD(v14) = 0xC;
        SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, v24, v14);
      }
      LODWORD(v14) = 0x10;
      SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v2[0x2E], v14);
      LODWORD(v15) = 0x10;
      SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v2[0x2F], v15);
      v9 = (char *)v2->m128_i32[2];
      if ( v9 )
      {
        v10 = (__m128 *)sub_8AC0A0(v9);
        sub_43F3E0(v25, v10);
      }
      LODWORD(v16) = 0xC;
      SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, v25, v16);
      LODWORD(v17) = 4;
      if ( (*(unsigned __int8 (__thiscall **)(float))(*(_DWORD *)LODWORD(v5) + 0x190))(COERCE_FLOAT(LODWORD(v5))) )
      {
        SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v2[0x31].m128_u32[3], v17);
        LODWORD(v18) = 4;
        SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v2[0x32], v18);
      }
      else
      {
        SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v2[0x32].m128_u16[4], v17);
      }
      LODWORD(v19) = 4;
      result = SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v2[0x32].m128_i16[2], v19);
      if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x77u )
      {
        LODWORD(v20) = 4;
        SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v2[0x32].m128_u32[3], v20);
        LODWORD(v21) = 4;
        return SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v2[0x33], v21);
      }
    }
  }
  return result;
}
