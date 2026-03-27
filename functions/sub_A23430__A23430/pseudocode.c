void __cdecl sub_A23430()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B120E4);
  if ( off_B120E8 )
  {
    if ( *off_B120E8 == 0x53 )
      FormHeapFree((unsigned int)off_B120E8);
  }
}
