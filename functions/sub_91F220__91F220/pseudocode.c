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

  v3 = a3;
  v4 = a2;
  if ( a2 > a3 )
  {
    v4 = a3;
    a3 = a2;
    v3 = a2;
  }
  v5 = *this;
  v6 = **this;
  if ( *(int *)(v6 + 4 * v4) >= 0 )
  {
    v7 = *(_DWORD *)(v6 + 4 * v4);
    do
    {
      v8 = v7;
      v7 = *(_DWORD *)(v6 + 4 * v7);
    }
    while ( v7 >= 0 );
    v3 = a3;
    do
    {
      v9 = (int *)(*v5 + 4 * v4);
      v4 = *v9;
      *v9 = v8;
      v5 = *this;
    }
    while ( *(int *)(**this + 4 * v4) >= 0 );
  }
  v10 = *this;
  result = v3;
  v12 = **this;
  v13 = *(_DWORD *)(v12 + 4 * a3);
  if ( v13 >= 0 )
  {
    do
    {
      v14 = v13;
      v13 = *(_DWORD *)(v12 + 4 * v13);
    }
    while ( v13 >= 0 );
    do
    {
      v15 = (int *)(*v10 + 4 * result);
      result = *v15;
      *v15 = v14;
      v10 = *this;
    }
    while ( *(int *)(**this + 4 * result) >= 0 );
  }
  if ( v4 != result )
  {
    v16 = **this;
    if ( v4 >= result )
    {
      *(_DWORD *)(v16 + 4 * result) += *(_DWORD *)(v16 + 4 * v4);
      *(_DWORD *)(**this + 4 * v4) = result;
    }
    else
    {
      *(_DWORD *)(v16 + 4 * v4) += *(_DWORD *)(v16 + 4 * result);
      *(_DWORD *)(**this + 4 * result) = v4;
    }
  }
  return result;
}
