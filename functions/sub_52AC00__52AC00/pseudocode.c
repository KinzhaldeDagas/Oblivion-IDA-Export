TESForm *__thiscall sub_52AC00(TESForm *this, char a2)
{
  sub_52AB00(this); /*0x52ac03*/
  if ( (a2 & 1) != 0 ) /*0x52ac0d*/
    FormHeapFree((unsigned int)this); /*0x52ac10*/
  return this; /*0x52ac1a*/
}
