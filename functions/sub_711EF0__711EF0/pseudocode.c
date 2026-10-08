_DWORD *sub_711EF0()
{
  _DWORD *v1; // eax

  if ( unk_B40334 ) /*0x711f11*/
    return (_DWORD *)unk_B40334(); /*0x711f1a*/
  v1 = (_DWORD *)FormHeapAlloc(0x210u); /*0x711f31*/
  if ( v1 ) /*0x711f47*/
    return sub_7478C0(v1); /*0x711f4b*/
  else
    return 0; /*0x711f60*/
}
