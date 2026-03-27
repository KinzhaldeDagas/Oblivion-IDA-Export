void __cdecl sub_A234F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B12104);
  if ( off_B12108 )
  {
    if ( *off_B12108 == 0x53 )
      FormHeapFree((unsigned int)off_B12108);
  }
}
