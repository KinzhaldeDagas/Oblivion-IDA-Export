void __cdecl sub_A18380()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B05B9C); /*0xa1838a*/
  if ( off_B05BA0 ) /*0xa18396*/
  {
    if ( *off_B05BA0 == 0x53 ) /*0xa1839b*/
      FormHeapFree((unsigned int)off_B05BA0); /*0xa1839e*/
  }
}
