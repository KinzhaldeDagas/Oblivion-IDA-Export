std::exception *__thiscall std::exception::exception(std::exception *this, const char **a2)
{
  UInt32 v3; // esi
  char *v4; // eax
  size_t v6; // [esp-8h] [ebp-14h]

  *(_DWORD *)this = &std::exception::`vftable';
  if ( *a2 )
  {
    v3 = strlen(*a2) + 1;
    LODWORD(v6) = v3;
    v4 = (char *)malloc(v6);
    *((_DWORD *)this + 1) = v4;
    if ( v4 )
      strcpy_s(v4, v3, *a2);
  }
  else
  {
    *((_DWORD *)this + 1) = 0;
  }
  *((_DWORD *)this + 2) = 1;
  return this;
}
