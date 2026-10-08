int *__thiscall sub_772430(unsigned int *this, unsigned int a2)
{
  int *result; // eax
  int v4; // ebp
  int *v5; // ecx
  unsigned int i; // ebx
  int v7; // edi
  int v8; // eax
  unsigned int v9; // eax
  int *v10; // [esp+Ch] [ebp-4h]

  result = (int *)FormHeapAlloc(0xCu); /*0x772438*/
  v4 = 0; /*0x77243d*/
  if ( result ) /*0x772444*/
  {
    result = sub_772360(result, a2); /*0x77244d*/
    v5 = result; /*0x772452*/
    v10 = result; /*0x772454*/
  }
  else
  {
    v10 = 0; /*0x77245a*/
    v5 = 0; /*0x77245e*/
  }
  for ( i = 0; i < a2; v4 += 0x60 ) /*0x772466*/
  {
    if ( i < v5[1] ) /*0x772473*/
      v7 = v4 + *v5; /*0x77247b*/
    else
      v7 = 0; /*0x772475*/
    v8 = *(this + 1); /*0x77247d*/
    if ( *(this + 2) == v8 ) /*0x772483*/
    {
      if ( v8 ) /*0x772487*/
        v9 = 2 * v8; /*0x772489*/
      else
        v9 = 1; /*0x77248d*/
      sub_6E8CA0(this, v9); /*0x772495*/
      v5 = v10; /*0x77249a*/
    }
    result = (int *)*this; /*0x7724a1*/
    *(_DWORD *)(*this + 4 * (*(this + 2))++) = v7; /*0x7724a3*/
    ++i; /*0x7724aa*/
  }
  v5[2] = *(this + 5); /*0x7724ba*/
  *(this + 5) = (unsigned int)v5; /*0x7724bd*/
  return result; /*0x7724c0*/
}
