void __userpurge def_44E8D5(
        FileFinder *a1@<ebx>,
        int ebp0@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        double a5@<st2>,
        double a6@<st1>,
        double a7@<st0>,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        FileFinder *a2,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        FileFinder *a26,
        FileFinder *a27,
        FileFinder *a28,
        char Drive,
        float a30,
        float a31,
        CHAR FileName,
        int FileName_4,
        int FileName_8,
        int FileName_12,
        int FileName_16,
        int FileName_20,
        int FileName_24,
        int FileName_28,
        int FileName_32,
        int FileName_36,
        int FileName_40,
        int FileName_44,
        int FileName_48,
        int FileName_52,
        int FileName_56,
        int FileName_60,
        int FileName_64,
        int FileName_68,
        int FileName_72,
        int FileName_76,
        int FileName_80,
        int FileName_84,
        int FileName_88,
        int FileName_92,
        int FileName_96,
        int FileName_100,
        int FileName_104,
        int FileName_108,
        int FileName_112,
        int FileName_116,
        int FileName_120,
        int FileName_124)
{
  FileFinder *v63; // eax
  char *v64; // eax
  _BYTE *v65; // edx
  char v66; // cl
  const char *v67; // eax
  int v68; // eax
  char v69; // cl
  int v70; // eax
  char v71; // cl
  int v72; // eax
  const char *v73; // eax
  int v74; // eax
  const char *v75; // eax
  char vtbl; // al
  TESObjectREFR *v77; // eax
  TESObjectREFR *v78; // eax
  TESObjectREFR *v79; // eax
  TESChildCELL *v80; // eax
  TESObjectREFR *v81; // esi
  NiNode *v82; // eax
  char v83; // al
  NiNode *(__thiscall *GetNiNode)(TESObjectREFR *); // eax
  int v85; // eax
  int v86; // eax
  NiObject *v87; // eax
  NiObject *v88; // eax
  bool v89; // cc
  const char *v90; // eax
  const char *v91; // [esp+3Ch] [ebp-8h]
  const char *v92; // [esp+3Ch] [ebp-8h]
  int v93; // [esp+40h] [ebp-4h]
  const char *v94; // [esp+40h] [ebp-4h]
  const char *v95; // [esp+40h] [ebp-4h]
  int v96; // [esp+40h] [ebp-4h]
  float v97; // [esp+7Ch] [ebp+38h]
  int v98; // [esp+84h] [ebp+40h]
  float v99; // [esp+84h] [ebp+40h]

  if ( HIBYTE(a17) == (_BYTE)a1 )
  {
    LOWORD(v63) = *(_WORD *)(a3 + 8);
    if ( (_WORD)v63 == 0xFFFF )
    {
      v64 = *(char **)(a3 + 4);
      v65 = v64 + 1;
      do
        v66 = *v64++;
      while ( v66 != (_BYTE)a1 );
      v63 = (FileFinder *)(v64 - v65);
    }
    else
    {
      v63 = (FileFinder *)(unsigned __int16)v63;
    }
    if ( v63 == a1 )
    {
      if ( a18 != 0xE && a18 != 8 && byte_B0559C != (_BYTE)a1 )
      {
        v90 = (const char *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a4 + 0xD4))(
                              a4,
                              a7,
                              a6,
                              a5);
        PrintError("No model selected for %s \"%s\".", *(const char **)(4 * a18 + 0xB081D0), v90);
      }
    }
    else
    {
      v93 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x14))(a3);
      if ( a18 == 0xC )
        _sprintf(&FileName, "Trees\\%s", v93);
      else
        _sprintf(&FileName, "Meshes\\%s", v93);
      if ( OBSE_g_FileFinder == a1
        || (FileFinder *)OBSE_g_FileFinder->vtbl->FindFile(
                           OBSE_g_FileFinder,
                           &FileName,
                           (UInt32)a1,
                           (UInt32)a1,
                           0xFFFFFFFF) == a1 )
      {
        if ( byte_B05594 != (_BYTE)a1 )
        {
          v67 = (const char *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a3 + 0x14))(
                                a3,
                                a7,
                                a6,
                                a5);
          _splitpath(v67, &Drive, (char *)&STACK[0x1B0], (char *)&STACK[0x4C0], (char *)&STACK[0x3C0]);
          _sprintf(&FileName, (const char *)&off_A386A8, &STACK[0x4C0]);
          v68 = 0;
          do
          {
            v69 = *(&FileName + v68);
            *((_BYTE *)&STACK[0x4C0] + v68++) = v69;
          }
          while ( v69 != (_BYTE)a1 );
          _sprintf(&FileName, "Meshes\\%s", (const char *)&STACK[0x1B0]);
          v70 = 0;
          do
          {
            v71 = *(&FileName + v70);
            *((_BYTE *)&STACK[0x1B0] + v70++) = v71;
          }
          while ( v71 != (_BYTE)a1 );
          sub_9853B2(
            (int)&FileName,
            (int)&Drive,
            (unsigned __int8 *)&STACK[0x1B0],
            (int)&STACK[0x4C0],
            (int)&STACK[0x3C0]);
          if ( OBSE_g_FileFinder == a1
            || (FileFinder *)OBSE_g_FileFinder->vtbl->FindFile(
                               OBSE_g_FileFinder,
                               &FileName,
                               (UInt32)a1,
                               (UInt32)a1,
                               0xFFFFFFFF) == a1 )
          {
            v72 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0xD4))(a4);
            v73 = (const char *)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a3 + 0x14))(
                                  a3,
                                  *(_DWORD *)(4 * a18 + 0xB081D0),
                                  v72);
            PrintError("Model \"%s\" not found for %s \"%s\".", v73, v91, v94);
          }
          else
          {
            sub_448E20(&FileName);
          }
        }
        goto LABEL_51;
      }
      if ( a2 != a1 && (byte_B055A4 != (_BYTE)a1 || *(_BYTE *)(ebp0 + 8) != (_BYTE)a1 || byte_B0558C != (_BYTE)a1) )
      {
        v74 = ((int (__usercall *)@<eax>(FileFinder *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a2->vtbl[0xA].Unk_03)(
                a2,
                a7,
                a6,
                a5);
        v75 = (const char *)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a3 + 0x14))(
                              a3,
                              *(_DWORD *)(4 * a18 + 0xB081D0),
                              v74);
        _sprintf((char *)&STACK[0x2B8], "Loading \"%s\" for %s \"%s\".", v75, v92, v95);
        Interface_ConsolePrint((char *)&STACK[0x2B8]);
        sub_40D4D0((InputGlobal *)OSGlobals, a5, a6, a7);
        vtbl = (char)a2->searchPath._vtbl;
        if ( vtbl == 0x23 )
        {
          v77 = (TESObjectREFR *)FormHeapAlloc(0x10Cu);
          STACK[0x704] = (unsigned int)a1;
          if ( v77 != (TESObjectREFR *)a1 )
          {
            v78 = Character_constr(v77);
LABEL_35:
            v81 = v78;
            STACK[0x704] = 0xFFFFFFFF;
            TESObjectREFR_SetBaseForm(v78, (int)a2);
            if ( (unsigned int)LOBYTE(a2->searchPath._vtbl) - 0x23 > 1 )
            {
              v81->vtbl->GenerateNiNode(v81);
            }
            else if ( byte_B0558C == (_BYTE)a1 || byte_B055A4 != (_BYTE)a1 || *(_BYTE *)(ebp0 + 8) != (_BYTE)a1 )
            {
              sub_438060((_DWORD **)ModelLoaderPtr, ebp0, a5, a6, a7, v81, (int)a1);
              sub_434020(ioManager, a5, a6, a7, 5);
            }
            if ( v81->vtbl->GetNiNode(v81) )
            {
              v96 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x14))(a3);
              v82 = v81->vtbl->GetNiNode(v81);
              sub_44CDF0(v82, v96);
            }
            if ( byte_B0558C != (_BYTE)a1 )
            {
              v83 = (char)a2->searchPath._vtbl;
              if ( v83 != 0x23 && v83 != 0x24 )
              {
                GetNiNode = v81->vtbl->GetNiNode;
                a26 = a1;
                a27 = a1;
                v85 = (int)GetNiNode(v81);
                sub_5367B0(v85, &a26, &a27);
                v86 = 0;
                a30 = *(float *)(a3 + 0xC);
                v98 = 0;
                if ( TES != (TES *)a1 )
                {
                  v87 = (NiObject *)v81->vtbl->GetNiNode(v81);
                  v88 = NiRTTI_Cast((BSStringT *)dword_B3FAB0, v87);
                  v86 = sub_442770((int)v88, 1);
                  v98 = v86;
                }
                a31 = (float)(int)a27;
                v99 = (float)v98;
                v97 = (float)(int)a26;
                (*(void (__thiscall **)(int, _DWORD, _DWORD, int, FileFinder *, _DWORD, _DWORD, _DWORD, _DWORD, FileFinder *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a3 + 0x14))(
                  a3,
                  COERCE_UNSIGNED_INT64(a30),
                  HIDWORD(COERCE_UNSIGNED_INT64(a30)),
                  v86,
                  a26,
                  COERCE_UNSIGNED_INT64(v97 / a30),
                  HIDWORD(COERCE_UNSIGNED_INT64(v97 / a30)),
                  COERCE_UNSIGNED_INT64(v97 / v99),
                  HIDWORD(COERCE_UNSIGNED_INT64(v97 / v99)),
                  a27,
                  COERCE_UNSIGNED_INT64(a31 / a30),
                  HIDWORD(COERCE_UNSIGNED_INT64(a31 / a30)),
                  COERCE_UNSIGNED_INT64(a31 / v99),
                  HIDWORD(COERCE_UNSIGNED_INT64(a31 / v99)));
                nullsub_return0_0arg();
              }
            }
            v81->vtbl->super.Destroy((TESForm *)v81, 1);
            v89 = (int)a28 <= 0x14;
            a28 = (FileFinder *)((char *)a28 + 1);
            if ( !v89 )
            {
              sub_43FC20(TES, (char)a1);
              a28 = a1;
            }
            goto LABEL_51;
          }
        }
        else if ( vtbl == 0x24 )
        {
          v79 = (TESObjectREFR *)FormHeapAlloc(0x108u);
          STACK[0x704] = 1;
          if ( v79 != (TESObjectREFR *)a1 )
          {
            v78 = Creature_constr(v79);
            goto LABEL_35;
          }
        }
        else
        {
          v80 = (TESChildCELL *)FormHeapAlloc(0x58u);
          STACK[0x704] = 2;
          if ( v80 != (TESChildCELL *)a1 )
          {
            v78 = (TESObjectREFR *)TESObjectREFR_constr(v80);
            goto LABEL_35;
          }
        }
        v78 = 0;
        goto LABEL_35;
      }
    }
  }
LABEL_51:
  if ( a22 == 1 )
    JUMPOUT(0x44E7FA);
  JUMPOUT(0x44E8C3);
}
