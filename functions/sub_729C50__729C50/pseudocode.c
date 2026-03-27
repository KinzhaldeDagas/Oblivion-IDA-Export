int __thiscall sub_729C50(unsigned __int16 *this, int *a2, int *a3, int a4)
{
  unsigned __int16 v5; // si
  int v6; // eax
  int v7; // ecx
  int result; // eax
  int v9; // ecx

  v5 = *(this + 4);
  *a2 = FormHeapAlloc((unsigned __int64)v5 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v5);
  *a3 = FormHeapAlloc((unsigned __int64)v5 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v5);
  v6 = 0;
  if ( v5 )
  {
    v7 = 0;
    do
    {
      *(_WORD *)(v7 + *a2) = v6++;
      v7 += 2;
    }
    while ( (unsigned __int16)v6 < v5 );
  }
  sub_729370(this, *a2, a4, 0, v5 - 1);
  result = 0;
  if ( v5 )
  {
    v9 = 0;
    do
    {
      *(_WORD *)(*a3 + 2 * *(unsigned __int16 *)(*a2 + v9)) = result++;
      v9 += 2;
    }
    while ( (unsigned __int16)result < v5 );
  }
  return result;
}
