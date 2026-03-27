int __thiscall sub_8B0E80(char **this, unsigned int a2, int a3)
{
  int v4; // eax
  int v5; // edx
  char *v6; // ecx
  unsigned int i; // eax
  char *v8; // ecx

  v4 = (int)*(this + 2);
  if ( 2 * (int)*(this + 1) > v4 )
    sub_8B1060(this, 2 * v4 + 2);
  v5 = (int)*(this + 2);
  v6 = *this;
  for ( i = v5 & (0x9E3779B1 * (a2 >> 4)); *(_DWORD *)&(*this)[4 * i]; i = v5 & (i + 1) )
  {
    if ( *(_DWORD *)&v6[4 * i] == a2 )
      break;
  }
  *(this + 1) += *(_DWORD *)&v6[4 * i] != a2;
  *(_DWORD *)&v6[4 * i] = a2;
  v8 = &(*(this + 2))[i];
  *(_DWORD *)&(*this)[4 * (_DWORD)v8 + 4] = a3;
  return a3;
}
