// Serializes ActorAnimData active/queued keys, action state, sequence timing blocks, movement/root state, and current/queued idle records.
void __thiscall ActorAnimData_SaveState(int this, int a2)
{
  bool v2; // zf
  TESSaveLoad *v4; // ecx
  UInt32 v5; // eax
  TESSaveLoad *v6; // ecx
  TESSaveLoad *v7; // ecx
  char v8; // bl
  _WORD *v9; // esi
  char v10; // cl
  _WORD *v11; // edi
  int v12; // edx
  TESSaveLoad *v13; // ecx
  _DWORD *v14; // edi
  _DWORD *v15; // edi
  _DWORD *v16; // ecx
  char AnimMapEntry; // al
  float **v18; // ebx
  const char *v19; // eax
  int v20; // esi
  int v21; // edi
  float **v22; // eax
  int (__thiscall *v23)(int); // edx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // esi
  int v28; // eax
  char v29; // al
  int v30; // eax
  float *v31; // esi
  TESSaveLoad *v32; // ecx
  int v33; // eax
  TESSaveLoad *v34; // ecx
  UInt32 *v35; // edi
  UInt32 v36; // esi
  TESForm *v37; // eax
  const char *v38; // eax
  _WORD *v39; // edi
  unsigned int v40; // esi
  int v41; // [esp-4h] [ebp-40h]
  int v42; // [esp+0h] [ebp-3Ch]
  int v43; // [esp+0h] [ebp-3Ch]
  int v44; // [esp+4h] [ebp-38h]
  int v45; // [esp+4h] [ebp-38h]
  int v46; // [esp+4h] [ebp-38h]
  size_t v47; // [esp+8h] [ebp-34h]
  size_t v48; // [esp+8h] [ebp-34h]
  size_t v49; // [esp+8h] [ebp-34h]
  size_t v50; // [esp+8h] [ebp-34h]
  size_t v51; // [esp+8h] [ebp-34h]
  size_t v52; // [esp+8h] [ebp-34h]
  size_t v53; // [esp+8h] [ebp-34h]
  size_t v54; // [esp+8h] [ebp-34h]
  size_t v55; // [esp+8h] [ebp-34h]
  size_t v56; // [esp+8h] [ebp-34h]
  size_t v57; // [esp+8h] [ebp-34h]
  size_t v58; // [esp+8h] [ebp-34h]
  size_t v59; // [esp+8h] [ebp-34h]
  int v60; // [esp+8h] [ebp-34h]
  float v61; // [esp+8h] [ebp-34h]
  size_t v62; // [esp+8h] [ebp-34h]
  const char *v63; // [esp+8h] [ebp-34h]
  char v64; // [esp+1Dh] [ebp-1Fh] BYREF
  char savedSequenceSelector; // [esp+1Eh] [ebp-1Eh] BYREF
  char v66; // [esp+1Fh] [ebp-1Dh] BYREF
  float **v67; // [esp+20h] [ebp-1Ch]
  int v68; // [esp+24h] [ebp-18h]
  UInt32 v69; // [esp+28h] [ebp-14h]
  int Src; // [esp+2Ch] [ebp-10h] BYREF
  UInt32 v71; // [esp+30h] [ebp-Ch]
  int v72; // [esp+34h] [ebp-8h] BYREF
  int v73; // [esp+38h] [ebp-4h] BYREF

  v2 = Global_DebugSaveBuffer == 0; /*0x473608*/
  v4 = g_TESSaveLoadGame; /*0x473611*/
  v72 = 0; /*0x473617*/
  v5 = v4->unk000[5]; /*0x47361b*/
  v71 = 0; /*0x47361f*/
  v69 = v5; /*0x473623*/
  if ( !v2 ) /*0x473627*/
    v69 = v5; /*0x473629*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x47362d*/
  {
    v6 = g_TESSaveLoadGame; /*0x473636*/
    LODWORD(v47) = 4; /*0x47363c*/
    Src = 0x4B4F4C42; /*0x473643*/
    SaveLoad_SaveData((int)v6, &Src, v47); /*0x47364b*/
    v7 = g_TESSaveLoadGame; /*0x473650*/
    LODWORD(v48) = 2; /*0x473659*/
    v71 = g_TESSaveLoadGame->unk000[5]; /*0x473660*/
    SaveLoad_SaveData((int)v7, &v72, v48); /*0x473664*/
  }
  LODWORD(v47) = 4; /*0x473669*/
  SaveLoad_SaveData((int)g_TESSaveLoadGame, (void *)(this + 0xBC), v47); /*0x473678*/
  LODWORD(v49) = 4; /*0x473683*/
  SaveLoad_SaveData((int)g_TESSaveLoadGame, (void *)(this + 0xC0), v49); /*0x47368c*/
  LODWORD(v50) = 0xC; /*0x473697*/
  SaveLoad_SaveData((int)g_TESSaveLoadGame, (void *)(this + 0xC), v50); /*0x47369d*/
  LODWORD(v51) = 4; /*0x4736a2*/
  SaveLoad_SaveData((int)g_TESSaveLoadGame, (void *)(this + 0x38), v51); /*0x4736ae*/
  LODWORD(v52) = 1; /*0x4736b9*/
  SaveLoad_SaveData((int)g_TESSaveLoadGame, (void *)(this + 0x90), v52); /*0x4736c2*/
  v8 = 0; /*0x4736c7*/
  v9 = (_WORD *)(this + 0x3C); /*0x4736c9*/
  v66 = 0; /*0x4736cc*/
  v10 = 0; /*0x4736d0*/
  v11 = (_WORD *)(this + 0x3C); /*0x4736d2*/
  v12 = 5; /*0x4736d4*/
  do /*0x4736fe*/
  {
    if ( *v11 != 0xFF && *v11 != 0xFFFF ) /*0x4736ed*/
      v8 |= 1 << v10; /*0x4736f3*/
    ++v10; /*0x4736f5*/
    ++v11; /*0x4736f8*/
    --v12; /*0x4736fb*/
  }
  while ( v12 ); /*0x4736fe*/
  LODWORD(v53) = 1; /*0x473700*/
  v13 = g_TESSaveLoadGame; /*0x473707*/
  v66 = v8; /*0x47370d*/
  SaveLoad_SaveData((int)v13, &v66, v53); /*0x473711*/
  v14 = (_DWORD *)(this + 0xA0); /*0x473716*/
  v68 = 0; /*0x47371c*/
  v67 = (float **)(this + 0xA0); /*0x473724*/
  Src = 5; /*0x473728*/
  do /*0x473844*/
  {
    if ( *v9 != 0xFF && *v9 != 0xFFFF ) /*0x473741*/
    {
      LODWORD(v54) = 2; /*0x47374d*/
      SaveLoad_SaveData((int)g_TESSaveLoadGame, v9, v54); /*0x473750*/
      LODWORD(v55) = 4; /*0x47375b*/
      v15 = v14 + 0xFFFFFFEA; /*0x47375d*/
      SaveLoad_SaveData((int)g_TESSaveLoadGame, v15, v55); /*0x473761*/
      LODWORD(v56) = 4; /*0x47376f*/
      SaveLoad_SaveData((int)g_TESSaveLoadGame, v15 + 5, v56); /*0x473775*/
      LODWORD(v57) = 2; /*0x473780*/
      SaveLoad_SaveData((int)g_TESSaveLoadGame, v9 + 0x1A, v57); /*0x473786*/
      LODWORD(v58) = 4; /*0x473791*/
      SaveLoad_SaveData((int)g_TESSaveLoadGame, v15 + 0xD, v58); /*0x473794*/
      v16 = *(_DWORD **)(this + 0x9C); /*0x4737a1*/
      v44 = (unsigned __int16)*v9; /*0x4737a7*/
      savedSequenceSelector = 0xFF; /*0x4737a8*/
      AnimMapEntry = ActorAnimData_FindAnimMapEntry(v16, v44, &v73); /*0x4737ad*/
      v18 = v67; /*0x4737b4*/
      if ( AnimMapEntry ) /*0x4737b8*/
        savedSequenceSelector = (*(int (__thiscall **)(int, float *))(*(_DWORD *)v73 + 0x14))(v73, *v67);// Save obtains the map-entry selector byte through vtable +0x14. For multiple entries this is the list index truncated to 8 bits; only indices 0..127 round-trip exactly through the signed forward selector. /*0x4737c8*/
      if ( !*v18 ) /*0x4737cc*/
      {
        v19 = (const char *)(*(int (__thiscall **)(int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)a2 + 0xD4))( /*0x4737ed*/
                              a2,
                              *(_DWORD *)(a2 + 0xC),
                              v68,
                              (unsigned __int16)*v9,
                              *v15);
        PrintError( /*0x4737f5*/
          "%s %08X has a sequence in slot %i with group %i and action %i, but the sequence is NULL.",
          v19,
          v41,
          v42,
          v45,
          v60);
        savedSequenceSelector = 0xFE;           // A NULL active sequence forces saved selector 0xFE. This is a save-stream sentinel, not a selectable multiple-entry index. /*0x4737fd*/
      }
      LODWORD(v59) = 1; /*0x473808*/
      SaveLoad_SaveData((int)g_TESSaveLoadGame, &savedSequenceSelector, v59);// Writes one selector byte. A non-NULL multiple entry at index 254 also yields 0xFE, colliding with the null marker even though the following BSAnimGroupSequence state block is still written. /*0x47380f*/
      if ( *v18 ) /*0x473814*/
        BSAnimGroupSequence_SaveState(*v18, *(float *)(this + 0x94)); /*0x473824*/
    }
    ++v68; /*0x473832*/
    v14 = v67 + 1; /*0x473836*/
    ++v9; /*0x473839*/
    v2 = Src-- == 1; /*0x47383c*/
    ++v67; /*0x473840*/
  }
  while ( !v2 ); /*0x473844*/
  v20 = a2; /*0x47384a*/
  v21 = 0; /*0x47384e*/
  if ( *(float *)&a2 != 0.0 ) /*0x473852*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 0x190))(a2) ) /*0x47385e*/
      v21 = v20; /*0x473864*/
  }
  v22 = *(float ***)(this + 0xD0); /*0x473866*/
  v61 = *(float *)(this + 0x94); /*0x473875*/
  if ( v22 ) /*0x473879*/
    AnimIdle_SaveState(v21, v22, (_DWORD *)this, v61); /*0x47387c*/
  else
    AnimIdle_SaveState(v21, *(float ***)(this + 0xCC), (_DWORD *)this, v61); /*0x473886*/
  LODWORD(v54) = 1; /*0x473894*/
  SaveLoad_SaveData((int)g_TESSaveLoadGame, (void *)(this + 0xC4), v54); /*0x47389c*/
  v23 = *(int (__thiscall **)(int))(*(_DWORD *)(v21 + 0x5C) + 0x30); /*0x4738a4*/
  v64 = 0; /*0x4738aa*/
  if ( v23(v21 + 0x5C) )
  {
    v24 = (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(_DWORD *)(this + 0x98) + 0x7C) + 0x4C))( /*0x4738ce*/
            *(_DWORD *)(*(_DWORD *)(this + 0x98) + 0x7C),
            "magicNode");
    if ( v24 )
    {
      v25 = (*(int (__thiscall **)(int))(*(_DWORD *)v24 + 8))(v24); /*0x4738df*/
      if ( v25 )
      {
        if ( *(_WORD *)(v25 + 0xB6) )
        {
          v26 = **(_DWORD **)(v25 + 0xB0); /*0x4738fd*/
          if ( v26 )
          {
            v27 = *(_DWORD *)(v26 + 0xC); /*0x473907*/
            if ( v27 )
            {
              v28 = (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 4))(v27); /*0x473919*/
              if ( v28 ) /*0x47391d*/
              {
                while ( (BSStringT *)v28 != &stru_B3CAC0 ) /*0x473925*/
                {
                  v28 = *(_DWORD *)(v28 + 4); /*0x47392b*/
                  if ( !v28 ) /*0x473930*/
                    goto LABEL_35; /*0x473930*/
                }
                v29 = 1; /*0x473a24*/
              }
              else
              {
LABEL_35:
                v29 = 0; /*0x473932*/
              }
              v30 = v29 != 0 ? v27 : 0;
              if ( v30 ) /*0x47393a*/
              {
                if ( NiTMap_GetAt((_DWORD *)(v30 + 0x58), (int)"SpecialIdle_Cast", &a2) ) /*0x473949*/
                {
                  v31 = (float *)a2; /*0x473952*/
                  if ( *(float *)&a2 != 0.0 ) /*0x473958*/
                  {
                    v32 = g_TESSaveLoadGame; /*0x47395a*/
                    v64 = 1; /*0x473960*/
                    if ( LOBYTE(v32[1].createdObjectList.next) >= 0x40u ) /*0x473968*/
                    {
                      LODWORD(v62) = 1; /*0x47396a*/
                      SaveLoad_SaveData((int)v32, &v64, v62); /*0x473971*/
                    }
                    BSAnimGroupSequence_SaveState(v31, *(float *)(this + 0x94)); /*0x473982*/
                    v33 = *(_DWORD *)(v21 + 0x60); /*0x473989*/
                    *(float *)&a2 = 0.0; /*0x47398c*/
                    if ( v33 ) /*0x473992*/
                      a2 = *(int *)(v33 + 0x10); /*0x473997*/
                    LODWORD(v62) = 4; /*0x4739a1*/
                    SaveLoad_SaveData((int)g_TESSaveLoadGame, &a2, v62); /*0x4739a8*/
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v34 = g_TESSaveLoadGame; /*0x4739ad*/
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) >= 0x40u && !v64 ) /*0x4739bd*/
  {
    LODWORD(v62) = 1; /*0x4739bf*/
    SaveLoad_SaveData((int)v34, &v64, v62); /*0x4739c6*/
    v34 = g_TESSaveLoadGame; /*0x4739cb*/
  }
  if ( Global_DebugSaveBuffer )
  {
    v35 = (UInt32 *)v34[1].unk030[1]; /*0x4739da*/
    v36 = v34->unk000[5]; /*0x4739e2*/
    if ( v35 )
    {
      v37 = TESForm_LookupByFormID(*v35); /*0x4739ea*/
      v38 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v37->vtbl->GetEditorName)( /*0x473a0a*/
                            v37,
                            *(UInt32 *)((char *)v35 + 5),
                            0x1256,
                            "..\\TES Shared\\Animation.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v36 - v69,
        *v35,
        v38,
        v43,
        v46,
        v63);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v36 - v69, 0x1256, "..\\TES Shared\\Animation.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x473a4d*/
  {
    v39 = (_WORD *)v71; /*0x473a5c*/
    v40 = g_TESSaveLoadGame->unk000[5]; /*0x473a60*/
    if ( v40 > v71 + 0xFFFF ) /*0x473a6b*/
      PrintError( /*0x473a7c*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\Animation.cpp",
        0x1256);
    *v39 = v40 - (_WORD)v39; /*0x473a86*/
  }
}
