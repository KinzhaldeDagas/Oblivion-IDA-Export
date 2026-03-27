void __cdecl sub_A17E40()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iUpdateType);
  if ( off_B05210 )
  {
    if ( *off_B05210 == 0x53 )
      FormHeapFree((unsigned int)off_B05210);
  }
}
