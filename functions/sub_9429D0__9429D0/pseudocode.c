int __thiscall sub_9429D0(char **this, char *a2, int a3)
{
  char v4; // cl
  int v5; // eax
  char *v6; // edx
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // esi
  int result; // eax

  v4 = *a2; /*0x9429da*/
  v5 = 0; /*0x9429dd*/
  if ( *a2 ) /*0x9429da*/
  {
    v6 = a2; /*0x9429e3*/
    do /*0x9429f3*/
    {
      v5 = v4 + 0x1F * v5; /*0x9429eb*/
      v4 = *++v6; /*0x9429ed*/
    }
    while ( v4 ); /*0x9429f3*/
  }
  v7 = v5 & 0x7FFFFFFF; /*0x9429fd*/
  v8 = (int)*(this + 2); /*0x9429ff*/
  if ( 2 * (int)*(this + 1) > v8 ) /*0x942a06*/
    sub_942BD0(this, 2 * v8 + 2); /*0x942a0f*/
  v9 = (int)*(this + 2); /*0x942a14*/
  v10 = v7 & v9; /*0x942a1b*/
  if ( *(_DWORD *)&(*this)[4 * (v7 & v9)] == 0xFFFFFFFF ) /*0x942a21*/
  {
LABEL_10:
    ++*(this + 1); /*0x942a4c*/
  }
  else
  {
    while ( *(_DWORD *)&(*this)[4 * v10] != v7 || sub_8B1770(a2, *(const char **)&(*this)[4 * v10 + 4 + 4 * v9]) ) /*0x942a3c*/
    {
      v9 = (int)*(this + 2); /*0x942a3e*/
      v10 = v9 & (v10 + 1); /*0x942a44*/
      if ( *(_DWORD *)&(*this)[4 * v10] == 0xFFFFFFFF ) /*0x942a4a*/
        goto LABEL_10; /*0x942a4a*/
    }
  }
  *(_DWORD *)&(*this)[4 * v10] = v7; /*0x942a51*/
  *(_DWORD *)&(*this)[4 * (_DWORD)&(*(this + 2))[v10] + 4] = a2; /*0x942a5b*/
  result = v10 + 2 * (_DWORD)*(this + 2) + 2; /*0x942a65*/
  *(_DWORD *)&(*this)[4 * result] = a3; /*0x942a6f*/
  return result; /*0x942a64*/
}
