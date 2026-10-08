char __thiscall sub_52A570(int this, Data *a2)
{
  char *v4; // esi
  signed int ChunkType; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  char *v8; // eax
  char v9; // al
  char *v10; // ecx
  char *v11; // eax
  char *v12; // esi
  _DWORD *v13; // ecx
  int v14[4]; // [esp+0h] [ebp-34h] BYREF
  int v15; // [esp+10h] [ebp-24h] BYREF
  _DWORD *v16; // [esp+14h] [ebp-20h]
  char *v17; // [esp+18h] [ebp-1Ch]
  char *v18; // [esp+1Ch] [ebp-18h]
  char v19; // [esp+23h] [ebp-11h]
  int v20; // [esp+30h] [ebp-4h]

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x3B ) /*0x52a5a9*/
    return 0; /*0x52a5ad*/
  v4 = 0; /*0x52a5b2*/
  v17 = 0; /*0x52a5b7*/
  v18 = 0; /*0x52a5ba*/
  v16 = 0; /*0x52a5bd*/
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v14[0], v14[1]); /*0x52a5c0*/
  TESForm_SetIsLinked((TESForm *)this, 0); /*0x52a5c8*/
  v19 = 0; /*0x52a5cf*/
  ChunkType = TESFile_GetChunkType(a2); /*0x52a5d3*/
  if ( ChunkType ) /*0x52a5dc*/
  {
    while ( 1 ) /*0x52a5f2*/
    {
      if ( ChunkType > 0x4D414E43 ) /*0x52a5f7*/
      {
        if ( ChunkType > 0x54445351 ) /*0x52a72f*/
        {
          if ( ChunkType != 0x54445443 ) /*0x52a7ea*/
          {
            if ( ChunkType == 0x58444E49 ) /*0x52a7f1*/
            {
              v11 = (char *)FormHeapAlloc(0xCu); /*0x52a7f5*/
              v17 = v11; /*0x52a7fd*/
              v20 = 1; /*0x52a802*/
              if ( v11 ) /*0x52a809*/
                v12 = sub_52AC20(v11); /*0x52a812*/
              else
                v12 = 0; /*0x52a816*/
              v20 = 0xFFFFFFFF; /*0x52a81b*/
              v17 = v12; /*0x52a822*/
              sub_52AC60(v12, a2); /*0x52a825*/
              BSSimpleList_PushBack((_DWORD *)(this + 0x40), (int)v12); /*0x52a82e*/
              v4 = v18; /*0x52a833*/
            }
            goto LABEL_51; /*0x52a836*/
          }
LABEL_46:
          if ( v4 ) /*0x52a83a*/
          {
            v13 = v4 + 4; /*0x52a83c*/
          }
          else
          {
            v13 = v16 + 1; /*0x52a846*/
            if ( !v16 ) /*0x52a849*/
              v13 = (_DWORD *)(this + 0x50); /*0x52a84b*/
          }
          ConditionList_LoadCondition(v13, a2); /*0x52a84f*/
          goto LABEL_51; /*0x52a84f*/
        }
        switch ( ChunkType ) /*0x52a735*/
        {
          case 0x54445351: /*0x52a735*/
            if ( v17 ) /*0x52a78f*/
            {
              v8 = (char *)FormHeapAlloc(0x6Cu); /*0x52a797*/
              v18 = v8; /*0x52a79f*/
              v20 = 2; /*0x52a7a4*/
              if ( v8 ) /*0x52a7ab*/
                v4 = sub_52ACC0(v8); /*0x52a7b4*/
              else
                v4 = 0; /*0x52a7b8*/
              v20 = 0xFFFFFFFF; /*0x52a7bd*/
              v18 = v4; /*0x52a7c4*/
              sub_52B1F0((void **)v4, a2); /*0x52a7c7*/
              v9 = v19; /*0x52a7cc*/
              v10 = v17; /*0x52a7cf*/
              v4[0x60] = v19; /*0x52a7d2*/
              v19 = v9 + 1; /*0x52a7db*/
              BSSimpleList_PushBack((_DWORD *)v10 + 1, (int)v4); /*0x52a7de*/
            }
            break; /*0x52a7e3*/
          case 0x4E4F4349: /*0x52a735*/
            if ( this ) /*0x52a767*/
              TESTexture_Load(this + 0x24, a2); /*0x52a76e*/
            else
              TESTexture_Load(0, a2); /*0x52a77f*/
            break; /*0x52a776*/
          case 0x4F524353: /*0x52a735*/
          case 0x52484353: /*0x52a735*/
            goto LABEL_30; /*0x52a74a*/
        }
      }
      else
      {
        if ( ChunkType == 0x4D414E43 ) /*0x52a5fd*/
        {
          if ( v4 ) /*0x52a71b*/
            v4[0x61] = 1; /*0x52a721*/
          goto LABEL_51; /*0x52a725*/
        }
        if ( ChunkType > 0x41545351 ) /*0x52a608*/
        {
          switch ( ChunkType ) /*0x52a68d*/
          {
            case 0x44494445: /*0x52a68d*/
              _alloca_(v14[0]); /*0x52a6f0*/
              TESFile_GetChunkData(a2, (char *)v14, 0x200u); /*0x52a6ff*/
              (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, v14); /*0x52a70f*/
              v4 = v18; /*0x52a711*/
              break;
            case 0x49524353: /*0x52a68d*/
              v15 = 0; /*0x52a6c8*/
              TESFile_GetChunkData4(a2, (char *)&v15); /*0x52a6d1*/
              *(_DWORD *)(this + 0x1C) = v15; /*0x52a6dd*/
              TESScriptableForm_Link(this + 0x18, (TESForm *)this); /*0x52a6e0*/
              break;
            case 0x4C4C5546: /*0x52a68d*/
              if ( this ) /*0x52a6a3*/
                TESFullname_Load((TESFullName *)(this + 0x30), a2); /*0x52a6aa*/
              else
                TESFullname_Load(0, a2); /*0x52a6bb*/
              break;
          }
          goto LABEL_51; /*0x52a6b2*/
        }
        switch ( ChunkType ) /*0x52a60a*/
        {
          case 0x41545351: /*0x52a60a*/
            v17 = 0; /*0x52a642*/
            v18 = 0; /*0x52a645*/
            v6 = (_DWORD *)FormHeapAlloc(0x14u); /*0x52a648*/
            v16 = v6; /*0x52a650*/
            v7 = 0; /*0x52a653*/
            v20 = 0; /*0x52a657*/
            if ( v6 ) /*0x52a65a*/
              v7 = sub_52B310(v6); /*0x52a663*/
            v20 = 0xFFFFFFFF; /*0x52a668*/
            v16 = v7; /*0x52a66f*/
            sub_52B3F0(v7, a2); /*0x52a672*/
            BSSimpleList_PushBack((_DWORD *)(this + 0x48), (int)v7); /*0x52a67b*/
            v4 = v18; /*0x52a680*/
            break; /*0x52a683*/
          case 0x41444353: /*0x52a60a*/
LABEL_30:
            if ( v4 ) /*0x52a752*/
              sub_52B1F0((void **)v4, a2); /*0x52a75b*/
            break; /*0x52a760*/
          case 0x41445443: /*0x52a60a*/
            goto LABEL_46; /*0x52a61c*/
          case 0x41544144: /*0x52a60a*/
            TESForm_LoadGenericComponents((TESForm *)this, a2, (void *)(this + 0x3C), 2u);// Oblivion QUST DATA is two bytes here: TESQuest.questFlags at +0x3C followed by priority at +0x3D. /*0x52a636*/
            break;
        }
      }
LABEL_51:
      if ( TESFile_GetNextChunk(a2) ) /*0x52a856*/
      {
        ChunkType = TESFile_GetChunkType(a2); /*0x52a861*/
        if ( ChunkType ) /*0x52a868*/
          continue; /*0x52a868*/
      }
      return 1; /*0x52a868*/
    }
  }
  return 1; /*0x52a873*/
}
