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
  double v29; // st7
  DWORD (__stdcall *v30)(); // ebx
  PlayerCharacter *v31; // ebp
  DWORD v32; // eax
  UInt32 unk714; // ecx
  int v34; // edx
  void (__cdecl *v35)(int, int *, int, double *, int); // edx
  const char *v36; // ebx
  void (__cdecl *v37)(int, double *, int, int *, int); // edx
  void (__cdecl *v38)(int, double *, int, int *, int); // eax
  void (__cdecl *v39)(int, unsigned __int8 *, int, int *, int); // ecx
  void (__cdecl *v40)(int, char *, _DWORD, int *, int); // eax
  void (__cdecl *v41)(int, int *, int, int *, int); // ecx
  void (__cdecl *v42)(int, int *, int, int *, int); // edx
  void (__cdecl *v43)(int, char *, _DWORD, int *, int); // eax
  void (__cdecl *v44)(int, float *, int, int *, int); // ecx
  void (__cdecl *v45)(int, UInt32 *, int, int *, int); // edx
  void (__cdecl *v46)(int, struct _SYSTEMTIME *, int, int *, int); // eax
  void (__cdecl *v47)(int, float *, int, int *, int); // ecx
  NiPixelData *v48; // ebx
  _DWORD *v49; // esi
  int v50; // [esp+0h] [ebp-70h]
  unsigned __int8 v51; // [esp+17h] [ebp-59h] BYREF
  float v52; // [esp+18h] [ebp-58h] BYREF
  char *v53; // [esp+1Ch] [ebp-54h]
  NiPixelData *v54; // [esp+20h] [ebp-50h]
  unsigned int v55; // [esp+24h] [ebp-4Ch] BYREF
  unsigned int v56; // [esp+28h] [ebp-48h] BYREF
  int v57; // [esp+2Ch] [ebp-44h] BYREF
  int v58; // [esp+30h] [ebp-40h] BYREF
  double v59; // [esp+34h] [ebp-3Ch] BYREF
  char *Name; // [esp+3Ch] [ebp-34h]
  int Level; // [esp+40h] [ebp-30h] BYREF
  float v62; // [esp+44h] [ebp-2Ch] BYREF
  UInt32 v63; // [esp+48h] [ebp-28h] BYREF
  BSStringT v64; // [esp+4Ch] [ebp-24h] BYREF
  struct _SYSTEMTIME SystemTime; // [esp+54h] [ebp-1Ch] BYREF
  int v66; // [esp+6Ch] [ebp-4h]

  v11 = a9;
  v12 = (*(_DWORD *)(this + 0x18) & 0x200) == 0;
  v13 = this + 0x70;
  v14 = (unsigned __int8 *)(this + 0x71);
  *(_BYTE *)(this + 0x70) = 0;
  *(_BYTE *)(this + 0x71) = 0x7D;
  *(_BYTE *)(this + 0x7C) = 0x7D;
  if ( v12 )
  {
    v15 = *(void (__cdecl **)(int, const char *, int, int *, int))(v11 + 8);
    v57 = 1;
    v15(v11, "TES4SAVEGAME", 0xC, &v57, 1);
  }
  else
  {
    *(_DWORD *)(this + 0x90) += 0xC;
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 )
  {
    ++*(_DWORD *)(this + 0x90);
  }
  else
  {
    v16 = *(void (__cdecl **)(int, int, int, int *, int))(v11 + 8);
    v57 = 1;
    v16(v11, v13, 1, &v57, 1);
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 )
  {
    ++*(_DWORD *)(this + 0x90);
  }
  else
  {
    v57 = 1;
    (*(void (__cdecl **)(int, unsigned __int8 *, int, int *, int))(v11 + 8))(v11, v14, 1, &v57, 1);
  }
  if ( !*(_DWORD *)(this + 0xA4) )
  {
    GetSystemTime((LPSYSTEMTIME)(this + 0x94));
    *(_DWORD *)(this + 0xA4) = *v14;
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 )
  {
    *(_DWORD *)(this + 0x90) += 0x10;
  }
  else
  {
    v17 = *(void (__cdecl **)(int, int, int, int *, int))(v11 + 8);
    v57 = 1;
    v17(v11, this + 0x94, 0x10, &v57, 1);
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 )
  {
    *(_DWORD *)(this + 0x90) += 4;
  }
  else
  {
    v18 = *(void (__cdecl **)(int, int, int, int *, int))(v11 + 8);
    v57 = 1;
    v18(v11, this + 0xA4, 4, &v57, 1);
  }
  Name = TESObjectREFR_GetName((TESObjectREFR *)TESDataHandler_g_PlayerRef);
  v19 = &Name[strlen(Name) + 1];
  v20 = (Actor *)TESDataHandler_g_PlayerRef;
  v51 = (_BYTE)v19 - (_BYTE)Name;
  Level = (unsigned __int16)Actor_GetLevel(v20, v50);
  v64.m_data = 0;
  v64.m_dataLen = 0;
  v64.m_bufLen = 0;
  v21 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
  v66 = 0;
  GetTeleportCellName(v21, &v64);
  m_data = v64.m_data;
  v53 = v64.m_data;
  if ( !v64.m_data )
  {
    ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
    m_data = (char *)ParentCell->vtbl->GetEditorName(ParentCell);
    v53 = m_data;
  }
  LOBYTE(a9) = 0;
  if ( m_data )
    LOBYTE(a9) = strlen(m_data) + 1;
  v59 = TimeGlobals_GetGameHour(&TimeGlobals) / dbl_A2F920;
  v62 = COERCE_FLOAT(TimeGlobals_GetGameDaysPassed(&TimeGlobals));
  v24 = (double)SLODWORD(v62);
  if ( v62 < 0.0 )
    v24 = v24 + flt_A2FC78;
  v62 = v24 + v59;
  GetLocalTime(&SystemTime);
  v12 = (*(_DWORD *)(this + 0x18) & 0x200) == 0;
  v52 = 0.0;
  v55 = 0x100;
  v56 = 0x100;
  v54 = 0;
  v57 = 0;
  if ( v12 )
  {
    v25 = nullsub_returnTrue_0arg();
    sub_432890((volatile LONG *)ioManager);
    v26 = Screenshot_RenderTexture(a3, v25, a4, &v55, &v56);
    v27 = ioManager;
    v28 = v26;
    v54 = v26;
    sub_432860((volatile LONG *)v27);
    v29 = nullsub_returnTrue_0arg();
    if ( v28 )
    {
      v57 = *(_DWORD *)(*((_DWORD *)v28 + 0x17) + 4) - **((_DWORD **)v28 + 0x17);
      LODWORD(v52) = v57 + 8;
    }
  }
  else
  {
    v52 = (double)nHeight / (double)nWidth;
    v29 = v52 * dbl_A3B1B8;
    LODWORD(v52) = 0x300 * Double_To_SInt32(v29) + 8;
  }
  v30 = GetTickCount;
  v31 = TESDataHandler_g_PlayerRef;
  v31->unk714 += GetTickCount() - v31->TickCount;
  v32 = v30();
  unk714 = v31->unk714;
  v31->TickCount = v32;
  v63 = unk714;
  v34 = *(_DWORD *)(this + 0x18) >> 9;
  v12 = (*(_DWORD *)(this + 0x18) & 0x200) == 0;
  v58 = v51 + LODWORD(v52) + (unsigned __int8)a9 + 0x24;
  if ( v12 )
  {
    v35 = *(void (__cdecl **)(int, int *, int, double *, int))(v11 + 8);
    LODWORD(v59) = 1;
    v35(v11, &v58, 4, &v59, 1);
  }
  else
  {
    *(_DWORD *)(this + 0x90) += 4;
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0
    || (v36 = (const char *)Str) != 0 && (strstr((const char *)Str, "quicksave") || strstr(v36, "autosave")) )
  {
    v12 = (*(_DWORD *)(this + 0x18) & 0x200) == 0;
    LODWORD(v59) = 0;
    if ( v12 )
    {
      v38 = *(void (__cdecl **)(int, double *, int, int *, int))(v11 + 8);
      Str = 1;
      v38(v11, &v59, 4, &Str, 1);
    }
    else
    {
      *(_DWORD *)(this + 0x90) += 4;
    }
  }
  else
  {
    if ( !*(_DWORD *)(this + 0x88) )
      sub_464320((_DWORD *)this, v29, st4_0, a3, a4, a5, a6, a7, a8, v34);
    v12 = (*(_DWORD *)(this + 0x18) & 0x200) == 0;
    LODWORD(v59) = *(_DWORD *)(this + 0x88);
    if ( v12 )
    {
      v37 = *(void (__cdecl **)(int, double *, int, int *, int))(v11 + 8);
      Str = 1;
      v37(v11, &v59, 4, &Str, 1);
    }
    else
    {
      *(_DWORD *)(this + 0x90) += 4;
    }
    ++*(_DWORD *)(this + 0x88);
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 )
  {
    ++*(_DWORD *)(this + 0x90);
  }
  else
  {
    v39 = *(void (__cdecl **)(int, unsigned __int8 *, int, int *, int))(v11 + 8);
    Str = 1;
    v39(v11, &v51, 1, &Str, 1);
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 )
  {
    *(_DWORD *)(this + 0x90) += v51;
  }
  else
  {
    v40 = *(void (__cdecl **)(int, char *, _DWORD, int *, int))(v11 + 8);
    Str = 1;
    v40(v11, Name, v51, &Str, 1);
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 )
  {
    *(_DWORD *)(this + 0x90) += 2;
  }
  else
  {
    v41 = *(void (__cdecl **)(int, int *, int, int *, int))(v11 + 8);
    Str = 1;
    v41(v11, &Level, 2, &Str, 1);
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 )
  {
    ++*(_DWORD *)(this + 0x90);
  }
  else
  {
    v42 = *(void (__cdecl **)(int, int *, int, int *, int))(v11 + 8);
    Str = 1;
    v42(v11, &a9, 1, &Str, 1);
  }
  if ( v53 )
  {
    if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 )
    {
      *(_DWORD *)(this + 0x90) += (unsigned __int8)a9;
    }
    else
    {
      v43 = *(void (__cdecl **)(int, char *, _DWORD, int *, int))(v11 + 8);
      Str = 1;
      v43(v11, v53, (unsigned __int8)a9, &Str, 1);
    }
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 )
  {
    *(_DWORD *)(this + 0x90) += 4;
  }
  else
  {
    v44 = *(void (__cdecl **)(int, float *, int, int *, int))(v11 + 8);
    Str = 1;
    v44(v11, &v62, 4, &Str, 1);
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 )
  {
    *(_DWORD *)(this + 0x90) += 4;
  }
  else
  {
    v45 = *(void (__cdecl **)(int, UInt32 *, int, int *, int))(v11 + 8);
    Str = 1;
    v45(v11, &v63, 4, &Str, 1);
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 )
  {
    *(_DWORD *)(this + 0x90) += 0x10;
  }
  else
  {
    v46 = *(void (__cdecl **)(int, struct _SYSTEMTIME *, int, int *, int))(v11 + 8);
    Str = 1;
    v46(v11, &SystemTime, 0x10, &Str, 1);
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 )
  {
    *(_DWORD *)(this + 0x90) += 4;
  }
  else
  {
    v47 = *(void (__cdecl **)(int, float *, int, int *, int))(v11 + 8);
    Str = 1;
    v47(v11, &v52, 4, &Str, 1);
  }
  if ( (*(_DWORD *)(this + 0x18) & 0x200) != 0 )
  {
    *(_DWORD *)(this + 0x90) += LODWORD(v52);
  }
  else
  {
    v48 = v54;
    if ( v54 )
    {
      sub_45BAB0((_DWORD *)this, v11, (int)&v55, 4);
      sub_45BAB0((_DWORD *)this, v11, (int)&v56, 4);
      sub_45BAB0((_DWORD *)this, v11, *((_DWORD *)v48 + 0x14) + **((_DWORD **)v48 + 0x17), v57);
      (**(void (__thiscall ***)(NiPixelData *, int))v48)(v48, 1);
    }
  }
  v49 = *(_DWORD **)(this + 0x40);
  if ( v49 )
    sub_4531B0(v49, 1, v58, "Save Game Header");
  FormHeapFree((unsigned int)v64.m_data);
}
