void __cdecl sub_A18270()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B055A4);
  if ( off_B055A8 )
  {
    if ( *off_B055A8 == 0x53 )
      FormHeapFree((unsigned int)off_B055A8);
  }
}
