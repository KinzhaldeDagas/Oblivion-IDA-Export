void __cdecl sub_A17C60()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B05148);
  if ( off_B0514C )
  {
    if ( *off_B0514C == 0x53 )
      FormHeapFree((unsigned int)off_B0514C);
  }
}
