void __cdecl sub_A17F80()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B0523C); /*0xa17f8a*/
  if ( off_B05240 ) /*0xa17f96*/
  {
    if ( *off_B05240 == 0x53 ) /*0xa17f9b*/
      FormHeapFree((unsigned int)off_B05240); /*0xa17f9e*/
  }
}
