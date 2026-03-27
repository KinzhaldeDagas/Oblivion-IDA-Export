void __cdecl sub_A24ED0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&aGIJ);
  if ( off_B14808 )
  {
    if ( *off_B14808 == 0x53 )
      FormHeapFree((unsigned int)off_B14808);
  }
}
