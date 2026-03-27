void __cdecl sub_A24400()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B13208);
  if ( off_B1320C )
  {
    if ( *off_B1320C == 0x53 )
      FormHeapFree((unsigned int)off_B1320C);
  }
}
