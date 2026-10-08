// Verified helper contract: writes the 4-byte chunk code, 16-bit size, then memcpy-copies the supplied payload bytes unchanged. FormID conversion must therefore be performed by the caller; ExtraDataList_Save's XOWN branch supplies ownerForm->refID.
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

  v3 = Size; /*0x46ae40*/
  v4 = Size; /*0x46ae4b*/
  if ( (unsigned int)Size > 0xFFFF ) /*0x46ae4e*/
  {
    LODWORD(v10) = 4; /*0x46ae50*/
    TESForm_PutFormRecordChunkData(0x58585858, &Size, v10); /*0x46ae5c*/
    v3 = Size; /*0x46ae61*/
    v4 = 0; /*0x46ae68*/
  }
  v5 = MEMORY[0xB33C18]; /*0x46ae6a*/
  LODWORD(v10) = MEMORY[0xB33C18] + v3 + 6; /*0x46ae7a*/
  v9 = MEMORY[0xB33C14]; /*0x46ae7b*/
  MEMORY[0xB33C18] = v10; /*0x46ae81*/
  v6 = MemoryHeap_Reallocate((void (__thiscall ***)(void *, int))&FormHeap, v9, v10); /*0x46ae86*/
  MEMORY[0xB33C14] = v6; /*0x46ae8f*/
  v7 = (char *)v6 + v5; /*0x46ae94*/
  *((_WORD *)v7 + 2) = v4; /*0x46ae96*/
  *(_DWORD *)v7 = a1; /*0x46ae9c*/
  *((_WORD *)v7 + 2) = *((_WORD *)v7 + 2); /*0x46aea6*/
  LODWORD(v11) = Size; /*0x46aeb4*/
  return memcpy((char *)MEMORY[0xB33C14] + v5 + 6, Src, v11); /*0x46aec3*/
}
