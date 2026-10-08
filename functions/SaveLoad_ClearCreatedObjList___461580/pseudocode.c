void __thiscall SaveLoad_ClearCreatedObjList__(TESSaveLoadGame_SerializationView *this)
{
  TESSaveLoadGame_SerializationView *v1; // edi
  char *v2; // ebx
  UInt32 *v3; // ebp
  UInt32 v4; // esi
  unsigned __int8 *v5; // eax
  TESForm *v6; // eax
  ChangesMap *currentChangesMap; // edi
  unsigned int v8; // ebx
  int v9; // esi
  unsigned int v10; // [esp+10h] [ebp-Ch] BYREF
  char *v11; // [esp+14h] [ebp-8h]
  char *v12; // [esp+18h] [ebp-4h]

  v1 = this; /*0x461587*/
  v2 = (char *)&this->unknown1C[0xC]; /*0x461589*/
  v3 = (UInt32 *)&this->unknown1C[0xC]; /*0x46158c*/
  v12 = (char *)this; /*0x461590*/
  v11 = (char *)&this->unknown1C[0xC]; /*0x461594*/
  if ( this != (TESSaveLoadGame_SerializationView *)0xFFFFFFD8 ) /*0x461598*/
  {
    while ( v3[1] || *v3 ) /*0x4615a4*/
    {
      v4 = *v3; /*0x4615b4*/
      v5 = (unsigned __int8 *)TESForm_LookupByFormID(*v3); /*0x4615b8*/
      if ( v5 ) /*0x4615c2*/
        sub_449D20((char *)g_TESDataHandler, v5); /*0x4615cb*/
      v6 = TESForm_LookupByFormID(v4); /*0x4615d1*/
      if ( v6 ) /*0x4615db*/
      {
        TESSaveLoadGame_DeleteForm(v1, v6); /*0x4615e0*/
      }
      else
      {
        currentChangesMap = v1->currentChangesMap; /*0x4615ef*/
        if ( (g_TESSaveLoadGame->flags & 0x1000) == 0 ) /*0x4615f7*/
        {
          v10 = 0; /*0x461601*/
          NiTMap_GetAt(currentChangesMap, v4, &v10); /*0x461609*/
          v8 = v10; /*0x46160e*/
          if ( v10 ) /*0x461614*/
          {
            NiTMap_RemoveAt(currentChangesMap, v4); /*0x461619*/
            if ( *(_DWORD *)(v8 + 4) ) /*0x46161e*/
              MemoryHeap_Free_checked(*(void **)(v8 + 4)); /*0x46162b*/
            FormHeapFree(v8); /*0x461631*/
          }
          v2 = v11; /*0x461639*/
        }
      }
      v3 = (UInt32 *)v3[1]; /*0x46163d*/
      if ( !v3 ) /*0x461642*/
        break; /*0x461642*/
      v1 = (TESSaveLoadGame_SerializationView *)v12; /*0x4615a0*/
    }
  }
  if ( *((_DWORD *)v2 + 1) ) /*0x461648*/
  {
    do /*0x461664*/
    {
      v9 = *(_DWORD *)(*((_DWORD *)v2 + 1) + 4); /*0x461653*/
      FormHeapFree(*((_DWORD *)v2 + 1)); /*0x461657*/
      *((_DWORD *)v2 + 1) = v9; /*0x461661*/
    }
    while ( v9 ); /*0x461664*/
  }
  *(_DWORD *)v2 = 0; /*0x461669*/
}
