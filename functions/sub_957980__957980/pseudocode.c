int __thiscall sub_957980(int this, int i, unsigned int **a3, int a4, int a5)
{
  unsigned int **v5; // edi
  int v8; // ebp
  int v9; // edx
  _DWORD *v10; // eax
  bool v11; // zf
  int v12; // ecx
  int v13; // edx
  int v14; // ebx
  int *v15; // ecx
  int *v16; // eax
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // ebx
  double v21; // st7
  unsigned int **v22; // ebx
  int v23; // eax
  bool v24; // cc
  unsigned int **v25; // eax
  int v26; // ebx
  int v27; // [esp+34h] [ebp-34h]
  signed int v28; // [esp+38h] [ebp-30h] BYREF
  int v29; // [esp+3Ch] [ebp-2Ch] BYREF
  int v30[3]; // [esp+44h] [ebp-24h] BYREF
  int *v31[3]; // [esp+50h] [ebp-18h] BYREF
  unsigned int *v32[3]; // [esp+5Ch] [ebp-Ch] BYREF

  v5 = a3;
  if ( a3[1] == (unsigned int *)1 )
  {
    if ( !*(_DWORD *)(this + 0x1C) )
      (*(void (__thiscall **)(_DWORD, _DWORD, int, int))(**(_DWORD **)(this + 0x24) + 0x10))(
        *(_DWORD *)(this + 0x24),
        *(_DWORD *)(this + 0x2C),
        this,
        0x800);
    return sub_9573A0((_DWORD *)this, i, v5);
  }
  else
  {
    if ( !*(_DWORD *)(this + 0x14) )
      (*(void (__thiscall **)(_DWORD, _DWORD, int, int))(**(_DWORD **)(this + 0x24) + 0x10))(
        *(_DWORD *)(this + 0x24),
        *(_DWORD *)(this + 0x2C),
        this,
        0x800);
    v8 = *(_DWORD *)(this + 0x10);
    v9 = *(_DWORD *)(this + 0x14);
    *(_DWORD *)(this + 0x10) = *(_DWORD *)v8;
    *(_DWORD *)(this + 0x14) = v9 - 1;
    sub_956980((_DWORD *)v8);
    v10 = (_DWORD *)i;
    v11 = i == 0;
    *(_BYTE *)(v8 + 4) = 0;
    *(_DWORD *)(v8 + 0xC4) = 0x49742400;
    *(_DWORD *)(v8 + 0xBC) = 0x501502F9;
    *(_DWORD *)(v8 + 0xEC) = 0;
    *(_DWORD *)(v8 + 0xF0) = 0;
    *(_DWORD *)(v8 + 0xF4) = v5[1];
    *(_DWORD *)v8 = v10;
    if ( v11 )
    {
      *(_DWORD *)(this + 0x2C) = v8;
    }
    else
    {
      if ( a4 )
        v10[0x3C] = v8;
      else
        v10[0x3B] = v8;
      *(_DWORD *)(v8 + 0xC) = v10[3];
      *(_DWORD *)(v8 + 0x10) = v10[4];
      *(_DWORD *)(v8 + 0x14) = v10[5];
      *(_DWORD *)(v8 + 0x18) = v10[6];
      *(_DWORD *)(v8 + 0x1C) = v10[7];
      *(_DWORD *)(v8 + 0x20) = v10[8];
    }
    a3 = 0;
    sub_956E90((_DWORD *)this, (int)v10, &v28, (int)v30);
    v12 = 0;
    for ( i = 0; ; v12 = i )
    {
      v13 = *(&v28 + v12);
      v14 = *(_DWORD *)(this + 0x34) + 0x20 * v13;
      if ( *(float *)&v30[v12] + *(float *)(v14 + 0x10) > *(float *)(v8 + 0xC4) )
        break;
      v15 = *(int **)(this + 0x28);
      v16 = (int *)(v8 + 8 * v13 + 0xC);
      v17 = *v15;
      a4 = (int)v16;
      (*(void (__thiscall **)(int *, int, unsigned int *, unsigned int *, int *, int *))(v17 + 0x10))(
        v15,
        v14,
        *v5,
        v5[1],
        v16,
        v16 + 1);
      v18 = (int)v5[1];
      LOBYTE(v27) = 0;
      if ( v18 > 1 )
        sub_957460((int)*v5, 0, v18 - 1, v27);
      a3 = (unsigned int **)v14;
      sub_957040((_DWORD *)this, v8, v14, v5, (float *)a4, a5);
      if ( ++i >= 3 )
        goto LABEL_23;
    }
    while ( 1 )
    {
      (*(void (__thiscall **)(_DWORD, int, unsigned int *, unsigned int *, int, int))(**(_DWORD **)(this + 0x28) + 0x14))(
        *(_DWORD *)(this + 0x28),
        *(_DWORD *)(this + 0x34) + 0x20 * *(&v28 + v12),
        *v5,
        v5[1],
        v8 + 8 * *(&v28 + v12) + 0xC,
        v8 + 8 * *(&v28 + v12) + 0x10);
      if ( ++i >= 3 )
        break;
      v12 = i;
    }
LABEL_23:
    v19 = *(_DWORD *)(this + 0x30);
    a4 = 3;
    if ( v19 > 3 )
    {
      i = 0x60;
      do
      {
        v20 = *(_DWORD *)(this + 0x34);
        v21 = *(float *)(v20 + i + 0x10);
        v22 = (unsigned int **)(i + v20);
        if ( v21 > *(float *)(v8 + 0xC4) )
          break;
        (*(void (__thiscall **)(_DWORD, unsigned int **, unsigned int *, unsigned int *, signed int *, int *))(**(_DWORD **)(this + 0x28) + 0x10))(
          *(_DWORD *)(this + 0x28),
          v22,
          *v5,
          v5[1],
          &v28,
          &v29);
        v23 = (int)v5[1];
        LOBYTE(v27) = 0;
        if ( v23 > 1 )
          sub_957460((int)*v5, 0, v23 - 1, v27);
        a3 = v22;
        sub_957040((_DWORD *)this, v8, (int)v22, v5, (float *)&v28, a5);
        v24 = ++a4 < *(_DWORD *)(this + 0x30);
        i += 0x20;
      }
      while ( v24 );
    }
    sub_956DD0((_DWORD **)this, v5, (_DWORD *)v8);
    v25 = *(unsigned int ***)(v8 + 0xB8);
    if ( a3 != v25 )
      (*(void (__thiscall **)(_DWORD, unsigned int **, unsigned int *, unsigned int *, unsigned int ***, int *))(**(_DWORD **)(this + 0x28) + 0x10))(
        *(_DWORD *)(this + 0x28),
        v25,
        *v5,
        v5[1],
        &a3,
        &i);
    v26 = a5;
    sub_9577F0((int **)this, (int **)v5, (int *)v8, *(float *)&a5, (int *)v32, v31);
    *(_DWORD *)(v8 + 0xF0) = sub_957980(this, v8, (unsigned int **)v31, (int *)1, v26 + 1);
    *(_DWORD *)(v8 + 0xEC) = sub_957980(this, v8, v32, 0, v26 + 1);
    return v8;
  }
}
