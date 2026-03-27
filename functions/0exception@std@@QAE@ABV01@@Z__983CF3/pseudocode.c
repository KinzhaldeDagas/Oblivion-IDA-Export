std::exception *__thiscall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  int v3; // eax
  bool v4; // zf
  int v5; // eax
  UInt32 v6; // edi
  char *v7; // eax
  size_t v9; // [esp-8h] [ebp-14h]

  *(_DWORD *)this = &std::exception::`vftable';
  v3 = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 2) = v3;
  v4 = v3 == 0;
  v5 = *((_DWORD *)a2 + 1);
  if ( v4 )
  {
    *((_DWORD *)this + 1) = v5;
  }
  else if ( v5 )
  {
    v6 = strlen((const char *)*((_DWORD *)a2 + 1)) + 1;
    LODWORD(v9) = v6;
    v7 = (char *)malloc(v9);
    *((_DWORD *)this + 1) = v7;
    if ( v7 )
      strcpy_s(v7, v6, *((const char **)a2 + 1));
  }
  else
  {
    *((_DWORD *)this + 1) = 0;
  }
  return this;
}
