char __thiscall TESFile_BuildLoadedMasterArray(Data *this, int *a2, char a3)
{
  UInt32 masterCount; // edi
  tListVoid *p_masterList; // ebp
  Data **v7; // eax
  Data **v8; // ebx
  int *v9; // edi
  int v10; // esi
  char v11; // [esp+Fh] [ebp-1h]

  masterCount = this->masterCount; /*0x44fc7e*/
  p_masterList = &this->masterList; /*0x44fc84*/
  if ( this->masterFiles ) /*0x44fc75*/
    FormHeapFree((unsigned int)this->masterFiles); /*0x44fc8d*/
  this->masterFiles = 0; /*0x44fc97*/
  if ( !masterCount ) /*0x44fca1*/
    return 1; /*0x44fca5*/
  v7 = (Data **)FormHeapAlloc((unsigned __int64)masterCount >> 0x1E != 0 ? 0xFFFFFFFF : 4 * masterCount);// MEF v51 bridge-stack audit confirms v45 guard: replacement CALL entry has injected return at [ESP] and pending size at [ESP+4]. Failure removes both, restores EDI/ESI/EBP and the saved ECX/local slot, returns false with retn 8.
  this->masterFiles = v7; /*0x44fcc9*/
  v11 = 1; /*0x44fccf*/
  if ( p_masterList )
  {
    v8 = v7;                                    // Oblivion masterFiles array is allocated for masterCount entries and populated one slot per MAST list occurrence. The loaded-file search restarts for every slot. /*0x44fcd7*/
    do
    {
      if ( !p_masterList->node.data ) /*0x44fce0*/
        break; /*0x44fce4*/
      v9 = a2; /*0x44fce6*/
      while ( v9 )
      {
        v10 = *v9; /*0x44fcf0*/
        if ( !*v9 ) /*0x44fcf0*/
          break; /*0x44fcf0*/
        if ( !CRT_StricmpLocaleDispatch((unsigned __int8 *)p_masterList->node.data, (unsigned __int8 *)(v10 + 0x1C)) )// Each ordered MAST slot restarts a case-insensitive loaded-file scan; comparison uses the MAST list pointer as a C string and the first matching TESFile is stored at 0x44FD3F. Duplicate MAST entries remain distinct pointer slots. The MAST reader at 0x451C00 uses an exact-length allocation and maxSize=0 read without adding NUL, so unterminated names may overread. /*0x44fd08*/
        {
          *v8 = (Data *)v10;                    // Stores the resolved first-match TESFile pointer into this MAST slot, then advances the pointer slot while iterating the original MAST list. Duplicate list entries are preserved, not collapsed. /*0x44fd3f*/
          break; /*0x44fd3f*/
        }
        v9 = (int *)v9[1]; /*0x44fd0a*/
        if ( !v9 || !*v9 )
        {
          *v8 = 0; /*0x44fd1b*/
          if ( a3 )
            PrintError("Missing Masterfile: %s", (const char *)p_masterList->node.data);
          v11 = 0; /*0x44fd34*/
        }
      }
      p_masterList = (tListVoid *)p_masterList->node.next; /*0x44fd41*/
      ++v8; /*0x44fd44*/
    }
    while ( p_masterList );
  }
  return v11; /*0x44fca3*/
}
