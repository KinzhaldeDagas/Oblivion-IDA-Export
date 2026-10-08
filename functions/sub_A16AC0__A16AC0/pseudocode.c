void __cdecl sub_A16AC0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B02D30); /*0xa16aca*/
  if ( off_B02D34 ) /*0xa16ad6*/
  {
    if ( *off_B02D34 == 0x53 ) /*0xa16adb*/
      FormHeapFree((unsigned int)off_B02D34); /*0xa16ade*/
  }
}
