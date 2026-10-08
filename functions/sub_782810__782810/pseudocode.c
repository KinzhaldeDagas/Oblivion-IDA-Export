int sub_782810()
{
  int result; // eax
  unsigned int v1; // esi

  result = unk_B428D4; /*0x782810*/
  if ( unk_B428D4 ) /*0x782810*/
  {
    do /*0x782833*/
    {
      v1 = *(_DWORD *)(result + 0x18); /*0x782820*/
      *(_DWORD *)(result + 8) = 0; /*0x782824*/
      FormHeapFree(result); /*0x782827*/
      result = v1; /*0x782831*/
    }
    while ( v1 ); /*0x782833*/
  }
  unk_B428D4 = 0; /*0x782836*/
  return result; /*0x78283c*/
}
