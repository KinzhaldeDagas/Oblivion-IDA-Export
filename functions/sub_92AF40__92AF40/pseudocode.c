_BYTE *__thiscall sub_92AF40(_DWORD *this, _BYTE *a2, int a3, int a4)
{
  int v5; // esi
  int v6; // ebx
  int v7; // eax

  v5 = *(this + 5) - 1;
  if ( v5 < 0 )
  {
LABEL_5:
    *a2 = 1;
    return a2;
  }
  else
  {
    v6 = a4;
    while ( 1 )
    {
      v7 = *(_DWORD *)(*(this + 4) + 4 * v5);
      if ( !*(_BYTE *)(**(int (__thiscall ***)(int, int *, int, int))(v7 + 8))(v7 + 8, &a4, a3, v6) )
        break;
      if ( --v5 < 0 )
        goto LABEL_5;
    }
    *a2 = 0;
    return a2;
  }
}
