void __cdecl sub_A18D50()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06CB4);
  if ( off_B06CB8 )
  {
    if ( *off_B06CB8 == 0x53 )
      FormHeapFree((unsigned int)off_B06CB8);
  }
}
