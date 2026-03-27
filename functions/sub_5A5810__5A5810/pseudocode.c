int *__thiscall sub_5A5810(_DWORD *this, unsigned int a2)
{
  int **v6; // eax
  int *v7; // esi
  bool v8; // zf
  int v9; // eax
  _DWORD *v10; // ecx

  if ( a2 >= this[3] )
    return 0;
  v6 = (int **)(this[1] + 4 * a2);
  v7 = *v6;
  v8 = *v6 == 0;
  *v6 = 0;
  if ( !v8 )
    --this[4];
  v9 = this[3] - 1;
  if ( a2 == v9 )
    this[3] = v9;
  if ( v7 )
  {
    v10 = (_DWORD *)v7[1];
    if ( v10 )
    {
      BSSimpleList_Clear(v10);
      FormHeapFree(v7[1]);
    }
    if ( *v7 )
    {
      sub_58DA70(*v7);
      if ( !byte_B3A6D4 )
      {
        if ( *v7 )
          (**(void (__thiscall ***)(int, int))*v7)(*v7, 1);
      }
    }
  }
  return v7;
}
