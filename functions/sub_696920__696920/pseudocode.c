void __thiscall sub_696920(TESForm *this, int a2, int a3)
{
  int v4; // eax
  _DWORD *v5; // edi
  float *v6; // eax
  _DWORD *v7; // eax
  unsigned int v8[2]; // [esp+0h] [ebp-10h] BYREF
  unsigned int destination; // [esp+Ch] [ebp-4h] BYREF

  this->vtbl[1].DoPostFixup(this); /*0x69692f*/
  sub_69F800(this, a2, a3); /*0x69693d*/
  SaveLoad_LoadData(g_TESSaveLoadGame, (char *)this + 0x80, 4u); /*0x696951*/
  TESForm_LoadDataFromCurrentSaveGame(this, (char *)this + 0x5C, 4u); /*0x69695e*/
  v4 = FormHeapAlloc(0x24u); /*0x696965*/
  if ( v4 ) /*0x69696f*/
  {
    *(_DWORD *)(v4 + 0x20) = 0; /*0x696971*/
    v5 = (_DWORD *)v4; /*0x696978*/
  }
  else
  {
    v5 = 0; /*0x69697c*/
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x30u ) /*0x696988*/
  {
    TESForm_LoadDataFromCurrentSaveGame(this, v5, 0xCu); /*0x69698f*/
    SaveLoad_LoadData(g_TESSaveLoadGame, v5 + 3, 0x10u); /*0x6969a0*/
    TESForm_LoadDataFromCurrentSaveGame(this, v5 + 7, 4u); /*0x6969ad*/
  }
  if ( g_TESSaveLoadGame->currentVersion < 0x30u ) /*0x6969bc*/
  {
    v6 = reference->vtbl->super.super.super.GetPos(reference); /*0x6969cc*/
    *v5 = *(_DWORD *)v6; /*0x6969d0*/
    v5[1] = *((_DWORD *)v6 + 1); /*0x6969d5*/
    v5[2] = *((_DWORD *)v6 + 2); /*0x6969db*/
    v5[3] = dword_B27110; /*0x6969e4*/
    v5[4] = dword_B27114; /*0x6969ed*/
    v5[5] = dword_B27118; /*0x6969f5*/
    v5[6] = dword_B2711C; /*0x6969fe*/
  }
  TESForm_LoadFormIDFromCurrentSaveGame(this, &destination, 4u); /*0x696a0a*/
  *((_DWORD *)this + 0x26) = v8[1]; /*0x696a1c*/
  TESForm_LoadDataFromCurrentSaveGame(this, v8, 2u); /*0x696a22*/
  if ( LOWORD(v8[0]) )
  {
    v7 = (_DWORD *)FormHeapAlloc(
                     (unsigned __int64)((unsigned int)LOWORD(v8[0]) + 1) >> 0x1E != 0
                   ? 0xFFFFFFFF
                   : 4 * (LOWORD(v8[0]) + 1));
    v5[8] = v7; /*0x696a4d*/
    *v7 = LOWORD(v8[0]); /*0x696a55*/
    TESForm_LoadFormIDFromCurrentSaveGame(this, (unsigned int *)(v5[8] + 4), 4 * LOWORD(v8[0])); /*0x696a6d*/
  }
  *((_DWORD *)this + 0x21) = v5; /*0x696a72*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x71u ) /*0x696a82*/
    TESForm_LoadDataFromCurrentSaveGame(this, (char *)this + 0xA0, 4u); /*0x696a8f*/
}
