unsigned int __cdecl TESForm_ResolveFormID(UInt32 *a1, Data *a2)
{
  unsigned int result; // eax
  _BYTE *MasterByIndex; // eax
  int FileIndex; // edx

  if ( (SaveLoad_CurrentSavegame->flags & 0x20000) != 0 )
  {
    result = SaveLoad_ResolveFormID(SaveLoad_CurrentSavegame, *a1);
    *a1 = result;
  }
  else
  {
    result = *a1;
    if ( !*a1 || result > 0x7FF )
    {
      if ( a2 )
      {
        MasterByIndex = TESFile_GetMasterByIndex(a2, HIBYTE(result) + 1);
        if ( MasterByIndex )
        {
          result = *a1 & 0xFFFFFF | ((unsigned __int8)TESFile_GetFileIndex(MasterByIndex) << 0x18);
          *a1 = result;
        }
        else
        {
          FileIndex = (unsigned __int8)TESFile_GetFileIndex(a2);
          result = *a1 & 0xFFFFFF;
          *a1 = result | (FileIndex << 0x18);
        }
      }
    }
  }
  return result;
}
