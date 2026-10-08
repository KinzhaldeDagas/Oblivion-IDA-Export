void Menu_ClearB3A708()
{
  unsigned int v0; // [esp-4h] [ebp-4h]

  if ( unk_B3A708 ) /*0x587cf0*/
  {
    v0 = unk_B3A708; /*0x587cf9*/
    unk_B3A708 = 0; /*0x587cfa*/
    FormHeapFree(v0); /*0x587d04*/
    unk_B3A708 = 0; /*0x587d0c*/
  }
}
