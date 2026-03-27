_DWORD *__thiscall sub_784A70(char **this)
{
  char *v2; // ebx
  char *v3; // edi
  int v5; // [esp+Ch] [ebp-8h] BYREF

  v2 = *(this + 2);
  if ( *(this + 1) > v2 )
    _invalid_parameter_noinfo();
  v3 = *(this + 1);
  if ( v3 > *(this + 2) )
    _invalid_parameter_noinfo();
  return sub_439050(this, (int)v2, &v5, (int)this, v3, (int)this, v2);
}
