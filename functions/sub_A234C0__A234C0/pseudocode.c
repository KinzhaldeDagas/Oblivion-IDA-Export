void __cdecl sub_A234C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B120FC);
  if ( off_B12100 )
  {
    if ( *off_B12100 == 0x53 )
      FormHeapFree((unsigned int)off_B12100);
  }
}
