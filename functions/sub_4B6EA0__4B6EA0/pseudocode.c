// Verified TESObjectDOOR LoadForm vtable override (TESObjectDOOR vtable slot +0x1C at 0xA44A70). Checks record type 0x18, loads standard door subrecords, and for TNAM (record chunk code 0x4D414E54) reads each 4-byte FormID and pushes it into super.randomTeleport. This loader stores unresolved IDs; TESObjectDOOR_DoPostFixup performs the resolution.
char __thiscall TESObjectDOOR_LoadForm(TESObjectDOOR *this, Data *file)
{
  signed int ChunkType; // eax
  TESForm *v5; // eax
  int v6; // eax
  TESForm *v7; // eax
  TESForm *v8; // eax
  int v9[3]; // [esp+0h] [ebp-14h] BYREF
  int a1; // [esp+Ch] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(file) != 0x18 ) /*0x4b6ec1*/
    return 0; /*0x4b6ec5*/
  TESFile_InitializeFormFromRecord(file, (TESForm *)this, v9[0], v9[1]); /*0x4b6ecd*/
  TESForm_SetIsLinked((TESForm *)this, 0); /*0x4b6ed7*/
  ChunkType = TESFile_GetChunkType(file); /*0x4b6ede*/
  if ( ChunkType ) /*0x4b6ee5*/
  {
    while ( 1 ) /*0x4b6ef0*/
    {
      if ( ChunkType > 0x4D414E41 ) /*0x4b6ef5*/
      {
        if ( ChunkType <= 0x4D414E53 ) /*0x4b6ff6*/
        {
          if ( ChunkType == 0x4D414E53 ) /*0x4b6ffc*/
          {
            a1 = 0; /*0x4b706a*/
            TESFile_GetChunkData4(file, (char *)&a1); /*0x4b706d*/
            TESForm_ResolveFormID((UInt32 *)&a1, file); /*0x4b7077*/
            v8 = TESForm_LookupByFormID(a1); /*0x4b708f*/
            this->super.animSounds[0] = (TESSound *)OblivionDynamicCast( /*0x4b70a0*/
                                                      v8,
                                                      0,
                                                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                                      &TESSound `RTTI Type Descriptor',
                                                      0);
          }
          else
          {
            v6 = ChunkType - 0x4D414E42; /*0x4b6ffe*/
            if ( v6 ) /*0x4b7003*/
            {
              if ( v6 == 4 ) /*0x4b7008*/
                TESFile_GetChunkData(file, (char *)&this->super.doorFlags, 1u); /*0x4b7016*/
            }
            else
            {
              a1 = 0; /*0x4b7026*/
              TESFile_GetChunkData4(file, (char *)&a1); /*0x4b7029*/
              TESForm_ResolveFormID((UInt32 *)&a1, file); /*0x4b7033*/
              v7 = TESForm_LookupByFormID(a1); /*0x4b704b*/
              this->super.animSounds[2] = (TESSound *)OblivionDynamicCast( /*0x4b705c*/
                                                        v7,
                                                        0,
                                                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                                        &TESSound `RTTI Type Descriptor',
                                                        0);
            }
          }
          goto LABEL_31; /*0x4b701b*/
        }
        if ( ChunkType == 0x4D414E54 )          // Verified TNAM list load branch (chunk code 0x4D414E54): reads one 32-bit serialized FormID with TESFile_GetChunkData4 and pushes that raw value into TESObjectDOORMembr.randomTeleport. It does not resolve the FormID here. /*0x4b70aa*/
        {
          a1 = 0; /*0x4b70da*/
          TESFile_GetChunkData4(file, (char *)&a1); /*0x4b70dd*/
          BSSimpleList_PushFront(&this->super.randomTeleport.space, a1); /*0x4b70e9*/
        }
        else if ( ChunkType == 0x54444F4D ) /*0x4b70b1*/
        {
          goto LABEL_27; /*0x4b70b1*/
        }
      }
      else if ( ChunkType == 0x4D414E41 ) /*0x4b6efb*/
      {
        a1 = 0; /*0x4b6fb3*/
        TESFile_GetChunkData4(file, (char *)&a1); /*0x4b6fb6*/
        TESForm_ResolveFormID((UInt32 *)&a1, file); /*0x4b6fc0*/
        v5 = TESForm_LookupByFormID(a1); /*0x4b6fd8*/
        this->super.animSounds[1] = (TESSound *)OblivionDynamicCast( /*0x4b6fe9*/
                                                  v5,
                                                  0,
                                                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                                  &TESSound `RTTI Type Descriptor',
                                                  0);
      }
      else
      {
        if ( ChunkType > 0x49524353 ) /*0x4b6f06*/
        {
          if ( ChunkType != 0x4C444F4D ) /*0x4b6f75*/
          {
            if ( ChunkType == 0x4C4C5546 ) /*0x4b6f80*/
            {
              if ( this ) /*0x4b6f88*/
                TESFullname_Load(&this->super.fullName, file); /*0x4b6f8f*/
              else
                TESFullname_Load(0, file); /*0x4b6fa0*/
            }
            goto LABEL_31; /*0x4b6f97*/
          }
LABEL_27:
          if ( this ) /*0x4b70b5*/
            TESModel_Load((float *)&this->super.model, file); /*0x4b70bc*/
          else
            TESModel_Load(0, file); /*0x4b70ca*/
          goto LABEL_31; /*0x4b70c4*/
        }
        switch ( ChunkType ) /*0x4b6f08*/
        {
          case 0x49524353: /*0x4b6f08*/
            a1 = 0; /*0x4b6f54*/
            TESFile_GetChunkData4(file, (char *)&a1); /*0x4b6f57*/
            this->super.scriptable.script = (Script *)a1; /*0x4b6f5f*/
            TESScriptableForm_Link((int)&this->super.scriptable, (TESForm *)this); /*0x4b6f66*/
            break;
          case 0x42444F4D: /*0x4b6f08*/
            goto LABEL_27; /*0x4b6f0f*/
          case 0x44494445: /*0x4b6f08*/
            _alloca_(v9[0]); /*0x4b6f26*/
            TESFile_GetChunkData(file, (char *)v9, 0x200u); /*0x4b6f35*/
            this->__vftable->super.super.super.SetEditorID((TESForm *)this, (const char *)v9); /*0x4b6f45*/
            break;
        }
      }
LABEL_31:
      if ( TESFile_GetNextChunk(file) ) /*0x4b70f0*/
      {
        ChunkType = TESFile_GetChunkType(file); /*0x4b70fb*/
        if ( ChunkType ) /*0x4b7102*/
          continue; /*0x4b7102*/
      }
      return 1; /*0x4b7102*/
    }
  }
  return 1; /*0x4b710d*/
}
