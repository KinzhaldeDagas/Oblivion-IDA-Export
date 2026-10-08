void __cdecl sub_A23520()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B1210C); /*0xa2352a*/
  if ( off_B12110 ) /*0xa23536*/
  {
    if ( *off_B12110 == 0x53 ) /*0xa2353b*/
      FormHeapFree((unsigned int)off_B12110); /*0xa2353e*/
  }
}
