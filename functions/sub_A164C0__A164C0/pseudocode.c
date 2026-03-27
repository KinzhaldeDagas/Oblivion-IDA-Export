void __cdecl sub_A164C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B02C44);
  if ( off_B02C48 )
  {
    if ( *off_B02C48 == 0x53 )
      FormHeapFree((unsigned int)off_B02C48);
  }
}
