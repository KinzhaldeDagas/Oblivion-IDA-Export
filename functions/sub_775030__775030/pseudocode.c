unsigned int *__thiscall sub_775030(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x775036*/
  *this = (unsigned int)&NiTArray<NiDX9AdapterDesc::ModeDesc *>::`vftable'; /*0x775037*/
  FormHeapFree(v4); /*0x77503d*/
  if ( (a2 & 1) != 0 ) /*0x77504a*/
    FormHeapFree((unsigned int)this); /*0x77504d*/
  return this; /*0x775057*/
}
