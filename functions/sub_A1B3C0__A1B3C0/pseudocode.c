void __cdecl sub_A1B3C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B08138);
  if ( off_B0813C )
  {
    if ( *off_B0813C == 0x53 )
      FormHeapFree((unsigned int)off_B0813C);
  }
}
