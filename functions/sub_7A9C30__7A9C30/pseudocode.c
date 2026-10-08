// Release only a BSTPersistentList's already-free node chain at +0x0C to the global NiTList node pool, then clear that free-chain pointer and terminate the active tail link. It never destroys active or free-node RenderPass payload pointers.
void __thiscall BSTPersistentList_ReleaseFreeNodesToGlobalPool(BSTPersistentListPointer *this)
{
  BSTPersistentListPointerNode *freeHead; // edi
  void (__stdcall *v2)(LPCRITICAL_SECTION); // ebx
  DWORD (__stdcall *v3)(); // ebp
  BSTPersistentListPointerNode *v4; // esi
  bool v5; // zf
  BSTPersistentListPointerNode *tail; // ecx
  BSTPersistentListPointer *v7; // [esp+4h] [ebp-4h]

  freeHead = this->freeHead;                    // Load BSTPersistentList+0x0C free-node chain. This helper releases only already-free bucket nodes, never active RenderPass payloads. /*0x7a9c32*/
  v7 = this; /*0x7a9c37*/
  if ( freeHead ) /*0x7a9c3b*/
  {
    v2 = EnterCriticalSection; /*0x7a9c3e*/
    v3 = GetCurrentThreadId; /*0x7a9c45*/
    do /*0x7a9c9a*/
    {
      v4 = freeHead; /*0x7a9c50*/
      freeHead = freeHead->next; /*0x7a9c52*/
      v2((LPCRITICAL_SECTION)&MEMORY[0xB33E90][0x70]); /*0x7a9c59*/
      *(_DWORD *)&MEMORY[0xB33E90][0xE8] = v3(); /*0x7a9c5d*/
      ++*(_DWORD *)&MEMORY[0xB33E90][0xEC]; /*0x7a9c67*/
      v4->previous = 0; /*0x7a9c6f*/
      v4->next = *(BSTPersistentListPointerNode **)&MEMORY[0xB33E90][0x1C]; /*0x7a9c78*/
      v5 = (*(_DWORD *)&MEMORY[0xB33E90][0xEC])-- == 1; /*0x7a9c7a*/
      *(_DWORD *)&MEMORY[0xB33E90][0x1C] = v4; /*0x7a9c80*/
      if ( v5 ) /*0x7a9c86*/
        *(_DWORD *)&MEMORY[0xB33E90][0xE8] = 0; /*0x7a9c88*/
      LeaveCriticalSection((LPCRITICAL_SECTION)&MEMORY[0xB33E90][0x70]); /*0x7a9c92*/
    }
    while ( freeHead ); /*0x7a9c9a*/
    this = v7; /*0x7a9c9c*/
  }
  this->freeHead = 0;                           // Clear the local free-node chain after returning those nodes to the global pool. /*0x7a9ca3*/
  tail = this->tail; /*0x7a9caa*/
  if ( tail ) /*0x7a9cb0*/
    tail->next = 0; /*0x7a9cb2*/
}
