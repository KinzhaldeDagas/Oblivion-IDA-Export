double __userpurge TESSaveLoadGame_SaveGame_@<st0>(
        NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *> *ecx0@<ecx>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double result@<st0>,
        Data *data,
        char *a11,
        int a12)
{
  char *v13; // ebx
  const char *v14; // esi
  NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *> **v15; // eax
  NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *> **v16; // eax
  bool v17; // zf
  bool v18; // al
  int v19; // ecx
  void (__cdecl *v20)(const char *, int *, int, int *, int); // ecx
  void (__cdecl *v21)(const char *, int *, int, int *, int); // edx
  int v22; // edx
  unsigned int v23; // ecx
  unsigned int v24; // eax
  _DWORD *v25; // edi
  _DWORD *v26; // edx
  NiTMap_Entry_TESCELL *v27; // eax
  NiTMap_TESCELL *v28; // ecx
  UInt32 v29; // ecx
  unsigned int *v30; // eax
  int v31; // edx
  char v32; // al
  TESSaveLoad *v33; // eax
  TESSaveLoad *v34; // eax
  void (__cdecl *v35)(const char *, unsigned int *, int, int *, int); // edx
  int v36; // eax
  void (__cdecl *v37)(const char *, Data **, int, int *, int); // eax
  __int16 v38; // dx
  void (__cdecl *v39)(const char *, int, _DWORD, int *, int); // ecx
  TESForm *v40; // eax
  PlayerCharacter *v41; // edi
  void (__cdecl *v42)(const char *, unsigned int *, int, int *, int); // edx
  __int16 v43; // ax
  int v44; // edx
  void (__cdecl *v45)(const char *, char **, int, int *, int); // edx
  FreeEntry *v46; // eax
  char *v47; // ebx
  int v48; // ecx
  TESSaveLoad *v49; // eax
  void (__cdecl *v50)(const char *, unsigned int *, int, int *, int); // ecx
  int v51; // edx
  void (__cdecl *v52)(const char *, int *, int, int *, int); // edx
  int v54; // edx
  void (__cdecl *v55)(const char *, int *, int, int *, int); // edx
  void (__cdecl *v56)(const char *, float *, int, int *, int); // eax
  void (__cdecl *v57)(const char *, int *, int, int *, int); // eax
  void (__cdecl *v58)(const char *, int *, int, int *, int); // ecx
  unsigned int **v59; // ecx
  unsigned int v60; // edi
  int *v61; // ebp
  int v62; // [esp-Ch] [ebp-78h]
  float duration; // [esp+0h] [ebp-6Ch]
  int v64; // [esp+4h] [ebp-68h]
  int v65; // [esp+18h] [ebp-54h] BYREF
  int v66; // [esp+1Ch] [ebp-50h] BYREF
  int v67; // [esp+20h] [ebp-4Ch] BYREF
  int v68; // [esp+24h] [ebp-48h] BYREF
  int a1; // [esp+28h] [ebp-44h] BYREF
  int v70; // [esp+2Ch] [ebp-40h] BYREF
  NiTMap_Entry_TESCELL *v71; // [esp+30h] [ebp-3Ch] BYREF
  int v72; // [esp+34h] [ebp-38h] BYREF
  float v73; // [esp+38h] [ebp-34h] BYREF
  unsigned int v74; // [esp+3Ch] [ebp-30h] BYREF
  TESForm::FormType type; // [esp+40h] [ebp-2Ch]
  unsigned int v76; // [esp+41h] [ebp-2Bh]
  char v77; // [esp+45h] [ebp-27h]
  unsigned int v78; // [esp+48h] [ebp-24h] BYREF
  TESForm::FormType v79; // [esp+4Ch] [ebp-20h]
  unsigned int v80; // [esp+4Dh] [ebp-1Fh]
  char v81; // [esp+51h] [ebp-1Bh]
  __int16 v82; // [esp+52h] [ebp-1Ah]
  unsigned int v83; // [esp+54h] [ebp-18h] BYREF
  TESForm::FormType v84; // [esp+58h] [ebp-14h]
  unsigned int v85; // [esp+59h] [ebp-13h]
  char v86; // [esp+5Dh] [ebp-Fh]
  __int16 v87; // [esp+5Eh] [ebp-Eh]
  unsigned int v88; // [esp+68h] [ebp-4h]

  v13 = a11; /*0x46515c*/
  if ( (*((_DWORD *)ecx0 + 6) & 0x200) != 0 || sub_452330((char)ecx0, a7, a8, result) || v13 && !strcmp(v13, "autosave") ) /*0x465182*/
  {
    if ( LODWORD(qword_B3BB2C[0x115]) ) /*0x4651a5*/
      sub_683490((LONG *)LODWORD(qword_B3BB2C[0x115])); /*0x4651b1*/
    sub_432860((volatile LONG *)MEMORY[0xB33A10]); /*0x4651bc*/
    NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>::NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>( /*0x4651c3*/
      ecx0,
      a8,
      a7);
    v14 = 0; /*0x4651ce*/
    if ( (*((_DWORD *)ecx0 + 6) & 0x200) == 0 ) /*0x4651d3*/
      v14 = TESSaveLoadGame_ResolveSaveFile(ecx0, result, a6, a7, a8, a5, a2, a3, a4, (int)data, v13, 0);// Save path resolver call. CharacterSpecificSaves qualifies quicksave/autosave stems with the active character name and hash. /*0x4651e3*/
    if ( (_BYTE)a12 ) /*0x4651ea*/
    {
      v15 = (NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *> **)FormHeapAlloc(8u); /*0x4651ee*/
      a12 = (int)v15; /*0x4651f6*/
      v88 = 0; /*0x4651fc*/
      if ( v15 ) /*0x465200*/
        v16 = sub_45F0F0(v15); /*0x465204*/
      else
        v16 = 0; /*0x46520b*/
      v88 = 0xFFFFFFFF; /*0x46520d*/
      *((_DWORD *)ecx0 + 0x10) = v16; /*0x465215*/
    }
    *((_BYTE *)ecx0 + 0x70) = 0; /*0x46521e*/
    *((_BYTE *)ecx0 + 0x71) = 0x7D; /*0x465222*/
    *((_BYTE *)ecx0 + 0x7C) = 0x7D; /*0x465225*/
    sub_464AB0((int)ecx0, a6, a7, a8, a5, a2, a3, a4, (int)v14, (int)v13); /*0x465228*/
    sub_45C870(ecx0, (int)v14); /*0x465230*/
    v18 = (*((_DWORD *)ecx0 + 6) & 0x200) != 0; /*0x46523b*/
    v17 = (*((_DWORD *)ecx0 + 6) & 0x200) == 0; /*0x46523b*/
    v66 = 0; /*0x46523d*/
    if ( v17 ) /*0x465241*/
    {
      v19 = *((_DWORD *)v14 + 0xC); /*0x465243*/
      if ( v19 == 0xFFFFFFFF ) /*0x465249*/
        v19 = *((_DWORD *)v14 + 0x52); /*0x46524b*/
      v66 = v19; /*0x465251*/
    }
    v68 = 0; /*0x465257*/
    if ( v18 ) /*0x46525b*/
    {
      *((_DWORD *)ecx0 + 0x24) += 4; /*0x46525d*/
    }
    else
    {
      v20 = *((void (__cdecl **)(const char *, int *, int, int *, int))v14 + 2); /*0x465266*/
      a12 = 1; /*0x465278*/
      v20(v14, &v68, 4, &a12, 1); /*0x465283*/
    }
    if ( (*((_DWORD *)ecx0 + 6) & 0x200) != 0 ) /*0x465291*/
    {
      *((_DWORD *)ecx0 + 0x24) += 4; /*0x465293*/
    }
    else
    {
      v21 = *((void (__cdecl **)(const char *, int *, int, int *, int))v14 + 2); /*0x46529c*/
      a12 = 1; /*0x4652ae*/
      v21(v14, &v68, 4, &a12, 1); /*0x4652b9*/
    }
    sub_462280((int *)ecx0, a7, a8, result, (int)v14); /*0x4652c1*/
    v22 = *(_DWORD *)ecx0; /*0x4652c6*/
    v65 = 0; /*0x4652c9*/
    v23 = *(_DWORD *)(v22 + 4); /*0x4652cd*/
    v24 = 0; /*0x4652d0*/
    if ( v23 ) /*0x4652d4*/
    {
      v25 = *(_DWORD **)(v22 + 8); /*0x4652d6*/
      v26 = v25; /*0x4652d9*/
      while ( !*v26 ) /*0x4652e3*/
      {
        ++v24; /*0x4652e9*/
        ++v26; /*0x4652ec*/
        if ( v24 >= v23 ) /*0x4652f1*/
          goto LABEL_29; /*0x4652f1*/
      }
      v27 = (NiTMap_Entry_TESCELL *)v25[v24]; /*0x46539b*/
    }
    else
    {
LABEL_29:
      v27 = 0; /*0x4652f5*/
    }
    v71 = v27; /*0x4652f9*/
    while ( v71 ) /*0x4652fd*/
    {
      v28 = *(NiTMap_TESCELL **)ecx0; /*0x46530d*/
      v70 = 0; /*0x465317*/
      a1 = 0; /*0x46531b*/
      NiTMap_U32Pointer_GetNextEntry(v28, &v71, (void **)&a1, (TESObjectCELL **)&v70); /*0x46531f*/
      v29 = a1; /*0x465324*/
      if ( a1 ) /*0x46532a*/
      {
        v30 = (unsigned int *)v70; /*0x465330*/
        if ( v70 ) /*0x465336*/
        {
          v31 = *(_DWORD *)(v70 + 4); /*0x46533c*/
          *((_DWORD *)ecx0 + 5) = v31; /*0x465341*/
          v76 = *v30; /*0x465346*/
          v32 = *((_BYTE *)ecx0 + 0x7C); /*0x46534a*/
          v74 = v29; /*0x46534d*/
          v77 = v32; /*0x465351*/
          if ( v31 ) /*0x465355*/
          {
            v33 = g_TESSaveLoadGame; /*0x46535b*/
            data = *(Data **)g_TESSaveLoadGame->unk000[5]; /*0x465365*/
            v33->unk000[5] += 4; /*0x465369*/
            type = BYTE2(data); /*0x465375*/
            v34 = g_TESSaveLoadGame; /*0x465379*/
            v77 = HIBYTE(data); /*0x46537e*/
            if ( (v34->flags & 0x200) != 0 ) /*0x465390*/
            {
              v34[1].unk030[4] += 0xA; /*0x465392*/
            }
            else
            {
              v35 = *((void (__cdecl **)(const char *, unsigned int *, int, int *, int))v14 + 2); /*0x4653a5*/
              v70 = 1; /*0x4653b6*/
              v35(v14, &v74, 0xA, &v70, 1); /*0x4653ba*/
            }
            v36 = *((_DWORD *)ecx0 + 6); /*0x4653bf*/
            ++v65; /*0x4653c2*/
            if ( (v36 & 0x200) != 0 ) /*0x4653cb*/
            {
              *((_DWORD *)ecx0 + 0x24) += 2; /*0x4653cd*/
            }
            else
            {
              v37 = *((void (__cdecl **)(const char *, Data **, int, int *, int))v14 + 2); /*0x4653d6*/
              v70 = 1; /*0x4653e7*/
              v37(v14, &data, 2, &v70, 1); /*0x4653eb*/
            }
            v38 = (__int16)data; /*0x4653f0*/
            if ( (_WORD)data ) /*0x4653f7*/
            {
              if ( (*((_DWORD *)ecx0 + 6) & 0x200) != 0 ) /*0x465405*/
              {
                *((_DWORD *)ecx0 + 0x24) += (unsigned __int16)data; /*0x465407*/
              }
              else
              {
                v39 = *((void (__cdecl **)(const char *, int, _DWORD, int *, int))v14 + 2); /*0x46540f*/
                v62 = *((_DWORD *)ecx0 + 5); /*0x46541c*/
                v70 = 1; /*0x46541e*/
                v39(v14, v62, (unsigned __int16)data, &v70, 1); /*0x465422*/
                v38 = (__int16)data; /*0x465424*/
              }
            }
            if ( *((_DWORD *)ecx0 + 0x10) ) /*0x46542e*/
            {
              v80 = v76; /*0x465439*/
              v78 = v74; /*0x465441*/
              v79 = type; /*0x46544a*/
              v82 = v38; /*0x465453*/
              v81 = v77; /*0x46545d*/
              sub_45AD00(&v78); /*0x465461*/
            }
            *((_DWORD *)ecx0 + 5) = 0; /*0x465466*/
          }
          else
          {
            v40 = TESForm_LookupByFormID(v29); /*0x465473*/
            v41 = (PlayerCharacter *)v40; /*0x465478*/
            if ( v40 ) /*0x46547f*/
            {
              type = v40->member.type; /*0x465490*/
              v76 = SaveLoad_NormalizeFormChangeFlags(v40, v76); /*0x465499*/
              if ( (g_TESSaveLoadGame->flags & 0x200) != 0 ) /*0x4654af*/
              {
                g_TESSaveLoadGame[1].unk030[4] += 0xA; /*0x4654b1*/
              }
              else
              {
                v42 = *((void (__cdecl **)(const char *, unsigned int *, int, int *, int))v14 + 2); /*0x4654ba*/
                v70 = 1; /*0x4654cb*/
                v42(v14, &v74, 0xA, &v70, 1); /*0x4654cf*/
              }
              ++v65; /*0x4654d4*/
              *((_DWORD *)ecx0 + 0x21) = &v74; /*0x4654dc*/
              a11 = (char *)(unsigned __int16)v41->vtbl->super.super.super.super.GetSaveSize((TESForm *)v41, v76); /*0x4654fb*/
              v43 = sub_452250(v41, v76); /*0x4654ff*/
              v44 = *((_DWORD *)ecx0 + 6); /*0x465504*/
              LOWORD(a11) = v43 + (_WORD)a11; /*0x465507*/
              if ( (v44 & 0x200) != 0 ) /*0x465512*/
              {
                *((_DWORD *)ecx0 + 0x24) += 2; /*0x465514*/
              }
              else
              {
                v45 = *((void (__cdecl **)(const char *, char **, int, int *, int))v14 + 2); /*0x46551d*/
                v70 = 1; /*0x46552e*/
                v45(v14, &a11, 2, &v70, 1); /*0x465532*/
              }
              if ( (_WORD)a11 ) /*0x46553f*/
              {
                v46 = j_MemoryHeap_Alloc(&FormHeap, (char)ecx0, (unsigned __int16)a11 | 0x100000000LL, v64); /*0x46554f*/
                *((_DWORD *)ecx0 + 5) = v46; /*0x465556*/
                if ( !v46 ) /*0x465559*/
                  sub_404EC0("Could not create save buffer, out of memory."); /*0x465560*/
                v47 = *((char **)ecx0 + 5); /*0x46556c*/
                SaveLoad_SaveFormModifiedFlags__((unsigned int **)ecx0, v41, v76);// Main savegame form-save caller of SaveLoad_SaveFormModifiedFlags??. Provenance capture runs here before OBSE plugin co-save callbacks write SPFX. /*0x465573*/
                v41->vtbl->super.super.super.super.SaveGame((TESForm *)v41, v76); /*0x465584*/
                if ( &v47[(unsigned __int16)a11] != *((char **)ecx0 + 5) ) /*0x465590*/
                  (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x4655a2*/
                    *(_DWORD *)&MEMORY[0xB33E90][0xF00],
                    "SaveGame() call did not properly fill buffer.");
                sub_45C4A0(ecx0, (int)v14, (int)v47, (unsigned __int16)a11); /*0x4655ae*/
                MemoryHeap_Free_checked(v47); /*0x4655b9*/
                *((_DWORD *)ecx0 + 5) = 0; /*0x4655be*/
              }
              v48 = *((_DWORD *)ecx0 + 0x10); /*0x4655ca*/
              *((_DWORD *)ecx0 + 0x21) = 0; /*0x4655cf*/
              if ( v48 ) /*0x4655d9*/
              {
                v83 = v74; /*0x4655e3*/
                v85 = v76; /*0x4655eb*/
                v86 = v77; /*0x4655f3*/
                v84 = type; /*0x4655f7*/
                v87 = (__int16)a11; /*0x465605*/
                sub_45AD00(&v83); /*0x46560a*/
              }
            }
            if ( v41 == reference ) /*0x46561c*/
            {
              v49 = g_TESSaveLoadGame; /*0x465622*/
              v74 = 0xFEFFFFFF; /*0x465627*/
              if ( (v49->flags & 0x200) != 0 ) /*0x465638*/
              {
                v49[1].unk030[4] += 0xA; /*0x46563a*/
              }
              else
              {
                v50 = *((void (__cdecl **)(const char *, unsigned int *, int, int *, int))v14 + 2); /*0x465643*/
                v70 = 1; /*0x465654*/
                v50(v14, &v74, 0xA, &v70, 1); /*0x465658*/
              }
              v51 = *((_DWORD *)ecx0 + 6); /*0x46565d*/
              ++v65; /*0x465660*/
              v72 = 5; /*0x46566a*/
              if ( (v51 & 0x200) != 0 ) /*0x465672*/
              {
                *((_DWORD *)ecx0 + 0x24) += 2; /*0x465674*/
              }
              else
              {
                v52 = *((void (__cdecl **)(const char *, int *, int, int *, int))v14 + 2); /*0x46567d*/
                v70 = 1; /*0x46568e*/
                v52(v14, &v72, 2, &v70, 1); /*0x465692*/
              }
              _EAX = reference; /*0x465697*/
              v54 = *((_DWORD *)ecx0 + 6); /*0x4656a2*/
              LOBYTE(a12) = reference->isInSEWorld; /*0x4656a5*/
              __asm { fld     dword ptr [eax+700h] } /*0x4656a9*/
              __asm { fstp    [esp+68h+var_34] }
              if ( (v54 & 0x200) != 0 ) /*0x4656b9*/
              {
                ++*((_DWORD *)ecx0 + 0x24); /*0x4656bb*/
              }
              else
              {
                v55 = *((void (__cdecl **)(const char *, int *, int, int *, int))v14 + 2); /*0x4656c3*/
                v70 = 1; /*0x4656d6*/
                v55(v14, &a12, 1, &v70, 1); /*0x4656da*/
              }
              if ( (*((_DWORD *)ecx0 + 6) & 0x200) != 0 ) /*0x4656e7*/
              {
                *((_DWORD *)ecx0 + 0x24) += 4; /*0x4656e9*/
              }
              else
              {
                v56 = *((void (__cdecl **)(const char *, float *, int, int *, int))v14 + 2); /*0x4656f2*/
                v70 = 1; /*0x465703*/
                v56(v14, &v73, 4, &v70, 1); /*0x465707*/
              }
            }
          }
        }
      }
    }
    sub_45FB50(ecx0, (int)v14); /*0x46571a*/
    v17 = (*((_DWORD *)ecx0 + 6) & 0x200) == 0; /*0x465727*/
    v67 = 0; /*0x46572a*/
    if ( v17 ) /*0x46572e*/
    {
      if ( *((_DWORD *)v14 + 0xC) == 0xFFFFFFFF ) /*0x465736*/
        v67 = *((_DWORD *)v14 + 0x52); /*0x465744*/
      else
        v67 = *((_DWORD *)v14 + 0xC); /*0x465738*/
    }
    SaveLoad_SaveIDArrays(ecx0, (int)v14); /*0x46574b*/
    if ( (*((_DWORD *)ecx0 + 6) & 0x200) == 0 ) /*0x465758*/
    {
      (*(void (__thiscall **)(const char *, int, int))(*(_DWORD *)v14 + 0xC))(v14, v66, BSFile_FilePos_Beg); /*0x46576c*/
      if ( (*((_DWORD *)ecx0 + 6) & 0x200) != 0 ) /*0x465776*/
      {
        *((_DWORD *)ecx0 + 0x24) += 4; /*0x465778*/
      }
      else
      {
        v57 = *((void (__cdecl **)(const char *, int *, int, int *, int))v14 + 2); /*0x465781*/
        a12 = 1; /*0x465793*/
        v57(v14, &v67, 4, &a12, 1); /*0x46579e*/
      }
      if ( (*((_DWORD *)ecx0 + 6) & 0x200) != 0 ) /*0x4657ac*/
      {
        *((_DWORD *)ecx0 + 0x24) += 4; /*0x4657ae*/
      }
      else
      {
        v58 = *((void (__cdecl **)(const char *, int *, int, int *, int))v14 + 2); /*0x4657b7*/
        v66 = 1; /*0x4657c9*/
        v58(v14, &v65, 4, &v66, 1); /*0x4657d1*/
      }
    }
    v59 = *((unsigned int ***)ecx0 + 0x10); /*0x4657d6*/
    if ( v59 ) /*0x4657db*/
    {
      TESSaveLoadGame_PrintChangeRecords_(v59, v14 + 0x3C); /*0x4657e1*/
      v60 = *((_DWORD *)ecx0 + 0x10); /*0x4657e6*/
      if ( v60 ) /*0x4657eb*/
      {
        SaveLoad_ClearReferenceMapState(*((void (__stdcall *****)(signed int))ecx0 + 0x10)); /*0x4657ef*/
        FormHeapFree(v60); /*0x4657f5*/
      }
      *((_DWORD *)ecx0 + 0x10) = 0; /*0x4657fd*/
    }
    if ( (*((_DWORD *)ecx0 + 6) & 0x200) == 0 ) /*0x465808*/
    {
      NiFile_Flush((int)v14); /*0x46580c*/
      sub_45A190((void **)ecx0, (char)ecx0, (int)v14); /*0x465814*/
      if ( v14 ) /*0x46581b*/
      {
        v61 = *((int **)ecx0 + 0x1B); /*0x46581d*/
        if ( v61 ) /*0x465822*/
          BSSimpleList_Remove(v61, (int)v14); /*0x465827*/
        (**(void (__thiscall ***)(const char *, int))v14)(v14, 1); /*0x465834*/
      }
    }
    sub_432890((volatile LONG *)MEMORY[0xB33A10]); /*0x46583c*/
  }
  else
  {
    __asm { fld1 } /*0x465186*/
    __asm { fstp    [esp+6Ch+duration]; duration }
    GameUI_QueueMessage((const char *)unk_B38788, 0, 1u, duration); /*0x465196*/
  }
  return result; /*0x465843*/
}
