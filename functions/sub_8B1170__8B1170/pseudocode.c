char *__thiscall sub_8B1170(char **this, unsigned __int64 a2, int a3, int a4)
{
  int v5; // eax
  unsigned int v6; // ebp
  char *v7; // edi
  unsigned __int64 v8; // rax
  char *v9; // edx
  char *result; // eax

  v5 = (int)*(this + 2);
  if ( 2 * (int)*(this + 1) > v5 )
    sub_8B14B0(this, 2 * v5 + 2);
  v6 = HIDWORD(a2);
  v7 = *this;
  v8 = (int)*(this + 2) & (0x9E3779B1 * (a2 >> 4));
  if ( *(_QWORD *)&(*this)[8 * v8] )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)&v7[8 * v8] == (_DWORD)a2 )
      {
        v6 = HIDWORD(a2);
        if ( *(_DWORD *)&v7[8 * v8 + 4] == HIDWORD(a2) )
          break;
      }
      v8 = (int)*(this + 2) & (v8 + 1);
      if ( !*(_QWORD *)&(*this)[8 * v8] )
      {
        v6 = HIDWORD(a2);
        break;
      }
    }
  }
  *(this + 1) += *(_QWORD *)&v7[8 * v8] != __PAIR64__(v6, a2);
  *(_DWORD *)&v7[8 * v8] = a2;
  *(_DWORD *)&v7[8 * v8 + 4] = v6;
  v9 = &(*(this + 2))[v8];
  result = *this;
  *(_DWORD *)&result[8 * (_DWORD)v9 + 8] = a3;
  *(_DWORD *)&result[8 * (_DWORD)v9 + 0xC] = a4;
  return result;
}
