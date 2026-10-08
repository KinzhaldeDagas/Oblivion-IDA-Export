char __thiscall sub_51F8C0(int this, Data *a2)
{
  _WORD *v3; // edi
  signed int ChunkType; // eax
  BSStringT *v5; // ecx
  char *v6; // edi
  _WORD *v7; // eax
  _WORD *v8; // eax
  int v10[4]; // [esp+0h] [ebp-24h] BYREF
  _WORD *v11; // [esp+10h] [ebp-14h]
  unsigned int v12; // [esp+20h] [ebp-4h]

  v3 = 0; /*0x51f8f0*/
  v11 = 0; /*0x51f8f5*/
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v10[0], v10[1]); /*0x51f8f8*/
  while ( 1 ) /*0x51f905*/
  {
    ChunkType = TESFile_GetChunkType(a2); /*0x51f905*/
    if ( ChunkType > 0x4D414E46 ) /*0x51f90f*/
    {
      switch ( ChunkType ) /*0x51f9f6*/
      {
        case 0x4D414E49: /*0x51f9f6*/
          if ( v3 ) /*0x51fa7b*/
          {
            _alloca_(v10[0]); /*0x51fa83*/
            TESFile_GetChunkData(a2, (char *)v10, 0); /*0x51fa8f*/
            v5 = (BSStringT *)(v11 + 0xA); /*0x51fa97*/
            goto LABEL_28; /*0x51fa97*/
          }
          break; /*0x51fa97*/
        case 0x4D414E4D: /*0x51f9f6*/
          if ( v3 ) /*0x51fa5b*/
          {
            _alloca_(v10[0]); /*0x51fa63*/
            TESFile_GetChunkData(a2, (char *)v10, 0); /*0x51fa6f*/
            v5 = (BSStringT *)v11; /*0x51fa74*/
            goto LABEL_28; /*0x51fa77*/
          }
          break; /*0x51fa77*/
        case 0x4D414E52: /*0x51f9f6*/
          v7 = (_WORD *)FormHeapAlloc(0x1Cu); /*0x51fa23*/
          v11 = v7; /*0x51fa2b*/
          v12 = 0; /*0x51fa30*/
          if ( v7 ) /*0x51fa37*/
            v8 = sub_51F570(v7); /*0x51fa3b*/
          else
            v8 = 0; /*0x51fa42*/
          v12 = 0xFFFFFFFF; /*0x51fa48*/
          v11 = v8; /*0x51fa4f*/
          BSSimpleList_PushBack((_DWORD *)(this + 0x3C), (int)v8); /*0x51fa52*/
          break; /*0x51fa57*/
        case 0x4D414E58: /*0x51f9f6*/
          v6 = (char *)FormHeapAlloc(8u); /*0x51fa07*/
          TESFile_GetChunkData(a2, v6, 8u); /*0x51fa0e*/
          BSSimpleList_PushBack((_DWORD *)(this + 0x28), (int)v6); /*0x51fa17*/
          break; /*0x51fa1c*/
        default:
          break;
      }
    }
    else if ( ChunkType == 0x4D414E46 ) /*0x51f915*/
    {
      if ( v3 ) /*0x51f9b9*/
      {
        _alloca_(v10[0]); /*0x51f9c5*/
        TESFile_GetChunkData(a2, (char *)v10, 0); /*0x51f9d1*/
        v5 = (BSStringT *)(v11 + 4); /*0x51f9d9*/
LABEL_28:
        BSStringT_Set(v5, (const char *)v10, 0); /*0x51fa9a*/
      }
    }
    else if ( ChunkType > 0x4C4C5546 ) /*0x51f920*/
    {
      if ( ChunkType == 0x4D414E43 ) /*0x51f9a1*/
        TESFile_GetChunkData4(a2, (char *)(this + 0x38)); /*0x51f9ad*/
    }
    else
    {
      switch ( ChunkType ) /*0x51f922*/
      {
        case 0x4C4C5546: /*0x51f922*/
          if ( this ) /*0x51f977*/
            TESFullname_Load((TESFullName *)(this + 0x18), a2); /*0x51f97e*/
          else
            TESFullname_Load(0, a2); /*0x51f98f*/
          break;
        case 0x41544144: /*0x51f922*/
          TESForm_LoadGenericComponents((TESForm *)this, a2, (void *)(this + 0x34), 1u); /*0x51f96b*/
          break;
        case 0x44494445: /*0x51f922*/
          _alloca_(v10[0]); /*0x51f93c*/
          TESFile_GetChunkData(a2, (char *)v10, 0x200u); /*0x51f94b*/
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, v10); /*0x51f95b*/
          break;
      }
    }
    if ( !TESFile_GetNextChunk(a2) ) /*0x51faa4*/
      return 1; /*0x51fab6*/
    v3 = v11; /*0x51f900*/
  }
}
