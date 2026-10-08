void __thiscall TESSpellList_SaveComponent(int *this)
{
  int *v2; // esi
  int v3; // eax
  int *v4; // esi
  int v5; // eax

  v2 = this + 1; /*0x46f4b4*/
  if ( this != (int *)0xFFFFFFFC ) /*0x46f4b9*/
  {
    do /*0x46f4e7*/
    {
      v3 = *v2; /*0x46f4c0*/
      if ( !*v2 ) /*0x46f4c0*/
        break; /*0x46f4c4*/
      if ( (*(_DWORD *)(v3 + 8) & 0x20) == 0 ) /*0x46f4cf*/
        TESForm_PutCurrentChunkData4(0x4F4C5053, *(_DWORD *)(v3 + 0xC)); /*0x46f4da*/
      v2 = (int *)v2[1]; /*0x46f4e2*/
    }
    while ( v2 ); /*0x46f4e7*/
  }
  v4 = this + 3; /*0x46f4e9*/
  if ( this != (int *)0xFFFFFFF4 ) /*0x46f4ee*/
  {
    do /*0x46f517*/
    {
      v5 = *v4; /*0x46f4f0*/
      if ( !*v4 ) /*0x46f4f0*/
        break; /*0x46f4f4*/
      if ( (*(_DWORD *)(v5 + 8) & 0x20) == 0 ) /*0x46f4ff*/
        TESForm_PutCurrentChunkData4(0x4F4C5053, *(_DWORD *)(v5 + 0xC)); /*0x46f50a*/
      v4 = (int *)v4[1]; /*0x46f512*/
    }
    while ( v4 ); /*0x46f517*/
  }
}
