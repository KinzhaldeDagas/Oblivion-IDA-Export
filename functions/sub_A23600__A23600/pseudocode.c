// Verified INI setting cleanup removes bEnableTrees from the setting list and frees a dynamically allocated name if applicable.
void __cdecl INISetting_bEnableTrees_SpeedTree_atexit()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bEnableTrees_SpeedTree); /*0xa2360a*/
  if ( MEMORY[0xB125EC] ) /*0xa23616*/
  {
    if ( *MEMORY[0xB125EC] == 0x53 ) /*0xa2361b*/
      FormHeapFree((unsigned int)MEMORY[0xB125EC]); /*0xa2361e*/
  }
}
