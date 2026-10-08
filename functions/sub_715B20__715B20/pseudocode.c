int __fastcall sub_715B20(int a1)
{
  int result; // eax

  for ( result = 0; a1; ++result ) /*0x715b24*/
    a1 = *(_DWORD *)(a1 + 0x34); /*0x715b26*/
  return result; /*0x715b30*/
}
