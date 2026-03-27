void __cdecl sub_A26280()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B16244);
  if ( off_B16248 )
  {
    if ( *off_B16248 == 0x53 )
      FormHeapFree((unsigned int)off_B16248);
  }
}
