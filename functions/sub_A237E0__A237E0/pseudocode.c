// Verified INI setting cleanup removes fCanopyShadowGrassMult from the setting list and frees a dynamically allocated name if applicable.
void __cdecl INISetting_fCanopyShadowGrassMult_SpeedTree_atexit()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&fCanopyShadowGrassMult_SpeedTree); /*0xa237ea*/
  if ( MEMORY[0xB1263C][0] ) /*0xa237f6*/
  {
    if ( *MEMORY[0xB1263C][0] == 0x53 ) /*0xa237fb*/
      FormHeapFree((unsigned int)MEMORY[0xB1263C][0]); /*0xa237fe*/
  }
}
