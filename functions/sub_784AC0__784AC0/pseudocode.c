int *__thiscall sub_784AC0(char **this, int *a2, int a3, char *a4, int a5, char *a6)
{
  int v6; // esi
  char *v8; // ecx
  char *v9; // eax
  char *v10; // edi
  char *v11; // ebx
  char *i; // esi

  v6 = a3;
  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  v8 = a4;
  if ( a4 != a6 )
  {
    v9 = (char *)sub_784880(a6, *(this + 2), a4);
    v10 = *(this + 2);
    v11 = v9;
    for ( i = v9; i != v10; i += 0x18 )
      TESTexture::ClearComponentReferences(i);
    v8 = a4;
    v6 = a3;
    *(this + 2) = v11;
  }
  *a2 = v6;
  a2[1] = (int)v8;
  return a2;
}
