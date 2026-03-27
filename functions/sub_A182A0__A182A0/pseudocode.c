void __cdecl sub_A182A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B055AC);
  if ( off_B055B0 )
  {
    if ( *off_B055B0 == 0x53 )
      FormHeapFree((unsigned int)off_B055B0);
  }
}
