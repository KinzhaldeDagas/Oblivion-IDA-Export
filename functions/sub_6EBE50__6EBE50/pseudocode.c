int *__thiscall sub_6EBE50(unsigned int *this, unsigned int a2)
{
  int *result; // eax
  unsigned int v4; // ebx
  int *v5; // ecx
  int v6; // ebp
  int v7; // edi
  int v8; // eax
  unsigned int v9; // eax
  int *v10; // [esp+14h] [ebp-10h]

  result = (int *)FormHeapAlloc(0xCu); /*0x6ebe79*/
  v4 = 0; /*0x6ebe85*/
  if ( result ) /*0x6ebe8d*/
  {
    result = sub_6EBD50(result, a2); /*0x6ebe96*/
    v5 = result; /*0x6ebe9b*/
    v10 = result; /*0x6ebe9d*/
  }
  else
  {
    v10 = 0; /*0x6ebea3*/
    v5 = 0; /*0x6ebea7*/
  }
  if ( a2 ) /*0x6ebeb5*/
  {
    v6 = 0; /*0x6ebeb7*/
    do /*0x6ebefd*/
    {
      if ( v4 < v5[1] ) /*0x6ebebc*/
        v7 = v6 + *v5; /*0x6ebec4*/
      else
        v7 = 0; /*0x6ebebe*/
      v8 = *(this + 1); /*0x6ebec6*/
      if ( *(this + 2) == v8 ) /*0x6ebecc*/
      {
        if ( v8 ) /*0x6ebed0*/
          v9 = 2 * v8; /*0x6ebed2*/
        else
          v9 = 1; /*0x6ebed6*/
        sub_6E8CA0(this, v9); /*0x6ebede*/
        v5 = v10; /*0x6ebee3*/
      }
      result = (int *)*this; /*0x6ebeea*/
      *(_DWORD *)(*this + 4 * (*(this + 2))++) = v7; /*0x6ebeec*/
      ++v4; /*0x6ebef3*/
      v6 += 0x14; /*0x6ebef6*/
    }
    while ( v4 < a2 ); /*0x6ebefd*/
  }
  v5[2] = *(this + 5); /*0x6ebf02*/
  *(this + 5) = (unsigned int)v5; /*0x6ebf05*/
  return result; /*0x6ebf08*/
}
