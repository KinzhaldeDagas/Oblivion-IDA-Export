void __cdecl sub_A24580()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&aS_7);
  if ( off_B1358C )
  {
    if ( *off_B1358C == 0x53 )
      FormHeapFree((unsigned int)off_B1358C);
  }
}
