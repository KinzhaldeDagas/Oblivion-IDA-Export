void __cdecl sub_A18300()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B055BC);
  if ( off_B055C0 )
  {
    if ( *off_B055C0 == 0x53 )
      FormHeapFree((unsigned int)off_B055C0);
  }
}
