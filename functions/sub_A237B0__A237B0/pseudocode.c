// Verified INI setting cleanup removes iCanopyShadowScale from the setting list and frees a dynamically allocated name if applicable.
void __cdecl INISetting_iCanopyShadowScale_SpeedTree_atexit()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iCanopyShadowScale_SpeedTree); /*0xa237ba*/
  if ( MEMORY[0xB12634] ) /*0xa237c6*/
  {
    if ( *MEMORY[0xB12634] == 0x53 ) /*0xa237cb*/
      FormHeapFree((unsigned int)MEMORY[0xB12634]); /*0xa237ce*/
  }
}
