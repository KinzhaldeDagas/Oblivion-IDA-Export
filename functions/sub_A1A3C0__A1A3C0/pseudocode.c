void __cdecl sub_A1A3C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B07090);
  if ( off_B07094 )
  {
    if ( *off_B07094 == 0x53 )
      FormHeapFree((unsigned int)off_B07094);
  }
}
