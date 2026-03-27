void __cdecl sub_A18240()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B0559C);
  if ( off_B055A0 )
  {
    if ( *off_B055A0 == 0x53 )
      FormHeapFree((unsigned int)off_B055A0);
  }
}
