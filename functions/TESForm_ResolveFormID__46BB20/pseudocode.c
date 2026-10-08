// Resolves a plugin-record FormID to current load order. During save loading it uses modRefIDTable; otherwise the serialized high byte selects a master, falling back to the current file, while preserving the low 24-bit object ID.
unsigned int __cdecl TESForm_ResolveFormID(UInt32 *a1, Data *a2)
{
  unsigned int result; // eax
  _BYTE *MasterByIndex; // eax
  int FileIndex; // edx

  if ( (g_TESSaveLoadGame->flags & 0x20000) != 0 ) /*0x46bb2f*/
  {
    result = SaveLoad_ResolveFormID(g_TESSaveLoadGame, *a1); /*0x46bb38*/
    *a1 = result; /*0x46bb3d*/
  }
  else
  {
    result = *a1; /*0x46bb46*/
    if ( !*a1 || result > 0x7FF ) /*0x46bb51*/
    {
      if ( a2 ) /*0x46bb59*/
      {
        MasterByIndex = TESFile_GetMasterByIndex(a2, HIBYTE(result) + 1); /*0x46bb64*/
        if ( MasterByIndex ) /*0x46bb6b*/
        {
          result = *a1 & 0xFFFFFF | ((unsigned __int8)TESFile_GetFileIndex(MasterByIndex) << 0x18); /*0x46bb82*/
          *a1 = result; /*0x46bb84*/
        }
        else
        {
          FileIndex = (unsigned __int8)TESFile_GetFileIndex(a2); /*0x46bb90*/
          result = *a1 & 0xFFFFFF; /*0x46bb98*/
          *a1 = result | (FileIndex << 0x18); /*0x46bb9f*/
        }
      }
    }
  }
  return result; /*0x46bb3f*/
}
