//
// DX11 pool audit 2026-10-01: entry-pool growth uses16-byte objects from7728D0, with12-byte block headers {objects,count,next}. Free-array fields0/4/8 are pointer/capacity/used; pool+C is the next growth count, pool+14 block chain. Pool+10 remains unknown. These are verified prefixes, not full generic class layouts.
_DWORD *__thiscall sub_772A80(unsigned int *this, unsigned int a2)
{
  _DWORD *result; // eax
  int v4; // ebp
  _DWORD *v5; // ecx
  unsigned int i; // ebx
  int v7; // edi
  int v8; // eax
  unsigned int v9; // eax
  _DWORD *v10; // [esp+Ch] [ebp-4h]

  result = (_DWORD *)FormHeapAlloc(0xCu); /*0x772a88*/
  v4 = 0; /*0x772a8d*/
  if ( result ) /*0x772a94*/
  {
    result = sub_7728D0(result, a2); /*0x772a9d*/
    v5 = result; /*0x772aa2*/
    v10 = result; /*0x772aa4*/
  }
  else
  {
    v10 = 0; /*0x772aaa*/
    v5 = 0; /*0x772aae*/
  }
  for ( i = 0; i < a2; v4 += 0x10 ) /*0x772ab6*/
  {
    if ( i < v5[1] ) /*0x772ac3*/
      v7 = v4 + *v5; /*0x772acb*/
    else
      v7 = 0; /*0x772ac5*/
    v8 = *(this + 1); /*0x772acd*/
    if ( *(this + 2) == v8 ) /*0x772ad3*/
    {
      if ( v8 ) /*0x772ad7*/
        v9 = 2 * v8; /*0x772ad9*/
      else
        v9 = 1; /*0x772add*/
      sub_6E8CA0(this, v9); /*0x772ae5*/
      v5 = v10; /*0x772aea*/
    }
    result = (_DWORD *)*this; /*0x772af1*/
    *(_DWORD *)(*this + 4 * (*(this + 2))++) = v7; /*0x772af3*/
    ++i; /*0x772afa*/
  }
  v5[2] = *(this + 5); /*0x772b0a*/
  *(this + 5) = (unsigned int)v5; /*0x772b0d*/
  return result; /*0x772b10*/
}
