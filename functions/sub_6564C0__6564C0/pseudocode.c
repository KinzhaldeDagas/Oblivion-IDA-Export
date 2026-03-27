// local variable allocation has failed, the output may be wrong!
void __thiscall sub_6564C0(TESForm **this, int a2, int a3, PlayerCharacter *a4)
{
  TESObjectREFR *v6; // edi
  UInt32 *v7; // edi
  TESForm *v8; // eax
  const char *v9; // eax
  TESSaveLoad *v10; // ecx
  UInt32 v11; // eax
  TESSaveLoad *v12; // ecx
  TESSaveLoad *v13; // ecx
  TESSaveLoad *v14; // ecx
  TESSaveLoad *v15; // ecx
  bool v16; // bl
  _DWORD *niNode; // eax
  TESForm::ModReferenceList *next; // edx
  _DWORD **v19; // eax
  TESSaveLoad *v20; // ecx
  int v21; // ecx
  void (__thiscall *v22)(int); // edx
  TESForm *v23; // edi
  TESSaveLoad *v24; // ecx
  TESSaveLoad *v25; // ecx
  TESForm *v26; // ecx
  TESForm *v27; // edx
  _DWORD *v28; // eax
  unsigned __int8 *v29; // edi
  bool v30; // zf
  TESSaveLoad *v31; // ecx
  TESSaveLoad *v32; // ecx
  unsigned int v33; // ebx
  TESForm *v34; // edi
  int v35; // eax
  TESSaveLoad *v36; // ecx
  UInt32 *v37; // edi
  UInt32 v38; // esi
  TESForm *v39; // ecx
  UInt32 v40; // eax
  const char *v41; // eax
  const char *v42; // eax
  UInt32 v43; // edx
  int v44; // [esp-20h] [ebp-ACh]
  int v45; // [esp-20h] [ebp-ACh]
  int v46; // [esp-1Ch] [ebp-A8h]
  int v47; // [esp-1Ch] [ebp-A8h]
  size_t v48; // [esp-14h] [ebp-A0h]
  int v49; // [esp-10h] [ebp-9Ch]
  size_t v50; // [esp-Ch] [ebp-98h]
  size_t v51; // [esp-Ch] [ebp-98h]
  size_t v52; // [esp-Ch] [ebp-98h]
  size_t v53; // [esp-Ch] [ebp-98h]
  int v54; // [esp-8h] [ebp-94h]
  size_t v55; // [esp-4h] [ebp-90h]
  __int16 v56; // [esp-4h] [ebp-90h]
  int v57; // [esp-4h] [ebp-90h]
  int v58; // [esp+0h] [ebp-8Ch]
  int v59; // [esp+0h] [ebp-8Ch]
  size_t v60; // [esp+4h] [ebp-88h] OVERLAPPED
  int v61; // [esp+4h] [ebp-88h]
  int v62; // [esp+4h] [ebp-88h]
  int v63; // [esp+4h] [ebp-88h]
  size_t v64; // [esp+8h] [ebp-84h]
  size_t v65; // [esp+8h] [ebp-84h]
  size_t v66; // [esp+8h] [ebp-84h]
  size_t v67; // [esp+8h] [ebp-84h]
  int v68; // [esp+8h] [ebp-84h]
  int v69; // [esp+8h] [ebp-84h]
  float v70; // [esp+8h] [ebp-84h]
  int v71; // [esp+8h] [ebp-84h]
  int v72; // [esp+Ch] [ebp-80h] OVERLAPPED
  int v73; // [esp+Ch] [ebp-80h]
  int v74; // [esp+Ch] [ebp-80h]
  size_t v75; // [esp+10h] [ebp-7Ch]
  size_t v76; // [esp+10h] [ebp-7Ch]
  size_t v77; // [esp+10h] [ebp-7Ch]
  size_t v78; // [esp+10h] [ebp-7Ch]
  size_t v79; // [esp+10h] [ebp-7Ch]
  size_t v80; // [esp+10h] [ebp-7Ch]
  size_t v81; // [esp+10h] [ebp-7Ch]
  size_t v82; // [esp+10h] [ebp-7Ch]
  int v83; // [esp+10h] [ebp-7Ch]
  int v84; // [esp+10h] [ebp-7Ch]
  int v85; // [esp+14h] [ebp-78h]
  TESObjectREFR *v86; // [esp+14h] [ebp-78h]
  _BYTE v87[12]; // [esp+18h] [ebp-74h] BYREF
  _BYTE v88[12]; // [esp+24h] [ebp-68h] BYREF
  int v89; // [esp+30h] [ebp-5Ch]
  int v90[3]; // [esp+34h] [ebp-58h] BYREF
  TESForm *v91; // [esp+40h] [ebp-4Ch] BYREF
  TESForm *v92; // [esp+44h] [ebp-48h] BYREF
  TESObjectREFR *v93; // [esp+48h] [ebp-44h] BYREF
  _DWORD v94[2]; // [esp+4Ch] [ebp-40h] BYREF
  _DWORD Dst[2]; // [esp+54h] [ebp-38h] BYREF
  TESForm *v96; // [esp+5Ch] [ebp-30h] BYREF
  unsigned int v97; // [esp+68h] [ebp-24h]
  int v98; // [esp+6Ch] [ebp-20h]
  int v99; // [esp+70h] [ebp-1Ch]
  _BYTE v100[4]; // [esp+74h] [ebp-18h] BYREF
  _BYTE v101[8]; // [esp+78h] [ebp-14h] BYREF
  unsigned int retaddr; // [esp+8Ch] [ebp+0h]

  v6 = (TESObjectREFR *)OblivionDynamicCast(
                          a4,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
  v93 = v6;
  sub_658DF0(a2, a3, (int)a4);
  v92 = 0;
  v94[0] = 0;
  if ( sub_45A170() )
  {
    *(_DWORD *)&v88[4] = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, Dst, *(size_t *)&v88[4]);
    if ( Dst[0] != 0x4B4F4C42 )
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
          ".\\AI\\MiddleHighProcess.cpp",
          0x1A56,
          *v7,
          v9,
          *(_DWORD *)v88,
          *(_DWORD *)&v88[4]);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\MiddleHighProcess.cpp",
          0x1A56,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
      v6 = v93;
    }
    v10 = SaveLoad_CurrentSavegame;
    v11 = SaveLoad_CurrentSavegame->unk000[5];
    *(_DWORD *)&v88[4] = 2;
    v94[0] = v11;
    SaveLoad_LoadData((int)v10, &v92, *(size_t *)&v88[4]);
  }
  v12 = SaveLoad_CurrentSavegame;
  *(_DWORD *)&v88[4] = 1;
  SaveLoad_LoadData((int)v12, this + 0x45, *(size_t *)&v88[4]);
  *(_DWORD *)&v88[4] = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)this + 0x115, *(size_t *)&v88[4]);
  v13 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x34u )
  {
    *(_DWORD *)&v88[4] = 1;
    SaveLoad_LoadData((int)v13, this + 0x53, *(size_t *)&v88[4]);
    v14 = SaveLoad_CurrentSavegame;
    *(_DWORD *)&v88[4] = 4;
    SaveLoad_LoadData((int)v14, this + 0x55, *(size_t *)&v88[4]);
  }
  v15 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x4Du )
  {
    *(_DWORD *)&v88[4] = 4;
    SaveLoad_LoadData((int)v15, this + 0x56, *(size_t *)&v88[4]);
  }
  if ( (a2 & 0x28000000) != 0 || (a3 & 0x28000000) != 0 )
  {
    v16 = 0;
    if ( !*((_BYTE *)this + 0xF4) )
    {
      niNode = a4->super.super.super.super.niNode;
      if ( niNode )
        v16 = NiObjectNET_LookupObjectByName(niNode, "ArrowBone") != 0;
    }
    next = (*this)[0x29].member.modlist.next;
    *(_DWORD *)&v88[4] = a4;
    ((void (__thiscall *)(TESForm **))next)(this);
    if ( !*((_BYTE *)this + 0xF4) && v16 )
      sub_5E13D0(v6, 0);
    v19 = (_DWORD **)a4->super.super.super.super.niNode;
    if ( v19 )
    {
      if ( a4 == TESDataHandler_g_PlayerRef && !TESDataHandler_g_PlayerRef->isThirdPerson )
      {
        if ( *((_WORD *)v19 + 0x5B) )
          v19 = (_DWORD **)*v19[0x2C];
        else
          v19 = 0;
      }
      sub_5EA1A0((int)v6, (int)a4, v19);
    }
  }
  if ( (retaddr & 0x80000) != 0 )
  {
    *(_DWORD *)v88 = 4;
    SaveLoad_LoadFormID(v94, *(size_t *)v88, *(int *)&v88[8], v89, v90[0]);
    if ( v92 )
    {
      v20 = SaveLoad_CurrentSavegame;
      *(_DWORD *)&v87[4] = 1;
      SaveLoad_LoadData((int)v20, v94, *(size_t *)&v87[4]);
      if ( !v6 )
      {
        v21 = dword_B34D90;
        v22 = *(void (__thiscall **)(int))(*(_DWORD *)dword_B34D90 + 0x18);
        *(_DWORD *)&v87[4] = "Package being created on non-actor!";
        v22(v21);
      }
      v23 = sub_463EC0((char *)SaveLoad_CurrentSavegame, (int)v91, (int)v6, (char)v93);
      ((void (__thiscall *)(TESForm *))v23->vtbl[1].super.CopyFromBase)(v23);
      *(this + 0x30) = v23;
      v24 = SaveLoad_CurrentSavegame;
      *(_DWORD *)v87 = 4;
      SaveLoad_LoadData((int)v24, this + 0x33, *(size_t *)v87);
      if ( (int)*(this + 0x33) >= sub_673980((int)(*(this + 0x30))[1].vtbl) )
        *(this + 0x33) = 0;
    }
  }
  *(_DWORD *)v87 = 4;
  SaveLoad_LoadFormID(v94, *(size_t *)v87, *(int *)&v87[8], *(int *)v88, *(int *)&v88[4]);
  LODWORD(v75) = 4;
  *(this + 0x4F) = v92;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 0x38, v75);
  LODWORD(v76) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 0x60, v76);
  v25 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x18u )
  {
    LODWORD(v77) = 1;
    SaveLoad_LoadData((int)v25, &v88[7], v77);
    v25 = SaveLoad_CurrentSavegame;
  }
  LODWORD(v77) = 0xC;
  SaveLoad_LoadData((int)v25, this + 0x35, v77);
  LODWORD(v78) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 0x31, v78);
  LODWORD(v79) = 2;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 0x4E, v79);
  LODWORD(v80) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)this + 0x11D, v80);
  LODWORD(v81) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 0x49, v81);
  LODWORD(v82) = 4;
  SaveLoad_LoadFormID(&v93, v82, *(int *)v87, *(int *)&v87[4], *(int *)&v87[8]);
  LODWORD(v64) = 4;
  *(this + 0x48) = v91;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v92, v64);
  LODWORD(v65) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v100, v65);
  LODWORD(v66) = 0xC;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, Dst, v66);
  sub_6FAEE0((Unk128 *)(this + 0x4A), *(float *)&v92);
  v26 = (TESForm *)Dst[1];
  v27 = v96;
  *((_BYTE *)this + 0x136) = v100[0];
  *(this + 0x4A) = (TESForm *)Dst[0];
  *(this + 0x4B) = v26;
  LODWORD(v67) = 1;
  *(this + 0x4C) = v27;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v101, v67);
  if ( v101[0] )
  {
    if ( (v99 & 8) == 0 && LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x2Fu )
    {
      v68 = 1;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v87[0xB], *(size_t *)((char *)&v72 + 0xFFFFFFFC));
      if ( v87[0xB] )
      {
        v28 = (_DWORD *)FormHeapAlloc(8u);
        v94[1] = v28;
        v97 = 0;
        if ( v28 )
          v29 = (unsigned __int8 *)sub_497210(v28);
        else
          v29 = 0;
        v97 = 0xFFFFFFFF;
        sub_4973D0(v29);
        if ( v29 )
        {
          sub_497220(v29);
          FormHeapFree((unsigned int)v29);
        }
      }
    }
  }
  else
  {
    HIDWORD(v60) = OblivionDynamicCast(
                     a4,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0);
    ((void (__thiscall *)(TESForm **))(*this)[0x1F].member.modlist.data)(this);
  }
  v30 = (v98 & 0x2000000) == 0;
  *((_BYTE *)this + 0x11C) = v100[0];
  if ( !v30 )
    sub_470780((int)a4);
  LODWORD(v60) = 4;
  SaveLoad_LoadFormID(&v92, v60, v72, v83, v85);
  LODWORD(v55) = 4;
  *(this + 0x51) = (TESForm *)v90[2];
  SaveLoad_LoadFormID(&v91, v55, v61, v69, v73);
  v49 = (int)*(this + 0x5D);
  *(this + 0x5E) = (TESForm *)v90[1];
  ActiveEffect_Base_LoadAEList_(v49, v86, v54, v56, v58, v62, v70, v74, v84, (int)v86, *(int *)v87);
  v31 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x45u )
  {
    LODWORD(v50) = 1;
    SaveLoad_LoadData((int)v31, this + 0x32, v50);
    v31 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v31[1].createdObjectList.next) >= 0x49u )
  {
    LODWORD(v50) = 1;
    SaveLoad_LoadData((int)v31, this + 0x5A, v50);
    LODWORD(v51) = 1;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)this + 0x169, v51);
    v31 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v31[1].createdObjectList.next) >= 0x65u )
  {
    if ( LOBYTE(v31[1].createdObjectList.next) < 0x68u )
    {
      SaveLoad_AdvanceBufferOffset(v31, 4);
      v31 = SaveLoad_CurrentSavegame;
    }
    LODWORD(v50) = 4;
    SaveLoad_LoadData((int)v31, this + 0x2E, v50);
    LODWORD(v52) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 0x2F, v52);
    v32 = SaveLoad_CurrentSavegame;
    if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x68u )
    {
      SaveLoad_AdvanceBufferOffset(v32, 4);
      v32 = SaveLoad_CurrentSavegame;
    }
    LODWORD(v53) = 2;
    SaveLoad_LoadData((int)v32, &v96, v53);
    v33 = 0;
    if ( (_WORD)v96 )
    {
      do
      {
        LODWORD(v50) = 4;
        SaveLoad_LoadFormID(v88, v50, v57, v59, v63);
        v34 = *(TESForm **)&v87[4];
        if ( *(_DWORD *)&v87[4] )
        {
          if ( *(this + 0x2A) )
          {
            v35 = FormHeapAlloc(8u);
            if ( v35 )
            {
              *(_DWORD *)v35 = *(this + 0x2A);
              *(_DWORD *)(v35 + 4) = 0;
            }
            else
            {
              v35 = 0;
            }
            *(_DWORD *)(v35 + 4) = *(this + 0x2B);
            *(this + 0x2B) = (TESForm *)v35;
            *(this + 0x2A) = v34;
          }
          else
          {
            *(this + 0x2A) = *(TESForm **)&v87[4];
          }
        }
        ++v33;
      }
      while ( v33 < LOWORD(Dst[0]) );
    }
    v31 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v31[1].createdObjectList.next) >= 0x6Du )
  {
    LODWORD(v48) = 1;
    SaveLoad_LoadData((int)v31, (char *)this + 0x16B, v48);
    v31 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v31[1].createdObjectList.next) >= 0x71u )
  {
    LODWORD(v48) = 4;
    SaveLoad_LoadFormID(v90, v48, v50, SHIDWORD(v50), v57);
    *(this + 0x52) = *(TESForm **)&v88[8];
  }
  if ( sub_45A170() )
  {
    v36 = SaveLoad_CurrentSavegame;
    v37 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v38 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v37 )
    {
      v39 = TESForm_LookupByFormID(*v37);
      v40 = v71 + (unsigned __int16)v59;
      if ( v38 <= v40 )
      {
        if ( v38 < v40 )
        {
          v42 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v39->vtbl->GetEditorName)(
                                v39,
                                *((unsigned __int8 *)v37 + 9),
                                *(UInt32 *)((char *)v37 + 5));
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v71 + (unsigned __int16)v59 - v38,
            ".\\AI\\MiddleHighProcess.cpp",
            0x1B28,
            *v37,
            v42,
            v45,
            v47);
        }
      }
      else
      {
        v41 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v39->vtbl->GetEditorName)(
                              v39,
                              *((unsigned __int8 *)v37 + 9),
                              *(UInt32 *)((char *)v37 + 5));
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v38 - (unsigned __int16)v59 - v71,
          ".\\AI\\MiddleHighProcess.cpp",
          0x1B28,
          *v37,
          v41,
          v44,
          v46);
      }
    }
    else
    {
      v43 = (unsigned __int16)v59 + v71;
      if ( v38 <= v43 )
      {
        if ( v38 < v43 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v71 + (unsigned __int16)v59 - v38,
            ".\\AI\\MiddleHighProcess.cpp",
            0x1B28,
            LOBYTE(v36[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v38 - (unsigned __int16)v59 - v71,
          ".\\AI\\MiddleHighProcess.cpp",
          0x1B28,
          LOBYTE(v36[1].createdObjectList.next));
      }
    }
  }
}
