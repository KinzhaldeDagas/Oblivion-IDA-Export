void __cdecl sub_A17F00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iIdentityBatchRemove);
  if ( off_B05230 )
  {
    if ( *off_B05230 == 0x53 )
      FormHeapFree((unsigned int)off_B05230);
  }
}
