void __cdecl sub_A17E10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B05204);
  if ( off_B05208 )
  {
    if ( *off_B05208 == 0x53 )
      FormHeapFree((unsigned int)off_B05208);
  }
}
