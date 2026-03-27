_DWORD *__thiscall sub_552160(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  const void *v7; // ebx
  size_t v9; // [esp+0h] [ebp-28h]

  *this = *a2;
  v3 = this + 2;
  *(this + 1) = a2[1];
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  sub_527160(this + 2, *(this + 1) * *this, COERCE_INT(0.0));
  v4 = v3[1];
  if ( v4 )
  {
    if ( (v3[2] - v4) >> 2 )
    {
      v5 = a2[3];
      if ( v5 )
      {
        if ( (a2[4] - v5) >> 2 )
        {
          v6 = v3[1];
          v7 = (const void *)a2[3];
          if ( !v6 || !((v3[2] - v6) >> 2) )
            _invalid_parameter_noinfo();
          LODWORD(v9) = 4 * *(this + 1) * *this;
          memcpy((void *)v3[1], v7, v9);
        }
      }
    }
  }
  return this;
}
