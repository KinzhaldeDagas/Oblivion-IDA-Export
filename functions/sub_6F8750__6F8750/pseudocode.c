_BYTE *__thiscall sub_6F8750(char *this, _BYTE *a2, _BYTE *a3)
{
  unsigned __int8 *v3; // esi
  const _Ctypevec *v4; // edi

  v3 = a2;
  if ( a2 != a3 )
  {
    v4 = (const _Ctypevec *)(this + 8);
    do
    {
      *v3 = _Tolower(*v3, v4);
      ++v3;
    }
    while ( v3 != a3 );
  }
  return v3;
}
