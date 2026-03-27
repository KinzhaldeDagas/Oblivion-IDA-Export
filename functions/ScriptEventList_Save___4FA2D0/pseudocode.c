void __usercall ScriptEventList_Save_(void *this@<ecx>, double a2@<st0>)
{
  bool v2; // zf
  TESSaveLoad *v4; // ecx
  UInt32 v5; // eax
  TESSaveLoad *v6; // ecx
  TESSaveLoad *v7; // ecx
  TESSaveLoad *v8; // ecx
  int i; // edi
  int *v10; // edx
  _DWORD *v13; // eax
  UInt32 *v14; // edi
  UInt32 v15; // esi
  TESForm *v16; // eax
  const char *v17; // eax
  int v18; // eax
  TESSaveLoad *v19; // ecx
  _WORD *v20; // edi
  unsigned int v21; // esi
  int v22; // [esp-Ch] [ebp-3Ch]
  int v23; // [esp-8h] [ebp-38h]
  size_t v24; // [esp-4h] [ebp-34h]
  size_t v25; // [esp-4h] [ebp-34h]
  size_t v26; // [esp-4h] [ebp-34h]
  size_t v27; // [esp-4h] [ebp-34h]
  size_t v28; // [esp-4h] [ebp-34h]
  const char *v29; // [esp-4h] [ebp-34h]
  bool v30; // [esp+13h] [ebp-1Dh] BYREF
  int v31; // [esp+14h] [ebp-1Ch] BYREF
  UInt32 v32; // [esp+18h] [ebp-18h]
  UInt32 v33; // [esp+1Ch] [ebp-14h]
  unsigned int Src; // [esp+20h] [ebp-10h] BYREF
  int v35; // [esp+24h] [ebp-Ch] BYREF
  int v36; // [esp+28h] [ebp-8h] BYREF
  _WORD *v37; // [esp+2Ch] [ebp-4h]

  v2 = Global_DebugSaveBuffer == 0;
  v4 = SaveLoad_CurrentSavegame;
  v35 = 0;
  v5 = v4->unk000[5];
  v33 = 0;
  v32 = v5;
  if ( !v2 )
    v32 = v5;
  if ( sub_45A170() )
  {
    v6 = SaveLoad_CurrentSavegame;
    LODWORD(v24) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v6, &Src, v24);
    v7 = SaveLoad_CurrentSavegame;
    LODWORD(v25) = 2;
    v33 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v7, &v35, v25);
  }
  v8 = SaveLoad_CurrentSavegame;
  v31 = 0;
  LODWORD(v24) = 2;
  v37 = (_WORD *)v8->unk000[5];
  SaveLoad_SaveData((int)v8, &v31, v24);
  for ( i = *((_DWORD *)this + 3); i; i = *(_DWORD *)(i + 4) )
  {
    v10 = *(int **)i;
    if ( *(_DWORD *)i )
    {
      __asm { fldz }
      _ESI = v10 + 2;
      __asm
      {
        fcomp   qword ptr [esi]
        fnstsw  ax
      }
      if ( __SETP__(HIBYTE(_AX) & 0x44, 0) )
      {
        if ( *(_DWORD *)this )
        {
          v13 = (_DWORD *)(*(_DWORD *)this + 0x40);
          if ( *(_DWORD *)this != 0xFFFFFFC0 )
          {
            while ( *v13 )
            {
              if ( *(_DWORD *)(*v13 + 0xC) == *v10 )
              {
                v18 = *_ESI;
                LODWORD(v26) = 4;
                Src = *v10 | 0xF0000000;
                v19 = SaveLoad_CurrentSavegame;
                v36 = v18;
                SaveLoad_SaveData((int)v19, &Src, v26);
                SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v36, 4u);
                goto LABEL_14;
              }
              v13 = (_DWORD *)v13[1];
              if ( !v13 )
                break;
            }
          }
        }
        LODWORD(v26) = 4;
        SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, v10, v26);
        LODWORD(v27) = 8;
        SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, _ESI, v27);
LABEL_14:
        ++v31;
      }
    }
  }
  *v37 = v31;
  v30 = *((_DWORD *)this + 4) != 0;
  LODWORD(v26) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v30, v26);
  if ( v30 )
  {
    LODWORD(v28) = 8;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, *((void **)this + 4), v28);
  }
  if ( Global_DebugSaveBuffer )
  {
    v14 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    v15 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v14 )
    {
      v16 = TESForm_LookupByFormID(*v14);
      v17 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v16->vtbl->GetEditorName)(
                            v16,
                            *(UInt32 *)((char *)v14 + 5),
                            0x296,
                            "..\\TES Shared\\TESScript.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v15 - v32,
        *v14,
        v17,
        v22,
        v23,
        v29);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v15 - v32, 0x296, "..\\TES Shared\\TESScript.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v20 = (_WORD *)v33;
    v21 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v21 > v33 + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\TESScript.cpp",
        0x296);
    *v20 = v21 - (_WORD)v20;
  }
}
