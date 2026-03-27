void __cdecl sub_A249E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B1399C);
  if ( off_B139A0 )
  {
    if ( *off_B139A0 == 0x53 )
      FormHeapFree((unsigned int)off_B139A0);
  }
}
