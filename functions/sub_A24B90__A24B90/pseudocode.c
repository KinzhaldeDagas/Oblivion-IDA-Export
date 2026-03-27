void __cdecl sub_A24B90()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B14130);
  if ( off_B14134 )
  {
    if ( *off_B14134 == 0x53 )
      FormHeapFree((unsigned int)off_B14134);
  }
}
