void __cdecl sub_A17A10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bCheckRuntimeCollisions_Archive);
  if ( off_B04434 )
  {
    if ( *off_B04434 == 0x53 )
      FormHeapFree((unsigned int)off_B04434);
  }
}
