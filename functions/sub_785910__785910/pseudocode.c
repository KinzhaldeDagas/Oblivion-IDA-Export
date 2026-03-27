int ***__thiscall sub_785910(int **this, int ***a2, int **a3, int a4, int **a5, int a6)
{
  int **v6; // edi
  int v8; // ebp
  int v9; // ebx
  int v10; // ebp
  _DWORD *v11; // eax
  int v12; // ecx
  int v14; // [esp+10h] [ebp-8h] BYREF

  v6 = a3;
  v8 = **(this + 1);
  if ( !a3 || a3 != this )
    _invalid_parameter_noinfo();
  v9 = a4;
  if ( a4 != v8 )
    goto LABEL_13;
  v10 = (int)*(this + 1);
  if ( !a5 || a5 != this )
    _invalid_parameter_noinfo();
  if ( a6 == v10 )
  {
    sub_784FF0((unsigned int *)(*(this + 1))[1]);
    (*(this + 1))[1] = (int)*(this + 1);
    v11 = *(this + 1);
    *(this + 2) = 0;
    *v11 = v11;
    (*(this + 1))[2] = (int)*(this + 1);
    v12 = **(this + 1);
    *a2 = this;
    a2[1] = (int **)v12;
    return a2;
  }
  else
  {
LABEL_13:
    while ( 1 )
    {
      if ( !v6 || v6 != a5 )
        _invalid_parameter_noinfo();
      if ( v9 == a6 )
        break;
      sub_7846D0(&a3);
      sub_784C30(this, (int)v6, &v14, (int)v6, v9);
      v9 = a4;
      v6 = a3;
    }
    *a2 = v6;
    a2[1] = (int **)v9;
    return a2;
  }
}
