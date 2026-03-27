BOOL __thiscall sub_55F0B0(Unk14 *this)
{
  UInt32 i; // edi
  _DWORD *v4; // [esp+8h] [ebp-4h]

  for ( i = 0; i < this->unk00; ++i )
  {
    v4 = *((_DWORD **)this->unk08 + 2 * i + 1);
    if ( v4 )
    {
      while ( v4[8] )
        sub_435FE0(v4);
      FormHeapFree((unsigned int)v4);
    }
  }
  FormHeapFree((unsigned int)this->unk08);
  return TlsFree(this->tlsStorage);
}
