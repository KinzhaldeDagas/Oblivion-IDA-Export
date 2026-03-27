void __cdecl sub_A24EA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&aSs_fJ);
  if ( off_B14800 )
  {
    if ( *off_B14800 == 0x53 )
      FormHeapFree((unsigned int)off_B14800);
  }
}
