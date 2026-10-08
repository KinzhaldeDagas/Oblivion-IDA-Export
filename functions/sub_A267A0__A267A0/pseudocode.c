void __cdecl sub_A267A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B23C60); /*0xa267aa*/
  if ( off_B23C64[0] ) /*0xa267b6*/
  {
    if ( *off_B23C64[0] == 0x53 ) /*0xa267bb*/
      FormHeapFree((unsigned int)off_B23C64[0]); /*0xa267be*/
  }
}
