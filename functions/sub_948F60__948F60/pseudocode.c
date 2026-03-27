int __fastcall sub_948F60(int *a1, int a2, const char *a3, int a4, _WORD *a5)
{
  int result; // eax
  signed int v7; // ebx
  int v8; // edi
  int v9; // esi
  __int16 v10; // ax
  int v11; // [esp+Ch] [ebp+8h]

  result = a1[3] & 0x3FFFFFFF;
  if ( result > a1[2] + 0x46 )
  {
    v7 = 0;
    if ( a5 )
    {
      result = sub_8B1550(a1 + 4, (unsigned int)a5, 0);
      if ( !result )
      {
        sub_8B0E80((char **)a1 + 4, (unsigned int)a5, 1);
        v8 = a5[2] & 0x7FFF;
        if ( (a1[7] & a4) == 0 )
          v8 = 0;
        v11 = 0;
        if ( a3 )
        {
          v7 = sub_8B1860(a3) + 1;
          v11 = v7 % 2;
        }
        v9 = sub_948DF0((int)(a1 + 1), v7 + v11);
        *(_BYTE *)v9 = 0x50;
        *(_BYTE *)(v9 + 1) = v11 + v7;
        *(_WORD *)(v9 + 2) = v8;
        if ( v8 )
          v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_BA7D98 + 0x28))(dword_BA7D98, v8);
        else
          v10 = 0;
        *(_WORD *)(v9 + 4) = v10;
        if ( v7 > 0 )
        {
          sub_8B1890((void *)(v9 + 6), a3, v7);
          if ( v11 )
            *(_BYTE *)(v9 + v7 + 6) = 0;
        }
        (*(void (__thiscall **)(_WORD *, int *))(*(_DWORD *)a5 + 4))(a5, a1 != (int *)8 ? a1 : 0);
        return (*(int (__thiscall **)(int *))(*a1 + 0x10))(a1);
      }
    }
  }
  return result;
}
