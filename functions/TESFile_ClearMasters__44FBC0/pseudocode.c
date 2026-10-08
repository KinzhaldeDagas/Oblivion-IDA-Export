void __thiscall TESFile_ClearMasters(unsigned int *this)
{
  unsigned int *v2; // eax
  unsigned int *v3; // eax

  while ( *(this + 0xF8) ) /*0x44fbc6*/
  {
    FormHeapFree(*(this + 0xF8)); /*0x44fbd7*/
    v2 = (unsigned int *)*(this + 0xF9); /*0x44fbdc*/
    if ( v2 ) /*0x44fbe7*/
    {
      *(this + 0xF9) = v2[1]; /*0x44fbec*/
      *(this + 0xF8) = *v2; /*0x44fbf5*/
      FormHeapFree((unsigned int)v2); /*0x44fbfb*/
    }
    else
    {
      *(this + 0xF8) = 0; /*0x44fc05*/
    }
  }
  while ( *(this + 0xFA) ) /*0x44fc13*/
  {
    FormHeapFree(*(this + 0xFA)); /*0x44fc27*/
    v3 = (unsigned int *)*(this + 0xFB); /*0x44fc2c*/
    if ( v3 ) /*0x44fc37*/
    {
      *(this + 0xFB) = v3[1]; /*0x44fc3c*/
      *(this + 0xFA) = *v3; /*0x44fc45*/
      FormHeapFree((unsigned int)v3); /*0x44fc4b*/
    }
    else
    {
      *(this + 0xFA) = 0; /*0x44fc55*/
    }
  }
  *(this + 0xFC) = 0; /*0x44fc63*/
}
