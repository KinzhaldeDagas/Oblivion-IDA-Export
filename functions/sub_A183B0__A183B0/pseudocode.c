void __cdecl sub_A183B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B05BA4);
  if ( off_B05BA8 )
  {
    if ( *off_B05BA8 == 0x53 )
      FormHeapFree((unsigned int)off_B05BA8);
  }
}
