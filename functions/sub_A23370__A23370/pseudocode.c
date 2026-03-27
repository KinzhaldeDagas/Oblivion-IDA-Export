void __cdecl sub_A23370()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&useFaceGenLODF);
  if ( off_B120C8 )
  {
    if ( *off_B120C8 == 0x53 )
      FormHeapFree((unsigned int)off_B120C8);
  }
}
