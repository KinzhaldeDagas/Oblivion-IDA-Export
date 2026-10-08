void __cdecl sub_A23370()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&useFaceGenLODF); /*0xa2337a*/
  if ( off_B120C8 ) /*0xa23386*/
  {
    if ( *off_B120C8 == 0x53 ) /*0xa2338b*/
      FormHeapFree((unsigned int)off_B120C8); /*0xa2338e*/
  }
}
