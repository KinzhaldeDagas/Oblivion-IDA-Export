int __thiscall sub_91F220(int **this, int a2, int a3)
{
  int v3; // ebp
  int v4; // esi
  int *v5; // edx
  int v6; // eax
  int v7; // ebp
  int v8; // ebx
  int *v9; // edx
  int *v10; // edx
  int result; // eax
  int v12; // ebp
  int v13; // ebx
  int v14; // edi
  int *v15; // edx
  int v16; // edi

  v3 = a3; /*0x91f222*/
  v4 = a2; /*0x91f227*/
  if ( a2 > a3 ) /*0x91f22e*/
  {
    v4 = a3; /*0x91f232*/
    a3 = a2; /*0x91f234*/
    v3 = a2; /*0x91f238*/
  }
  v5 = *this; /*0x91f23a*/
  v6 = **this; /*0x91f23c*/
  if ( *(int *)(v6 + 4 * v4) >= 0 ) /*0x91f245*/
  {
    v7 = *(_DWORD *)(v6 + 4 * v4); /*0x91f247*/
    do /*0x91f257*/
    {
      v8 = v7; /*0x91f250*/
      v7 = *(_DWORD *)(v6 + 4 * v7); /*0x91f252*/
    }
    while ( v7 >= 0 ); /*0x91f257*/
    v3 = a3; /*0x91f25b*/
    do /*0x91f272*/
    {
      v9 = (int *)(*v5 + 4 * v4); /*0x91f263*/
      v4 = *v9; /*0x91f266*/
      *v9 = v8; /*0x91f268*/
      v5 = *this; /*0x91f26a*/
    }
    while ( *(int *)(**this + 4 * v4) >= 0 ); /*0x91f272*/
  }
  v10 = *this; /*0x91f274*/
  result = v3; /*0x91f27a*/
  v12 = **this; /*0x91f27e*/
  v13 = *(_DWORD *)(v12 + 4 * a3); /*0x91f280*/
  if ( v13 >= 0 ) /*0x91f28a*/
  {
    do /*0x91f298*/
    {
      v14 = v13; /*0x91f290*/
      v13 = *(_DWORD *)(v12 + 4 * v13); /*0x91f292*/
    }
    while ( v13 >= 0 ); /*0x91f298*/
    do /*0x91f2b3*/
    {
      v15 = (int *)(*v10 + 4 * result); /*0x91f2a4*/
      result = *v15; /*0x91f2a7*/
      *v15 = v14; /*0x91f2a9*/
      v10 = *this; /*0x91f2ab*/
    }
    while ( *(int *)(**this + 4 * result) >= 0 ); /*0x91f2b3*/
  }
  if ( v4 != result ) /*0x91f2b7*/
  {
    v16 = **this; /*0x91f2bb*/
    if ( v4 >= result ) /*0x91f2c2*/
    {
      *(_DWORD *)(v16 + 4 * result) += *(_DWORD *)(v16 + 4 * v4); /*0x91f2e7*/
      *(_DWORD *)(**this + 4 * v4) = result; /*0x91f2ed*/
    }
    else
    {
      *(_DWORD *)(v16 + 4 * v4) += *(_DWORD *)(v16 + 4 * result); /*0x91f2cf*/
      *(_DWORD *)(**this + 4 * result) = v4; /*0x91f2d6*/
    }
  }
  return result; /*0x91f2d5*/
}
