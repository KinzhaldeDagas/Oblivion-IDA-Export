void __cdecl sub_A24BC0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&aPURJ);
  if ( off_B1413C )
  {
    if ( *off_B1413C == 0x53 )
      FormHeapFree((unsigned int)off_B1413C);
  }
}
