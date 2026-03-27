void __userpurge sub_6324F0(int *this@<ecx>, double st7_0@<st0>, int a3@<ebx>, int a4, float a5)
{
  TESSaveLoad *v6; // ecx
  bool v7; // zf
  UInt32 v8; // eax
  TESSaveLoad *v9; // ecx
  TESSaveLoad *v10; // ecx
  TESSaveLoad *v11; // ecx
  TESSaveLoad *v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  TESSaveLoad *v16; // ecx
  _WORD *v17; // ebx
  int *i; // edi
  int v19; // ebp
  unsigned int j; // ebx
  float v21; // edi
  unsigned __int16 v22; // ax
  TESSaveLoad *v23; // ecx
  TESSaveLoad *v24; // ecx
  unsigned int v25; // edi
  int *v26; // ebp
  int v27; // eax
  int v28; // eax
  int v29; // eax
  UInt32 *v30; // edi
  UInt32 v31; // esi
  TESForm *v32; // eax
  const char *v33; // eax
  _WORD *v34; // edi
  unsigned int v35; // esi
  int v36; // [esp-Ch] [ebp-3Ch]
  size_t v37; // [esp-8h] [ebp-38h]
  size_t v38; // [esp-8h] [ebp-38h]
  size_t v39; // [esp-8h] [ebp-38h]
  size_t v40; // [esp-8h] [ebp-38h]
  int v41; // [esp-8h] [ebp-38h]
  size_t v42; // [esp-4h] [ebp-34h]
  size_t v43; // [esp-4h] [ebp-34h]
  size_t v44; // [esp-4h] [ebp-34h]
  size_t v45; // [esp-4h] [ebp-34h]
  size_t v46; // [esp-4h] [ebp-34h]
  size_t v47; // [esp-4h] [ebp-34h]
  size_t v48; // [esp-4h] [ebp-34h]
  size_t v49; // [esp-4h] [ebp-34h]
  size_t v50; // [esp-4h] [ebp-34h]
  size_t v51; // [esp-4h] [ebp-34h]
  size_t v52; // [esp-4h] [ebp-34h]
  size_t v53; // [esp-4h] [ebp-34h]
  size_t v54; // [esp-4h] [ebp-34h]
  size_t v55; // [esp-4h] [ebp-34h]
  size_t v56; // [esp-4h] [ebp-34h]
  size_t v57; // [esp-4h] [ebp-34h]
  size_t v58; // [esp-4h] [ebp-34h]
  size_t v59; // [esp-4h] [ebp-34h]
  size_t v60; // [esp-4h] [ebp-34h]
  size_t v61; // [esp-4h] [ebp-34h]
  size_t v62; // [esp-4h] [ebp-34h]
  size_t v63; // [esp-4h] [ebp-34h]
  size_t v64; // [esp-4h] [ebp-34h]
  size_t v65; // [esp-4h] [ebp-34h]
  size_t v66; // [esp-4h] [ebp-34h]
  size_t v67; // [esp-4h] [ebp-34h]
  size_t v68; // [esp-4h] [ebp-34h]
  size_t v69; // [esp-4h] [ebp-34h]
  size_t v70; // [esp-4h] [ebp-34h]
  size_t v71; // [esp-4h] [ebp-34h]
  size_t v72; // [esp-4h] [ebp-34h]
  size_t v73; // [esp-4h] [ebp-34h]
  size_t v74; // [esp-4h] [ebp-34h]
  size_t v75; // [esp-4h] [ebp-34h]
  size_t v76; // [esp-4h] [ebp-34h]
  size_t v77; // [esp-4h] [ebp-34h]
  size_t v78; // [esp-4h] [ebp-34h]
  size_t v79; // [esp-4h] [ebp-34h]
  size_t v80; // [esp-4h] [ebp-34h]
  size_t v81; // [esp-4h] [ebp-34h]
  size_t v82; // [esp-4h] [ebp-34h]
  const char *v83; // [esp-4h] [ebp-34h]
  int v84; // [esp+Ch] [ebp-24h] BYREF
  UInt32 v85; // [esp+10h] [ebp-20h]
  int v86; // [esp+14h] [ebp-1Ch] BYREF
  int v87; // [esp+18h] [ebp-18h] BYREF
  int v88; // [esp+1Ch] [ebp-14h] BYREF
  int Src; // [esp+20h] [ebp-10h] BYREF
  int v90; // [esp+24h] [ebp-Ch] BYREF
  UInt32 v91; // [esp+28h] [ebp-8h]
  int v92; // [esp+2Ch] [ebp-4h] BYREF

  MiddleHighProc_Save__(this, st7_0, a4, SLODWORD(a5));
  v6 = SaveLoad_CurrentSavegame;
  v7 = Global_DebugSaveBuffer == 0;
  v92 = 0;
  v8 = v6->unk000[5];
  v91 = 0;
  v85 = v8;
  if ( !v7 )
    v85 = v8;
  if ( sub_45A170() )
  {
    v9 = SaveLoad_CurrentSavegame;
    LODWORD(v42) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v9, &Src, v42);
    v10 = SaveLoad_CurrentSavegame;
    LODWORD(v43) = 2;
    v91 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v10, &v92, v43);
  }
  LODWORD(v42) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x8A, v42);
  LODWORD(v44) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x8F, v44);
  LODWORD(v45) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x97, v45);
  LODWORD(v46) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (char *)this + 0x25D, v46);
  LODWORD(v47) = 2;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x7F, v47);
  LODWORD(v48) = 2;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x7D, v48);
  LODWORD(v49) = 2;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x82, v49);
  LODWORD(v50) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x7C, v50);
  LODWORD(v51) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x6B, v51);
  LODWORD(v52) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x81, v52);
  LODWORD(v53) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x87, v53);
  LODWORD(v54) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x8B, v54);
  LODWORD(v55) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x8C, v55);
  LODWORD(v56) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x8D, v56);
  LODWORD(v57) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x92, v57);
  LODWORD(v58) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x66, v58);
  LODWORD(v59) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x6C, v59);
  LODWORD(v60) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x6D, v60);
  v11 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x32u )
  {
    LODWORD(v61) = 4;
    SaveLoad_SaveData((int)v11, this + 0x67, v61);
    v11 = SaveLoad_CurrentSavegame;
  }
  LODWORD(v61) = 4;
  SaveLoad_SaveData((int)v11, this + 0x73, v61);
  LODWORD(v62) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x91, v62);
  LODWORD(v63) = 0xC;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x83, v63);
  LODWORD(v64) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x95, v64);
  LODWORD(v65) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0xAF, v65);
  LODWORD(v66) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0xB0, v66);
  LODWORD(v67) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x8E, v67);
  LODWORD(v68) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x6A, v68);
  LODWORD(v69) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x6E, v69);
  LODWORD(v70) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x98, v70);
  v12 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x3Fu )
  {
    LODWORD(v71) = 1;
    SaveLoad_SaveData((int)v12, this + 0x9E, v71);
    LODWORD(v72) = 4;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x9D, v72);
    v12 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v12[1].createdObjectList.next) >= 0x42u )
  {
    LODWORD(v71) = 1;
    SaveLoad_SaveData((int)v12, this + 0xA4, v71);
    LODWORD(v73) = 4;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0xA3, v73);
    v12 = SaveLoad_CurrentSavegame;
  }
  v13 = *(this + 0x86);
  v86 = 0;
  if ( v13 )
    v86 = *(_DWORD *)(v13 + 0xC);
  SaveLoad_SaveFormID(v12, (int)&v86, 4u);
  v14 = *(this + 0x69);
  v87 = 0;
  if ( v14 )
    v87 = *(_DWORD *)(v14 + 0xC);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v87, 4u);
  v15 = *(this + 0xB1);
  v88 = 0;
  if ( v15 )
    v88 = *(_DWORD *)(v15 + 0xC);
  HIDWORD(v37) = a3;
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v88, 4u);
  v16 = SaveLoad_CurrentSavegame;
  LODWORD(v37) = 2;
  v84 = 0;
  v17 = (_WORD *)v16->unk000[5];
  SaveLoad_SaveData((int)v16, &v84, v37);
  for ( i = (int *)*(this + 0x63); i; i = (int *)i[1] )
  {
    if ( !i[1] && !*i )
      break;
    v19 = *i;
    Src = 0;
    if ( *(_DWORD *)v19 )
      Src = *(_DWORD *)(*(_DWORD *)v19 + 0xC);
    SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&Src, 4u);
    LODWORD(v38) = 4;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(v19 + 4), v38);
    LODWORD(v39) = 1;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(v19 + 8), v39);
    LODWORD(v40) = 4;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(v19 + 0xC), v40);
    ++v84;
  }
  v7 = (a4 & 0x2000000) == 0;
  *v17 = v84;
  if ( !v7 )
  {
    v7 = *(this + 0x5F) == 0;
    LOBYTE(a4) = 0xFF;
    if ( !v7 )
    {
      if ( *(this + 0x7E) )
      {
        for ( j = 0; j < 5; ++j )
        {
          if ( sub_4706E0((ActorAnimData *)*(this + 0x5F), j) == (PowerListEntry *)*(this + 0x7E) )
            LOBYTE(a4) = j;
        }
      }
    }
    LODWORD(v38) = 1;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &a4, v38);
  }
  v21 = a5;
  v22 = sub_651AD0(this, SLODWORD(a5));
  LODWORD(v38) = 2;
  v23 = SaveLoad_CurrentSavegame;
  v90 = v22;
  SaveLoad_SaveData((int)v23, &v90, v38);
  if ( (_WORD)v90 )
    sub_651B90(this, v21);
  v24 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x5Au )
  {
    v25 = 0;
    v26 = this + 0xB2;
    while ( 1 )
    {
      v27 = *v26;
      v7 = *v26 == 0;
      a4 = 0;
      if ( !v7 )
        a4 = *(_DWORD *)(v27 + 0xC);
      SaveLoad_SaveFormID(v24, (int)&a4, 4u);
      LODWORD(v71) = 1;
      SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (char *)this + v25++ + 0x2DC, v71);
      ++v26;
      if ( v25 >= 5 )
        break;
      v24 = SaveLoad_CurrentSavegame;
    }
    v28 = *(this + 0xB9);
    a5 = 0.0;
    if ( v28 )
      a5 = *(float *)(v28 + 0xC);
    SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&a5, 4u);
    LODWORD(v71) = 1;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0xBA, v71);
    v24 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v24[1].createdObjectList.next) >= 0x5Du )
  {
    LODWORD(v71) = 4;
    SaveLoad_SaveData((int)v24, this + 0xAB, v71);
    LODWORD(v74) = 4;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0xAC, v74);
    v24 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v24[1].createdObjectList.next) >= 0x6Au )
  {
    v29 = *(this + 0x96);
    a4 = 0;
    if ( v29 )
      a4 = *(_DWORD *)(v29 + 0xC);
    SaveLoad_SaveFormID(v24, (int)&a4, 4u);
    v24 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v24[1].createdObjectList.next) >= 0x71u )
  {
    LODWORD(v71) = 1;
    SaveLoad_SaveData((int)v24, this + 0x74, v71);
    LODWORD(v75) = 4;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x76, v75);
    LODWORD(v76) = 4;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x77, v76);
    LODWORD(v77) = 4;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x78, v77);
    LODWORD(v78) = 1;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0xAA, v78);
    LODWORD(v79) = 1;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x79, v79);
    LODWORD(v80) = 4;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x7A, v80);
    LODWORD(v81) = 4;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x90, v81);
    LODWORD(v82) = 1;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0xAA, v82);
    v24 = SaveLoad_CurrentSavegame;
  }
  if ( Global_DebugSaveBuffer )
  {
    v30 = (UInt32 *)v24[1].unk030[1];
    v31 = v24->unk000[5];
    if ( v30 )
    {
      v32 = TESForm_LookupByFormID(*v30);
      v33 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v32->vtbl->GetEditorName)(
                            v32,
                            *(UInt32 *)((char *)v30 + 5),
                            0x2B9B,
                            ".\\AI\\HighProcess.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v31 - v85,
        *v30,
        v33,
        v36,
        v41,
        v83);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v31 - v85, 0x2B9B, ".\\AI\\HighProcess.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v34 = (_WORD *)v91;
    v35 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v35 > v91 + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\HighProcess.cpp",
        0x2B9B);
    *v34 = v35 - (_WORD)v34;
  }
}
