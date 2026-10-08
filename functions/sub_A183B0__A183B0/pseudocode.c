void __cdecl sub_A183B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B05BA4); /*0xa183ba*/
  if ( off_B05BA8 ) /*0xa183c6*/
  {
    if ( *off_B05BA8 == 0x53 ) /*0xa183cb*/
      FormHeapFree((unsigned int)off_B05BA8); /*0xa183ce*/
  }
}
