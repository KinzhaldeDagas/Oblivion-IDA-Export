BOOL __thiscall sub_433110(unsigned int *this)
{
  unsigned int i; // edi
  _DWORD *v4; // [esp+8h] [ebp-4h]

  for ( i = 0; i < *this; ++i ) /*0x433117*/
  {
    v4 = *(_DWORD **)(*(this + 2) + 8 * i + 4); /*0x433127*/
    if ( v4 ) /*0x433139*/
    {
      while ( v4[8] ) /*0x43313f*/
        sub_4328B0(v4); /*0x433147*/
      FormHeapFree((unsigned int)v4); /*0x433153*/
    }
  }
  FormHeapFree(*(this + 2)); /*0x433167*/
  return TlsFree(*(this + 1)); /*0x433179*/
}
