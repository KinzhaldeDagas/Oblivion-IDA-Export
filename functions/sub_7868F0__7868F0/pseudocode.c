int __thiscall sub_7868F0(int this, int a2, int *a3, int a4, _DWORD *a5)
{
  int v7; // edi
  int *v8; // ebp
  int v9; // ebx
  _DWORD *v10; // edi
  int v11; // edi
  bool v12; // zf
  int v13; // eax
  bool v14; // al
  int **v15; // ebp
  _DWORD *v16; // eax
  _DWORD v17[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !*(_DWORD *)(this + 8) )
  {
    sub_7859E0((int *)this, (int **)a2, 1, *(int ***)(this + 4), a5);
    return a2;
  }
  v7 = **(_DWORD **)(this + 4);
  v8 = a3;
  if ( !a3 || a3 != (int *)this )
    _invalid_parameter_noinfo();
  v9 = a4;
  if ( a4 == v7 )
  {
    v10 = a5;
    if ( sub_6F7620(a5, (_DWORD *)(a4 + 0xC)) )
    {
      sub_7859E0((int *)this, (int **)a2, 1, (int **)v9, v10);
      return a2;
    }
    goto LABEL_28;
  }
  v11 = *(_DWORD *)(this + 4);
  if ( !v8 || v8 != (int *)this )
    _invalid_parameter_noinfo();
  v12 = v9 == v11;
  v10 = a5;
  if ( v12 )
  {
    if ( sub_6F7620((_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 4) + 8) + 0xC), a5) )
    {
      sub_7859E0((int *)this, (int **)a2, 0, *(int ***)(*(_DWORD *)(this + 4) + 8), v10);
      return a2;
    }
    goto LABEL_28;
  }
  if ( sub_6F7620(a5, (_DWORD *)(v9 + 0xC))
    && (a3 = v8, a4 = v9, sub_7840B0(&a3), sub_6F7620((_DWORD *)(a4 + 0xC), v10)) )
  {
    if ( *(_BYTE *)(*(_DWORD *)(a4 + 8) + 0x2D) )
      sub_7859E0((int *)this, (int **)a2, 0, (int **)a4, v10);
    else
      sub_7859E0((int *)this, (int **)a2, 1, (int **)v9, v10);
    return a2;
  }
  else
  {
    if ( !sub_6F7620((_DWORD *)(v9 + 0xC), v10) )
      goto LABEL_28;
    v13 = *(_DWORD *)(this + 4);
    a3 = v8;
    a4 = v9;
    v17[1] = v13;
    v17[0] = this;
    sub_7846D0(&a3);
    v14 = sub_784040(&a3, v17);
    v15 = (int **)a4;
    if ( !v14 && !sub_6F7620(v10, (_DWORD *)(a4 + 0xC)) )
    {
LABEL_28:
      v16 = (_DWORD *)sub_785FA0((int *)this, (int)v17, v10);
      *(_DWORD *)a2 = *v16;
      *(_DWORD *)(a2 + 4) = v16[1];
      return a2;
    }
    if ( *(_BYTE *)(*(_DWORD *)(v9 + 8) + 0x2D) )
      sub_7859E0((int *)this, (int **)a2, 0, (int **)v9, v10);
    else
      sub_7859E0((int *)this, (int **)a2, 1, v15, v10);
    return a2;
  }
}
