_BYTE *__thiscall sub_92AF90(_DWORD *this, _BYTE *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // esi
  int v9; // ebx
  int v10; // eax

  v8 = *(this + 4) - 1;
  if ( v8 < 0 )
  {
LABEL_5:
    *a2 = 1;
    return a2;
  }
  else
  {
    v9 = a7;
    while ( 1 )
    {
      v10 = *(_DWORD *)(*(this + 3) + 4 * v8);
      if ( !*(_BYTE *)(**(int (__thiscall ***)(int, int *, int, int, int, int, int))(v10 + 0xC))(
                        v10 + 0xC,
                        &a7,
                        a3,
                        a4,
                        a5,
                        a6,
                        v9) )
        break;
      if ( --v8 < 0 )
        goto LABEL_5;
    }
    *a2 = 0;
    return a2;
  }
}
