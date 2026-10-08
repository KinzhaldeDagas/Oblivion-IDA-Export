void __userpurge def_44E8D5(
        FileFinder *a1@<ebx>,
        int ebp0@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        double a5@<st2>,
        double a6@<st1>,
        double a7@<st0>,
        double a8@<st7>,
        double a9@<st6>,
        double a10@<st5>,
        double a11@<st4>,
        double a12@<st3>,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        TESForm *a2,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        FileFinder *a31,
        FileFinder *a32,
        int a33,
        int Drive,
        float a35,
        float a36,
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
        int FileName_104)
{
  FileFinder *v68; // eax
  char *v69; // eax
  _BYTE *v70; // edx
  char v71; // cl
  const char *v72; // eax
  int v73; // eax
  char v74; // cl
  int v75; // eax
  char v76; // cl
  int v77; // eax
  const char *v78; // eax
  int v79; // eax
  const char *v80; // eax
  TESForm::FormType type; // al
  TESObjectREFR *v82; // eax
  TESObjectREFR *v83; // eax
  TESObjectREFR *v84; // eax
  TESChildCELL *v85; // eax
  TESObjectREFR *v86; // esi
  NiNode *v87; // eax
  TESForm::FormType v88; // al
  NiNode *(__thiscall *GetNiNode)(TESObjectREFR *); // eax
  int v90; // eax
  int v91; // eax
  NiObject *v92; // eax
  NiObject *v93; // eax
  const char *v95; // eax
  const char *v96; // [esp+3Ch] [ebp-8h]
  const char *v97; // [esp+3Ch] [ebp-8h]
  int v98; // [esp+40h] [ebp-4h]
  const char *v99; // [esp+40h] [ebp-4h]
  const char *v100; // [esp+40h] [ebp-4h]
  int v101; // [esp+40h] [ebp-4h]
  float v102; // [esp+7Ch] [ebp+38h]
  int v103; // [esp+84h] [ebp+40h]
  float v104; // [esp+84h] [ebp+40h]

  if ( HIBYTE(a22) == (_BYTE)a1 ) /*0x44e909*/
  {
    LOWORD(v68) = *(_WORD *)(a3 + 8); /*0x44e90f*/
    if ( (_WORD)v68 == 0xFFFF ) /*0x44e917*/
    {
      v69 = *(char **)(a3 + 4); /*0x44e919*/
      v70 = v69 + 1; /*0x44e91c*/
      do /*0x44e927*/
        v71 = *v69++; /*0x44e920*/
      while ( v71 != (_BYTE)a1 ); /*0x44e927*/
      v68 = (FileFinder *)(v69 - v70); /*0x44e929*/
    }
    else
    {
      v68 = (FileFinder *)(unsigned __int16)v68; /*0x44e92d*/
    }
    if ( v68 == a1 ) /*0x44e932*/
    {
      if ( a23 != 0xE && a23 != 8 && byte_B0559C != (_BYTE)a1 ) /*0x44ed9f*/
      {
        v95 = (const char *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a4 + 0xD4))( /*0x44edab*/
                              a4,
                              a7,
                              a6,
                              a5);
        PrintError("No model selected for %s \"%s\".", *(const char **)(4 * a23 + 0xB081D0), v95); /*0x44edbf*/
      }
    }
    else
    {
      v98 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x14))(a3); /*0x44e946*/
      if ( a23 == 0xC ) /*0x44e94b*/
        _sprintf(&FileName, "Trees\\%s", v98); /*0x44e952*/
      else
        _sprintf(&FileName, "Meshes\\%s", v98); /*0x44e95a*/
      if ( MEMORY[0xB33A04] == a1 /*0x44e97e*/
        || (FileFinder *)MEMORY[0xB33A04]->vtbl->FindFile(
                           MEMORY[0xB33A04],
                           &FileName,
                           (UInt32)a1,
                           (UInt32)a1,
                           0xFFFFFFFF) == a1 )
      {
        if ( byte_B05594 != (_BYTE)a1 ) /*0x44e98a*/
        {
          v72 = (const char *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a3 + 0x14))( /*0x44e9b4*/
                                a3,
                                a7,
                                a6,
                                a5);
          _splitpath(v72, (char *)&Drive, (char *)&STACK[0x1B0], (char *)&STACK[0x4C0], (char *)&STACK[0x3C0]); /*0x44e9b7*/
          _sprintf(&FileName, (const char *)&off_A386A8, &STACK[0x4C0]); /*0x44e9ce*/
          v73 = 0; /*0x44e9d6*/
          do /*0x44e9f0*/
          {
            v74 = *(&FileName + v73); /*0x44e9e0*/
            *((_BYTE *)&STACK[0x4C0] + v73++) = v74; /*0x44e9e4*/
          }
          while ( v74 != (_BYTE)a1 ); /*0x44e9f0*/
          _sprintf(&FileName, "Meshes\\%s", (const char *)&STACK[0x1B0]); /*0x44ea04*/
          v75 = 0; /*0x44ea0c*/
          do /*0x44ea20*/
          {
            v76 = *(&FileName + v75); /*0x44ea10*/
            *((_BYTE *)&STACK[0x1B0] + v75++) = v76; /*0x44ea14*/
          }
          while ( v76 != (_BYTE)a1 ); /*0x44ea20*/
          sub_9853B2( /*0x44ea44*/
            (int)&FileName,
            (int)&Drive,
            (unsigned __int8 *)&STACK[0x1B0],
            (int)&STACK[0x4C0],
            (int)&STACK[0x3C0]);
          if ( MEMORY[0xB33A04] == a1 /*0x44ea68*/
            || (FileFinder *)MEMORY[0xB33A04]->vtbl->FindFile(
                               MEMORY[0xB33A04],
                               &FileName,
                               (UInt32)a1,
                               (UInt32)a1,
                               0xFFFFFFFF) == a1 )
          {
            v77 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0xD4))(a4); /*0x44ea74*/
            v78 = (const char *)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a3 + 0x14))( /*0x44ea8a*/
                                  a3,
                                  *(_DWORD *)(4 * a23 + 0xB081D0),
                                  v77);
            PrintError("Model \"%s\" not found for %s \"%s\".", v78, v96, v99); /*0x44ea92*/
          }
          else
          {
            sub_448E20(&FileName); /*0x44eaa8*/
          }
        }
        goto LABEL_51; /*0x44ea9a*/
      }
      if ( a2 != (TESForm *)a1 /*0x44eacf*/
        && (byte_B055A4 != (_BYTE)a1 || *(_BYTE *)(ebp0 + 8) != (_BYTE)a1 || byte_B0558C != (_BYTE)a1) )
      {
        v79 = ((int (__usercall *)@<eax>(TESForm *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a2->vtbl->GetEditorName)( /*0x44eae3*/
                a2,
                a7,
                a6,
                a5);
        v80 = (const char *)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a3 + 0x14))( /*0x44eaf9*/
                              a3,
                              *(_DWORD *)(4 * a23 + 0xB081D0),
                              v79);
        _sprintf((char *)&STACK[0x2B8], "Loading \"%s\" for %s \"%s\".", v80, v97, v100); /*0x44eb09*/
        Interface_ConsolePrint((char *)&STACK[0x2B8]); /*0x44eb16*/
        Input_CheckScreenshotHotkey((InputGlobal *)MEMORY[0xB33398], a5, a6, a7, a8, a9, a10, a11, a12); /*0x44eb24*/
        type = a2->member.type; /*0x44eb29*/
        if ( type == kFormType_NPC ) /*0x44eb2e*/
        {
          v82 = (TESObjectREFR *)FormHeapAlloc(0x10Cu); /*0x44eb35*/
          STACK[0x704] = (unsigned int)a1; /*0x44eb43*/
          if ( v82 != (TESObjectREFR *)a1 ) /*0x44eb4a*/
          {
            v83 = Character_constr(v82); /*0x44eb4e*/
LABEL_35:
            v86 = v83; /*0x44ebaa*/
            STACK[0x704] = 0xFFFFFFFF; /*0x44ebb3*/
            TESObjectREFR_SetBaseForm(v83, a2); /*0x44ebbe*/
            if ( (unsigned int)a2->member.type - 0x23 > 1 ) /*0x44ebd1*/
            {
              v86->vtbl->GenerateNiNode(v86); /*0x44ec0e*/
            }
            else if ( byte_B0558C == (_BYTE)a1 || byte_B055A4 != (_BYTE)a1 || *(_BYTE *)(ebp0 + 8) != (_BYTE)a1 ) /*0x44ebe6*/
            {
              sub_438060((_DWORD **)MEMORY[0xB33A1C], v86, (int)a1); /*0x44ebf0*/
              sub_434020(MEMORY[0xB33A10], a5, a6, a7, 5); /*0x44ebfd*/
            }
            if ( v86->vtbl->GetNiNode(v86) ) /*0x44ec1a*/
            {
              v101 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x14))(a3); /*0x44ec2b*/
              v87 = v86->vtbl->GetNiNode(v86); /*0x44ec34*/
              sub_44CDF0(v87, v101); /*0x44ec3b*/
            }
            if ( byte_B0558C != (_BYTE)a1 ) /*0x44ec46*/
            {
              v88 = a2->member.type; /*0x44ec50*/
              if ( v88 != kFormType_NPC && v88 != kFormType_Creature ) /*0x44ec5d*/
              {
                GetNiNode = v86->vtbl->GetNiNode; /*0x44ec6f*/
                a31 = a1; /*0x44ec77*/
                a32 = a1; /*0x44ec7b*/
                v90 = (int)GetNiNode(v86); /*0x44ec7f*/
                sub_5367B0(v90, &a31, &a32); /*0x44ec82*/
                v91 = 0; /*0x44ec8a*/
                a35 = *(float *)(a3 + 0xC); /*0x44ec8c*/
                v103 = 0; /*0x44ec99*/
                if ( MEMORY[0xB333A0] != (TES *)a1 ) /*0x44ec9d*/
                {
                  v92 = (NiObject *)v86->vtbl->GetNiNode(v86); /*0x44ecab*/
                  v93 = NiRTTI_Cast((BSStringT *)&parent, v92); /*0x44ecb3*/
                  v91 = sub_442770((int)v93, 1); /*0x44ecc2*/
                  v103 = v91; /*0x44ecc7*/
                }
                a36 = (float)(int)a32; /*0x44ecda*/
                v104 = (float)v103; /*0x44ece2*/
                v102 = (float)(int)a31; /*0x44ecea*/
                (*(void (__thiscall **)(int, _DWORD, _DWORD, int, FileFinder *, _DWORD, _DWORD, _DWORD, _DWORD, FileFinder *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a3 + 0x14))( /*0x44ed35*/
                  a3,
                  COERCE_UNSIGNED_INT64(a35),
                  HIDWORD(COERCE_UNSIGNED_INT64(a35)),
                  v91,
                  a31,
                  COERCE_UNSIGNED_INT64(v102 / a35),
                  HIDWORD(COERCE_UNSIGNED_INT64(v102 / a35)),
                  COERCE_UNSIGNED_INT64(v102 / v104),
                  HIDWORD(COERCE_UNSIGNED_INT64(v102 / v104)),
                  a32,
                  COERCE_UNSIGNED_INT64(a36 / a35),
                  HIDWORD(COERCE_UNSIGNED_INT64(a36 / a35)),
                  COERCE_UNSIGNED_INT64(a36 / v104),
                  HIDWORD(COERCE_UNSIGNED_INT64(a36 / v104)));
                nullsub_return0_0arg(); /*0x44ed42*/
              }
            }
            v86->vtbl->super.Destroy((TESForm *)v86, 1); /*0x44ed53*/
            if ( a33++ > 0x14 ) /*0x44ed5e*/
            {
              sub_43FC20(MEMORY[0xB333A0], (char)a1); /*0x44ed6e*/
              a33 = (int)a1; /*0x44ed73*/
            }
            goto LABEL_51; /*0x44ed73*/
          }
        }
        else if ( type == kFormType_Creature ) /*0x44eb57*/
        {
          v84 = (TESObjectREFR *)FormHeapAlloc(0x108u); /*0x44eb5e*/
          STACK[0x704] = 1; /*0x44eb6c*/
          if ( v84 != (TESObjectREFR *)a1 ) /*0x44eb77*/
          {
            v83 = Creature_constr(v84); /*0x44eb7b*/
            goto LABEL_35; /*0x44eb80*/
          }
        }
        else
        {
          v85 = (TESChildCELL *)FormHeapAlloc(0x58u); /*0x44eb84*/
          STACK[0x704] = 2; /*0x44eb92*/
          if ( v85 != (TESChildCELL *)a1 ) /*0x44eb9d*/
          {
            v83 = (TESObjectREFR *)TESObjectREFR_constr(v85); /*0x44eba1*/
            goto LABEL_35; /*0x44eba6*/
          }
        }
        v83 = 0; /*0x44eba8*/
        goto LABEL_35; /*0x44eba8*/
      }
    }
  }
LABEL_51:
  if ( a27 == 1 ) /*0x44ed80*/
    JUMPOUT(0x44E7FA); /*0x44e7fa*/
  JUMPOUT(0x44E8C3); /*0x44e8c3*/
}
