int __thiscall sub_948E80(_DWORD *this, const char *a2, int a3, int a4, int a5, int a6)
{
  int result; // eax
  signed int v8; // ebx
  int v9; // esi
  int v10; // [esp+Ch] [ebp+8h]

  result = *(this + 3) & 0x3FFFFFFF;
  if ( result > *(this + 2) + 0x46 && (a3 & *(this + 7)) != 0 )
  {
    v8 = 0;
    if ( a5 || a6 )
    {
      v10 = 0;
      if ( a2 )
      {
        v8 = sub_8B1860(a2) + 1;
        v10 = v8 % 2;
      }
      v9 = sub_948DF0((int)(this + 1), v8 + v10);
      *(_BYTE *)v9 = 0x43;
      *(_BYTE *)(v9 + 1) = v10 + v8;
      *(_WORD *)(v9 + 2) = a5;
      if ( a6 )
        result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_BA7D98 + 0x28))(dword_BA7D98, a6);
      else
        result = 0;
      *(_WORD *)(v9 + 4) = result;
      if ( v8 > 0 )
      {
        sub_8B1890((void *)(v9 + 6), a2, v8);
        result = v10;
        if ( v10 )
          *(_BYTE *)(v9 + v8 + 6) = 0;
      }
    }
  }
  return result;
}
