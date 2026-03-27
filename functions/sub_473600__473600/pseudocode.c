void __thiscall sub_473600(int this, int a2)
{
  bool v3; // zf
  TESSaveLoad *v5; // ecx
  UInt32 v6; // eax
  TESSaveLoad *v7; // ecx
  TESSaveLoad *v8; // ecx
  char v9; // bl
  _WORD *v10; // esi
  char v11; // cl
  _WORD *v12; // edi
  int v13; // edx
  TESSaveLoad *v14; // ecx
  _DWORD *v15; // edi
  _DWORD *v16; // edi
  _DWORD *v17; // ecx
  char v18; // al
  float **v19; // ebx
  const char *v20; // eax
  int v21; // esi
  int v22; // edi
  float **v23; // eax
  int (__thiscall *v24)(int); // edx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // esi
  int v29; // eax
  char v30; // al
  int v31; // eax
  float *v32; // esi
  TESSaveLoad *v33; // ecx
  int v34; // eax
  TESSaveLoad *v35; // ecx
  UInt32 *v36; // edi
  UInt32 v37; // esi
  TESForm *v38; // eax
  const char *v39; // eax
  _WORD *v40; // edi
  unsigned int v41; // esi
  int v42; // [esp-4h] [ebp-40h]
  int v43; // [esp+0h] [ebp-3Ch]
  int v44; // [esp+0h] [ebp-3Ch]
  int v45; // [esp+4h] [ebp-38h]
  int v46; // [esp+4h] [ebp-38h]
  int v47; // [esp+4h] [ebp-38h]
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
  size_t v60; // [esp+8h] [ebp-34h]
  int v61; // [esp+8h] [ebp-34h]
  float v62; // [esp+8h] [ebp-34h]
  size_t v63; // [esp+8h] [ebp-34h]
  const char *v64; // [esp+8h] [ebp-34h]
  char v65; // [esp+1Dh] [ebp-1Fh] BYREF
  char v66; // [esp+1Eh] [ebp-1Eh] BYREF
  char v67; // [esp+1Fh] [ebp-1Dh] BYREF
  float **v68; // [esp+20h] [ebp-1Ch]
  int v69; // [esp+24h] [ebp-18h]
  UInt32 v70; // [esp+28h] [ebp-14h]
  int Src; // [esp+2Ch] [ebp-10h] BYREF
  UInt32 v72; // [esp+30h] [ebp-Ch]
  int v73; // [esp+34h] [ebp-8h] BYREF
  int v74; // [esp+38h] [ebp-4h] BYREF

  v3 = Global_DebugSaveBuffer == 0;
  v5 = SaveLoad_CurrentSavegame;
  v73 = 0;
  v6 = v5->unk000[5];
  v72 = 0;
  v70 = v6;
  if ( !v3 )
    v70 = v6;
  if ( sub_45A170() )
  {
    v7 = SaveLoad_CurrentSavegame;
    LODWORD(v48) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v7, &Src, v48);
    v8 = SaveLoad_CurrentSavegame;
    LODWORD(v49) = 2;
    v72 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v8, &v73, v49);
  }
  LODWORD(v48) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(this + 0xBC), v48);
  LODWORD(v50) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(this + 0xC0), v50);
  LODWORD(v51) = 0xC;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(this + 0xC), v51);
  LODWORD(v52) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(this + 0x38), v52);
  LODWORD(v53) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(this + 0x90), v53);
  v9 = 0;
  v10 = (_WORD *)(this + 0x3C);
  v67 = 0;
  v11 = 0;
  v12 = (_WORD *)(this + 0x3C);
  v13 = 5;
  do
  {
    if ( *v12 != 0xFF && *v12 != 0xFFFF )
      v9 |= 1 << v11;
    ++v11;
    ++v12;
    --v13;
  }
  while ( v13 );
  LODWORD(v54) = 1;
  v14 = SaveLoad_CurrentSavegame;
  v67 = v9;
  SaveLoad_SaveData((int)v14, &v67, v54);
  v15 = (_DWORD *)(this + 0xA0);
  v69 = 0;
  v68 = (float **)(this + 0xA0);
  Src = 5;
  do
  {
    if ( *v10 != 0xFF && *v10 != 0xFFFF )
    {
      LODWORD(v55) = 2;
      SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, v10, v55);
      LODWORD(v56) = 4;
      v16 = v15 + 0xFFFFFFEA;
      SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, v16, v56);
      LODWORD(v57) = 4;
      SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, v16 + 5, v57);
      LODWORD(v58) = 2;
      SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, v10 + 0x1A, v58);
      LODWORD(v59) = 4;
      SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, v16 + 0xD, v59);
      v17 = *(_DWORD **)(this + 0x9C);
      v45 = (unsigned __int16)*v10;
      v66 = 0xFF;
      v18 = sub_470960(v17, v45, &v74);
      v19 = v68;
      if ( v18 )
        v66 = (*(int (__thiscall **)(int, float *))(*(_DWORD *)v74 + 0x14))(v74, *v68);
      if ( !*v19 )
      {
        v20 = (const char *)(*(int (__thiscall **)(int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)a2 + 0xD4))(
                              a2,
                              *(_DWORD *)(a2 + 0xC),
                              v69,
                              (unsigned __int16)*v10,
                              *v16);
        PrintError(
          "%s %08X has a sequence in slot %i with group %i and action %i, but the sequence is NULL.",
          v20,
          v42,
          v43,
          v46,
          v61);
        v66 = 0xFE;
      }
      LODWORD(v60) = 1;
      SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v66, v60);
      if ( *v19 )
        sub_49F570(*v19, *(float *)(this + 0x94));
    }
    ++v69;
    v15 = v68 + 1;
    ++v10;
    v3 = Src-- == 1;
    ++v68;
  }
  while ( !v3 );
  v21 = a2;
  v22 = 0;
  if ( *(float *)&a2 != 0.0 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 0x190))(a2) )
      v22 = v21;
  }
  v23 = *(float ***)(this + 0xD0);
  v62 = *(float *)(this + 0x94);
  if ( v23 )
    sub_472D10(v22, v23, (_DWORD *)this, v62);
  else
    sub_472D10(v22, *(float ***)(this + 0xCC), (_DWORD *)this, v62);
  LODWORD(v55) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(this + 0xC4), v55);
  v24 = *(int (__thiscall **)(int))(*(_DWORD *)(v22 + 0x5C) + 0x30);
  v65 = 0;
  if ( v24(v22 + 0x5C) )
  {
    v25 = (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(_DWORD *)(this + 0x98) + 0x7C) + 0x4C))(
            *(_DWORD *)(*(_DWORD *)(this + 0x98) + 0x7C),
            "magicNode");
    if ( v25 )
    {
      v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 8))(v25);
      if ( v26 )
      {
        if ( *(_WORD *)(v26 + 0xB6) )
        {
          v27 = **(_DWORD **)(v26 + 0xB0);
          if ( v27 )
          {
            v28 = *(_DWORD *)(v27 + 0xC);
            if ( v28 )
            {
              v29 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 4))(v28);
              if ( v29 )
              {
                while ( (BSStringT *)v29 != &stru_B3CAC0 )
                {
                  v29 = *(_DWORD *)(v29 + 4);
                  if ( !v29 )
                    goto LABEL_35;
                }
                v30 = 1;
              }
              else
              {
LABEL_35:
                v30 = 0;
              }
              v31 = v30 != 0 ? v28 : 0;
              if ( v31 )
              {
                if ( NiTMap_GetAt((_DWORD *)(v31 + 0x58), (int)"SpecialIdle_Cast", &a2) )
                {
                  v32 = (float *)a2;
                  if ( *(float *)&a2 != 0.0 )
                  {
                    v33 = SaveLoad_CurrentSavegame;
                    v65 = 1;
                    if ( LOBYTE(v33[1].createdObjectList.next) >= 0x40u )
                    {
                      LODWORD(v63) = 1;
                      SaveLoad_SaveData((int)v33, &v65, v63);
                    }
                    sub_49F570(v32, *(float *)(this + 0x94));
                    v34 = *(_DWORD *)(v22 + 0x60);
                    *(float *)&a2 = 0.0;
                    if ( v34 )
                      a2 = *(int *)(v34 + 0x10);
                    LODWORD(v63) = 4;
                    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &a2, v63);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v35 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x40u && !v65 )
  {
    LODWORD(v63) = 1;
    SaveLoad_SaveData((int)v35, &v65, v63);
    v35 = SaveLoad_CurrentSavegame;
  }
  if ( Global_DebugSaveBuffer )
  {
    v36 = (UInt32 *)v35[1].unk030[1];
    v37 = v35->unk000[5];
    if ( v36 )
    {
      v38 = TESForm_LookupByFormID(*v36);
      v39 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v38->vtbl->GetEditorName)(
                            v38,
                            *(UInt32 *)((char *)v36 + 5),
                            0x1256,
                            "..\\TES Shared\\Animation.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v37 - v70,
        *v36,
        v39,
        v44,
        v47,
        v64);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v37 - v70, 0x1256, "..\\TES Shared\\Animation.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v40 = (_WORD *)v72;
    v41 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v41 > v72 + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\Animation.cpp",
        0x1256);
    *v40 = v41 - (_WORD)v40;
  }
}
