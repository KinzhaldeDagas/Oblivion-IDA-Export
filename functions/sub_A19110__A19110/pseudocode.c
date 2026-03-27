void __cdecl sub_A19110()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06D54);
  if ( off_B06D58 )
  {
    if ( *off_B06D58 == 0x53 )
      FormHeapFree((unsigned int)off_B06D58);
  }
}
