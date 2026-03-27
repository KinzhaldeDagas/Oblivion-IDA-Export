void __cdecl sub_A25810()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14E44);
  if ( off_B14E48 )
  {
    if ( *off_B14E48 == 0x53 )
      FormHeapFree((unsigned int)off_B14E48);
  }
}
