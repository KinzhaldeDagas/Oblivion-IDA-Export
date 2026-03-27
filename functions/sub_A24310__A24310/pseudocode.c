void __cdecl sub_A24310()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B12E24);
  if ( off_B12E28[0] )
  {
    if ( *off_B12E28[0] == 0x53 )
      FormHeapFree((unsigned int)off_B12E28[0]);
  }
}
