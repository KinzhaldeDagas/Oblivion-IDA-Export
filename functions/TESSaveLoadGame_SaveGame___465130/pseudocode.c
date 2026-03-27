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
  NiTMap_TESCELL *v22; // edx
  UInt32 m_numBuckets; // ecx
  UInt32 v24; // eax
  NiTMap_Entry_TESCELL **m_buckets; // edi
  NiTMap_Entry_TESCELL **v26; // edx
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
  _DWORD *v61; // ebp
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

  v13 = a11;
  if ( (*((_DWORD *)ecx0 + 6) & 0x200) != 0 || sub_452330((char)ecx0, a7, a8, result) || v13 && !strcmp(v13, "autosave") )
  {
    if ( dword_B3BF80 )
      sub_683490((_DWORD *)dword_B3BF80);
    sub_432860((volatile LONG *)ioManager);
    NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>::NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>(
      ecx0,
      a8);
    v14 = 0;
    if ( (*((_DWORD *)ecx0 + 6) & 0x200) == 0 )
      v14 = Savegame_Rename(ecx0, result, a6, a7, a8, a5, a2, a3, a4, (int)data, v13, 0);
    if ( (_BYTE)a12 )
    {
      v15 = (NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *> **)FormHeapAlloc(8u);
      a12 = (int)v15;
      v88 = 0;
      if ( v15 )
        v16 = sub_45F0F0(v15);
      else
        v16 = 0;
      v88 = 0xFFFFFFFF;
      *((_DWORD *)ecx0 + 0x10) = v16;
    }
    *((_BYTE *)ecx0 + 0x70) = 0;
    *((_BYTE *)ecx0 + 0x71) = 0x7D;
    *((_BYTE *)ecx0 + 0x7C) = 0x7D;
    sub_464AB0((int)ecx0, a6, a7, a8, a5, a2, a3, a4, (int)v14, (int)v13);
    sub_45C870(ecx0, (int)v14);
    v18 = (*((_DWORD *)ecx0 + 6) & 0x200) != 0;
    v17 = (*((_DWORD *)ecx0 + 6) & 0x200) == 0;
    v66 = 0;
    if ( v17 )
    {
      v19 = *((_DWORD *)v14 + 0xC);
      if ( v19 == 0xFFFFFFFF )
        v19 = *((_DWORD *)v14 + 0x52);
      v66 = v19;
    }
    v68 = 0;
    if ( v18 )
    {
      *((_DWORD *)ecx0 + 0x24) += 4;
    }
    else
    {
      v20 = *((void (__cdecl **)(const char *, int *, int, int *, int))v14 + 2);
      a12 = 1;
      v20(v14, &v68, 4, &a12, 1);
    }
    if ( (*((_DWORD *)ecx0 + 6) & 0x200) != 0 )
    {
      *((_DWORD *)ecx0 + 0x24) += 4;
    }
    else
    {
      v21 = *((void (__cdecl **)(const char *, int *, int, int *, int))v14 + 2);
      a12 = 1;
      v21(v14, &v68, 4, &a12, 1);
    }
    sub_462280((int *)ecx0, a7, a8, result, (int)v14);
    v22 = *(NiTMap_TESCELL **)ecx0;
    v65 = 0;
    m_numBuckets = v22->m_numBuckets;
    v24 = 0;
    if ( m_numBuckets )
    {
      m_buckets = v22->m_buckets;
      v26 = m_buckets;
      while ( !*v26 )
      {
        ++v24;
        ++v26;
        if ( v24 >= m_numBuckets )
          goto LABEL_29;
      }
      v27 = m_buckets[v24];
    }
    else
    {
LABEL_29:
      v27 = 0;
    }
    v71 = v27;
    while ( v71 )
    {
      v28 = *(NiTMap_TESCELL **)ecx0;
      v70 = 0;
      a1 = 0;
      sub_452600(v28, &v71, (void **)&a1, (TESObjectCELL **)&v70);
      v29 = a1;
      if ( a1 )
      {
        v30 = (unsigned int *)v70;
        if ( v70 )
        {
          v31 = *(_DWORD *)(v70 + 4);
          *((_DWORD *)ecx0 + 5) = v31;
          v76 = *v30;
          v32 = *((_BYTE *)ecx0 + 0x7C);
          v74 = v29;
          v77 = v32;
          if ( v31 )
          {
            v33 = SaveLoad_CurrentSavegame;
            data = *(Data **)SaveLoad_CurrentSavegame->unk000[5];
            v33->unk000[5] += 4;
            type = BYTE2(data);
            v34 = SaveLoad_CurrentSavegame;
            v77 = HIBYTE(data);
            if ( (v34->flags & 0x200) != 0 )
            {
              v34[1].unk030[4] += 0xA;
            }
            else
            {
              v35 = *((void (__cdecl **)(const char *, unsigned int *, int, int *, int))v14 + 2);
              v70 = 1;
              v35(v14, &v74, 0xA, &v70, 1);
            }
            v36 = *((_DWORD *)ecx0 + 6);
            ++v65;
            if ( (v36 & 0x200) != 0 )
            {
              *((_DWORD *)ecx0 + 0x24) += 2;
            }
            else
            {
              v37 = *((void (__cdecl **)(const char *, Data **, int, int *, int))v14 + 2);
              v70 = 1;
              v37(v14, &data, 2, &v70, 1);
            }
            v38 = (__int16)data;
            if ( (_WORD)data )
            {
              if ( (*((_DWORD *)ecx0 + 6) & 0x200) != 0 )
              {
                *((_DWORD *)ecx0 + 0x24) += (unsigned __int16)data;
              }
              else
              {
                v39 = *((void (__cdecl **)(const char *, int, _DWORD, int *, int))v14 + 2);
                v62 = *((_DWORD *)ecx0 + 5);
                v70 = 1;
                v39(v14, v62, (unsigned __int16)data, &v70, 1);
                v38 = (__int16)data;
              }
            }
            if ( *((_DWORD *)ecx0 + 0x10) )
            {
              v80 = v76;
              v78 = v74;
              v79 = type;
              v82 = v38;
              v81 = v77;
              sub_45AD00(&v78);
            }
            *((_DWORD *)ecx0 + 5) = 0;
          }
          else
          {
            v40 = TESForm_LookupByFormID(v29);
            v41 = (PlayerCharacter *)v40;
            if ( v40 )
            {
              type = v40->member.type;
              v76 = sub_4535A0(v40, v76);
              if ( (SaveLoad_CurrentSavegame->flags & 0x200) != 0 )
              {
                SaveLoad_CurrentSavegame[1].unk030[4] += 0xA;
              }
              else
              {
                v42 = *((void (__cdecl **)(const char *, unsigned int *, int, int *, int))v14 + 2);
                v70 = 1;
                v42(v14, &v74, 0xA, &v70, 1);
              }
              ++v65;
              *((_DWORD *)ecx0 + 0x21) = &v74;
              a11 = (char *)(unsigned __int16)v41->vtbl->super.super.super.super.GetSaveSize((TESForm *)v41, v76);
              v43 = sub_452250(v41, v76);
              v44 = *((_DWORD *)ecx0 + 6);
              LOWORD(a11) = v43 + (_WORD)a11;
              if ( (v44 & 0x200) != 0 )
              {
                *((_DWORD *)ecx0 + 0x24) += 2;
              }
              else
              {
                v45 = *((void (__cdecl **)(const char *, char **, int, int *, int))v14 + 2);
                v70 = 1;
                v45(v14, &a11, 2, &v70, 1);
              }
              if ( (_WORD)a11 )
              {
                v46 = j_MemoryHeap_Alloc(&FormHeap, (char)ecx0, (unsigned __int16)a11 | 0x100000000LL, v64);
                *((_DWORD *)ecx0 + 5) = v46;
                if ( !v46 )
                  sub_404EC0("Could not create save buffer, out of memory.");
                v47 = *((char **)ecx0 + 5);
                SaveLoad_SaveFormModifiedFlags__((unsigned int **)ecx0, v41, v76);
                v41->vtbl->super.super.super.super.SaveGame((TESForm *)v41, v76);
                if ( &v47[(unsigned __int16)a11] != *((char **)ecx0 + 5) )
                  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B34D90 + 0x18))(
                    dword_B34D90,
                    "SaveGame() call did not properly fill buffer.");
                sub_45C4A0(ecx0, (int)v14, (int)v47, (unsigned __int16)a11);
                MemoryHeap_Free_checked(v47);
                *((_DWORD *)ecx0 + 5) = 0;
              }
              v48 = *((_DWORD *)ecx0 + 0x10);
              *((_DWORD *)ecx0 + 0x21) = 0;
              if ( v48 )
              {
                v83 = v74;
                v85 = v76;
                v86 = v77;
                v84 = type;
                v87 = (__int16)a11;
                sub_45AD00(&v83);
              }
            }
            if ( v41 == TESDataHandler_g_PlayerRef )
            {
              v49 = SaveLoad_CurrentSavegame;
              v74 = 0xFEFFFFFF;
              if ( (v49->flags & 0x200) != 0 )
              {
                v49[1].unk030[4] += 0xA;
              }
              else
              {
                v50 = *((void (__cdecl **)(const char *, unsigned int *, int, int *, int))v14 + 2);
                v70 = 1;
                v50(v14, &v74, 0xA, &v70, 1);
              }
              v51 = *((_DWORD *)ecx0 + 6);
              ++v65;
              v72 = 5;
              if ( (v51 & 0x200) != 0 )
              {
                *((_DWORD *)ecx0 + 0x24) += 2;
              }
              else
              {
                v52 = *((void (__cdecl **)(const char *, int *, int, int *, int))v14 + 2);
                v70 = 1;
                v52(v14, &v72, 2, &v70, 1);
              }
              _EAX = TESDataHandler_g_PlayerRef;
              v54 = *((_DWORD *)ecx0 + 6);
              LOBYTE(a12) = TESDataHandler_g_PlayerRef->isInSEWorld;
              __asm { fld     dword ptr [eax+700h] }
              __asm { fstp    [esp+68h+var_34] }
              if ( (v54 & 0x200) != 0 )
              {
                ++*((_DWORD *)ecx0 + 0x24);
              }
              else
              {
                v55 = *((void (__cdecl **)(const char *, int *, int, int *, int))v14 + 2);
                v70 = 1;
                v55(v14, &a12, 1, &v70, 1);
              }
              if ( (*((_DWORD *)ecx0 + 6) & 0x200) != 0 )
              {
                *((_DWORD *)ecx0 + 0x24) += 4;
              }
              else
              {
                v56 = *((void (__cdecl **)(const char *, float *, int, int *, int))v14 + 2);
                v70 = 1;
                v56(v14, &v73, 4, &v70, 1);
              }
            }
          }
        }
      }
    }
    sub_45FB50(ecx0, (int)v14);
    v17 = (*((_DWORD *)ecx0 + 6) & 0x200) == 0;
    v67 = 0;
    if ( v17 )
    {
      if ( *((_DWORD *)v14 + 0xC) == 0xFFFFFFFF )
        v67 = *((_DWORD *)v14 + 0x52);
      else
        v67 = *((_DWORD *)v14 + 0xC);
    }
    sub_45E220(ecx0, (int)v14);
    if ( (*((_DWORD *)ecx0 + 6) & 0x200) == 0 )
    {
      (*(void (__thiscall **)(const char *, int, int))(*(_DWORD *)v14 + 0xC))(v14, v66, BSFile_FilePos_Beg);
      if ( (*((_DWORD *)ecx0 + 6) & 0x200) != 0 )
      {
        *((_DWORD *)ecx0 + 0x24) += 4;
      }
      else
      {
        v57 = *((void (__cdecl **)(const char *, int *, int, int *, int))v14 + 2);
        a12 = 1;
        v57(v14, &v67, 4, &a12, 1);
      }
      if ( (*((_DWORD *)ecx0 + 6) & 0x200) != 0 )
      {
        *((_DWORD *)ecx0 + 0x24) += 4;
      }
      else
      {
        v58 = *((void (__cdecl **)(const char *, int *, int, int *, int))v14 + 2);
        v66 = 1;
        v58(v14, &v65, 4, &v66, 1);
      }
    }
    v59 = *((unsigned int ***)ecx0 + 0x10);
    if ( v59 )
    {
      TESSaveLoadGame_PrintChangeRecords_(v59, v14 + 0x3C);
      v60 = *((_DWORD *)ecx0 + 0x10);
      if ( v60 )
      {
        sub_4530A0(*((void (__stdcall *****)(signed int))ecx0 + 0x10));
        FormHeapFree(v60);
      }
      *((_DWORD *)ecx0 + 0x10) = 0;
    }
    if ( (*((_DWORD *)ecx0 + 6) & 0x200) == 0 )
    {
      NiFile_Flush((int)v14);
      sub_45A190((void **)ecx0, (char)ecx0, (int)v14);
      if ( v14 )
      {
        v61 = *((_DWORD **)ecx0 + 0x1B);
        if ( v61 )
          BSSimpleList_Remove(v61, (int)v14);
        (**(void (__thiscall ***)(const char *, int))v14)(v14, 1);
      }
    }
    sub_432890((volatile LONG *)ioManager);
  }
  else
  {
    __asm { fld1 }
    __asm { fstp    [esp+6Ch+duration]; duration }
    GameUI_QueueMessage((const char *)dword_B38788, 0, 1u, duration);
  }
  return result;
}
