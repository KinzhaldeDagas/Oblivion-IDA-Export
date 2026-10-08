BOOL __thiscall sub_55F0B0(Unk14 *this)
{
  UInt32 i; // edi
  _DWORD *v4; // [esp+8h] [ebp-4h]

  for ( i = 0; i < this->unk00; ++i ) /*0x55f0b7*/
  {
    v4 = *((_DWORD **)this->unk08 + 2 * i + 1); /*0x55f0c7*/
    if ( v4 ) /*0x55f0d9*/
    {
      while ( v4[8] ) /*0x55f0df*/
        sub_435FE0(v4); /*0x55f0e7*/
      FormHeapFree((unsigned int)v4); /*0x55f0f3*/
    }
  }
  FormHeapFree((unsigned int)this->unk08); /*0x55f107*/
  return TlsFree(this->tlsStorage); /*0x55f119*/
}
