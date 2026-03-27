_BYTE *__thiscall sub_92B050(_DWORD *this, _BYTE *a2, int a3, int a4)
{
  int v5; // esi
  int v6; // ebx
  int v7; // eax

  v5 = *(this + 2) - 1;
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
      v7 = *(_DWORD *)(*(this + 1) + 4 * v5);
      if ( !*(_BYTE *)(**(int (__thiscall ***)(int, int *, int, int))(v7 + 0x14))(v7 + 0x14, &a4, a3, v6) )
        break;
      if ( --v5 < 0 )
        goto LABEL_5;
    }
    *a2 = 0;
    return a2;
  }
}
