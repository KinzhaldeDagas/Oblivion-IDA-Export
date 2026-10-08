_WORD *__thiscall sub_719D40(unsigned __int16 **this, unsigned __int16 a2, _WORD *a3, _WORD *a4, _WORD *a5)
{
  int v5; // edx
  unsigned __int16 *v6; // ebx
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // si
  unsigned __int16 v9; // ax
  int v10; // edi
  int v11; // eax
  __int16 v12; // cx
  __int16 v13; // dx

  v5 = (int)*(this + 0x13); /*0x719d40*/
  v6 = *(this + 0x12); /*0x719d44*/
  v7 = a2; /*0x719d47*/
  v8 = *v6; /*0x719d4c*/
  v9 = *v6 - 2; /*0x719d52*/
  v10 = 0; /*0x719d56*/
  if ( a2 >= v9 ) /*0x719d5b*/
  {
    do /*0x719d7b*/
    {
      v7 -= v9; /*0x719d60*/
      v5 += 2 * v8; /*0x719d65*/
      v8 = v6[(unsigned __int16)++v10]; /*0x719d6e*/
      v9 = v8 - 2; /*0x719d75*/
    }
    while ( v7 >= (unsigned __int16)(v8 - 2) ); /*0x719d7b*/
  }
  v11 = v7; /*0x719d84*/
  if ( (v7 & 1) != 0 ) /*0x719d87*/
  {
    *a3 = *(_WORD *)(v5 + 2 * v7 + 2); /*0x719d8e*/
    v12 = *(_WORD *)(v5 + 2 * v7); /*0x719d91*/
  }
  else
  {
    *a3 = *(_WORD *)(v5 + 2 * v7); /*0x719d9b*/
    v12 = *(_WORD *)(v5 + 2 * v7 + 2); /*0x719d9e*/
  }
  *a4 = v12; /*0x719da7*/
  v13 = *(_WORD *)(v5 + 2 * v11 + 4); /*0x719daa*/
  *a5 = v13; /*0x719db5*/
  return a5; /*0x719db3*/
}
