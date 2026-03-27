int *__userpurge sub_616980@<eax>(_DWORD *this@<ecx>, double a2@<st0>, float *a3, int a4, int a5)
{
  int *v6; // eax
  int v7; // ebp
  int *v8; // esi
  int *v10; // eax
  int **v11; // ebx
  int **v12; // eax
  int v13; // edx
  int v14; // eax
  int **v15; // esi
  float v16; // [esp+4h] [ebp-1Ch]
  float v17; // [esp+4h] [ebp-1Ch]
  float v18; // [esp+4h] [ebp-1Ch]
  char v19; // [esp+1Bh] [ebp-5h]
  int *v20; // [esp+1Ch] [ebp-4h]

  v6 = (int *)*(this + 0x20);
  v7 = 0;
  v8 = 0;
  v19 = 0;
  v20 = 0;
  if ( v6 && a4 == 4 )
  {
    if ( sub_613BB0(this, v6, a5, 1) )
    {
      sub_5E0970((void *)*(this + 0xF), *(_DWORD *)*(this + 0x20));
      v16 = a2;
      *a3 = sub_546CA0(v16);
      return (int *)*(this + 0x20);
    }
    v20 = (int *)*(this + 0x20);
    v19 = 1;
  }
  v10 = (int *)*(this + 0x1F);
  if ( v10 && a4 == 3 )
  {
    if ( sub_613BB0(this, v10, a5, 1) )
    {
      sub_5E0970((void *)*(this + 0xF), *(_DWORD *)*(this + 0x1F));
      v17 = a2;
      *a3 = sub_546CA0(v17);
      return (int *)*(this + 0x1F);
    }
    v20 = (int *)*(this + 0x1F);
    v19 = 1;
  }
  else
  {
    if ( a4 == 4 )
    {
      v11 = (int **)*(this + 0x17);
      goto LABEL_15;
    }
    if ( a4 != 3 )
      return v8;
  }
  v11 = (int **)*(this + 0x18);
LABEL_15:
  if ( !v11 )
    return v8;
  v12 = v11;
  do
  {
    if ( *v12 )
      ++v7;
    v12 = (int **)v12[1];
  }
  while ( v12 );
  if ( v7 == 1 )
  {
    v8 = *v11;
    goto LABEL_39;
  }
  if ( !v7 )
    return v8;
  v13 = GetRandomLargeInteger_(0) % (2 * v7);
  if ( v13 >= v7 )
    goto LABEL_35;
  if ( v13 )
  {
    v14 = 0;
    v15 = v11;
    if ( v13 > 0 )
    {
      while ( v15 )
      {
        v15 = (int **)v15[1];
        if ( ++v14 >= v13 )
          goto LABEL_31;
      }
      goto LABEL_35;
    }
LABEL_31:
    if ( v15 && sub_613BB0(this, *v15, a5, 1) )
    {
      v8 = *v15;
      goto LABEL_34;
    }
LABEL_35:
    v8 = (int *)v11;
    while ( *v8 && !sub_613BB0(this, (int *)*v8, a5, 1) )
    {
      v8 = (int *)v8[1];
      if ( !v8 )
        goto LABEL_39;
    }
    v8 = (int *)*v8;
LABEL_39:
    if ( !v8 )
      return v8;
    goto LABEL_40;
  }
  if ( sub_613BB0(this, *v11, a5, 1) )
    v8 = *v11;
  else
    v8 = 0;
LABEL_34:
  if ( !v8 )
    goto LABEL_35;
LABEL_40:
  if ( v8 == v20 && v19 )
    return 0;
  sub_5E0970((void *)*(this + 0xF), *v8);
  v18 = a2;
  *a3 = sub_546CA0(v18);
  if ( *v8 )
  {
    if ( !sub_419D90((char *)*v8) )
      sub_41A610((char *)*v8, 0);
  }
  return v8;
}
