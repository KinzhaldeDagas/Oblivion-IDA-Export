_DWORD *__thiscall sub_778EA0(NiGeometryGroupManager *this, int a2)
{
  _DWORD *result; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  unsigned int v6; // ecx
  void ***v7; // esi
  int v8; // eax
  void **v9; // edx
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax

  result = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v4 = sub_77DE00();
    }
    else
    {
      if ( a2 != 2 )
        return result;
      v4 = sub_77EA10();
    }
  }
  else
  {
    v4 = sub_77DD20();
  }
  v5 = v4;
  if ( v4 )
  {
    v6 = *((_DWORD *)this + 3);
    v7 = (void ***)((char *)this + 4);
    v8 = 0;
    if ( !v6 )
      goto LABEL_14;
    v9 = *v7;
    while ( *v9 != v5 )
    {
      ++v8;
      ++v9;
      if ( v8 >= v6 )
        goto LABEL_14;
    }
    if ( v8 < 0 )
    {
LABEL_14:
      v10 = *((_DWORD *)this + 2);
      if ( v6 == v10 )
      {
        if ( v10 )
          v11 = 2 * v10;
        else
          v11 = 1;
        sub_6E8CA0((unsigned int *)this + 1, v11);
      }
      (*v7)[(*((_DWORD *)this + 3))++] = v5;
      v12 = *((_DWORD *)this + 4);
      v5[2] = v12;
      (*(void (__stdcall **)(int))(*(_DWORD *)v12 + 4))(v12);
    }
  }
  return v5;
}
