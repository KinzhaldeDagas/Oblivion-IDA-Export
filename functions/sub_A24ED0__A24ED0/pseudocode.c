void __cdecl sub_A24ED0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&aGIJ); /*0xa24eda*/
  if ( off_B14808 ) /*0xa24ee6*/
  {
    if ( *off_B14808 == 0x53 ) /*0xa24eeb*/
      FormHeapFree((unsigned int)off_B14808); /*0xa24eee*/
  }
}
