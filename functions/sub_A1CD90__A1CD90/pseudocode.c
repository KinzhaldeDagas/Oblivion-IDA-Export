void __cdecl sub_A1CD90()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B4C); /*0xa1cd9a*/
  if ( off_B11B50[0] ) /*0xa1cda6*/
  {
    if ( *off_B11B50[0] == 0x53 ) /*0xa1cdab*/
      FormHeapFree((unsigned int)off_B11B50[0]); /*0xa1cdae*/
  }
}
