void __cdecl sub_A253E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B148F4); /*0xa253ea*/
  if ( off_B148F8 ) /*0xa253f6*/
  {
    if ( *off_B148F8 == 0x53 ) /*0xa253fb*/
      FormHeapFree((unsigned int)off_B148F8); /*0xa253fe*/
  }
}
