void __cdecl sub_A199E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06ECC);
  if ( off_B06ED0 )
  {
    if ( *off_B06ED0 == 0x53 )
      FormHeapFree((unsigned int)off_B06ED0);
  }
}
