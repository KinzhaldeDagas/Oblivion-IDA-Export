_BYTE *__thiscall sub_92AFF0(_DWORD *this, _BYTE *a2, int a3, int a4, int a5)
{
  int v6; // esi
  int v7; // ebx
  int v8; // eax

  v6 = *(this + 3) - 1;
  if ( v6 < 0 )
  {
LABEL_5:
    *a2 = 1;
    return a2;
  }
  else
  {
    v7 = a5;
    while ( 1 )
    {
      v8 = *(_DWORD *)(*(this + 2) + 4 * v6);
      if ( !*(_BYTE *)(**(int (__thiscall ***)(int, int *, int, int, int))(v8 + 0x10))(v8 + 0x10, &a5, a3, a4, v7) )
        break;
      if ( --v6 < 0 )
        goto LABEL_5;
    }
    *a2 = 0;
    return a2;
  }
}
