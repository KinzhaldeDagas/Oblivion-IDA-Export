char __thiscall TESFile_BuildLoadedMasterArray(Data *this, int *a2, char a3)
{
  UInt32 masterCount; // edi
  tListVoid *p_masterList; // ebp
  Data **v7; // eax
  Data **v8; // ebx
  int *v9; // edi
  int v10; // esi
  char v11; // [esp+Fh] [ebp-1h]

  masterCount = this->masterCount;
  p_masterList = &this->masterList;
  if ( this->masterFiles )
    FormHeapFree((unsigned int)this->masterFiles);
  this->masterFiles = 0;
  if ( !masterCount )
    return 1;
  v7 = (Data **)FormHeapAlloc((unsigned __int64)masterCount >> 0x1E != 0 ? 0xFFFFFFFF : 4 * masterCount);
  this->masterFiles = v7;
  v11 = 1;
  if ( p_masterList )
  {
    v8 = v7;
    do
    {
      if ( !p_masterList->node.data )
        break;
      v9 = a2;
      while ( v9 )
      {
        v10 = *v9;
        if ( !*v9 )
          break;
        if ( !_strcmp((char *)p_masterList->node.data, (char *)(v10 + 0x1C)) )
        {
          *v8 = (Data *)v10;
          break;
        }
        v9 = (int *)v9[1];
        if ( !v9 || !*v9 )
        {
          *v8 = 0;
          if ( a3 )
            PrintError("Missing Masterfile: %s", (const char *)p_masterList->node.data);
          v11 = 0;
        }
      }
      p_masterList = (tListVoid *)p_masterList->node.next;
      ++v8;
    }
    while ( p_masterList );
  }
  return v11;
}
