void __cdecl sub_A24640()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bActivateGamebyroPicks);
  if ( off_B135AC )
  {
    if ( *off_B135AC == 0x53 )
      FormHeapFree((unsigned int)off_B135AC);
  }
}
