NiRTTI *__cdecl sub_4DB080(_DWORD *a1, _DWORD *a2)
{
  float *v4; // eax
  NiRTTI *result; // eax
  float *v7; // edi
  NiAVObject *PointerAtOffset08; // eax
  float *v9; // esi
  bool v10; // al
  float *v11; // eax
  NiMatrix33 *v12; // eax
  int v13; // edi
  float Dst[3]; // [esp+Ch] [ebp-68h] BYREF
  float v15[3]; // [esp+18h] [ebp-5Ch] BYREF
  float v16[3]; // [esp+24h] [ebp-50h] BYREF
  float destination[4]; // [esp+30h] [ebp-44h] BYREF
  float v18[4]; // [esp+40h] [ebp-34h] BYREF
  NiMatrix33 v19; // [esp+50h] [ebp-24h] BYREF
  float *v20; // [esp+78h] [ebp+4h]

  v4 = (float *)a1[4]; /*0x4db088*/
  *((_WORD *)a1 + 6) &= ~0x40u; /*0x4db08b*/
  v20 = v4; /*0x4db095*/
  if ( Shared_GetPointerAtOffset08((Atmosphere *)a1) ) /*0x4db099*/
  {
    if ( Shared_GetPointerAtOffset08((Atmosphere *)a1)->members.super.m_pcName ) /*0x4db0a9*/
    {
      result = (NiRTTI *)Shared_GetPointerAtOffset08((Atmosphere *)a1); /*0x4db0b1*/
      if ( !strcmp(result[1].name, "Arrow") ) /*0x4db0c7*/
        return result; /*0x4db0c7*/
    }
  }
  v7 = (float *)a2[4]; /*0x4db0d5*/
  if ( !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v7 + 0x190))(v7) ) /*0x4db0e6*/
  {
LABEL_10:
    result = (NiRTTI *)v20; /*0x4db11f*/
    if ( v20 ) /*0x4db125*/
    {
      result = (NiRTTI *)NiRTTI_Cast((BSStringT *)&stru_BA7D84, (NiObject *)v20); /*0x4db131*/
      v9 = (float *)result; /*0x4db136*/
      if ( result ) /*0x4db13d*/
      {
        v10 = (a2[5] & 2) == 0; /*0x4db152*/
        if ( g_TESSaveLoadGame->currentVersion < 0x2Bu ) /*0x4db158*/
          v10 = a1 != (_DWORD *)a2[3]; /*0x4db15d*/
        if ( v10 ) /*0x4db162*/
        {
          SaveLoad_LoadData(g_TESSaveLoadGame, Dst, 0xCu); /*0x4db16b*/
          SaveLoad_LoadData(g_TESSaveLoadGame, destination, 0x10u); /*0x4db17d*/
          sub_4D69A0(v9, Dst); /*0x4db189*/
          sub_4D6A00(v9, destination); /*0x4db193*/
        }
        else
        {
          a2[5] &= ~2u; /*0x4db198*/
          v11 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)v7 + 0x174))(v7); /*0x4db1a5*/
          sub_4D69A0(v9, v11); /*0x4db1aa*/
          v12 = sub_4D7AF0(v7, &v19); /*0x4db1b6*/
          sub_7150F0(v18, (float *)v12); /*0x4db1c0*/
          sub_4D6A00(v9, v18); /*0x4db1cc*/
        }
        if ( (a2[5] & 1) != 0 ) /*0x4db1d5*/
        {
          SaveLoad_LoadData(g_TESSaveLoadGame, v15, 0xCu); /*0x4db1e4*/
          SaveLoad_LoadData(g_TESSaveLoadGame, v16, 0xCu); /*0x4db1f6*/
          sub_4D9960((int *)v9, v15); /*0x4db202*/
          result = (NiRTTI *)sub_4D99E0((int *)v9, v16); /*0x4db20e*/
          v13 = *((_DWORD *)v9 + 2); /*0x4db213*/
          if ( v13 ) /*0x4db218*/
          {
            bhkRefObject_UpdateHavokObject(v9); /*0x4db21c*/
            sub_8A6410(v13); /*0x4db223*/
            return (NiRTTI *)bhkRefObject_UpdateHavokObject(v9); /*0x4db22a*/
          }
        }
        else
        {
          sub_4D9960((int *)v9, &g_zeroNiPoint3.x); /*0x4db23e*/
          return (NiRTTI *)sub_4D99E0((int *)v9, &g_zeroNiPoint3.x); /*0x4db24a*/
        }
      }
    }
    return result; /*0x4db236*/
  }
  PointerAtOffset08 = Shared_GetPointerAtOffset08((Atmosphere *)a1); /*0x4db0ea*/
  if ( !PointerAtOffset08 || (result = PointerAtOffset08->vtbl->super.GetType((NiObject *)PointerAtOffset08)) == 0 ) /*0x4db0fe*/
  {
LABEL_9:
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*a1 + 0x70))(a1, 1, 0); /*0x4db112*/
    goto LABEL_10; /*0x4db11d*/
  }
  while ( result != (NiRTTI *)&MEMORY[0xB33E90][0x13F8] ) /*0x4db105*/
  {
    result = result->parent; /*0x4db10b*/
    if ( !result ) /*0x4db110*/
      goto LABEL_9; /*0x4db110*/
  }
  return result; /*0x4db230*/
}
