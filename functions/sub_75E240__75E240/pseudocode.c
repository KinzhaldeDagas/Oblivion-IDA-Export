int *__thiscall sub_75E240(unsigned int *this, unsigned int a2)
{
  int *result; // eax
  int v4; // ebp
  int *v5; // ecx
  unsigned int i; // ebx
  int v7; // edi
  int v8; // eax
  unsigned int v9; // eax
  int *v10; // [esp+Ch] [ebp-4h]

  result = (int *)FormHeapAlloc(0xCu); /*0x75e248*/
  v4 = 0; /*0x75e24d*/
  if ( result ) /*0x75e254*/
  {
    result = sub_75E100(result, a2); /*0x75e25d*/
    v5 = result; /*0x75e262*/
    v10 = result; /*0x75e264*/
  }
  else
  {
    v10 = 0; /*0x75e26a*/
    v5 = 0; /*0x75e26e*/
  }
  for ( i = 0; i < a2; v4 += 0x14 ) /*0x75e276*/
  {
    if ( i < v5[1] ) /*0x75e283*/
      v7 = v4 + *v5; /*0x75e28b*/
    else
      v7 = 0; /*0x75e285*/
    v8 = *(this + 1); /*0x75e28d*/
    if ( *(this + 2) == v8 ) /*0x75e293*/
    {
      if ( v8 ) /*0x75e297*/
        v9 = 2 * v8; /*0x75e299*/
      else
        v9 = 1; /*0x75e29d*/
      sub_6E8CA0(this, v9); /*0x75e2a5*/
      v5 = v10; /*0x75e2aa*/
    }
    result = (int *)*this; /*0x75e2b1*/
    *(_DWORD *)(*this + 4 * (*(this + 2))++) = v7; /*0x75e2b3*/
    ++i; /*0x75e2ba*/
  }
  v5[2] = *(this + 5); /*0x75e2ca*/
  *(this + 5) = (unsigned int)v5; /*0x75e2cd*/
  return result; /*0x75e2d0*/
}
