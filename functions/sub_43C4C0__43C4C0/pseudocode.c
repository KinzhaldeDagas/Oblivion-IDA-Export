BOOL __thiscall sub_43C4C0(unsigned int *this)
{
  unsigned int i; // edi
  _DWORD *v4; // [esp+8h] [ebp-4h]

  for ( i = 0; i < *this; ++i ) /*0x43c4c7*/
  {
    v4 = *(_DWORD **)(*(this + 2) + 8 * i + 4); /*0x43c4d7*/
    if ( v4 ) /*0x43c4e9*/
    {
      while ( v4[8] ) /*0x43c4ef*/
        sub_43A3F0(v4); /*0x43c4f7*/
      FormHeapFree((unsigned int)v4); /*0x43c503*/
    }
  }
  FormHeapFree(*(this + 2)); /*0x43c517*/
  return TlsFree(*(this + 1)); /*0x43c529*/
}
