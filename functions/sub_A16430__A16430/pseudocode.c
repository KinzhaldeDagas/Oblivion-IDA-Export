void __cdecl sub_A16430()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bUseJoystick);
  if ( off_B02C30 )
  {
    if ( *off_B02C30 == 0x53 )
      FormHeapFree((unsigned int)off_B02C30);
  }
}
