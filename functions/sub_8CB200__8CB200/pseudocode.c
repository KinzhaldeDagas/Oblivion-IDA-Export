int *__thiscall sub_8CB200(int *this, char a2)
{
  sub_8CB180(this); /*0x8cb203*/
  if ( (a2 & 1) != 0 ) /*0x8cb20d*/
    FormHeapFree((unsigned int)this); /*0x8cb210*/
  return this; /*0x8cb21a*/
}
