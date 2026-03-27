char __thiscall sub_4B6EA0(TESForm *this, Data *a2)
{
  signed int ChunkType; // eax
  TESForm *v5; // eax
  int v6; // eax
  TESForm *v7; // eax
  TESForm *v8; // eax
  int v9[3]; // [esp+0h] [ebp-14h] BYREF
  int a1; // [esp+Ch] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x18 )
    return 0;
  TESFile_InitializeFormFromRecord(a2, this, v9[0], v9[1]);
  TESForm_SetIsLinked(this, 0);
  ChunkType = TESFile_GetChunkType(a2);
  if ( ChunkType )
  {
    while ( 1 )
    {
      if ( ChunkType > 0x4D414E41 )
      {
        if ( ChunkType <= 0x4D414E53 )
        {
          if ( ChunkType == 0x4D414E53 )
          {
            a1 = 0;
            TESFile_GetChunkData4(a2, (char *)&a1);
            TESForm_ResolveFormID((UInt32 *)&a1, a2);
            v8 = TESForm_LookupByFormID(a1);
            *((_DWORD *)this + 0x16) = OblivionDynamicCast(
                                         v8,
                                         0,
                                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                         &TESSound `RTTI Type Descriptor',
                                         0);
          }
          else
          {
            v6 = ChunkType - 0x4D414E42;
            if ( v6 )
            {
              if ( v6 == 4 )
                TESFile_GetChunkData(a2, (char *)this + 0x64, 1u);
            }
            else
            {
              a1 = 0;
              TESFile_GetChunkData4(a2, (char *)&a1);
              TESForm_ResolveFormID((UInt32 *)&a1, a2);
              v7 = TESForm_LookupByFormID(a1);
              *((_DWORD *)this + 0x18) = OblivionDynamicCast(
                                           v7,
                                           0,
                                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                           &TESSound `RTTI Type Descriptor',
                                           0);
            }
          }
          goto LABEL_31;
        }
        if ( ChunkType == 0x4D414E54 )
        {
          a1 = 0;
          TESFile_GetChunkData4(a2, (char *)&a1);
          BSSimpleList_PushFront((_DWORD *)this + 0x1A, a1);
        }
        else if ( ChunkType == 0x54444F4D )
        {
          goto LABEL_27;
        }
      }
      else if ( ChunkType == 0x4D414E41 )
      {
        a1 = 0;
        TESFile_GetChunkData4(a2, (char *)&a1);
        TESForm_ResolveFormID((UInt32 *)&a1, a2);
        v5 = TESForm_LookupByFormID(a1);
        *((_DWORD *)this + 0x17) = OblivionDynamicCast(
                                     v5,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     &TESSound `RTTI Type Descriptor',
                                     0);
      }
      else
      {
        if ( ChunkType > 0x49524353 )
        {
          if ( ChunkType != 0x4C444F4D )
          {
            if ( ChunkType == 0x4C4C5546 )
            {
              if ( this )
                TESFullname_Load((TESFullName *)this + 3, a2);
              else
                TESFullname_Load(0, a2);
            }
            goto LABEL_31;
          }
LABEL_27:
          if ( this )
            TESModel_Load((float *)this + 0xC, a2);
          else
            TESModel_Load(0, a2);
          goto LABEL_31;
        }
        switch ( ChunkType )
        {
          case 0x49524353:
            a1 = 0;
            TESFile_GetChunkData4(a2, (char *)&a1);
            *((_DWORD *)this + 0x13) = a1;
            TESScriptableForm_Link((int)(this + 3), this);
            break;
          case 0x42444F4D:
            goto LABEL_27;
          case 0x44494445:
            _alloca_();
            TESFile_GetChunkData(a2, (char *)v9, 0x200u);
            this->vtbl->SetEditorID(this, (const char *)v9);
            break;
        }
      }
LABEL_31:
      if ( TESFile_GetNextChunk(a2) )
      {
        ChunkType = TESFile_GetChunkType(a2);
        if ( ChunkType )
          continue;
      }
      return 1;
    }
  }
  return 1;
}
