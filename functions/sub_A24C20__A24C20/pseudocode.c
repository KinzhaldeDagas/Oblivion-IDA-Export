void __cdecl sub_A24C20()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&aOgsJ); /*0xa24c2a*/
  if ( off_B1414C ) /*0xa24c36*/
  {
    if ( *off_B1414C == 0x53 ) /*0xa24c3b*/
      FormHeapFree((unsigned int)off_B1414C); /*0xa24c3e*/
  }
}
