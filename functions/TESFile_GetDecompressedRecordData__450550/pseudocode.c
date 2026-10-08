// EngineIssues review: compressed TES record loader trusts advertised decompressed size and subtracts 4 from compressed length before inflate; verify length>=4 and cap decompressed size.
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
        HIDWORD(v11) = 1; /*0x4505a0*/
        LODWORD(v11) = this->currentRecord.chunkInfo.length + 1; /*0x4505a2*/
        v5 = j_MemoryHeap_Alloc(&FormHeap, a3, v11, a4); /*0x4505ad*/
        if ( v5 )
        {
          length = this->currentRecord.chunkInfo.length; /*0x4505bb*/
          if ( Archive_ReadBytes(
                 (int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this->bsFile,
                 (int)v5,
                 length) != length )
          {
            PrintError("TESFile: Failed to read in buffer data for compressed form.");
            MemoryHeap_Free_checked(v5); /*0x4505e2*/
            return; /*0x4505ee*/
          }
          prev = (UInt32)v5->prev;              // MEF v20 fix: validate compressed TES record header before reading advertised decompressed length. Requires compressed length >= 4 and advertised length in sane range; invalid data resumes at existing cleanup/fail path 0x4506F6. /*0x4505ef*/
          v10 = (int)v5->prev; /*0x4505f1*/
          *((_BYTE *)&v5->prev + length) = 0; /*0x4505f2*/
          this->currentRecordDCBuffer = MemoryHeap_Alloc_ZlibCallback(v10); /*0x450609*/
          this->currentRecordDCLength = prev; /*0x45060f*/
          v19 = sub_42BA60; /*0x450615*/
          v20 = sub_42BA80; /*0x45061d*/
          v21 = 0; /*0x450625*/
          v16 = 0; /*0x450629*/
          *(_DWORD *)ArgList = 0; /*0x45062d*/
          if ( zlib_InflateInitEx(ArgList, "1.2.1", 0x38) )
          {
            Zlib_inflateEnd(ArgList); /*0x450642*/
            PrintError("TESFile: Error initializing ZLib inflate stream.");
            TESFile_ClearDecompressedBuffer(this); /*0x450656*/
            return; /*0x450662*/
          }
          currentRecordDCBuffer = this->currentRecordDCBuffer; /*0x450669*/
          v16 = this->currentRecord.chunkInfo.length - 4; /*0x450672*/
          *(_DWORD *)ArgList = &v5->next; /*0x45067f*/
          v18 = prev; /*0x450683*/
          v17 = currentRecordDCBuffer; /*0x450687*/
          v9 = zlib_Inflate((unsigned __int8 **)ArgList, 0, a3, a2, v14); /*0x45068b*/
          if ( v9 == 0xFFFFFFFE || v9 == 2 || v9 == 0xFFFFFFFD || v9 == 0xFFFFFFFC )
          {
            Zlib_inflateEnd(ArgList); /*0x4506e2*/
            PrintError("TESFile: Error inflating ZLib stream.");
          }
          else
          {
            if ( v9 == 1 ) /*0x4506aa*/
            {
              Zlib_inflateEnd(ArgList); /*0x4506c2*/
              MemoryHeap_Free_checked(v5); /*0x4506d0*/
              return; /*0x4506dc*/
            }
            Zlib_inflateEnd(ArgList); /*0x4506b1*/
            PrintError("TESFile: Error: ZLib stream did not terminate.");
          }
          TESFile_ClearDecompressedBuffer(this); /*0x4506f6*/
          MemoryHeap_Free_checked(v5); /*0x450701*/
        }
      }
    }
  }
}
