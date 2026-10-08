void __cdecl sub_A172D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&g_DefaulFOV); /*0xa172da*/
  if ( off_B03140 ) /*0xa172e6*/
  {
    if ( *off_B03140 == 0x53 ) /*0xa172eb*/
      FormHeapFree((unsigned int)off_B03140); /*0xa172ee*/
  }
}
