int __thiscall sub_785FA0(int *this, int a2, _DWORD *a3)
{
  int *v4; // edi
  int *v5; // esi
  bool v6; // zf
  int **v7; // ebp
  char v8; // al
  unsigned int v9; // ebp
  _DWORD *v10; // edx
  unsigned int v11; // edi
  unsigned int v12; // ecx
  _DWORD *v13; // eax
  signed int v14; // eax
  bool v15; // sf
  int v16; // eax
  int **v17; // esi
  int **v18; // eax
  int *v19; // edx
  _DWORD *v21; // eax
  int *v22; // edx
  char v23; // [esp+10h] [ebp-Ch]
  int *v24; // [esp+14h] [ebp-8h] BYREF
  int **v25; // [esp+18h] [ebp-4h]
  int **v26; // [esp+24h] [ebp+8h]

  v4 = this;
  v5 = *(int **)(*(this + 1) + 4);
  v6 = *((_BYTE *)v5 + 0x2D) == 0;
  v7 = (int **)*(this + 1);
  v8 = 1;
  v24 = this;
  v23 = 1;
  if ( v6 )
  {
    do
    {
      v9 = v5[8];
      v26 = (int **)v5;
      if ( (unsigned int)v5[9] < 0x10 )
        v10 = v5 + 4;
      else
        v10 = (_DWORD *)v5[4];
      v11 = a3[5];
      v12 = v11;
      if ( v11 >= v9 )
        v12 = v5[8];
      if ( a3[6] < 0x10u )
        v13 = a3 + 1;
      else
        v13 = (_DWORD *)a3[1];
      v14 = sub_6F5CB0(v13, v10, v12);
      v15 = v14 < 0;
      if ( !v14 )
      {
        if ( v11 >= v9 )
          v16 = v11 != v9;
        else
          v16 = 0xFFFFFFFF;
        v15 = v16 < 0;
      }
      v8 = v15;
      v23 = v15;
      if ( v15 )
        v5 = (int *)*v5;
      else
        v5 = (int *)v5[2];
    }
    while ( !*((_BYTE *)v5 + 0x2D) );
    v4 = v24;
    v7 = v26;
  }
  v17 = v7;
  v25 = v7;
  v24 = v4;
  if ( v8 )
  {
    if ( v7 == *(int ***)v4[1] )
    {
      v18 = sub_7859E0(v4, &v24, 1, v7, a3);
LABEL_23:
      v19 = *v18;
      *(_DWORD *)(a2 + 4) = v18[1];
      *(_BYTE *)(a2 + 8) = 1;
      *(_DWORD *)a2 = v19;
      return a2;
    }
    sub_7840B0(&v24);
    v17 = v25;
  }
  if ( a3[6] < 0x10u )
    v21 = a3 + 1;
  else
    v21 = (_DWORD *)a3[1];
  if ( sub_6F5DE0(v17 + 3, 0, (unsigned int)v17[8], v21, a3[5]) < 0 )
  {
    v18 = sub_7859E0(v4, &v24, v23, v7, a3);
    goto LABEL_23;
  }
  v22 = v24;
  *(_DWORD *)(a2 + 4) = v17;
  *(_BYTE *)(a2 + 8) = 0;
  *(_DWORD *)a2 = v22;
  return a2;
}
