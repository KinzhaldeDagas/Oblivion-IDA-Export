void __cdecl sub_A26430()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B1628C);
  if ( off_B16290 )
  {
    if ( *off_B16290 == 0x53 )
      FormHeapFree((unsigned int)off_B16290);
  }
}
