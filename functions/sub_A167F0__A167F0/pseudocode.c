void __cdecl sub_A167F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02CB8);
  if ( off_B02CBC )
  {
    if ( *off_B02CBC == 0x53 )
      FormHeapFree((unsigned int)off_B02CBC);
  }
}
