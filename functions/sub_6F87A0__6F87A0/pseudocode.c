_BYTE *__thiscall sub_6F87A0(char *this, _BYTE *a2, _BYTE *a3)
{
  unsigned __int8 *v3; // esi
  const _Ctypevec *v4; // edi

  v3 = a2; /*0x6f87a6*/
  if ( a2 != a3 ) /*0x6f87ac*/
  {
    v4 = (const _Ctypevec *)(this + 8); /*0x6f87af*/
    do /*0x6f87c6*/
    {
      *v3 = _Toupper(*v3, v4); /*0x6f87bc*/
      ++v3; /*0x6f87be*/
    }
    while ( v3 != a3 ); /*0x6f87c6*/
  }
  return v3; /*0x6f87cb*/
}
