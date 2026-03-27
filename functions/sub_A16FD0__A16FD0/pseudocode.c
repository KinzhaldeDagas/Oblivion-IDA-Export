void __cdecl sub_A16FD0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bShowMenuTextureUse);
  if ( off_B02E18 )
  {
    if ( *off_B02E18 == 0x53 )
      FormHeapFree((unsigned int)off_B02E18);
  }
}
