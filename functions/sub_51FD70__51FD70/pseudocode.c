TESForm *__thiscall sub_51FD70(TESForm *this, char a2)
{
  sub_51FCD0(this); /*0x51fd73*/
  if ( (a2 & 1) != 0 ) /*0x51fd7d*/
    FormHeapFree((unsigned int)this); /*0x51fd80*/
  return this; /*0x51fd8a*/
}
