void __cdecl sub_A26520()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B162B4);
  if ( off_B162B8 )
  {
    if ( *off_B162B8 == 0x53 )
      FormHeapFree((unsigned int)off_B162B8);
  }
}
