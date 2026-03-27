void __usercall sub_570DA0(_DWORD *this@<ecx>, int a2@<edi>)
{
  TESSaveLoad *v4; // ecx
  UInt32 v5; // ebp
  TESSaveLoad *v6; // ecx
  TESSaveLoad *v7; // ecx
  const char *v8; // eax
  char v9; // dl
  unsigned int v10; // eax
  TESSaveLoad *v11; // ecx
  _DWORD *v12; // eax
  TESSaveLoad *v13; // ecx
  TESSaveLoad *v14; // ecx
  int v15; // ecx
  int v16; // esi
  int v17; // eax
  char v18; // al
  int v19; // eax
  int v20; // ecx
  UInt32 *v21; // edi
  UInt32 v22; // esi
  TESForm *v23; // eax
  const char *v24; // eax
  _WORD *v25; // edi
  unsigned int v26; // esi
  int v27; // [esp-8h] [ebp-4Ch]
  int v28; // [esp-4h] [ebp-48h]
  size_t v29; // [esp+0h] [ebp-44h]
  size_t v30; // [esp+0h] [ebp-44h]
  size_t v31; // [esp+0h] [ebp-44h]
  size_t v32; // [esp+0h] [ebp-44h]
  size_t v33; // [esp+0h] [ebp-44h]
  size_t v34; // [esp+0h] [ebp-44h]
  size_t v35; // [esp+0h] [ebp-44h]
  const char *v36; // [esp+0h] [ebp-44h]
  unsigned __int8 v37; // [esp+13h] [ebp-31h] BYREF
  int v38; // [esp+14h] [ebp-30h] BYREF
  UInt32 v39; // [esp+18h] [ebp-2Ch]
  int Src; // [esp+1Ch] [ebp-28h] BYREF
  int v41; // [esp+20h] [ebp-24h] BYREF
  float v42; // [esp+24h] [ebp-20h] BYREF
  _DWORD v43[3]; // [esp+28h] [ebp-1Ch] BYREF
  float v44[4]; // [esp+34h] [ebp-10h] BYREF

  v4 = SaveLoad_CurrentSavegame;
  v41 = 0;
  v5 = v4->unk000[5];
  v39 = 0;
  if ( sub_45A170() )
  {
    v6 = SaveLoad_CurrentSavegame;
    LODWORD(v29) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v6, &Src, v29);
    v7 = SaveLoad_CurrentSavegame;
    LODWORD(v30) = 2;
    v39 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v7, &v41, v30);
  }
  sub_56BD80(this);
  v8 = (const char *)*(this + 7);
  v9 = (_BYTE)v8 + 1;
  v10 = (unsigned int)&v8[strlen(v8) + 1];
  LODWORD(v29) = 1;
  v11 = SaveLoad_CurrentSavegame;
  v37 = v10 - v9;
  SaveLoad_SaveData((int)v11, &v37, v29);
  LODWORD(v31) = v37;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)*(this + 7), v31);
  sub_7150F0(v44, (float *)(*(this + 6) + 0x30));
  LODWORD(v32) = 0x10;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, v44, v32);
  v12 = (_DWORD *)*(this + 6);
  v43[0] = v12[0x15];
  LODWORD(v33) = 0xC;
  v43[1] = v12[0x16];
  v13 = SaveLoad_CurrentSavegame;
  v43[2] = v12[0x17];
  SaveLoad_SaveData((int)v13, v43, v33);
  v14 = SaveLoad_CurrentSavegame;
  LODWORD(v34) = 4;
  v42 = *(float *)(*(this + 6) + 0x60);
  SaveLoad_SaveData((int)v14, &v42, v34);
  v15 = *(this + 6);
  v38 = 0;
  v16 = *(_DWORD *)(v15 + 0xC);
  if ( v16 )
  {
    v17 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v16 + 4))(*(_DWORD *)(v15 + 0xC));
    if ( v17 )
    {
      while ( (BSStringT *)v17 != &stru_B3CAC0 )
      {
        v17 = *(_DWORD *)(v17 + 4);
        if ( !v17 )
          goto LABEL_7;
      }
      v18 = 1;
    }
    else
    {
LABEL_7:
      v18 = 0;
    }
    v19 = v18 != 0 ? v16 : 0;
    v16 = v19;
    if ( v19 )
      v38 = (unsigned __int16)sub_4DA760(v19);
  }
  LODWORD(v35) = 2;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v38, v35);
  if ( (_WORD)v38 )
    sub_4DA7F0(v20, a2, v16, v16, flt_A30634);
  if ( Global_DebugSaveBuffer )
  {
    v21 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    v22 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v21 )
    {
      v23 = TESForm_LookupByFormID(*v21);
      v24 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v23->vtbl->GetEditorName)(
                            v23,
                            *(UInt32 *)((char *)v21 + 5),
                            0x12B,
                            "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v22 - v5,
        *v21,
        v24,
        v27,
        v28,
        v36);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v22 - v5,
        0x12B,
        "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v25 = (_WORD *)v39;
    v26 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v26 > v39 + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp",
        0x12B);
    *v25 = v26 - (_WORD)v25;
  }
}
