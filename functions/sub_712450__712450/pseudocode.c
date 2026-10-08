unsigned int *__thiscall sub_712450(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x712456*/
  *this = (unsigned int)&NiTArray<void (__cdecl *)(NiStream &,NiObject *)>::`vftable'; /*0x712457*/
  FormHeapFree(v4); /*0x71245d*/
  if ( (a2 & 1) != 0 ) /*0x71246a*/
    FormHeapFree((unsigned int)this); /*0x71246d*/
  return this; /*0x712477*/
}
