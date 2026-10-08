void __cdecl sub_A19E90()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&OB_INI_bFullBrightLighting_Display_010201A0); /*0xa19e9a*/
  if ( off_B06F98 ) /*0xa19ea6*/
  {
    if ( *off_B06F98 == 0x53 ) /*0xa19eab*/
      FormHeapFree((unsigned int)off_B06F98); /*0xa19eae*/
  }
}
