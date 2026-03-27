int sub_584DB0()
{
  int v0; // eax
  int v1; // edx
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // eax
  int v6; // eax
  int v7; // edx
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  unsigned int **v10; // edi
  unsigned int v11; // eax

  v0 = 0;
  if ( dword_B1394C )
  {
    v1 = dword_B13950;
    while ( !*(_DWORD *)(v1 + 4 * v0) )
    {
      if ( ++v0 >= (unsigned int)dword_B1394C )
        goto LABEL_5;
    }
    v2 = *(_DWORD **)(v1 + 4 * v0);
  }
  else
  {
LABEL_5:
    v2 = 0;
  }
  v3 = v2;
  while ( v3 )
  {
    v4 = v3[2];
    if ( *v3 )
    {
      v3 = (_DWORD *)*v3;
    }
    else
    {
      v5 = ((int (__thiscall *)(void ***, _DWORD))off_B13948[1])(&off_B13948, v3[1]) + 1;
      if ( v5 >= dword_B1394C )
      {
LABEL_13:
        v3 = 0;
      }
      else
      {
        while ( 1 )
        {
          v3 = *(_DWORD **)(dword_B13950 + 4 * v5);
          if ( v3 )
            break;
          if ( ++v5 >= dword_B1394C )
            goto LABEL_13;
        }
      }
    }
    if ( v4 )
    {
      if ( *(_DWORD *)(v4 + 4) )
        FormHeapFree(*(_DWORD *)(v4 + 4));
      *(_DWORD *)(v4 + 4) = 0;
      FormHeapFree(v4);
    }
  }
  NiTMap_Clear(&off_B13948);
  v6 = 0;
  if ( dword_B13960 )
  {
    v7 = dword_B13964;
    while ( !*(_DWORD *)(v7 + 4 * v6) )
    {
      if ( ++v6 >= (unsigned int)dword_B13960 )
        goto LABEL_23;
    }
    v8 = *(_DWORD **)(v7 + 4 * v6);
  }
  else
  {
LABEL_23:
    v8 = 0;
  }
  v9 = v8;
  while ( v9 )
  {
    v10 = (unsigned int **)v9[2];
    if ( *v9 )
    {
      v9 = (_DWORD *)*v9;
    }
    else
    {
      v11 = ((int (__thiscall *)(void ***, _DWORD))off_B1395C[1])(&off_B1395C, v9[1]) + 1;
      if ( v11 >= dword_B13960 )
      {
LABEL_31:
        v9 = 0;
      }
      else
      {
        while ( 1 )
        {
          v9 = *(_DWORD **)(dword_B13964 + 4 * v11);
          if ( v9 )
            break;
          if ( ++v11 >= dword_B13960 )
            goto LABEL_31;
        }
      }
    }
    if ( v10 )
    {
      sub_58CDB0(v10);
      FormHeapFree((unsigned int)v10);
    }
  }
  return NiTMap_Clear(&off_B1395C);
}
