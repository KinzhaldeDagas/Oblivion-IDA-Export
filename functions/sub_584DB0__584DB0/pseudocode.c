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
  OblivionTileBuildStorage *v10; // edi
  unsigned int v11; // eax

  v0 = 0; /*0x584db6*/
  if ( dword_B1394C ) /*0x584db0*/
  {
    v1 = dword_B13950; /*0x584dbc*/
    while ( !*(_DWORD *)(v1 + 4 * v0) ) /*0x584dc6*/
    {
      if ( ++v0 >= (unsigned int)dword_B1394C ) /*0x584dcd*/
        goto LABEL_5; /*0x584dcd*/
    }
    v2 = *(_DWORD **)(v1 + 4 * v0); /*0x584ded*/
  }
  else
  {
LABEL_5:
    v2 = 0; /*0x584dcf*/
  }
  v3 = v2; /*0x584dd5*/
  while ( v3 ) /*0x584dd7*/
  {
    v4 = v3[2]; /*0x584de4*/
    if ( *v3 ) /*0x584de0*/
    {
      v3 = (_DWORD *)*v3; /*0x584de9*/
    }
    else
    {
      v5 = ((int (__thiscall *)(void ***, _DWORD))off_B13948[1])(&off_B13948, v3[1]) + 1; /*0x584e0c*/
      if ( v5 >= dword_B1394C ) /*0x584e11*/
      {
LABEL_13:
        v3 = 0; /*0x584e2e*/
      }
      else
      {
        while ( 1 ) /*0x584e20*/
        {
          v3 = *(_DWORD **)(dword_B13950 + 4 * v5); /*0x584e20*/
          if ( v3 ) /*0x584e25*/
            break; /*0x584e25*/
          if ( ++v5 >= dword_B1394C ) /*0x584e2c*/
            goto LABEL_13; /*0x584e2c*/
        }
      }
    }
    if ( v4 ) /*0x584e32*/
    {
      if ( *(_DWORD *)(v4 + 4) ) /*0x584e34*/
        FormHeapFree(*(_DWORD *)(v4 + 4)); /*0x584e3c*/
      *(_DWORD *)(v4 + 4) = 0; /*0x584e45*/
      FormHeapFree(v4); /*0x584e4c*/
    }
  }
  NiTMap_Clear(&off_B13948); /*0x584e5d*/
  v6 = 0; /*0x584e68*/
  if ( dword_B13960 ) /*0x584e62*/
  {
    v7 = dword_B13964; /*0x584e6e*/
    while ( !*(_DWORD *)(v7 + 4 * v6) ) /*0x584e78*/
    {
      if ( ++v6 >= (unsigned int)dword_B13960 ) /*0x584e7f*/
        goto LABEL_23; /*0x584e7f*/
    }
    v8 = *(_DWORD **)(v7 + 4 * v6); /*0x584e9d*/
  }
  else
  {
LABEL_23:
    v8 = 0; /*0x584e81*/
  }
  v9 = v8; /*0x584e85*/
  while ( v9 ) /*0x584e87*/
  {
    v10 = (OblivionTileBuildStorage *)v9[2]; /*0x584e94*/
    if ( *v9 ) /*0x584e90*/
    {
      v9 = (_DWORD *)*v9; /*0x584e99*/
    }
    else
    {
      v11 = ((int (__thiscall *)(void ***, _DWORD))off_B1395C[1])(&off_B1395C, v9[1]) + 1; /*0x584ebc*/
      if ( v11 >= dword_B13960 ) /*0x584ec1*/
      {
LABEL_31:
        v9 = 0; /*0x584ede*/
      }
      else
      {
        while ( 1 ) /*0x584ed0*/
        {
          v9 = *(_DWORD **)(dword_B13964 + 4 * v11); /*0x584ed0*/
          if ( v9 ) /*0x584ed5*/
            break; /*0x584ed5*/
          if ( ++v11 >= dword_B13960 ) /*0x584edc*/
            goto LABEL_31; /*0x584edc*/
        }
      }
    }
    if ( v10 ) /*0x584ee2*/
    {
      Tile::BuildStorage::Destroy(v10); /*0x584ee6*/
      FormHeapFree((unsigned int)v10); /*0x584eec*/
    }
  }
  return NiTMap_Clear(&off_B1395C);
}
