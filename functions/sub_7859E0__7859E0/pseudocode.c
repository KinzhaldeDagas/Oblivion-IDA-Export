int **__thiscall sub_7859E0(int *this, int **a2, char a3, int **a4, _DWORD *a5)
{
  int *v6; // ebp
  int v7; // eax
  int **v8; // eax
  int v9; // eax
  int *v10; // eax
  int i; // esi
  int v12; // ecx
  int *v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // eax
  _DWORD *v17; // ecx
  int v18; // edx
  _DWORD *v19; // edx
  rsize_t v21; // [esp-4h] [ebp-68h]
  int v22; // [esp+14h] [ebp-50h] BYREF
  char v23; // [esp+18h] [ebp-4Ch]
  int v24; // [esp+28h] [ebp-3Ch]
  int v25; // [esp+2Ch] [ebp-38h]
  _DWORD v26[13]; // [esp+30h] [ebp-34h] BYREF

  if ( (unsigned int)*(this + 2) >= 0x7FFFFFE )
  {
    LODWORD(v21) = 0x13;
    v25 = 0xF;
    v24 = 0;
    v23 = 0;
    sub_414500(&v22, (int)this, "map/set<T> too long", v21);
    v26[0xC] = 0;
    sub_4146E0((std::exception *)v26, &v22);
    v26[0] = &std::length_error::`vftable';
    ThrowException__((int)v26, &_TI3_AVlength_error_std__);
  }
  v6 = sub_785360(*(this + 1), (int)a4, *(this + 1), a5, 0);
  v7 = *(this + 1);
  ++*(this + 2);
  if ( a4 == (int **)v7 )
  {
    *(_DWORD *)(v7 + 4) = v6;
    *(_DWORD *)*(this + 1) = v6;
    *(_DWORD *)(*(this + 1) + 8) = v6;
  }
  else if ( a3 )
  {
    *a4 = v6;
    v8 = (int **)*(this + 1);
    if ( a4 == (int **)*v8 )
      *v8 = v6;
  }
  else
  {
    a4[2] = v6;
    v9 = *(this + 1);
    if ( a4 == *(int ***)(v9 + 8) )
      *(_DWORD *)(v9 + 8) = v6;
  }
  v10 = v6 + 1;
  for ( i = (int)v6; !*(_BYTE *)(*(_DWORD *)(i + 4) + 0x2C); v10 = (int *)(i + 4) )
  {
    v12 = *v10;
    v13 = *(int **)(*v10 + 4);
    if ( *v10 == *v13 )
    {
      v14 = v13[2];
      if ( *(_BYTE *)(v14 + 0x2C) )
      {
        if ( i == *(_DWORD *)(v12 + 8) )
        {
          i = *v10;
          sub_784740(this, *v10);
        }
        *(_BYTE *)(*(_DWORD *)(i + 4) + 0x2C) = 1;
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(i + 4) + 4) + 0x2C) = 0;
        sub_784790(this, *(_DWORD **)(*(_DWORD *)(i + 4) + 4));
      }
      else
      {
        *(_BYTE *)(v12 + 0x2C) = 1;
        *(_BYTE *)(v14 + 0x2C) = 1;
        *(_BYTE *)(*(_DWORD *)(*v10 + 4) + 0x2C) = 0;
        i = *(_DWORD *)(*v10 + 4);
      }
    }
    else
    {
      v15 = *v13;
      if ( *(_BYTE *)(v15 + 0x2C) )
      {
        if ( i == *(_DWORD *)v12 )
        {
          i = *v10;
          sub_784790(this, (_DWORD *)*v10);
        }
        *(_BYTE *)(*(_DWORD *)(i + 4) + 0x2C) = 1;
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(i + 4) + 4) + 0x2C) = 0;
        v16 = *(_DWORD *)(*(_DWORD *)(i + 4) + 4);
        v17 = *(_DWORD **)(v16 + 8);
        *(_DWORD *)(v16 + 8) = *v17;
        if ( !*(_BYTE *)(*v17 + 0x2D) )
          *(_DWORD *)(*v17 + 4) = v16;
        v17[1] = *(_DWORD *)(v16 + 4);
        v18 = *(this + 1);
        if ( v16 == *(_DWORD *)(v18 + 4) )
        {
          *(_DWORD *)(v18 + 4) = v17;
        }
        else
        {
          v19 = *(_DWORD **)(v16 + 4);
          if ( v16 == *v19 )
            *v19 = v17;
          else
            v19[2] = v17;
        }
        *v17 = v16;
        *(_DWORD *)(v16 + 4) = v17;
      }
      else
      {
        *(_BYTE *)(v12 + 0x2C) = 1;
        *(_BYTE *)(v15 + 0x2C) = 1;
        *(_BYTE *)(*(_DWORD *)(*v10 + 4) + 0x2C) = 0;
        i = *(_DWORD *)(*v10 + 4);
      }
    }
  }
  *(_BYTE *)(*(_DWORD *)(*(this + 1) + 4) + 0x2C) = 1;
  a2[1] = v6;
  *a2 = this;
  return a2;
}
