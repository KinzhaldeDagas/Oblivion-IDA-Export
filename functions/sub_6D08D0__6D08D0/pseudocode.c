UInt32 __thiscall sub_6D08D0(NiTriBasedGeomData *this, int a2)
{
  unsigned __int16 v3; // di
  UInt32 result; // eax
  int v5; // ecx

  sub_715E40(this, a2); /*0x6d08da*/
  v3 = 0; /*0x6d08e6*/
  result = this->__vftable[1].super.super.Unk_03((NiObject *)this); /*0x6d08e8*/
  if ( (_WORD)result ) /*0x6d08ed*/
  {
    do /*0x6d0914*/
    {
      v5 = *(_DWORD *)(*((_DWORD *)this + 0x15) + 4 * v3); /*0x6d08f6*/
      if ( v5 ) /*0x6d08fb*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x38))(v5, a2); /*0x6d0903*/
      ++v3; /*0x6d090c*/
      result = this->__vftable[1].super.super.Unk_03((NiObject *)this); /*0x6d090f*/
    }
    while ( v3 < (unsigned __int16)result ); /*0x6d0914*/
  }
  return result; /*0x6d0916*/
}
