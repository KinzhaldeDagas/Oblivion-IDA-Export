void __thiscall sub_4A76F0(unsigned int *this)
{
  unsigned int v2; // esi

  sub_4A70B0(this); /*0x4a76f3*/
  v2 = *(this + 2); /*0x4a76f8*/
  if ( v2 ) /*0x4a76fd*/
    FormHeapFree(v2); /*0x4a7700*/
}
