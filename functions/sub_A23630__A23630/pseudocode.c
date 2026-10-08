// Verified INI setting cleanup removes bForceFullLOD from the setting list and frees a dynamically allocated name if applicable.
void __cdecl INISetting_bForceFullLOD_SpeedTree_atexit()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bForceFullLOD_SpeedTree); /*0xa2363a*/
  if ( MEMORY[0xB125F4] ) /*0xa23646*/
  {
    if ( *MEMORY[0xB125F4] == 0x53 ) /*0xa2364b*/
      FormHeapFree((unsigned int)MEMORY[0xB125F4]); /*0xa2364e*/
  }
}
