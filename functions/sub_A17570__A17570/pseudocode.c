void __cdecl sub_A17570()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B0340C);
  if ( off_B03410 )
  {
    if ( *off_B03410 == 0x53 )
      FormHeapFree((unsigned int)off_B03410);
  }
}
