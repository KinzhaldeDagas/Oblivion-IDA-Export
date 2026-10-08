void __usercall sub_572D90(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  unsigned int v3; // esi

  if ( unk_B3A6A4 ) /*0x572d90*/
  {
    v3 = unk_B3A6A4; /*0x572d9b*/
    sub_572010((char *)unk_B3A6A4, a1, a2, a3); /*0x572d9d*/
    FormHeapFree(v3); /*0x572da3*/
    unk_B3A6A4 = 0; /*0x572dab*/
  }
}
