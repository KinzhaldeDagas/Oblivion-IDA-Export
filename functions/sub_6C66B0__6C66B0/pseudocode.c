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

  if ( *(_DWORD *)(0x10 * a2 + *(this + 5)) )
  {
    v4 = (_WORD *)(0x10 * a2 + *(this + 6));
    v5 = v4[2];
    if ( v5 == 0xFFFF )
      v6 = 0;
    else
      v6 = (const char *)(*(_DWORD *)(*(_DWORD *)v4 + 8) + v5);
    v7 = strlen(v6) + 1;
    v8 = v4[3];
    if ( v8 == 0xFFFF || (v9 = (const char *)(*(_DWORD *)(*(_DWORD *)v4 + 8) + v8)) == 0 )
    {
      v15 = (char *)FormHeapAlloc(v7);
      *a3 = v15;
      v16 = v4[2];
      if ( v16 == 0xFFFF )
        return (char **)strcpy_s(v15, v7, 0);
      else
        return (char **)strcpy_s(v15, v7, (const char *)(*(_DWORD *)(*(_DWORD *)v4 + 8) + v16));
    }
    else
    {
      v10 = (va_list)(v7 + strlen("PROP\n") + strlen(v9) + 1);
      v11 = (char *)FormHeapAlloc((unsigned int)v10);
      *a3 = v11;
      v12 = v4[3];
      if ( v12 == 0xFFFF )
        v13 = 0;
      else
        v13 = *(_DWORD *)(*(_DWORD *)v4 + 8) + v12;
      v14 = v4[2];
      if ( v14 == 0xFFFF )
        return (char **)sub_6C5D40(v10, v11, __PAIR64__("%s\n%s%s", (unsigned int)v10), 0, "PROP\n", v13);
      else
        return (char **)sub_6C5D40(
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
    *a3 = 0;
    return a3;
  }
}
