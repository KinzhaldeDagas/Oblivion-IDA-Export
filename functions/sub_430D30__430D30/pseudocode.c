char __thiscall sub_430D30(char *this, int a2, int a3)
{
  char *v4; // eax
  char v5; // dl

  if ( *((_DWORD *)this + 1) )
    return 0;
  v4 = this + 8;
  do
  {
    v5 = *v4;
    v4[a2 - (_DWORD)(this + 8)] = *v4;
    ++v4;
  }
  while ( v5 );
  ++*((_DWORD *)this + 1);
  return 1;
}
