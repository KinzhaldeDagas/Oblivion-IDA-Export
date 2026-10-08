void __cdecl sub_A196E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&OB_INI_fTreeDimmer_BlurShaderHDR_010201A0); /*0xa196ea*/
  if ( off_B06E50 ) /*0xa196f6*/
  {
    if ( *off_B06E50 == 0x53 ) /*0xa196fb*/
      FormHeapFree((unsigned int)off_B06E50); /*0xa196fe*/
  }
}
