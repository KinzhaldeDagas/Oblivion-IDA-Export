void __cdecl sub_A16BE0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bUseHardDriveCache); /*0xa16bea*/
  if ( off_B02D64 ) /*0xa16bf6*/
  {
    if ( *off_B02D64 == 0x53 ) /*0xa16bfb*/
      FormHeapFree((unsigned int)off_B02D64); /*0xa16bfe*/
  }
}
