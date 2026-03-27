void __cdecl sub_A186E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&aHsz_fG);
  if ( off_B068CC )
  {
    if ( *off_B068CC == 0x53 )
      FormHeapFree((unsigned int)off_B068CC);
  }
}
