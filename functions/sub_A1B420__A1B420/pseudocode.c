void __cdecl sub_A1B420()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&useQuadratic);
  if ( off_B0814C )
  {
    if ( *off_B0814C == 0x53 )
      FormHeapFree((unsigned int)off_B0814C);
  }
}
