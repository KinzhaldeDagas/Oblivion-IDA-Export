void __cdecl sub_A23310()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&useFaceGenHeads);
  if ( off_B120B8 )
  {
    if ( *off_B120B8 == 0x53 )
      FormHeapFree((unsigned int)off_B120B8);
  }
}
