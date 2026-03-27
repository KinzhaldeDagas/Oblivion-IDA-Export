char __thiscall TESFile_HaveMastersChanged(Data *this)
{
  tListVoid *p_masterList; // edi
  char v2; // bl
  tListVoid *p_masterlistSizeInfo; // ebp
  _DWORD *data; // esi
  HANDLE FirstFileA; // eax
  bool v6; // zf
  struct _WIN32_FIND_DATAA FindFileData; // [esp+Ch] [ebp-248h] BYREF
  CHAR FileName[260]; // [esp+14Ch] [ebp-108h] BYREF

  p_masterList = &this->masterList;
  v2 = 0;
  p_masterlistSizeInfo = &this->masterlistSizeInfo;
  if ( this != (Data *)0xFFFFFC20 )
  {
    do
    {
      if ( !p_masterList->node.data || !p_masterlistSizeInfo || !p_masterlistSizeInfo->node.data )
        return v2;
      _sprintf(FileName, "%s", (const char *)p_masterList->node.data);
      data = p_masterlistSizeInfo->node.data;
      FirstFileA = FindFirstFileA(FileName, &FindFileData);
      if ( FirstFileA == (HANDLE)0xFFFFFFFF )
      {
        if ( *data )
          goto LABEL_11;
        v6 = data[1] == 0;
      }
      else
      {
        FindClose(FirstFileA);
        if ( FindFileData.nFileSizeLow != *data )
          goto LABEL_11;
        v6 = FindFileData.nFileSizeHigh == data[1];
      }
      if ( !v6 )
LABEL_11:
        v2 = 1;
      p_masterList = (tListVoid *)p_masterList->node.next;
      p_masterlistSizeInfo = (tListVoid *)p_masterlistSizeInfo->node.next;
    }
    while ( p_masterList );
  }
  return v2;
}
