void sub_4BE910()
{
  unsigned int v0; // esi

  if ( unk_B35B90 ) /*0x4be910*/
  {
    v0 = unk_B35B90; /*0x4be91b*/
    sub_4BE820((unsigned int **)unk_B35B90); /*0x4be91d*/
    FormHeapFree(v0); /*0x4be923*/
    unk_B35B90 = 0; /*0x4be92b*/
  }
}
