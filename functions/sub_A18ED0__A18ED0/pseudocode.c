void __cdecl sub_A18ED0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&DoStaticAndArchShadows);
  if ( off_B06CF8 )
  {
    if ( *off_B06CF8 == 0x53 )
      FormHeapFree((unsigned int)off_B06CF8);
  }
}
