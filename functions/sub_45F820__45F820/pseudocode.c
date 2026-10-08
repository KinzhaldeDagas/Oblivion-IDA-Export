char __thiscall sub_45F820(TESSaveLoadGame_SerializationView *this, int a2)
{
  OblivionTESGlobalListNode *p_listGlobals; // ebx
  unsigned __int16 v3; // ax
  OblivionTESGlobalListNode *v5; // ecx
  int v6; // ebp
  FreeEntry *v7; // eax
  unsigned __int8 *bufferCursor; // edi
  TESGlobal *item; // eax
  unsigned int refID; // ecx
  UInt32 mainThreadID; // edi
  unsigned int v12; // eax
  void (__cdecl *v13)(int, unsigned __int8 *, int, int *, int); // edx
  char result; // al
  _DWORD *v15; // esi
  int v16; // [esp+0h] [ebp-1Ch]
  unsigned int Src; // [esp+10h] [ebp-Ch] BYREF
  float data; // [esp+14h] [ebp-8h]
  int v19; // [esp+18h] [ebp-4h] BYREF

  p_listGlobals = &g_TESDataHandler->listGlobals; /*0x45f82b*/
  v3 = 0; /*0x45f82f*/
  v5 = p_listGlobals; /*0x45f836*/
  if ( g_TESDataHandler != (TESDataHandler *)0xFFFFFF8C ) /*0x45f838*/
  {
    do /*0x45f84d*/
    {
      if ( v5->item ) /*0x45f840*/
        ++v3; /*0x45f845*/
      v5 = v5->next; /*0x45f848*/
    }
    while ( v5 ); /*0x45f84d*/
  }
  v6 = (unsigned __int16)(8 * v3 + 2); /*0x45f85c*/
  Src = v3; /*0x45f861*/
  v7 = j_MemoryHeap_Alloc(&FormHeap, 8 * v3 + 2, (unsigned __int16)(8 * v3 + 2) | 0x100000000LL, v16); /*0x45f86b*/
  this->bufferCursor = (unsigned __int8 *)v7; /*0x45f872*/
  if ( !v7 ) /*0x45f875*/
    sub_404EC0("Could not create save buffer, out of memory."); /*0x45f87c*/
  bufferCursor = this->bufferCursor; /*0x45f884*/
  v19 = (int)bufferCursor; /*0x45f890*/
  SaveLoad_SaveData(this, &Src, 2u); /*0x45f894*/
  if ( p_listGlobals )
  {
    do
    {
      item = p_listGlobals->item; /*0x45f8a0*/
      if ( p_listGlobals->item )
      {
        refID = item->super.refID; /*0x45f8a6*/
        data = item->data; /*0x45f8ae*/
        Src = refID; /*0x45f8b6*/
        SaveLoad_SaveFormID(this, &Src, 4u); /*0x45f8bd*/
        mainThreadID = MEMORY[0xB33398]->mainThreadID; /*0x45f8c7*/
        if ( GetCurrentThreadId() == mainThreadID ) /*0x45f8d2*/
          LOBYTE(v12) = this->flags; /*0x45f8d4*/
        else
          v12 = this->flags >> 0x12; /*0x45f8dc*/
        if ( (v12 & 1) != 0 )
          (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))(
            *(_DWORD *)&MEMORY[0xB33E90][0xF00],
            "Error: TESSaveLoadGame::SaveGameData() was called while loading.\n");
        *(float *)this->bufferCursor = data; /*0x45f8fe*/
        this->bufferCursor += 4; /*0x45f900*/
      }
      p_listGlobals = p_listGlobals->next; /*0x45f904*/
    }
    while ( p_listGlobals );
    bufferCursor = (unsigned __int8 *)v19; /*0x45f90b*/
  }
  if ( (this->flags & 0x200) != 0 ) /*0x45f917*/
  {
    *((_DWORD *)this + 0x24) += v6; /*0x45f919*/
  }
  else
  {
    v13 = *(void (__cdecl **)(int, unsigned __int8 *, int, int *, int))(a2 + 8); /*0x45f925*/
    v19 = 1; /*0x45f932*/
    v13(a2, bufferCursor, v6, &v19, 1); /*0x45f93a*/
  }
  result = MemoryHeap_Free_checked(bufferCursor); /*0x45f945*/
  this->bufferCursor = 0; /*0x45f94a*/
  v15 = *(_DWORD **)&this->unknown38[8]; /*0x45f951*/
  if ( v15 ) /*0x45f956*/
    return sub_4531B0(v15, v6, v6, "Global Variables"); /*0x45f960*/
  return result; /*0x45f965*/
}
