void __cdecl sub_A259B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&fCameraCasterSize);
  if ( off_B14EC4 )
  {
    if ( *off_B14EC4 == 0x53 )
      FormHeapFree((unsigned int)off_B14EC4);
  }
}
