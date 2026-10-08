int __thiscall sub_700B60(char *this, int a2)
{
  char v3; // di
  unsigned int v4; // eax
  char *i; // ecx
  int result; // eax
  char v7; // cl
  int v8; // edx
  unsigned __int8 v9; // al
  int v10; // ecx
  int v11; // ebx
  unsigned int v12; // [esp+10h] [ebp+4h]

  v3 = 0; /*0x700b69*/
  v4 = 0; /*0x700b6b*/
  for ( i = this + 0x1C; *((_DWORD *)i + 0xFFFFFFFE) != a2; i += 0xC ) /*0x700b6d*/
  {
    ++v4; /*0x700b78*/
    v3 += *i; /*0x700b7b*/
    if ( v4 >= 4 ) /*0x700b83*/
      return 0; /*0x700b83*/
  }
  v7 = *(this + 0xC * v4 + 0x1C); /*0x700b90*/
  v8 = 0; /*0x700b96*/
  v9 = v7 - 1; /*0x700b98*/
  if ( !v7 ) /*0x700b9c*/
    return 0; /*0x700b85*/
  if ( v7 != 1 ) /*0x700ba0*/
  {
    v10 = v9; /*0x700ba2*/
    do /*0x700bb5*/
    {
      v11 = 1 << v10; /*0x700baa*/
      --v9; /*0x700bac*/
      --v10; /*0x700bae*/
      v8 += v11; /*0x700bb1*/
    }
    while ( v9 ); /*0x700bb5*/
  }
  result = (v8 + 1) << v3; /*0x700bbc*/
  if ( (*this & 1) == 0 ) /*0x700bc5*/
  {
    BYTE2(v12) = BYTE1(result); /*0x700bd7*/
    HIBYTE(v12) = result; /*0x700bd7*/
    LOBYTE(v12) = HIBYTE(result); /*0x700bdf*/
    BYTE1(v12) = BYTE2(result); /*0x700beb*/
    return v12 >> (0x20 - *(this + 1)); /*0x700bf4*/
  }
  return result; /*0x700b87*/
}
