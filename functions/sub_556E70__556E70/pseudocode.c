void __usercall sub_556E70(_DWORD *this@<ecx>, int a2@<ebp>)
{
  char *v3; // ebx
  char *v4; // edi
  int v5; // eax
  char *v6; // ebp
  rsize_t v7; // [esp-4h] [ebp-10h]

  v3 = (char *)*(this + 2);
  if ( *(this + 1) > (unsigned int)v3 )
    _invalid_parameter_noinfo();
  v4 = (char *)*(this + 1);
  if ( (unsigned int)v4 > *(this + 2) )
    _invalid_parameter_noinfo();
  if ( v4 != v3 )
  {
    v5 = *(this + 2) - (_DWORD)v3;
    LODWORD(v7) = a2;
    v6 = &v4[v5];
    if ( v5 > 0 )
      memmove_s(v4, __PAIR64__((unsigned int)v3, v5), (const void *)v5, v7);
    *(this + 2) = v6;
  }
}
