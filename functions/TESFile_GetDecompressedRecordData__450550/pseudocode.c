void __usercall TESFile_GetDecompressedRecordData(Data *this@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4@<edi>)
{
  FreeEntry *v5; // edi
  UInt32 length; // ebx
  UInt32 prev; // ebp
  void *currentRecordDCBuffer; // edx
  int v9; // eax
  int v10; // [esp-10h] [ebp-4Ch]
  size_t v11; // [esp-Ch] [ebp-48h]
  size_t v14; // [esp-4h] [ebp-40h]
  char ArgList[4]; // [esp+4h] [ebp-38h] BYREF
  UInt32 v16; // [esp+8h] [ebp-34h]
  void *v17; // [esp+10h] [ebp-2Ch]
  UInt32 v18; // [esp+14h] [ebp-28h]
  int (__cdecl *v19)(int, int, int); // [esp+24h] [ebp-18h]
  int (__cdecl *v20)(int, void *); // [esp+28h] [ebp-14h]
  int v21; // [esp+2Ch] [ebp-10h]

  if ( this->currentRecord.chunkInfo.length )
  {
    if ( this->currentRecord.chunkInfo.type != dword_B05E20 && (this->currentRecord.flags & 0x40000) != 0 )
    {
      if ( (unsigned __int8)TESForm_GetFormTypeFromChunkType(this->currentRecord.chunkInfo.type) )
      {
        HIDWORD(v11) = 1;
        LODWORD(v11) = this->currentRecord.chunkInfo.length + 1;
        v5 = j_MemoryHeap_Alloc(&FormHeap, a3, v11, a4);
        if ( v5 )
        {
          length = this->currentRecord.chunkInfo.length;
          if ( ReadFile__(
                 (int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this->bsFile,
                 (int)v5,
                 length) != length )
          {
            PrintError("TESFile: Failed to read in buffer data for compressed form.");
            MemoryHeap_Free_checked(v5);
            return;
          }
          prev = (UInt32)v5->prev;
          v10 = (int)v5->prev;
          *((_BYTE *)&v5->prev + length) = 0;
          this->currentRecordDCBuffer = MemoryHeap_Alloc_ZlibCallback(v10);
          this->currentRecordDCLength = prev;
          v19 = sub_42BA60;
          v20 = sub_42BA80;
          v21 = 0;
          v16 = 0;
          *(_DWORD *)ArgList = 0;
          if ( zlib_InflateInitEx(ArgList, "1.2.1", 0x38) )
          {
            Zlib_inflateEnd(ArgList);
            PrintError("TESFile: Error initializing ZLib inflate stream.");
            TESFile_ClearDecompressedBuffer(this);
            return;
          }
          currentRecordDCBuffer = this->currentRecordDCBuffer;
          v16 = this->currentRecord.chunkInfo.length - 4;
          *(_DWORD *)ArgList = &v5->next;
          v18 = prev;
          v17 = currentRecordDCBuffer;
          v9 = zlib_Inflate((unsigned __int8 **)ArgList, 0, a3, a2, v14);
          if ( v9 == 0xFFFFFFFE || v9 == 2 || v9 == 0xFFFFFFFD || v9 == 0xFFFFFFFC )
          {
            Zlib_inflateEnd(ArgList);
            PrintError("TESFile: Error inflating ZLib stream.");
          }
          else
          {
            if ( v9 == 1 )
            {
              Zlib_inflateEnd(ArgList);
              MemoryHeap_Free_checked(v5);
              return;
            }
            Zlib_inflateEnd(ArgList);
            PrintError("TESFile: Error: ZLib stream did not terminate.");
          }
          TESFile_ClearDecompressedBuffer(this);
          MemoryHeap_Free_checked(v5);
        }
      }
    }
  }
}
