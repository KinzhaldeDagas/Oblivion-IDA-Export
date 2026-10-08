void __userpurge sub_6088B0(
        unsigned int *this@<ecx>,
        int a2@<ebx>,
        char a3@<bpl>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        int a7)
{
  UInt32 v8; // eax

  MobileObject_PreLoadModifiedForm((int)this, a2, a3, a4, a5, a6, a7); /*0x6088b8*/
  v8 = g_TESSaveLoadGame->unk030[5]; /*0x6088c3*/
  if ( v8 == 0x1FFFF000 || v8 == 0x7FFFF000 ) /*0x6088d2*/
  {
    if ( *(this + 0x17) ) /*0x6088d4*/
      FormHeapFree(*(this + 0x17)); /*0x6088dc*/
    *(this + 0x17) = 0; /*0x6088e4*/
  }
}
