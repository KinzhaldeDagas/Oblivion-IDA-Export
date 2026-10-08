// Verified 2026-10-04 crime-record family: manager6770F0 allocates30 bytes, calls605E50 then606520; manager677010 calls6061F0;677240 calls6071A0. Embedded witness list at1C, not AlarmPackage crimes pointer at3C. Probable Fallout Crime family; Oblivion allocation, field reads/writes, calls and RTTI fixups establish local identity.
// Verified clarification: prior EngineFix comments calling this AlarmPackage loader refer to the shared source filename. This body loads a30-byte Crime record; AlarmPackage_LoadGame is606E10. Existing patch-address comments retained. Five stale FormID RET8 deltas corrected so loaded IDs map to intended fields.
// Verified paired wire reader. FormID calls cleaned up RET8 deltas at606655/60666E/606687/6066A0/6066D6; subsequent InitLoadGame resolves pointer fields and removes missing witnesses. Full witness objects are not owned by Crime.
void __thiscall Crime_LoadGame(Crime *self)
{
  unsigned __int8 *bufferCursor; // ebx
  UInt32 *currentlyLoadingFormHeader; // edi
  TESForm *v4; // eax
  const char *v5; // eax
  Actor *v6; // edi
  CrimeWitnessNode *v7; // eax
  TESSaveLoadGame_SerializationView *v8; // ecx
  UInt32 *v9; // edi
  unsigned __int8 *v10; // esi
  TESForm *v11; // ecx
  unsigned __int8 *v12; // eax
  const char *v13; // eax
  const char *v14; // eax
  unsigned __int8 *v15; // edx
  int v16; // [esp+10h] [ebp-3Ch]
  int v17; // [esp+10h] [ebp-3Ch]
  int v18; // [esp+10h] [ebp-3Ch]
  int v19; // [esp+14h] [ebp-38h]
  int v20; // [esp+14h] [ebp-38h]
  int v21; // [esp+14h] [ebp-38h]
  unsigned int v22; // [esp+28h] [ebp-24h] BYREF
  int destination; // [esp+2Ch] [ebp-20h] BYREF
  unsigned int v24; // [esp+30h] [ebp-1Ch]
  int Dst; // [esp+34h] [ebp-18h] BYREF
  unsigned int v26[5]; // [esp+38h] [ebp-14h] BYREF

  destination = 0; /*0x606531*/
  bufferCursor = 0; /*0x606535*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 4u); /*0x606551*/
    if ( Dst != 0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x606565*/
      if ( currentlyLoadingFormHeader )
      {
        v4 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x606572*/
        v5 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v4->vtbl->GetEditorName)( /*0x60658d*/
                             v4,
                             *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                             *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\AlarmPackage.cpp",
          0x138,
          *currentlyLoadingFormHeader,
          v5,
          v16,
          v19);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\AlarmPackage.cpp",
          0x138,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x6065ce*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &destination, 2u); /*0x6065d8*/
  }
  SaveLoad_LoadData(g_TESSaveLoadGame, &self->flag10, 1u); /*0x6065e9*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &self->flag11, 1u); /*0x6065fa*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &self->flag2C, 1u); /*0x60660b*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &self->category, 4u); /*0x60661c*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &self->value18, 4u); /*0x60662d*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &self->crimeNumber, 4u); /*0x60663e*/
  SaveLoad_LoadFormID(g_TESSaveLoadGame, v26, 4u); /*0x606650*/
  self->target = (TESObjectREFR *)v26[0]; /*0x60665f*/
  SaveLoad_LoadFormID(g_TESSaveLoadGame, &v26[1], 4u); /*0x606669*/
  self->criminal = (Actor *)v26[1]; /*0x606678*/
  SaveLoad_LoadFormID(g_TESSaveLoadGame, &v26[2], 4u); /*0x606682*/
  self->object14 = (TESBoundObject *)v26[2]; /*0x606691*/
  SaveLoad_LoadFormID(g_TESSaveLoadGame, &v26[3], 4u); /*0x60669b*/
  self->form24 = (TESForm *)v26[3]; /*0x6066aa*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &v22, 2u);// EngineFix analysis 2026-05-07: AI AlarmPackage save-controlled UInt16 count; loop consumes one FormID (4 bytes) and inserts a list node per entry. Clamp to remaining / 4; list-node allocation failure writes through NULL at 0x60670E. /*0x6066b4*/
  v24 = 0; /*0x6066be*/
  if ( (_WORD)v22 ) /*0x6066c2*/
  {
    do /*0x60672e*/
    {
      SaveLoad_LoadFormID(g_TESSaveLoadGame, &v26[4], 4u); /*0x6066d1*/
      v6 = (Actor *)v26[4]; /*0x6066dc*/
      if ( v26[4] ) /*0x6066de*/
      {
        if ( self->witnesses.actor ) /*0x6066e0*/
        {
          v7 = (CrimeWitnessNode *)FormHeapAlloc(8u); /*0x6066e7*/
          if ( v7 )                             // EngineFix implementation 2026-05-07: narrow allocation-failure hook for AlarmPackage list node. Entry FormID is already consumed; failed node allocation now skips insertion and resumes at 0x60671C. /*0x6066f1*/
          {
            v7->actor = self->witnesses.actor; /*0x6066f6*/
            v7->next = 0; /*0x6066f8*/
            v7->next = self->witnesses.next; /*0x6066fe*/
            self->witnesses.next = v7; /*0x606701*/
          }
          else
          {
            *(_DWORD *)4 = self->witnesses.next; /*0x60670e*/
            self->witnesses.next = 0; /*0x606711*/
          }
          self->witnesses.actor = v6; /*0x606704*/
        }
        else
        {
          self->witnesses.actor = (Actor *)v26[4]; /*0x606719*/
        }
      }
      ++v24; /*0x60672a*/
    }
    while ( (int)v24 < (unsigned __int16)v22 ); /*0x60672e*/
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x606736*/
  {
    v8 = g_TESSaveLoadGame; /*0x606743*/
    v9 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x606749*/
    v10 = g_TESSaveLoadGame->bufferCursor; /*0x606751*/
    if ( v9 ) /*0x606754*/
    {
      v11 = TESForm_LookupByFormID(*v9); /*0x606767*/
      v12 = &bufferCursor[(unsigned __int16)destination]; /*0x606769*/
      if ( v10 <= v12 ) /*0x606771*/
      {
        if ( v10 < v12 ) /*0x6067b3*/
        {
          v14 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v11->vtbl->GetEditorName)( /*0x6067ca*/
                                v11,
                                *((unsigned __int8 *)v9 + 9),
                                *(UInt32 *)((char *)v9 + 5));
          PrintError( /*0x6067e9*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            &bufferCursor[(unsigned __int16)destination - (_DWORD)v10],
            ".\\AI\\AlarmPackage.cpp",
            0x161,
            *v9,
            v14,
            v18,
            v21);
        }
      }
      else
      {
        v13 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v11->vtbl->GetEditorName)( /*0x606784*/
                              v11,
                              *((unsigned __int8 *)v9 + 9),
                              *(UInt32 *)((char *)v9 + 5));
        PrintError( /*0x6067a3*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &v10[-(unsigned __int16)destination] - bufferCursor,
          ".\\AI\\AlarmPackage.cpp",
          0x161,
          *v9,
          v13,
          v17,
          v20);
      }
    }
    else
    {
      v15 = &bufferCursor[(unsigned __int16)destination]; /*0x6067fe*/
      if ( v10 <= v15 ) /*0x606803*/
      {
        if ( v10 < v15 ) /*0x60682e*/
          PrintError( /*0x606849*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            &bufferCursor[(unsigned __int16)destination - (_DWORD)v10],
            ".\\AI\\AlarmPackage.cpp",
            0x161,
            v8->currentVersion);
      }
      else
      {
        PrintError( /*0x60681e*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &v10[-(unsigned __int16)destination] - bufferCursor,
          ".\\AI\\AlarmPackage.cpp",
          0x161,
          v8->currentVersion);
      }
    }
  }
}
