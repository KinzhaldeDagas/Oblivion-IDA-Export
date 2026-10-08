int *__thiscall sub_434A70(int *this, const char *a2, int a3)
{
  int v4; // eax
  const char *v5; // ecx
  _BYTE *v6; // edx
  char v7; // al
  int v8; // edi

  *(this + 2) = 0; /*0x434a9d*/
  v4 = FormHeapAlloc(strlen(a2) + 1); /*0x434abf*/
  *this = v4; /*0x434ac7*/
  v5 = a2; /*0x434ac9*/
  v6 = (_BYTE *)v4; /*0x434acb*/
  do /*0x434adc*/
  {
    v7 = *v5; /*0x434ad0*/
    *v6++ = *v5++; /*0x434ad2*/
  }
  while ( v7 ); /*0x434adc*/
  v8 = *(this + 2); /*0x434ade*/
  if ( v8 != a3 ) /*0x434ae7*/
  {
    if ( v8 ) /*0x434aeb*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x434af1*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x434b07*/
    }
    *(this + 2) = a3; /*0x434b0b*/
    if ( a3 ) /*0x434b0e*/
      InterlockedIncrement((volatile LONG *)(a3 + 4)); /*0x434b14*/
  }
  *(this + 1) = 0; /*0x434b1a*/
  return this; /*0x434b1f*/
}
