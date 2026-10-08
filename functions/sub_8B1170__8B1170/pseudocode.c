char *__thiscall sub_8B1170(char **this, unsigned __int64 a2, int a3, int a4)
{
  int v5; // eax
  unsigned int v6; // ebp
  char *v7; // edi
  unsigned __int64 v8; // rax
  char *v9; // edx
  char *result; // eax

  v5 = (int)*(this + 2); /*0x8b117b*/
  if ( 2 * (int)*(this + 1) > v5 ) /*0x8b1183*/
    sub_8B14B0(this, 2 * v5 + 2); /*0x8b118c*/
  v6 = HIDWORD(a2); /*0x8b1194*/
  v7 = *this; /*0x8b11be*/
  v8 = (int)*(this + 2) & (0x9E3779B1 * (a2 >> 4)); /*0x8b11c0*/
  if ( *(_QWORD *)&(*this)[8 * v8] ) /*0x8b11c2*/
  {
    while ( 1 ) /*0x8b11d0*/
    {
      if ( *(_DWORD *)&v7[8 * v8] == (_DWORD)a2 ) /*0x8b11d7*/
      {
        v6 = HIDWORD(a2); /*0x8b11dd*/
        if ( *(_DWORD *)&v7[8 * v8 + 4] == HIDWORD(a2) ) /*0x8b11e3*/
          break; /*0x8b11e3*/
      }
      v8 = (int)*(this + 2) & (v8 + 1); /*0x8b11f3*/
      if ( !*(_QWORD *)&(*this)[8 * v8] ) /*0x8b11f5*/
      {
        v6 = HIDWORD(a2); /*0x8b11fe*/
        break; /*0x8b11fe*/
      }
    }
  }
  *(this + 1) += *(_QWORD *)&v7[8 * v8] != __PAIR64__(v6, a2); /*0x8b121e*/
  *(_DWORD *)&v7[8 * v8] = a2; /*0x8b122a*/
  *(_DWORD *)&v7[8 * v8 + 4] = v6; /*0x8b122d*/
  v9 = &(*(this + 2))[v8]; /*0x8b1235*/
  result = *this; /*0x8b1237*/
  *(_DWORD *)&result[8 * (_DWORD)v9 + 8] = a3; /*0x8b123a*/
  *(_DWORD *)&result[8 * (_DWORD)v9 + 0xC] = a4; /*0x8b1243*/
  return result; /*0x8b1234*/
}
