BOOL __thiscall sub_4330A0(unsigned int *this)
{
  unsigned int i; // edi
  unsigned int *v4; // [esp+8h] [ebp-4h]

  for ( i = 0; i < *this; ++i ) /*0x4330a7*/
  {
    v4 = *(unsigned int **)(*(this + 2) + 8 * i + 4); /*0x4330b7*/
    if ( v4 ) /*0x4330c9*/
    {
      while ( v4[3] ) /*0x4330cf*/
        sub_432740(v4); /*0x4330d7*/
      FormHeapFree((unsigned int)v4); /*0x4330e3*/
    }
  }
  FormHeapFree(*(this + 2)); /*0x4330f7*/
  return TlsFree(*(this + 1)); /*0x433109*/
}
