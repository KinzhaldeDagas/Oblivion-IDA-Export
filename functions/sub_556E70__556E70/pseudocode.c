void __usercall sub_556E70(_DWORD *this@<ecx>, int a2@<ebp>)
{
  char *v3; // ebx
  char *v4; // edi
  int v5; // eax
  char *v6; // ebp
  rsize_t v7; // [esp-4h] [ebp-10h]

  v3 = (char *)*(this + 2); /*0x556e74*/
  if ( *(this + 1) > (unsigned int)v3 ) /*0x556e7b*/
    _invalid_parameter_noinfo(); /*0x556e7d*/
  v4 = (char *)*(this + 1); /*0x556e82*/
  if ( (unsigned int)v4 > *(this + 2) ) /*0x556e88*/
    _invalid_parameter_noinfo(); /*0x556e8a*/
  if ( v4 != v3 ) /*0x556e91*/
  {
    v5 = *(this + 2) - (_DWORD)v3; /*0x556e96*/
    LODWORD(v7) = a2; /*0x556e9a*/
    v6 = &v4[v5]; /*0x556e9b*/
    if ( v5 > 0 ) /*0x556e9e*/
      memmove_s(v4, __PAIR64__((unsigned int)v3, v5), (const void *)v5, v7); /*0x556ea4*/
    *(this + 2) = v6; /*0x556eac*/
  }
}
