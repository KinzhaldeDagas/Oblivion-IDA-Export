void __cdecl sub_A24550()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&aRia9Uj);
  if ( off_B13584 )
  {
    if ( *off_B13584 == 0x53 )
      FormHeapFree((unsigned int)off_B13584);
  }
}
