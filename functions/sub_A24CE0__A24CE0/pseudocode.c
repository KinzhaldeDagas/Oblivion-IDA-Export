void __cdecl sub_A24CE0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14168); /*0xa24cea*/
  if ( off_B1416C ) /*0xa24cf6*/
  {
    if ( *off_B1416C == 0x53 ) /*0xa24cfb*/
      FormHeapFree((unsigned int)off_B1416C); /*0xa24cfe*/
  }
}
