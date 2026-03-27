LONG __thiscall sub_6FE860(_DWORD *this, int a2, int a3)
{
  LONG result; // eax
  unsigned int v5; // esi

  result = sub_753000(a2, a3);
  v5 = *((unsigned __int16 *)this + 0x31);
  if ( *((_WORD *)this + 0x31) )
  {
    sub_523B10((unsigned __int16 *)(a2 + 0x58), *((unsigned __int16 *)this + 0x31));
    do
    {
      --v5;
      result = sub_4B34E0((_DWORD *)(a2 + 0x58), v5, (LONG *)(*(this + 0x17) + 4 * v5));
    }
    while ( v5 );
  }
  return result;
}
