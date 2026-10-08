void __cdecl sub_A249E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B1399C); /*0xa249ea*/
  if ( off_B139A0 ) /*0xa249f6*/
  {
    if ( *off_B139A0 == 0x53 ) /*0xa249fb*/
      FormHeapFree((unsigned int)off_B139A0); /*0xa249fe*/
  }
}
