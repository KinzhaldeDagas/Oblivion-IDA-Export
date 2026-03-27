void __userpurge sub_475590(
        AnimSequenceSingle *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        int a4@<ebp>,
        float a5)
{
  UInt32 *v7; // edi
  TESForm *v8; // eax
  const char *v9; // eax
  TESSaveLoad *v10; // ecx
  float v11; // edi
  char v12; // cl
  unsigned __int16 *v13; // ebp
  _DWORD *v14; // edi
  int v15; // eax
  bool v16; // zf
  double v17; // st7
  int v18; // ebx
  float *v19; // ecx
  unsigned __int16 v20; // ax
  float v21; // edi
  _DWORD *v22; // eax
  TESSaveLoad *v23; // ecx
  char v24; // bl
  int v25; // eax
  int v26; // eax
  int v27; // eax
  NiObject *v28; // eax
  NiObject *v29; // edi
  int v30; // ebp
  int v31; // edi
  unsigned __int16 v32; // ax
  TESSaveLoad *v33; // ecx
  UInt32 *v34; // edi
  UInt32 v35; // esi
  TESForm *v36; // eax
  UInt32 v37; // ebx
  UInt32 v38; // ecx
  const char *v39; // eax
  const char *v40; // eax
  UInt32 v41; // edx
  float v42; // [esp+8h] [ebp-34h]
  int v43; // [esp+Ch] [ebp-30h]
  size_t v44; // [esp+Ch] [ebp-30h]
  size_t v45; // [esp+Ch] [ebp-30h]
  size_t v46; // [esp+Ch] [ebp-30h]
  size_t v47; // [esp+Ch] [ebp-30h]
  size_t v48; // [esp+Ch] [ebp-30h]
  size_t v49; // [esp+Ch] [ebp-30h]
  size_t v50; // [esp+Ch] [ebp-30h]
  size_t v51; // [esp+Ch] [ebp-30h]
  size_t v52; // [esp+Ch] [ebp-30h]
  size_t v53; // [esp+Ch] [ebp-30h]
  size_t v54; // [esp+Ch] [ebp-30h]
  size_t v55; // [esp+Ch] [ebp-30h]
  size_t v56; // [esp+Ch] [ebp-30h]
  int v57; // [esp+Ch] [ebp-30h]
  int v58; // [esp+Ch] [ebp-30h]
  size_t v59; // [esp+10h] [ebp-2Ch]
  size_t v60; // [esp+10h] [ebp-2Ch]
  int v61; // [esp+10h] [ebp-2Ch]
  int v62; // [esp+10h] [ebp-2Ch]
  int v63; // [esp+10h] [ebp-2Ch]
  char v64; // [esp+22h] [ebp-1Ah] BYREF
  char v65; // [esp+23h] [ebp-19h] BYREF
  int v66; // [esp+24h] [ebp-18h] BYREF
  float v67; // [esp+28h] [ebp-14h]
  UInt32 v68; // [esp+2Ch] [ebp-10h]
  int v69; // [esp+30h] [ebp-Ch]
  int Dst; // [esp+34h] [ebp-8h] BYREF
  float v71; // [esp+38h] [ebp-4h] BYREF

  v66 = 0;
  v68 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v59) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v59);
    if ( Dst != 0x4B4F4C42 )
    {
      v7 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      if ( v7 )
      {
        v8 = TESForm_LookupByFormID(*v7);
        v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v8->vtbl->GetEditorName)(
                             v8,
                             *((unsigned __int8 *)v7 + 9),
                             *(UInt32 *)((char *)v7 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\Animation.cpp",
          0x125E,
          *v7,
          v9,
          v43,
          v61);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\Animation.cpp",
          0x125E,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v10 = SaveLoad_CurrentSavegame;
    LODWORD(v60) = 2;
    v68 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_LoadData((int)v10, &v66, v60);
  }
  v11 = a5;
  v67 = 0.0;
  if ( a5 != 0.0 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(float))(*(_DWORD *)LODWORD(a5) + 0x190))(COERCE_FLOAT(LODWORD(a5))) )
      v67 = v11;
  }
  HIDWORD(v44) = a4;
  LODWORD(v44) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)this + 0xBC, v44);
  LODWORD(v45) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)this + 0xC0, v45);
  LODWORD(v46) = 0xC;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)this + 0xC, v46);
  LODWORD(v47) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)this + 0x38, v47);
  LODWORD(v48) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)this + 0x90, v48);
  LODWORD(v49) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v65, v49);
  v12 = 0;
  a5 = 0.0;
  v13 = (unsigned __int16 *)((char *)this + 0x3C);
  v14 = (_DWORD *)((char *)this + 0x48);
  v69 = 5;
  do
  {
    if ( ((1 << v12) & v65) != 0 )
    {
      LODWORD(v50) = 2;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v13, v50);
      LODWORD(v51) = 4;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v14, v51);
      LODWORD(v52) = 4;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v14 + 5, v52);
      LODWORD(v53) = 2;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v13 + 0x1A, v53);
      LODWORD(v54) = 4;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v14 + 0xD, v54);
      LODWORD(v55) = 1;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v71, v55);
      v15 = LODWORD(v71);
      v16 = LOBYTE(v71) == 0xFE;
      v14[0x16] = 0;
      if ( !v16 )
      {
        v17 = *((float *)this + 0x25);
        v18 = LODWORD(a5);
        *((_BYTE *)this + 0xC4) = 1;
        v42 = v17;
        sub_474AB0((int)this, st5_0, a3, v17, v18, *v13, *v14, v42, v15);
        v19 = (float *)v14[0x16];
        if ( v19 )
        {
          sub_49F5F0(v19, *((float *)this + 0x25));
        }
        else
        {
          v20 = sub_49F550();
          SaveLoad_AdvanceBufferOffset(SaveLoad_CurrentSavegame, v20);
          sub_470FC0(this, v18, 0.0);
        }
      }
    }
    v12 = LOBYTE(a5) + 1;
    ++v13;
    ++v14;
    v16 = v69-- == 1;
    ++LODWORD(a5);
  }
  while ( !v16 );
  v21 = v67;
  *((_DWORD *)this + 0x33) = sub_475020(st5_0, a3, v67);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x4Cu )
    *((_DWORD *)this + 0x34) = sub_475020(st5_0, a3, v21);
  v22 = *((_DWORD **)this + 0x33);
  if ( v22 )
  {
    if ( *v22 == 1 )
      *((_DWORD *)this + 0x2C) = 0;
  }
  LODWORD(v50) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)this + 0xC4, v50);
  v23 = SaveLoad_CurrentSavegame;
  v64 = 1;
  if ( LOBYTE(v23[1].createdObjectList.next) < 0x40u || (LODWORD(v56) = 1, SaveLoad_LoadData((int)v23, &v64, v56), v64) )
  {
    v24 = 0;
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)(LODWORD(v67) + 0x5C) + 0x30))(LODWORD(v67) + 0x5C) )
    {
      v25 = (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*((_DWORD *)this + 0x26) + 0x7C) + 0x4C))(
              *(_DWORD *)(*((_DWORD *)this + 0x26) + 0x7C),
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
              v28 = NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(v27 + 0xC));
              v29 = v28;
              if ( v28 )
              {
                if ( NiTMap_GetAt(&v28[0xB].__vftable, (int)"SpecialIdle_Cast", &a5) )
                {
                  v30 = LODWORD(a5);
                  if ( a5 != 0.0 )
                  {
                    sub_4715C0(v29, 0.0);
                    sub_470B20((_DWORD *)v30, 0, 0, 1.0, 0.0, 0);
                    LOWORD(v29[1].__vftable) |= 8u;
                    sub_49F5F0((float *)v30, *((float *)this + 0x25));
                    LODWORD(v56) = 4;
                    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v71, v56);
                    v31 = *(_DWORD *)(LODWORD(v67) + 0x60);
                    if ( v31 )
                    {
                      a5 = *(float *)(v30 + 0x30) * dbl_A31C70;
                      MagicCaster_CastingVFX_ClearSomething___(v31, 1, a5);
                      *(float *)(v31 + 0x10) = v71;
                    }
                    v24 = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x40u && !v24 )
    {
      v32 = sub_49F550();
      SaveLoad_AdvanceBufferOffset(SaveLoad_CurrentSavegame, v32 + 4);
    }
  }
  sub_471230((int)this, *((float *)this + 0x25), (_DWORD *)this + 6, 1);
  if ( sub_45A170() )
  {
    v33 = SaveLoad_CurrentSavegame;
    v34 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v35 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v34 )
    {
      v36 = TESForm_LookupByFormID(*v34);
      v37 = v68;
      v38 = v68 + (unsigned __int16)v66;
      if ( v35 <= v38 )
      {
        if ( v35 < v38 )
        {
          v40 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v36->vtbl->GetEditorName)(
                                v36,
                                *((unsigned __int8 *)v34 + 9),
                                *(UInt32 *)((char *)v34 + 5));
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v37 + (unsigned __int16)v66 - v35,
            "..\\TES Shared\\Animation.cpp",
            0x12DA,
            *v34,
            v40,
            v58,
            v63);
        }
      }
      else
      {
        v39 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v36->vtbl->GetEditorName)(
                              v36,
                              *((unsigned __int8 *)v34 + 9),
                              *(UInt32 *)((char *)v34 + 5));
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v35 - (unsigned __int16)v66 - v37,
          "..\\TES Shared\\Animation.cpp",
          0x12DA,
          *v34,
          v39,
          v57,
          v62);
      }
    }
    else
    {
      v41 = (unsigned __int16)v66 + v68;
      if ( v35 <= v41 )
      {
        if ( v35 < v41 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v68 + (unsigned __int16)v66 - v35,
            "..\\TES Shared\\Animation.cpp",
            0x12DA,
            LOBYTE(v33[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v35 - (unsigned __int16)v66 - v68,
          "..\\TES Shared\\Animation.cpp",
          0x12DA,
          LOBYTE(v33[1].createdObjectList.next));
      }
    }
  }
}
