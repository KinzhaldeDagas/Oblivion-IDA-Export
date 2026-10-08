void __cdecl sub_A16CA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&OB_INI_fLODTreeMipMapLODBias_SpeedTree_010201A0); /*0xa16caa*/
  if ( off_B02D84 ) /*0xa16cb6*/
  {
    if ( *off_B02D84 == 0x53 ) /*0xa16cbb*/
      FormHeapFree((unsigned int)off_B02D84); /*0xa16cbe*/
  }
}
