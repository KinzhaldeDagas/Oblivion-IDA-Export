int __thiscall sub_729C50(unsigned __int16 *this, int *a2, int *a3, int a4)
{
  unsigned __int16 v5; // si
  int v6; // eax
  int v7; // ecx
  int result; // eax
  int v9; // ecx

  v5 = *(this + 4); /*0x729c55*/
  *a2 = FormHeapAlloc((unsigned __int64)v5 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v5);
  *a3 = FormHeapAlloc((unsigned __int64)v5 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v5);
  v6 = 0; /*0x729c9c*/
  if ( v5 ) /*0x729ca1*/
  {
    v7 = 0; /*0x729ca3*/
    do /*0x729cb4*/
    {
      *(_WORD *)(v7 + *a2) = v6++; /*0x729ca7*/
      v7 += 2; /*0x729cae*/
    }
    while ( (unsigned __int16)v6 < v5 ); /*0x729cb4*/
  }
  sub_729370(this, *a2, a4, 0, v5 - 1); /*0x729cc6*/
  result = 0; /*0x729ccb*/
  if ( v5 ) /*0x729cd0*/
  {
    v9 = 0; /*0x729cd2*/
    do /*0x729ced*/
    {
      *(_WORD *)(*a3 + 2 * *(unsigned __int16 *)(*a2 + v9)) = result++; /*0x729ce0*/
      v9 += 2; /*0x729ce7*/
    }
    while ( (unsigned __int16)result < v5 ); /*0x729ced*/
  }
  return result; /*0x729cef*/
}
