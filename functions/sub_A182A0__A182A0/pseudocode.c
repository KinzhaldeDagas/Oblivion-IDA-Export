void __cdecl sub_A182A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B055AC); /*0xa182aa*/
  if ( off_B055B0 ) /*0xa182b6*/
  {
    if ( *off_B055B0 == 0x53 ) /*0xa182bb*/
      FormHeapFree((unsigned int)off_B055B0); /*0xa182be*/
  }
}
