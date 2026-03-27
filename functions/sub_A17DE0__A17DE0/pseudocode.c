void __cdecl sub_A17DE0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B051FC);
  if ( off_B05200 )
  {
    if ( *off_B05200 == 0x53 )
      FormHeapFree((unsigned int)off_B05200);
  }
}
