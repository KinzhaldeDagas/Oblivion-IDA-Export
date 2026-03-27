_DWORD *__userpurge sub_5520E0@<eax>(_DWORD *this@<ecx>, int a2@<ebx>, _DWORD *a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  const void *v7; // edi
  unsigned int v9; // [esp-4h] [ebp-14h]
  size_t v10; // [esp+0h] [ebp-10h]

  if ( this != a3 )
  {
    HIDWORD(v10) = a2;
    *this = *a3;
    v4 = a3[1];
    v9 = v4 * *this;
    *(this + 1) = v4;
    sub_527160(this + 2, v9, COERCE_INT(0.0));
    v5 = a3[3];
    if ( !v5 || !((a3[4] - v5) >> 2) )
      _invalid_parameter_noinfo();
    v6 = *(this + 3);
    v7 = (const void *)a3[3];
    if ( !v6 || !((*(this + 4) - v6) >> 2) )
      _invalid_parameter_noinfo();
    LODWORD(v10) = 4 * *this * *(this + 1);
    memcpy((void *)*(this + 3), v7, v10);
  }
  return this;
}
