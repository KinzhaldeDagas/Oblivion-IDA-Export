void __cdecl sub_A24370()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B12E34);
  if ( off_B12E38[0] )
  {
    if ( *off_B12E38[0] == 0x53 )
      FormHeapFree((unsigned int)off_B12E38[0]);
  }
}
