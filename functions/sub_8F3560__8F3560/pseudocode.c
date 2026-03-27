int __thiscall sub_8F3560(char *this, unsigned __int16 *a2, int a3, int a4)
{
  int result; // eax
  int v6; // esi

  result = a3 - 1;
  if ( a3 - 1 >= 0 )
  {
    v6 = a3;
    result = a4;
    do
    {
      *(_OWORD *)result = *(_OWORD *)(this + *a2 + 0x10);
      *(_DWORD *)(result + 0xC) = *a2 | 0x3F000000;
      result += 0x10;
      ++a2;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
