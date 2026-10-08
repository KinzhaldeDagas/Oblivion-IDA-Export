int *__thiscall sub_7734E0(unsigned int *this, unsigned int a2)
{
  int *result; // eax
  int v4; // ebp
  int *v5; // ecx
  unsigned int i; // ebx
  int v7; // edi
  int v8; // eax
  unsigned int v9; // eax
  int *v10; // [esp+Ch] [ebp-4h]

  result = (int *)FormHeapAlloc(0xCu); /*0x7734e8*/
  v4 = 0; /*0x7734ed*/
  if ( result ) /*0x7734f4*/
  {
    result = sub_7733D0(result, a2); /*0x7734fd*/
    v5 = result; /*0x773502*/
    v10 = result; /*0x773504*/
  }
  else
  {
    v10 = 0; /*0x77350a*/
    v5 = 0; /*0x77350e*/
  }
  for ( i = 0; i < a2; v4 += 0xB8 ) /*0x773516*/
  {
    if ( i < v5[1] ) /*0x773523*/
      v7 = v4 + *v5; /*0x77352b*/
    else
      v7 = 0; /*0x773525*/
    v8 = *(this + 1); /*0x77352d*/
    if ( *(this + 2) == v8 ) /*0x773533*/
    {
      if ( v8 ) /*0x773537*/
        v9 = 2 * v8; /*0x773539*/
      else
        v9 = 1; /*0x77353d*/
      sub_6E8CA0(this, v9); /*0x773545*/
      v5 = v10; /*0x77354a*/
    }
    result = (int *)*this; /*0x773551*/
    *(_DWORD *)(*this + 4 * (*(this + 2))++) = v7; /*0x773553*/
    ++i; /*0x77355a*/
  }
  v5[2] = *(this + 5); /*0x77356d*/
  *(this + 5) = (unsigned int)v5; /*0x773570*/
  return result; /*0x773573*/
}
