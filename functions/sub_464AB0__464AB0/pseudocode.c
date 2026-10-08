void __userpurge sub_464AB0(
        int this@<ecx>,
        double st4_0@<st3>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st4>,
        double a6@<st7>,
        double a7@<st6>,
        double a8@<st5>,
        int a9,
        int Str)
{
  int v11; // edi
  bool v12; // zf
  int v13; // ebx
  unsigned __int8 *v14; // ebp
  void (__cdecl *v15)(int, const char *, int, int *, int); // edx
  void (__cdecl *v16)(int, int, int, int *, int); // edx
  void (__cdecl *v17)(int, int, int, int *, int); // eax
  void (__cdecl *v18)(int, int, int, int *, int); // eax
  const char *v19; // eax
  Actor *v20; // ecx
  TESObjectREFR *v21; // ecx
  char *m_data; // eax
  TESObjectCELL *ParentCell; // eax
  double v24; // st7
  double v25; // st7
  NiPixelData *v26; // eax
  IOManager *v27; // ecx
  NiPixelData *v28; // ebp
  DWORD (__stdcall *v29)(); // ebx
  PlayerCharacter *v30; // ebp
  DWORD v31; // eax
  UInt32 unk714; // ecx
  int v33; // edx
  void (__cdecl *v34)(int, int *, int, double *, int); // edx
  const char *v35; // ebx
  void (__cdecl *v36)(int, double *, int, int *, int); // edx
  void (__cdecl *v37)(int, double *, int, int *, int); // eax
  void (__cdecl *v38)(int, unsigned __int8 *, int, int *, int); // ecx
  void (__cdecl *v39)(int, char *, _DWORD, int *, int); // eax
  void (__cdecl *v40)(int, int *, int, int *, int); // ecx
  void (__cdecl *v41)(int, int *, int, int *, int); // edx
  void (__cdecl *v42)(int, char *, _DWORD, int *, int); // eax
  void (__cdecl *v43)(int, float *, int, int *, int); // ecx
  void (__cdecl *v44)(int, UInt32 *, int, int *, int); // edx
  void (__cdecl *v45)(int, struct _SYSTEMTIME *, int, int *, int); // eax
  void (__cdecl *v46)(int, float *, int, int *, int); // ecx
  NiPixelData *v47; // ebx
  _DWORD *v48; // esi
  unsigned __int8 v49; // [esp+17h] [ebp-59h] BYREF
  float v50; // [esp+18h] [ebp-58h] BYREF
  char *v51; // [esp+1Ch] [ebp-54h]
  NiPixelData *v52; // [esp+20h] [ebp-50h]
  unsigned int v53; // [esp+24h] [ebp-4Ch] BYREF
  unsigned int v54; // [esp+28h] [ebp-48h] BYREF
  int v55; // [esp+2Ch] [ebp-44h] BYREF
  int v56; // [esp+30h] [ebp-40h] BYREF
  double v57; // [esp+34h] [ebp-3Ch] BYREF
  char *Name; // [esp+3Ch] [ebp-34h]
  int Level; // [esp+40h] [ebp-30h] BYREF
  float v60; // [esp+44h] [ebp-2Ch] BYREF
  UInt32 v61; // [esp+48h] [ebp-28h] BYREF
  BSStringT v62; // [esp+4Ch] [ebp-24h] BYREF
  struct _SYSTEMTIME SystemTime; // [esp+54h] [ebp-1Ch] BYREF
  int v64; // [esp+6Ch] [ebp-4h]

  v11 = a9; /*0x464adc*/
  v12 = (*(_DWORD *)(this + 0x18) & 0x200) == 0; /*0x464ae3*/
  v13 = this + 0x70; /*0x464ae5*/
  v14 = (unsigned __int8 *)(this + 0x71); /*0x464ae8*/
  *(_BYTE *)(this + 0x70) = 0; /*0x464aeb*/
  *(_BYTE *)(this + 0x71) = 0x7D; /*0x464aee*/
  *(_BYTE *)(this + 0x7C) = 0x7D; /*0x464af2*/
  if ( v12 ) /*0x464af6*/
  {
    v15 = *(void (__cdecl **)(int, const char *, int, int *, int))(v11 + 8); /*0x464b01*/
    v55 = 1; /*0x464b13*/
    v15(v11, "TES4SAVEGAME", 0xC, &v55, 1); /*0x464b1b*/
  }
  else
  {
    *(_DWORD *)(this + 0x90) += 0xC; /*0x464af8*/
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 ) /*0x464b28*/
  {
    ++*(_DWORD *)(this + 0x90); /*0x464b2f*/
  }
  else
  {
    v16 = *(void (__cdecl **)(int, int, int, int *, int))(v11 + 8); /*0x464b37*/
    v55 = 1; /*0x464b45*/
    v16(v11, v13, 1, &v55, 1); /*0x464b4d*/
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 ) /*0x464b60*/
  {
    ++*(_DWORD *)(this + 0x90); /*0x464b62*/
  }
  else
  {
    v55 = 1; /*0x464b71*/
    (*(void (__cdecl **)(int, unsigned __int8 *, int, int *, int))(v11 + 8))(v11, v14, 1, &v55, 1); /*0x464b7a*/
  }
  if ( !*(_DWORD *)(this + 0xA4) ) /*0x464b7f*/
  {
    GetSystemTime((LPSYSTEMTIME)(this + 0x94)); /*0x464b95*/
    *(_DWORD *)(this + 0xA4) = *v14; /*0x464b9f*/
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 ) /*0x464ba9*/
  {
    *(_DWORD *)(this + 0x90) += 0x10; /*0x464bab*/
  }
  else
  {
    v17 = *(void (__cdecl **)(int, int, int, int *, int))(v11 + 8); /*0x464bb4*/
    v55 = 1; /*0x464bc8*/
    v17(v11, this + 0x94, 0x10, &v55, 1); /*0x464bd0*/
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 ) /*0x464bde*/
  {
    *(_DWORD *)(this + 0x90) += 4; /*0x464be0*/
  }
  else
  {
    v18 = *(void (__cdecl **)(int, int, int, int *, int))(v11 + 8); /*0x464be9*/
    v55 = 1; /*0x464bf7*/
    v18(v11, this + 0xA4, 4, &v55, 1); /*0x464bff*/
  }
  Name = TESObjectREFR_GetName((TESObjectREFR *)reference); /*0x464c0f*/
  v19 = &Name[strlen(Name) + 1]; /*0x464c1d*/
  v20 = (Actor *)reference; /*0x464c1f*/
  v49 = (_BYTE)v19 - (_BYTE)Name; /*0x464c29*/
  Level = (unsigned __int16)Actor_GetLevel(v20); /*0x464c37*/
  v62.m_data = 0; /*0x464c3b*/
  v62.m_dataLen = 0; /*0x464c3f*/
  v62.m_bufLen = 0; /*0x464c44*/
  v21 = (TESObjectREFR *)reference; /*0x464c49*/
  v64 = 0; /*0x464c54*/
  GetTeleportCellName(v21, &v62); /*0x464c58*/
  m_data = v62.m_data; /*0x464c5d*/
  v51 = v62.m_data; /*0x464c63*/
  if ( !v62.m_data ) /*0x464c67*/
  {
    ParentCell = Shared_GetDwordAtOffset40((TESObjectREFR *)reference); /*0x464c6f*/
    m_data = (char *)ParentCell->vtbl->GetEditorName(ParentCell); /*0x464c7e*/
    v51 = m_data; /*0x464c80*/
  }
  LOBYTE(a9) = 0; /*0x464c86*/
  if ( m_data ) /*0x464c8b*/
    LOBYTE(a9) = strlen(m_data) + 1; /*0x464c9d*/
  v57 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]) / dbl_A2F920; /*0x464cb6*/
  v60 = COERCE_FLOAT(TimeGlobals_GetGameDaysPassed(&MEMORY[0xB332E0])); /*0x464cc1*/
  v24 = (double)SLODWORD(v60); /*0x464cc5*/
  if ( v60 < 0.0 ) /*0x464cc9*/
    v24 = v24 + flt_A2FC78; /*0x464ccb*/
  v25 = v24 + v57; /*0x464cd1*/
  v60 = v25; /*0x464cda*/
  GetLocalTime(&SystemTime); /*0x464cde*/
  v12 = (*(_DWORD *)(this + 0x18) & 0x200) == 0; /*0x464cef*/
  v50 = 0.0; /*0x464cf2*/
  v53 = 0x100; /*0x464cf6*/
  v54 = 0x100; /*0x464cfa*/
  v52 = 0; /*0x464cfe*/
  v55 = 0; /*0x464d02*/
  if ( v12 ) /*0x464d06*/
  {
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x464d0a*/
    sub_432890((volatile LONG *)MEMORY[0xB33A10]); /*0x464d18*/
    v26 = Screenshot_RenderTexture(a3, v25, a4, &v53, &v54); /*0x464d27*/
    v27 = MEMORY[0xB33A10]; /*0x464d2c*/
    v28 = v26; /*0x464d32*/
    v52 = v26; /*0x464d37*/
    sub_432860((volatile LONG *)v27); /*0x464d3b*/
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x464d42*/
    if ( v28 ) /*0x464d4c*/
    {
      v55 = *(_DWORD *)(*((_DWORD *)v28 + 0x17) + 4) - **((_DWORD **)v28 + 0x17); /*0x464d58*/
      LODWORD(v50) = v55 + 8; /*0x464d5f*/
    }
  }
  else
  {
    v50 = (double)nHeight / (double)nWidth; /*0x464d71*/
    v25 = v50 * dbl_A3B1B8; /*0x464d79*/
    LODWORD(v50) = 0x300 * Double_To_SInt32(v25) + 8; /*0x464d8d*/
  }
  v29 = GetTickCount; /*0x464d91*/
  v30 = reference; /*0x464d97*/
  v30->unk714 += GetTickCount() - v30->TickCount; /*0x464da5*/
  v31 = v29(); /*0x464dab*/
  unk714 = v30->unk714; /*0x464dad*/
  v30->TickCount = v31; /*0x464db3*/
  v61 = unk714; /*0x464dc7*/
  v33 = *(_DWORD *)(this + 0x18) >> 9; /*0x464dd2*/
  v12 = (*(_DWORD *)(this + 0x18) & 0x200) == 0; /*0x464dd5*/
  v56 = v49 + LODWORD(v50) + (unsigned __int8)a9 + 0x24; /*0x464dd8*/
  if ( v12 ) /*0x464de1*/
  {
    v34 = *(void (__cdecl **)(int, int *, int, double *, int))(v11 + 8); /*0x464dec*/
    LODWORD(v57) = 1; /*0x464dfd*/
    v34(v11, &v56, 4, &v57, 1); /*0x464e01*/
  }
  else
  {
    *(_DWORD *)(this + 0x90) += 4; /*0x464de3*/
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 /*0x464e34*/
    || (v35 = (const char *)Str) != 0 && (strstr((const char *)Str, "quicksave") || strstr(v35, "autosave")) )
  {
    v12 = (*(_DWORD *)(this + 0x18) & 0x200) == 0; /*0x464e9f*/
    LODWORD(v57) = 0; /*0x464ea1*/
    if ( v12 ) /*0x464ea9*/
    {
      v37 = *(void (__cdecl **)(int, double *, int, int *, int))(v11 + 8); /*0x464eb4*/
      Str = 1; /*0x464ec5*/
      v37(v11, &v57, 4, &Str, 1); /*0x464ecc*/
    }
    else
    {
      *(_DWORD *)(this + 0x90) += 4; /*0x464eab*/
    }
  }
  else
  {
    if ( !*(_DWORD *)(this + 0x88) ) /*0x464e40*/
      sub_464320((_DWORD *)this, v25, st4_0, a3, a4, a5, a6, a7, a8, v33); /*0x464e4b*/
    v12 = (*(_DWORD *)(this + 0x18) & 0x200) == 0; /*0x464e5c*/
    LODWORD(v57) = *(_DWORD *)(this + 0x88); /*0x464e5f*/
    if ( v12 ) /*0x464e63*/
    {
      v36 = *(void (__cdecl **)(int, double *, int, int *, int))(v11 + 8); /*0x464e74*/
      Str = 1; /*0x464e85*/
      v36(v11, &v57, 4, &Str, 1); /*0x464e8c*/
    }
    else
    {
      *(_DWORD *)(this + 0x90) += 4; /*0x464e65*/
    }
    ++*(_DWORD *)(this + 0x88); /*0x464e6c*/
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 ) /*0x464eda*/
  {
    ++*(_DWORD *)(this + 0x90); /*0x464edc*/
  }
  else
  {
    v38 = *(void (__cdecl **)(int, unsigned __int8 *, int, int *, int))(v11 + 8); /*0x464ee4*/
    Str = 1; /*0x464ef4*/
    v38(v11, &v49, 1, &Str, 1); /*0x464efb*/
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 ) /*0x464f0e*/
  {
    *(_DWORD *)(this + 0x90) += v49; /*0x464f10*/
  }
  else
  {
    v39 = *(void (__cdecl **)(int, char *, _DWORD, int *, int))(v11 + 8); /*0x464f23*/
    Str = 1; /*0x464f28*/
    v39(v11, Name, v49, &Str, 1); /*0x464f2f*/
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 ) /*0x464f3d*/
  {
    *(_DWORD *)(this + 0x90) += 2; /*0x464f3f*/
  }
  else
  {
    v40 = *(void (__cdecl **)(int, int *, int, int *, int))(v11 + 8); /*0x464f48*/
    Str = 1; /*0x464f59*/
    v40(v11, &Level, 2, &Str, 1); /*0x464f60*/
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 ) /*0x464f6e*/
  {
    ++*(_DWORD *)(this + 0x90); /*0x464f70*/
  }
  else
  {
    v41 = *(void (__cdecl **)(int, int *, int, int *, int))(v11 + 8); /*0x464f78*/
    Str = 1; /*0x464f8b*/
    v41(v11, &a9, 1, &Str, 1); /*0x464f92*/
  }
  if ( v51 ) /*0x464f9d*/
  {
    if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 ) /*0x464fad*/
    {
      *(_DWORD *)(this + 0x90) += (unsigned __int8)a9; /*0x464faf*/
    }
    else
    {
      v42 = *(void (__cdecl **)(int, char *, _DWORD, int *, int))(v11 + 8); /*0x464fbe*/
      Str = 1; /*0x464fc3*/
      v42(v11, v51, (unsigned __int8)a9, &Str, 1); /*0x464fca*/
    }
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 ) /*0x464fd8*/
  {
    *(_DWORD *)(this + 0x90) += 4; /*0x464fda*/
  }
  else
  {
    v43 = *(void (__cdecl **)(int, float *, int, int *, int))(v11 + 8); /*0x464fe3*/
    Str = 1; /*0x464ff4*/
    v43(v11, &v60, 4, &Str, 1); /*0x464ffb*/
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 ) /*0x465009*/
  {
    *(_DWORD *)(this + 0x90) += 4; /*0x46500b*/
  }
  else
  {
    v44 = *(void (__cdecl **)(int, UInt32 *, int, int *, int))(v11 + 8); /*0x465014*/
    Str = 1; /*0x465025*/
    v44(v11, &v61, 4, &Str, 1); /*0x46502c*/
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 ) /*0x465039*/
  {
    *(_DWORD *)(this + 0x90) += 0x10; /*0x46503b*/
  }
  else
  {
    v45 = *(void (__cdecl **)(int, struct _SYSTEMTIME *, int, int *, int))(v11 + 8); /*0x465044*/
    Str = 1; /*0x465055*/
    v45(v11, &SystemTime, 0x10, &Str, 1); /*0x46505c*/
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 ) /*0x46506a*/
  {
    *(_DWORD *)(this + 0x90) += 4; /*0x46506c*/
  }
  else
  {
    v46 = *(void (__cdecl **)(int, float *, int, int *, int))(v11 + 8); /*0x465075*/
    Str = 1; /*0x465086*/
    v46(v11, &v50, 4, &Str, 1); /*0x46508d*/
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 ) /*0x46509b*/
  {
    *(_DWORD *)(this + 0x90) += LODWORD(v50); /*0x4650e8*/
  }
  else
  {
    v47 = v52; /*0x46509d*/
    if ( v52 ) /*0x4650a3*/
    {
      sub_45BAB0((_DWORD *)this, v11, (int)&v53, 4); /*0x4650af*/
      sub_45BAB0((_DWORD *)this, v11, (int)&v54, 4); /*0x4650be*/
      sub_45BAB0((_DWORD *)this, v11, *((_DWORD *)v47 + 0x14) + **((_DWORD **)v47 + 0x17), v55); /*0x4650d4*/
      (**(void (__thiscall ***)(NiPixelData *, int))v47)(v47, 1); /*0x4650e0*/
    }
  }
  v48 = *(_DWORD **)(this + 0x40); /*0x4650ee*/
  if ( v48 ) /*0x4650f3*/
    sub_4531B0(v48, 1, v56, "Save Game Header"); /*0x465101*/
  FormHeapFree((unsigned int)v62.m_data); /*0x46510b*/
}
