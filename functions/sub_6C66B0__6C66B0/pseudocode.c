char **__thiscall sub_6C66B0(_DWORD *this, int a2, char **a3)
{
  _WORD *v4; // esi
  unsigned __int16 v5; // ax
  const char *v6; // eax
  unsigned int v7; // ebx
  unsigned __int16 v8; // ax
  const char *v9; // eax
  va_list v10; // edi
  char *v11; // eax
  unsigned __int16 v12; // cx
  int v13; // edx
  unsigned __int16 v14; // cx
  char *v15; // eax
  unsigned __int16 v16; // cx

  if ( *(_DWORD *)(0x10 * a2 + *(this + 5)) ) /*0x6c66ba*/
  {
    v4 = (_WORD *)(0x10 * a2 + *(this + 6)); /*0x6c66d1*/
    v5 = v4[2]; /*0x6c66d3*/
    if ( v5 == 0xFFFF ) /*0x6c66db*/
      v6 = 0; /*0x6c66e7*/
    else
      v6 = (const char *)(*(_DWORD *)(*(_DWORD *)v4 + 8) + v5); /*0x6c66e2*/
    v7 = strlen(v6) + 1; /*0x6c66fc*/
    v8 = v4[3]; /*0x6c66ff*/
    if ( v8 == 0xFFFF || (v9 = (const char *)(*(_DWORD *)(*(_DWORD *)v4 + 8) + v8)) == 0 ) /*0x6c6717*/
    {
      v15 = (char *)FormHeapAlloc(v7); /*0x6c679f*/
      *a3 = v15; /*0x6c67a8*/
      v16 = v4[2]; /*0x6c67aa*/
      if ( v16 == 0xFFFF ) /*0x6c67b6*/
        return (char **)strcpy_s(v15, v7, 0); /*0x6c67d5*/
      else
        return (char **)strcpy_s(v15, v7, (const char *)(*(_DWORD *)(*(_DWORD *)v4 + 8) + v16)); /*0x6c67c3*/
    }
    else
    {
      v10 = (va_list)(v7 + strlen("PROP\n") + strlen(v9) + 1); /*0x6c6741*/
      v11 = (char *)FormHeapAlloc((unsigned int)v10); /*0x6c6746*/
      *a3 = v11; /*0x6c674f*/
      v12 = v4[3]; /*0x6c6751*/
      if ( v12 == 0xFFFF ) /*0x6c675d*/
        v13 = 0; /*0x6c6769*/
      else
        v13 = *(_DWORD *)(*(_DWORD *)v4 + 8) + v12; /*0x6c6764*/
      v14 = v4[2]; /*0x6c676b*/
      if ( v14 == 0xFFFF ) /*0x6c6774*/
        return (char **)sub_6C5D40(v10, v11, __PAIR64__("%s\n%s%s", (unsigned int)v10), 0, "PROP\n", v13); /*0x6c6790*/
      else
        return (char **)sub_6C5D40( /*0x6c677e*/
                          v10,
                          v11,
                          __PAIR64__("%s\n%s%s", (unsigned int)v10),
                          (char *)(*(_DWORD *)(*(_DWORD *)v4 + 8) + v14),
                          "PROP\n",
                          v13);
    }
  }
  else
  {
    *a3 = 0; /*0x6c66c4*/
    return a3; /*0x6c66c0*/
  }
}
