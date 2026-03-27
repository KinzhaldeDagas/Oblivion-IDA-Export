void __cdecl sub_A18DB0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bDoImageSpaceEffect);
  if ( off_B06CC8 )
  {
    if ( *off_B06CC8 == 0x53 )
      FormHeapFree((unsigned int)off_B06CC8);
  }
}
