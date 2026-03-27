void __cdecl sub_A19350()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06DB4);
  if ( off_B06DB8 )
  {
    if ( *off_B06DB8 == 0x53 )
      FormHeapFree((unsigned int)off_B06DB8);
  }
}
