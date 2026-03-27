void __thiscall sub_696920(char *this, int a2, int a3)
{
  int v4; // eax
  int v5; // edi
  float *v6; // eax
  _DWORD *v7; // eax
  size_t v8; // [esp-14h] [ebp-24h]
  size_t v9; // [esp-Ch] [ebp-1Ch]
  size_t v10; // [esp-Ch] [ebp-1Ch]
  size_t v11; // [esp-4h] [ebp-14h] BYREF
  int v12; // [esp+4h] [ebp-Ch]
  int v13; // [esp+8h] [ebp-8h]
  int v14; // [esp+Ch] [ebp-4h] BYREF

  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 0x148))(this);
  sub_69F800(this, a2, a3);
  LODWORD(v11) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 0x80, v11);
  LODWORD(v11) = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(this + 0x5C), v11);
  v4 = FormHeapAlloc(0x24u);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 0x20) = 0;
    v5 = v4;
  }
  else
  {
    v5 = 0;
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x30u )
  {
    LODWORD(v11) = 0xC;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)v5, v11);
    LODWORD(v11) = 0x10;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (void *)(v5 + 0xC), v11);
    LODWORD(v11) = 4;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(v5 + 0x1C), v11);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x30u )
  {
    v6 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
    *(float *)v5 = *v6;
    *(float *)(v5 + 4) = v6[1];
    *(float *)(v5 + 8) = v6[2];
    *(_DWORD *)(v5 + 0xC) = dword_B27110;
    *(_DWORD *)(v5 + 0x10) = dword_B27114;
    *(_DWORD *)(v5 + 0x14) = dword_B27118;
    *(_DWORD *)(v5 + 0x18) = dword_B2711C;
  }
  LODWORD(v11) = 4;
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)&v14, v11, v12, v13, v14);
  LODWORD(v9) = 2;
  *((_DWORD *)this + 0x26) = v12;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)((char *)&v11 + 4), v9);
  if ( WORD2(v11) )
  {
    v7 = (_DWORD *)FormHeapAlloc((unsigned __int64)((unsigned int)WORD2(v11) + 1) >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (WORD2(v11) + 1));
    *(_DWORD *)(v5 + 0x20) = v7;
    *v7 = WORD2(v11);
    LODWORD(v10) = 4 * WORD2(v11);
    TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)(*(_DWORD *)(v5 + 0x20) + 4), v10, v11, SHIDWORD(v11), v12);
  }
  *((_DWORD *)this + 0x21) = v5;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x71u )
  {
    LODWORD(v8) = 4;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(this + 0xA0), v8);
  }
}
