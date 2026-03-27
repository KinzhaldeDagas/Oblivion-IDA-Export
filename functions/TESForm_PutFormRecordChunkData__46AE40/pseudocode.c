void *__cdecl TESForm_PutFormRecordChunkData(int a1, void *Src, size_t Size)
{
  int v3; // eax
  __int16 v4; // di
  int v5; // esi
  FreeEntry *v6; // eax
  char *v7; // eax
  void *v9; // [esp-8h] [ebp-10h]
  size_t v10; // [esp-4h] [ebp-Ch]
  size_t v11; // [esp-4h] [ebp-Ch]

  v3 = Size;
  v4 = Size;
  if ( (unsigned int)Size > 0xFFFF )
  {
    LODWORD(v10) = 4;
    TESForm_PutFormRecordChunkData(0x58585858, &Size, v10);
    v3 = Size;
    v4 = 0;
  }
  v5 = TESForm_Static_FormRecordSize;
  LODWORD(v10) = TESForm_Static_FormRecordSize + v3 + 6;
  v9 = TESForm_Static_FormRecordBuffer;
  TESForm_Static_FormRecordSize = v10;
  v6 = MemoryHeap_Reallocate((void (__thiscall ***)(void *, int))&FormHeap, v9, v10);
  TESForm_Static_FormRecordBuffer = v6;
  v7 = (char *)v6 + v5;
  *((_WORD *)v7 + 2) = v4;
  *(_DWORD *)v7 = a1;
  *((_WORD *)v7 + 2) = *((_WORD *)v7 + 2);
  LODWORD(v11) = Size;
  return memcpy((char *)TESForm_Static_FormRecordBuffer + v5 + 6, Src, v11);
}
