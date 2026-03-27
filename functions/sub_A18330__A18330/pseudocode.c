void __cdecl sub_A18330()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B055C4);
  if ( off_B055C8 )
  {
    if ( *off_B055C8 == 0x53 )
      FormHeapFree((unsigned int)off_B055C8);
  }
}
