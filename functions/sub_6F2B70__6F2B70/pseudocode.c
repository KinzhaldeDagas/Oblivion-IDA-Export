void __thiscall sub_6F2B70(_DWORD *this, unsigned int a2, int a3, unsigned int a4, int a5, int a6)
{
  unsigned int v7; // ecx
  unsigned int v8; // eax
  int v9; // ebx
  char *v10; // ebp
  char *v11; // ebp
  unsigned int v12; // ebx
  char *v13; // edi
  bool v14; // cc

  v7 = *(this + 1);
  if ( v7 )
    v8 = (int)(*(this + 2) - v7) >> 4;
  else
    v8 = 0;
  if ( v8 >= a2 )
  {
    if ( v7 )
    {
      v11 = (char *)*(this + 2);
      if ( a2 < (int)&v11[-v7] >> 4 )
      {
        if ( v7 > (unsigned int)v11 )
          _invalid_parameter_noinfo();
        v12 = *(this + 1);
        if ( v12 > *(this + 2) )
          _invalid_parameter_noinfo();
        v13 = (char *)(v12 + 0x10 * a2);
        v14 = (unsigned int)v13 <= *(this + 2);
        a4 = v12;
        if ( !v14 || (unsigned int)v13 < *(this + 1) )
          _invalid_parameter_noinfo();
        sub_6F14D0(this, &a3, (int)this, v13, (int)this, v11);
      }
    }
  }
  else
  {
    if ( v7 )
      v9 = (int)(*(this + 2) - v7) >> 4;
    else
      v9 = 0;
    v10 = (char *)*(this + 2);
    if ( v7 > (unsigned int)v10 )
      _invalid_parameter_noinfo();
    sub_6F1E00(this, (int)this, v10, a2 - v9, &a3);
  }
}
