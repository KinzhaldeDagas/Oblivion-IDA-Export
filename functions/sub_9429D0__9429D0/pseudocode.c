int __thiscall sub_9429D0(char **this, char *a2, int a3)
{
  char v4; // cl
  int v5; // eax
  const char *v6; // edx
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // esi
  int result; // eax

  v4 = *a2;
  v5 = 0;
  if ( *a2 )
  {
    v6 = a2;
    do
    {
      v5 = v4 + 0x1F * v5;
      v4 = *++v6;
    }
    while ( v4 );
  }
  v7 = v5 & 0x7FFFFFFF;
  v8 = (int)*(this + 2);
  if ( 2 * (int)*(this + 1) > v8 )
    sub_942BD0(this, 2 * v8 + 2);
  v9 = (int)*(this + 2);
  v10 = v7 & v9;
  if ( *(_DWORD *)&(*this)[4 * (v7 & v9)] == 0xFFFFFFFF )
  {
LABEL_10:
    ++*(this + 1);
  }
  else
  {
    while ( *(_DWORD *)&(*this)[4 * v10] != v7 || sub_8B1770(a2, *(const char **)&(*this)[4 * v10 + 4 + 4 * v9]) )
    {
      v9 = (int)*(this + 2);
      v10 = v9 & (v10 + 1);
      if ( *(_DWORD *)&(*this)[4 * v10] == 0xFFFFFFFF )
        goto LABEL_10;
    }
  }
  *(_DWORD *)&(*this)[4 * v10] = v7;
  *(_DWORD *)&(*this)[4 * (_DWORD)&(*(this + 2))[v10] + 4] = a2;
  result = v10 + 2 * (_DWORD)*(this + 2) + 2;
  *(_DWORD *)&(*this)[4 * result] = a3;
  return result;
}
