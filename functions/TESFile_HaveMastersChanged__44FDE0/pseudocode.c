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

  p_masterList = &this->masterList; /*0x44fdf9*/
  v2 = 0; /*0x44fdff*/
  p_masterlistSizeInfo = &this->masterlistSizeInfo; /*0x44fe03*/
  if ( this != (Data *)0xFFFFFC20 ) /*0x44fe09*/
  {
    do /*0x44fe10*/
    {
      if ( !p_masterList->node.data || !p_masterlistSizeInfo || !p_masterlistSizeInfo->node.data ) /*0x44fe19*/
        return v2; /*0x44fe1d*/
      _sprintf(FileName, "%s", (const char *)p_masterList->node.data); /*0x44fe2f*/
      data = p_masterlistSizeInfo->node.data; /*0x44fe34*/
      FirstFileA = FindFirstFileA(FileName, &FindFileData); /*0x44fe47*/
      if ( FirstFileA == (HANDLE)0xFFFFFFFF ) /*0x44fe50*/
      {
        if ( *data ) /*0x44fe6a*/
          goto LABEL_11; /*0x44fe6d*/
        v6 = data[1] == 0; /*0x44fe6f*/
      }
      else
      {
        FindClose(FirstFileA); /*0x44fe53*/
        if ( FindFileData.nFileSizeLow != *data ) /*0x44fe5f*/
          goto LABEL_11; /*0x44fe5f*/
        v6 = FindFileData.nFileSizeHigh == data[1]; /*0x44fe65*/
      }
      if ( !v6 ) /*0x44fe73*/
LABEL_11:
        v2 = 1; /*0x44fe75*/
      p_masterList = (tListVoid *)p_masterList->node.next; /*0x44fe77*/
      p_masterlistSizeInfo = (tListVoid *)p_masterlistSizeInfo->node.next; /*0x44fe7c*/
    }
    while ( p_masterList );                     // TESFile_HaveMastersChanged walks masterList and masterlistSizeInfo in parallel by ordinal, not by neighboring TES4 subrecords. It returns the current result as soon as either list ends. Thus non-adjacent MAST/DATA can still pair natively; missing/extra occurrences truncate this dependency-change check. /*0x44fe10*/
  }
  return v2; /*0x44fe82*/
}
