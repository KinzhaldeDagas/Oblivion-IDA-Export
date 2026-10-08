int *__thiscall sub_782970(int *this, char a2)
{
  int v3; // eax

  v3 = *(this + 2); /*0x782973*/
  *this = (int)&NiGeometryGroup::`vftable'; /*0x782978*/
  if ( v3 ) /*0x78297e*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3); /*0x782986*/
  if ( (a2 & 1) != 0 ) /*0x78298d*/
    FormHeapFree((unsigned int)this); /*0x782990*/
  return this; /*0x78299a*/
}
