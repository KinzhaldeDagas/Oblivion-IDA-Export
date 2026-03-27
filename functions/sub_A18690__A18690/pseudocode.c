void __cdecl sub_A18690()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06704);
  if ( off_B06708 )
  {
    if ( *(_BYTE *)off_B06708 == 0x53 )
      FormHeapFree((unsigned int)off_B06708);
  }
}
