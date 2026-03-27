void __thiscall sub_8A1170(void *this, _DWORD *a2)
{
  unsigned int v2; // ebp
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // eax
  _WORD *v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  int v11; // ebx
  unsigned int j; // edi
  _WORD *v13; // eax
  int i; // [esp+14h] [ebp-18h]

  if ( a2 )
  {
    v2 = a2[2];
    v3 = 0;
    for ( i = a2[1]; v3 < v2; ++v3 )
    {
      v4 = *(_DWORD *)(a2[1] + 4 * v3);
      if ( v4 )
        v5 = *(_DWORD *)(v4 + 8);
      else
        v5 = 0;
      if ( v5 )
      {
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
        if ( v6 )
        {
          while ( (char *)v6 != dword_BA8150 )
          {
            v6 = *(_DWORD *)(v6 + 4);
            if ( !v6 )
              goto LABEL_10;
          }
        }
        else
        {
LABEL_10:
          v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
          if ( !v7 )
          {
LABEL_13:
            v8 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(
                            dword_BA7D98,
                            0x1C,
                            0x24);
            v8[2] = 0x1C;
            v9 = sub_8E89D0(v8, i, v2);
            goto LABEL_14;
          }
          while ( (char *)v7 != dword_BA7FF8 )
          {
            v7 = *(_DWORD *)(v7 + 4);
            if ( !v7 )
              goto LABEL_13;
          }
        }
      }
    }
    v13 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x20, 0x24);
    v13[2] = 0x20;
    v9 = sub_8E86E0(v13, i, v2);
LABEL_14:
    v10 = v9;
    v11 = (*(int (__thiscall **)(_DWORD *))(*v9 + 0x20))(v9);
    if ( v2 >= a2[5] )
      v2 = a2[5];
    for ( j = 0; j < v2; ++j )
    {
      sub_8E8880(v10, v11, *(_DWORD *)(a2[4] + 4 * j));
      (*(void (__thiscall **)(_DWORD *, int))(*v10 + 0x24))(v10, v11);
    }
    (*(void (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 0x4C))(this, v10);
    if ( *((_WORD *)v10 + 2) )
    {
      if ( !--*((_WORD *)v10 + 3) )
        (*(void (__thiscall **)(_DWORD *, int))*v10)(v10, 1);
    }
    (*(void (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 0x7C))(this, a2);
  }
}
