void __thiscall sub_6564C0(
        TESForm **this,
        ProcessSaveChangeMask changeMask,
        unsigned int currentFlags,
        MobileObject *owner)
{
  TESObjectREFR *v5; // edi
  UInt32 *currentlyLoadingFormHeader; // edi
  TESForm *v7; // eax
  const char *v8; // eax
  TESSaveLoadGame_SerializationView *v9; // ecx
  bool v10; // bl
  _DWORD *niNode; // eax
  _DWORD **v12; // eax
  TESPackage *Package; // edi
  TESSaveLoadGame_SerializationView *v14; // ecx
  TESForm *v15; // ecx
  TESForm *v16; // edx
  _DWORD *v17; // eax
  unsigned __int8 *v18; // edi
  bool v19; // zf
  TESSaveLoadGame_SerializationView *v20; // ecx
  TESSaveLoadGame_SerializationView *v21; // ecx
  unsigned int v22; // ebx
  int v23; // eax
  TESSaveLoadGame_SerializationView *v24; // ecx
  UInt32 *v25; // edi
  unsigned __int8 *bufferCursor; // esi
  TESForm *v27; // ecx
  unsigned int v28; // eax
  const char *v29; // eax
  const char *v30; // eax
  unsigned int v31; // edx
  int v32; // [esp-20h] [ebp-ACh]
  int v33; // [esp-20h] [ebp-ACh]
  int v34; // [esp-1Ch] [ebp-A8h]
  int v35; // [esp-1Ch] [ebp-A8h]
  int *v36; // [esp-10h] [ebp-9Ch]
  int v37; // [esp-8h] [ebp-94h]
  __int16 v38; // [esp-4h] [ebp-90h]
  int v39; // [esp+0h] [ebp-8Ch]
  unsigned __int16 v40; // [esp+0h] [ebp-8Ch]
  int v41; // [esp+4h] [ebp-88h]
  void *v42; // [esp+8h] [ebp-84h]
  int v43; // [esp+8h] [ebp-84h]
  int v44; // [esp+Ch] [ebp-80h]
  int v45; // [esp+10h] [ebp-7Ch]
  PlayerCharacter *v46; // [esp+14h] [ebp-78h]
  int v47; // [esp+18h] [ebp-74h]
  TESForm *v48; // [esp+1Ch] [ebp-70h]
  int v49; // [esp+20h] [ebp-6Ch] BYREF
  unsigned int v50; // [esp+24h] [ebp-68h] BYREF
  unsigned int v51[2]; // [esp+28h] [ebp-64h] BYREF
  unsigned int v52[3]; // [esp+34h] [ebp-58h] BYREF
  unsigned int formID; // [esp+40h] [ebp-4Ch] BYREF
  TESForm *destination; // [esp+44h] [ebp-48h] BYREF
  unsigned __int8 packageType[4]; // [esp+48h] [ebp-44h] BYREF
  unsigned int v56[2]; // [esp+4Ch] [ebp-40h] BYREF
  _DWORD Dst[2]; // [esp+54h] [ebp-38h] BYREF
  TESForm *v58; // [esp+5Ch] [ebp-30h] BYREF
  unsigned int v59; // [esp+68h] [ebp-24h]
  int v60; // [esp+6Ch] [ebp-20h]
  int v61; // [esp+70h] [ebp-1Ch]
  _BYTE v62[4]; // [esp+74h] [ebp-18h] BYREF
  _BYTE v63[8]; // [esp+78h] [ebp-14h] BYREF
  unsigned int retaddr; // [esp+8Ch] [ebp+0h]

  v5 = (TESObjectREFR *)OblivionDynamicCast( /*0x656509*/
                          owner,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
  *(_DWORD *)packageType = v5; /*0x656513*/
  MiddleLowProcess_LoadGame((MiddleLowProcess *)this, changeMask, currentFlags, owner); /*0x656517*/
  destination = 0; /*0x656524*/
  v56[0] = 0; /*0x656528*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, Dst, 4u); /*0x656546*/
    if ( Dst[0] != 0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x65655a*/
      if ( currentlyLoadingFormHeader )
      {
        v7 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x656567*/
        v8 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v7->vtbl->GetEditorName)( /*0x656582*/
                             v7,
                             *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                             *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\MiddleHighProcess.cpp",
          0x1A56,
          *currentlyLoadingFormHeader,
          v8,
          v50,
          v51[0]);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\MiddleHighProcess.cpp",
          0x1A56,
          g_TESSaveLoadGame->currentVersion);
      }
      v5 = *(TESObjectREFR **)packageType; /*0x6565bd*/
    }
    v9 = g_TESSaveLoadGame; /*0x6565c1*/
    v56[0] = (unsigned int)g_TESSaveLoadGame->bufferCursor; /*0x6565d1*/
    SaveLoad_LoadData(v9, &destination, 2u); /*0x6565d5*/
  }
  SaveLoad_LoadData(g_TESSaveLoadGame, this + 0x45, 1u); /*0x6565e9*/
  SaveLoad_LoadData(g_TESSaveLoadGame, (char *)this + 0x115, 1u); /*0x6565fd*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x34u ) /*0x65660c*/
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, this + 0x53, 1u); /*0x656617*/
    SaveLoad_LoadData(g_TESSaveLoadGame, this + 0x55, 4u); /*0x65662b*/
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x4Du ) /*0x65663a*/
    SaveLoad_LoadData(g_TESSaveLoadGame, this + 0x56, 4u); /*0x656645*/
  if ( (changeMask & 0x28000000) != 0 || (currentFlags & 0x28000000) != 0 ) /*0x65665a*/
  {
    v10 = 0; /*0x656660*/
    if ( !*((_BYTE *)this + 0xF4) ) /*0x656662*/
    {
      niNode = owner->super.niNode; /*0x65666a*/
      if ( niNode ) /*0x65666f*/
        v10 = NiObjectNET_LookupObjectByName(niNode, "ArrowBone") != 0; /*0x656683*/
    }
    ((void (__thiscall *)(TESForm **, MobileObject *))(*this)[0x29].member.modlist.next)(this, owner); /*0x656690*/
    if ( !*((_BYTE *)this + 0xF4) && v10 ) /*0x65669d*/
      sub_5E13D0(v5, 0); /*0x6566a3*/
    v12 = (_DWORD **)owner->super.niNode; /*0x6566a8*/
    if ( v12 ) /*0x6566ad*/
    {
      if ( owner == (MobileObject *)reference && !reference->isThirdPerson ) /*0x6566b9*/
      {
        if ( *((_WORD *)v12 + 0x5B) ) /*0x6566c2*/
          v12 = (_DWORD **)*v12[0x2C]; /*0x6566d6*/
        else
          v12 = 0; /*0x6566cc*/
      }
      sub_5EA1A0((int)v5, (int)owner, v12); /*0x6566db*/
    }
  }
  if ( (retaddr & 0x80000) != 0 ) /*0x6566e8*/
  {
    SaveLoad_LoadFormID(g_TESSaveLoadGame, v56, 4u); /*0x6566fb*/
    if ( destination ) /*0x656705*/
    {
      SaveLoad_LoadData(g_TESSaveLoadGame, v56, 1u); /*0x656718*/
      if ( !v5 ) /*0x65671f*/
      {
        v48 = (TESForm *)"Package being created on non-actor!"; /*0x65672c*/
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))(*(_DWORD *)&MEMORY[0xB33E90][0xF00]); /*0x656731*/
      }
      Package = TESSaveLoadGame_CreatePackage(g_TESSaveLoadGame, formID, v5, (TESPackageType)packageType[0]); /*0x656749*/
      Package->__vftable->LoadGame(Package); /*0x656755*/
      *(this + 0x30) = (TESForm *)Package; /*0x656757*/
      SaveLoad_LoadData(g_TESSaveLoadGame, this + 0x33, 4u); /*0x65676c*/
      if ( (int)*(this + 0x33) >= sub_673980((int)(*(this + 0x30))[1].vtbl) ) /*0x656785*/
        *(this + 0x33) = 0; /*0x656787*/
    }
  }
  SaveLoad_LoadFormID(g_TESSaveLoadGame, v56, 4u); /*0x65679a*/
  *(this + 0x4F) = destination; /*0x6567ab*/
  SaveLoad_LoadData(g_TESSaveLoadGame, this + 0x38, 4u); /*0x6567b8*/
  SaveLoad_LoadData(g_TESSaveLoadGame, this + 0x60, 1u); /*0x6567cc*/
  v14 = g_TESSaveLoadGame; /*0x6567d1*/
  if ( g_TESSaveLoadGame->currentVersion < 0x18u ) /*0x6567db*/
  {
    SaveLoad_LoadData(v14, (char *)v51 + 3, 1u); /*0x6567e4*/
    v14 = g_TESSaveLoadGame; /*0x6567e9*/
  }
  SaveLoad_LoadData(v14, this + 0x35, 0xCu); /*0x6567f8*/
  SaveLoad_LoadData(g_TESSaveLoadGame, this + 0x31, 4u); /*0x65680c*/
  SaveLoad_LoadData(g_TESSaveLoadGame, this + 0x4E, 2u); /*0x656820*/
  SaveLoad_LoadData(g_TESSaveLoadGame, (char *)this + 0x11D, 1u); /*0x656834*/
  SaveLoad_LoadData(g_TESSaveLoadGame, this + 0x49, 1u); /*0x656848*/
  SaveLoad_LoadFormID(g_TESSaveLoadGame, (unsigned int *)packageType, 4u); /*0x65685a*/
  *(this + 0x48) = (TESForm *)formID; /*0x656869*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &destination, 4u); /*0x656876*/
  SaveLoad_LoadData(g_TESSaveLoadGame, v62, 1u); /*0x656888*/
  SaveLoad_LoadData(g_TESSaveLoadGame, Dst, 0xCu); /*0x65689a*/
  sub_6FAEE0((Unk128 *)(this + 0x4A), *(float *)&destination); /*0x6568af*/
  v15 = (TESForm *)Dst[1]; /*0x6568b9*/
  v16 = v58; /*0x6568bd*/
  *((_BYTE *)this + 0x136) = v62[0]; /*0x6568c1*/
  *(this + 0x4A) = (TESForm *)Dst[0]; /*0x6568cb*/
  *(this + 0x4B) = v15; /*0x6568cd*/
  *(this + 0x4C) = v16; /*0x6568d6*/
  SaveLoad_LoadData(g_TESSaveLoadGame, v63, 1u); /*0x6568e0*/
  if ( v63[0] ) /*0x6568ea*/
  {
    if ( (v61 & 8) == 0 && g_TESSaveLoadGame->currentVersion < 0x2Fu ) /*0x656923*/
    {
      SaveLoad_LoadData(g_TESSaveLoadGame, (char *)&v49 + 3, 1u); /*0x65692c*/
      if ( HIBYTE(v49) ) /*0x656936*/
      {
        v17 = (_DWORD *)FormHeapAlloc(8u); /*0x65693a*/
        v56[1] = (unsigned int)v17; /*0x656942*/
        v59 = 0; /*0x656948*/
        if ( v17 ) /*0x656950*/
          v18 = (unsigned __int8 *)sub_497210(v17); /*0x656959*/
        else
          v18 = 0; /*0x65695d*/
        v59 = 0xFFFFFFFF; /*0x656961*/
        sub_4973D0(v18); /*0x656969*/
        if ( v18 ) /*0x656970*/
        {
          sub_497220(v18); /*0x656974*/
          FormHeapFree((unsigned int)v18); /*0x65697a*/
        }
      }
    }
  }
  else
  {
    v42 = OblivionDynamicCast( /*0x656905*/
            owner,
            0,
            (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
            &Actor `RTTI Type Descriptor',
            0);
    ((void (__thiscall *)(TESForm **))(*this)[0x1F].member.modlist.data)(this); /*0x65690e*/
  }
  v19 = (v60 & 0x2000000) == 0; /*0x656982*/
  *((_BYTE *)this + 0x11C) = v62[0]; /*0x65698e*/
  if ( !v19 ) /*0x656994*/
    sub_470780((int)owner); /*0x65699e*/
  SaveLoad_LoadFormID(g_TESSaveLoadGame, (unsigned int *)&destination, 4u); /*0x6569b3*/
  *(this + 0x51) = (TESForm *)v52[2]; /*0x6569c2*/
  SaveLoad_LoadFormID(g_TESSaveLoadGame, &formID, 4u); /*0x6569cf*/
  v36 = (int *)*(this + 0x5D); /*0x6569e3*/
  *(this + 0x5E) = (TESForm *)v52[1]; /*0x6569e4*/
  ActiveEffect_Base_LoadAEList(v36, v46, v37, v38, v39, v41, *(float *)&v42, v44, v45, (int)v46, v47); /*0x6569ea*/
  v20 = g_TESSaveLoadGame; /*0x6569ef*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x45u ) /*0x6569fc*/
  {
    SaveLoad_LoadData(v20, this + 0x32, 1u); /*0x656a07*/
    v20 = g_TESSaveLoadGame; /*0x656a0c*/
  }
  if ( v20->currentVersion >= 0x49u ) /*0x656a16*/
  {
    SaveLoad_LoadData(v20, this + 0x5A, 1u); /*0x656a21*/
    SaveLoad_LoadData(g_TESSaveLoadGame, (char *)this + 0x169, 1u); /*0x656a35*/
    v20 = g_TESSaveLoadGame; /*0x656a3a*/
  }
  if ( v20->currentVersion >= 0x65u ) /*0x656a44*/
  {
    if ( v20->currentVersion < 0x68u ) /*0x656a4f*/
    {
      SaveLoad_AdvanceBufferOffset(v20, 4); /*0x656a53*/
      v20 = g_TESSaveLoadGame; /*0x656a58*/
    }
    SaveLoad_LoadData(v20, this + 0x2E, 4u); /*0x656a67*/
    SaveLoad_LoadData(g_TESSaveLoadGame, this + 0x2F, 4u); /*0x656a7b*/
    v21 = g_TESSaveLoadGame; /*0x656a80*/
    if ( g_TESSaveLoadGame->currentVersion < 0x68u ) /*0x656a89*/
    {
      SaveLoad_AdvanceBufferOffset(v21, 4); /*0x656a8d*/
      v21 = g_TESSaveLoadGame; /*0x656a92*/
    }
    SaveLoad_LoadData(v21, &v58, 2u); /*0x656a9f*/
    v22 = 0;                                    // MEF v51 bridge-stack audit: direct JMP preserves entry ESP; MiddleHighProcess UInt16 FormID count is exactly [ESP+64h]. Bridge helper push/add pair restores ESP. /*0x656aa4*/
    if ( (_WORD)v58 ) /*0x656aab*/
    {
      do /*0x656b1d*/
      {
        SaveLoad_LoadFormID(g_TESSaveLoadGame, &v50, 4u); /*0x656abd*/
        if ( v48 ) /*0x656aca*/
        {
          if ( *(this + 0x2A) ) /*0x656acc*/
          {
            v23 = FormHeapAlloc(8u); /*0x656ad7*/
            if ( v23 ) /*0x656ae1*/
            {
              *(_DWORD *)v23 = *(this + 0x2A); /*0x656ae9*/
              *(_DWORD *)(v23 + 4) = 0; /*0x656aeb*/
            }
            else
            {
              v23 = 0; /*0x656af4*/
            }
            *(_DWORD *)(v23 + 4) = *(this + 0x2B); /*0x656afc*/
            *(this + 0x2B) = (TESForm *)v23; /*0x656aff*/
            *(this + 0x2A) = v48; /*0x656b05*/
          }
          else
          {
            *(this + 0x2A) = v48; /*0x656b0d*/
          }
        }
        ++v22; /*0x656b18*/
      }
      while ( v22 < LOWORD(Dst[0]) ); /*0x656b1d*/
    }
    v20 = g_TESSaveLoadGame; /*0x656b1f*/
  }
  if ( v20->currentVersion >= 0x6Du ) /*0x656b29*/
  {
    SaveLoad_LoadData(v20, (char *)this + 0x16B, 1u); /*0x656b34*/
    v20 = g_TESSaveLoadGame; /*0x656b39*/
  }
  if ( v20->currentVersion >= 0x71u ) /*0x656b43*/
  {
    SaveLoad_LoadFormID(v20, v52, 4u); /*0x656b4c*/
    *(this + 0x52) = (TESForm *)v51[1]; /*0x656b55*/
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x656b61*/
  {
    v24 = g_TESSaveLoadGame; /*0x656b6e*/
    v25 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x656b74*/
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x656b7c*/
    if ( v25 ) /*0x656b7f*/
    {
      v27 = TESForm_LookupByFormID(*v25); /*0x656b91*/
      v28 = v43 + v40; /*0x656b98*/
      if ( (unsigned int)bufferCursor <= v28 ) /*0x656b9f*/
      {
        if ( (unsigned int)bufferCursor < v28 ) /*0x656bde*/
        {
          v30 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v27->vtbl->GetEditorName)( /*0x656bf5*/
                                v27,
                                *((unsigned __int8 *)v25 + 9),
                                *(UInt32 *)((char *)v25 + 5));
          PrintError( /*0x656c14*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v43 + v40 - (_DWORD)bufferCursor,
            ".\\AI\\MiddleHighProcess.cpp",
            0x1B28,
            *v25,
            v30,
            v33,
            v35);
        }
      }
      else
      {
        v29 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v27->vtbl->GetEditorName)( /*0x656bb2*/
                              v27,
                              *((unsigned __int8 *)v25 + 9),
                              *(UInt32 *)((char *)v25 + 5));
        PrintError( /*0x656bd1*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &bufferCursor[-v40 - v43],
          ".\\AI\\MiddleHighProcess.cpp",
          0x1B28,
          *v25,
          v29,
          v32,
          v34);
      }
    }
    else
    {
      v31 = v40 + v43; /*0x656c27*/
      if ( (unsigned int)bufferCursor <= v31 ) /*0x656c2c*/
      {
        if ( (unsigned int)bufferCursor < v31 ) /*0x656c49*/
          PrintError( /*0x656c64*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v43 + v40 - (_DWORD)bufferCursor,
            ".\\AI\\MiddleHighProcess.cpp",
            0x1B28,
            v24->currentVersion);
      }
      else
      {
        PrintError( /*0x656c47*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &bufferCursor[-v40 - v43],
          ".\\AI\\MiddleHighProcess.cpp",
          0x1B28,
          v24->currentVersion);
      }
    }
  }
}
