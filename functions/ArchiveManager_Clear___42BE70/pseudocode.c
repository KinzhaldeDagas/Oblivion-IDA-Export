void ArchiveManager_Clear_()
{
  _DWORD *v0; // esi
  int v1; // ecx
  unsigned int i; // esi
  int v3; // ecx
  unsigned int j; // esi

  if ( MEMORY[0xB338E0] ) /*0x42be7c*/
  {
    v0 = (_DWORD *)MEMORY[0xB338E0]; /*0x42be7e*/
    do /*0x42be97*/
    {
      if ( *v0 ) /*0x42be84*/
        (**(void (__thiscall ***)(_DWORD, int))*v0)(*v0, 1); /*0x42be90*/
      v0 = (_DWORD *)v0[1]; /*0x42be92*/
    }
    while ( v0 ); /*0x42be97*/
    BSSimpleList_Clear((_DWORD *)MEMORY[0xB338E0]); /*0x42be9f*/
    FormHeapFree(MEMORY[0xB338E0]); /*0x42beaa*/
    MEMORY[0xB338E0] = 0; /*0x42beb2*/
  }
  v1 = MEMORY[0xB33930]; /*0x42beb8*/
  if ( MEMORY[0xB33930] ) /*0x42bec0*/
  {
    for ( i = 0; i < *(unsigned __int16 *)(MEMORY[0xB33930] + 0xA); ++i ) /*0x42bec4*/
    {
      FormHeapFree(*(_DWORD *)(*(_DWORD *)(v1 + 4) + 4 * i)); /*0x42bed7*/
      v1 = MEMORY[0xB33930]; /*0x42bedc*/
    }
    (**(void (__thiscall ***)(int, int))v1)(v1, 1); /*0x42bef6*/
  }
  v3 = MEMORY[0xB33934]; /*0x42bef8*/
  if ( MEMORY[0xB33934] ) /*0x42bf00*/
  {
    for ( j = 0; j < *(unsigned __int16 *)(MEMORY[0xB33934] + 0xA); ++j ) /*0x42bf04*/
    {
      FormHeapFree(*(_DWORD *)(*(_DWORD *)(v3 + 4) + 4 * j)); /*0x42bf17*/
      v3 = MEMORY[0xB33934]; /*0x42bf1c*/
    }
    (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x42bf36*/
  }
  MEMORY[0xB338E8][0] = 0; /*0x42bf38*/
  dword_B3390C[0] = 0; /*0x42bf3e*/
  unk_B338EC = 0; /*0x42bf44*/
  unk_B33910 = 0; /*0x42bf4a*/
  unk_B338F0 = 0; /*0x42bf50*/
  unk_B33914 = 0; /*0x42bf56*/
  unk_B338F4 = 0; /*0x42bf5c*/
  unk_B33918 = 0; /*0x42bf62*/
  unk_B338F8 = 0; /*0x42bf68*/
  unk_B3391C = 0; /*0x42bf6e*/
  unk_B338FC = 0; /*0x42bf74*/
  unk_B33920 = 0; /*0x42bf7a*/
  unk_B33900 = 0; /*0x42bf80*/
  unk_B33924 = 0; /*0x42bf86*/
  unk_B33904 = 0; /*0x42bf8c*/
  unk_B33928 = 0; /*0x42bf92*/
  unk_B33908 = 0; /*0x42bf98*/
  unk_B3392C = 0; /*0x42bf9e*/
}
