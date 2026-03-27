void __cdecl sub_A1B8A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B08B54);
  if ( off_B08B58 )
  {
    if ( *off_B08B58 == 0x53 )
      FormHeapFree((unsigned int)off_B08B58);
  }
}
