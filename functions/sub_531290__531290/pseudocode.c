TESForm *__thiscall sub_531290(TESForm *this)
{
  TESForm *v1; // esi
  Data *OverrideFile; // eax
  Data *v3; // ebx
  UInt32 ChunkType; // eax
  int v5; // eax
  int v6; // esi
  unsigned int length; // esi
  char v9[16]; // [esp+0h] [ebp-78h] BYREF
  TESForm v10[3]; // [esp+10h] [ebp-68h] BYREF
  int v11; // [esp+60h] [ebp-18h] BYREF
  TESForm *v12; // [esp+64h] [ebp-14h]
  unsigned int v13; // [esp+74h] [ebp-4h]
  int savedregs; // [esp+78h] [ebp+0h] BYREF

  v1 = this;
  v12 = this;
  if ( this != (TESForm *)dword_B3652C )
  {
    dword_B3652C = (int)this;
    Script_Constructor(v10);
    v13 = 0;
    sub_4FC7A0(&stru_B36530, (char)&savedregs, (int)v10);
    TESForm_SetIsLinked(&stru_B36530, 0);
    TESForm_MakeTemporary(&stru_B36530);
    OverrideFile = TESForm_GetOverrideFile(v1, 0xFFFFFFFF);
    if ( OverrideFile )
    {
      if ( *(_DWORD *)&v1[2].member.type )
      {
        v3 = sub_4520F0(OverrideFile);
        if ( TESFIle_JumpToRecord(v3, *(char **)&v1[2].member.type) )
        {
          if ( (unsigned __int8)TESFile_GetRecordType(v3) == *(_BYTE *)(0xC * (unsigned __int8)v1->member.type + 0xB05E00) )
          {
            ChunkType = TESFile_GetChunkType(v3);
            if ( ChunkType )
            {
              while ( 1 )
              {
                if ( ChunkType == 0x41444353 )
                {
                  length = v3->currentChunk.length;
                  _alloca_();
                  _memset(v9, 0, length);
                  TESFile_GetChunkData(v3, v9, 0);
                  sub_4F9DF0((void **)&stru_B36530.vtbl, (char)&savedregs, (int)v9, length, v9);
                }
                else
                {
                  if ( ChunkType != 0x4F524353 )
                  {
                    if ( ChunkType == 0x52484353 )
                    {
                      TESFile_GetChunkData(v3, byte_B36548, 0);
                      TESTexture::ClearComponentReferences(byte_B36548);
                    }
                    goto LABEL_17;
                  }
                  v5 = FormHeapAlloc(0x10u);
                  if ( v5 )
                  {
                    *(_DWORD *)v5 = 0;
                    *(_WORD *)(v5 + 4) = 0;
                    *(_WORD *)(v5 + 6) = 0;
                    *(_DWORD *)(v5 + 8) = 0;
                    *(_DWORD *)(v5 + 0xC) = 0;
                    v6 = v5;
                  }
                  else
                  {
                    v6 = 0;
                  }
                  TESFile_GetChunkData4(v3, (char *)&v11);
                  *(_DWORD *)(v6 + 8) = v11;
                  BSSimpleList_PushBack(dword_B36570, v6);
                }
                v1 = v12;
LABEL_17:
                if ( TESFile_GetNextChunk(v3) )
                {
                  ChunkType = TESFile_GetChunkType(v3);
                  if ( ChunkType )
                    continue;
                }
                break;
              }
            }
            sub_4FBB60(&stru_B36530, *(float *)&v1);
          }
        }
      }
    }
    v13 = 0xFFFFFFFF;
    Script_StaticDestructor(v10);
  }
  return &stru_B36530;
}
