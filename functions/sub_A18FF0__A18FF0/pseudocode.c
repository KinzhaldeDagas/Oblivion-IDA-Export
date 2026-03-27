void __cdecl sub_A18FF0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&texmipmapskip);
  if ( off_B06D28 )
  {
    if ( *off_B06D28 == 0x53 )
      FormHeapFree((unsigned int)off_B06D28);
  }
}
