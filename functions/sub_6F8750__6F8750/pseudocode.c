_BYTE *__thiscall sub_6F8750(char *this, _BYTE *a2, _BYTE *a3)
{
  unsigned __int8 *v3; // esi
  const _Ctypevec *v4; // edi

  v3 = a2; /*0x6f8756*/
  if ( a2 != a3 ) /*0x6f875c*/
  {
    v4 = (const _Ctypevec *)(this + 8); /*0x6f875f*/
    do /*0x6f8776*/
    {
      *v3 = _Tolower(*v3, v4); /*0x6f876c*/
      ++v3; /*0x6f876e*/
    }
    while ( v3 != a3 ); /*0x6f8776*/
  }
  return v3; /*0x6f877b*/
}
