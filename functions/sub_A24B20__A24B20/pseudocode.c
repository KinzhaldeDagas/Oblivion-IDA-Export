void __cdecl sub_A24B20()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B140B0);
  if ( off_B140B4 )
  {
    if ( *off_B140B4 == 0x53 )
      FormHeapFree((unsigned int)off_B140B4);
  }
}
