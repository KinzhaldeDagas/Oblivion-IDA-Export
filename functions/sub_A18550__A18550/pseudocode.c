void __cdecl sub_A18550()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06310);
  if ( off_B06314[0] )
  {
    if ( *off_B06314[0] == 0x53 )
      FormHeapFree((unsigned int)off_B06314[0]);
  }
}
