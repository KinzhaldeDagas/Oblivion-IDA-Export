void __cdecl sub_A243A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B12E3C); /*0xa243aa*/
  if ( off_B12E40 ) /*0xa243b6*/
  {
    if ( *off_B12E40 == 0x53 ) /*0xa243bb*/
      FormHeapFree((unsigned int)off_B12E40); /*0xa243be*/
  }
}
