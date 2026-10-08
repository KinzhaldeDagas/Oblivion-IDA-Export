void __cdecl sub_A232A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bFaceMipmaps); /*0xa232aa*/
  if ( off_B11F90[0] ) /*0xa232b6*/
  {
    if ( *off_B11F90[0] == 0x53 ) /*0xa232bb*/
      FormHeapFree((unsigned int)off_B11F90[0]); /*0xa232be*/
  }
}
