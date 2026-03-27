void __cdecl sub_A23400()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bUSeMultithreadedFaceGen);
  if ( off_B120E0 )
  {
    if ( *off_B120E0 == 0x53 )
      FormHeapFree((unsigned int)off_B120E0);
  }
}
