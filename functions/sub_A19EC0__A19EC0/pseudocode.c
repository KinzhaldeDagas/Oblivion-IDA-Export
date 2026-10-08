void __cdecl sub_A19EC0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bBlendLandscapeValue); /*0xa19eca*/
  if ( off_B06FA0 ) /*0xa19ed6*/
  {
    if ( *off_B06FA0 == 0x53 ) /*0xa19edb*/
      FormHeapFree((unsigned int)off_B06FA0); /*0xa19ede*/
  }
}
