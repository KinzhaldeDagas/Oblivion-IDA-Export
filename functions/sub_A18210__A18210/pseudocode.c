void __cdecl sub_A18210()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B05594);
  if ( off_B05598 )
  {
    if ( *off_B05598 == 0x53 )
      FormHeapFree((unsigned int)off_B05598);
  }
}
