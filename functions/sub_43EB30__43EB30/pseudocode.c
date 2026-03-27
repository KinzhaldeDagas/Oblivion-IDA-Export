_DWORD *__thiscall sub_43EB30(_DWORD *this)
{
  _DWORD *v2; // esi
  char *v3; // ebp
  int v5; // [esp+10h] [ebp-8h] BYREF

  v2 = this + 2;
  *this = 0;
  *(this + 1) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  v3 = (char *)*(this + 3);
  if ( (unsigned int)v3 > *(this + 4) )
    _invalid_parameter_noinfo();
  sub_439050(v2, 0, &v5, (int)v2, v3, (int)v2, 0);
  return this;
}
