void __cdecl sub_A243D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B13200);
  if ( off_B13204 )
  {
    if ( *off_B13204 == 0x53 )
      FormHeapFree((unsigned int)off_B13204);
  }
}
