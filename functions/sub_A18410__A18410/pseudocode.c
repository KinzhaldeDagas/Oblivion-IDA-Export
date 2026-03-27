void __cdecl sub_A18410()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&Str);
  if ( off_B05BB8 )
  {
    if ( *off_B05BB8 == 0x53 )
      FormHeapFree((unsigned int)off_B05BB8);
  }
}
