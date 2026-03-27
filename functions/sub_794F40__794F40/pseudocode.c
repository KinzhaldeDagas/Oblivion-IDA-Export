void __usercall sub_794F40(_DWORD *this@<ecx>, int a2@<ebp>)
{
  char *v3; // ebx
  char *v4; // edi
  int v5; // eax
  char *v6; // ebp
  rsize_t v7; // [esp-10h] [ebp-1Ch]
  rsize_t v8; // [esp-4h] [ebp-10h]

  v3 = (char *)*(this + 2);
  if ( *(this + 1) > (unsigned int)v3 )
    _invalid_parameter_noinfo();
  v4 = (char *)*(this + 1);
  if ( (unsigned int)v4 > *(this + 2) )
    _invalid_parameter_noinfo();
  if ( v4 != v3 )
  {
    v5 = (*(this + 2) - (int)v3) >> 1;
    LODWORD(v8) = a2;
    v6 = &v4[2 * v5];
    if ( v5 > 0 )
    {
      HIDWORD(v7) = v3;
      LODWORD(v7) = 2 * v5;
      memmove_s(v4, v7, (const void *)(2 * v5), v8);
    }
    *(this + 2) = v6;
  }
}
