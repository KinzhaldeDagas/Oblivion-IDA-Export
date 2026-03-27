_DWORD *__thiscall sub_772BB0(_DWORD *this)
{
  _DWORD *result; // eax
  unsigned int *v2; // ecx
  int v3; // edi
  unsigned int v4; // ebx
  _DWORD *v5; // esi
  unsigned int v6; // eax
  unsigned int *v7; // ebp
  _DWORD *v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // eax
  int v11; // edi
  unsigned int v12; // ebx
  _DWORD *v13; // esi
  unsigned int v14; // eax
  unsigned int *v15; // ebp
  _DWORD *v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // eax
  int v19; // [esp+10h] [ebp-8h]
  int v20; // [esp+10h] [ebp-8h]
  _DWORD *v21; // [esp+14h] [ebp-4h]

  result = this;
  v2 = (unsigned int *)dword_B427AC;
  v3 = result[2];
  v21 = result;
  if ( v3 )
  {
    do
    {
      v4 = v2[2];
      v5 = v2 + 2;
      v19 = *(_DWORD *)(v3 + 8);
      v6 = 0;
      v7 = v2;
      if ( !v4 )
        goto LABEL_8;
      v8 = (_DWORD *)*v2;
      while ( *v8 != v3 )
      {
        ++v6;
        ++v8;
        if ( v6 >= v4 )
          goto LABEL_8;
      }
      if ( v6 == 0xFFFFFFFF )
      {
LABEL_8:
        v9 = v2[1];
        if ( v4 == v9 )
        {
          if ( v9 )
            v10 = 2 * v9;
          else
            v10 = 1;
          sub_6E8CA0(v2, v10);
        }
        *(_DWORD *)(*v7 + 4 * (*v5)++) = v3;
        v2 = (unsigned int *)dword_B427AC;
      }
      v3 = v19;
    }
    while ( v19 );
    result = v21;
  }
  v11 = result[4];
  if ( v11 )
  {
    do
    {
      v12 = v2[2];
      v13 = v2 + 2;
      v20 = *(_DWORD *)(v11 + 8);
      v14 = 0;
      v15 = v2;
      if ( !v12 )
        goto LABEL_23;
      v16 = (_DWORD *)*v2;
      while ( *v16 != v11 )
      {
        ++v14;
        ++v16;
        if ( v14 >= v12 )
          goto LABEL_23;
      }
      if ( v14 == 0xFFFFFFFF )
      {
LABEL_23:
        v17 = v2[1];
        if ( v12 == v17 )
        {
          if ( v17 )
            v18 = 2 * v17;
          else
            v18 = 1;
          sub_6E8CA0(v2, v18);
        }
        *(_DWORD *)(*v15 + 4 * (*v13)++) = v11;
        v2 = (unsigned int *)dword_B427AC;
      }
      v11 = v20;
    }
    while ( v20 );
    v21[2] = 0;
    v21[4] = 0;
    return v21;
  }
  else
  {
    result[2] = 0;
    result[4] = 0;
  }
  return result;
}
