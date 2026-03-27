_DWORD *__thiscall sub_941DD0(int *this, _DWORD *a2, unsigned int a3)
{
  int v4; // esi
  signed int v5; // esi
  signed int *v6; // eax
  _DWORD *v7; // ecx
  bool v8; // sf
  int v9; // eax
  _DWORD *v10; // ecx
  int v12; // [esp+Ch] [ebp-4h] BYREF

  ++dword_BA7FC0;
  v12 = (int)&unk_BA7FC4;
  if ( !a3 )
    goto LABEL_6;
  v4 = sub_8B1550(this + 9, a3, 0xFFFFFFFF);
  if ( v4 == 0xFFFFFFFF )
  {
    v4 = *(this + 0xA) + 1;
    sub_8B0E80((char **)this + 9, a3, v4);
  }
  if ( v4 )
  {
    sub_8B1990((char **)&v12, "#%04i", v4);
  }
  else
  {
LABEL_6:
    v5 = sub_8B1860("null");
    v6 = (signed int *)v12;
    if ( *(_DWORD *)(v12 - 8) < v5 || *(int *)(v12 - 4) > 0 )
    {
      v7 = (_DWORD *)(v12 - 0xC);
      v8 = --*(_DWORD *)(v12 - 0xC + 8) < 0;
      if ( v8 )
        sub_8B1930(v7);
      v6 = sub_8B1950(v5) + 3;
      v12 = (int)v6;
    }
    sub_8B1890(v6, "null", v5 + 1);
    *(_DWORD *)(v12 - 0xC) = v5;
  }
  v9 = v12 - 0xC;
  *(_DWORD *)(v9 + 8) = *(_DWORD *)(v12 - 4) + 1;
  v10 = (_DWORD *)(v12 - 0xC);
  *a2 = v9 + 0xC;
  v8 = --v10[2] < 0;
  if ( v8 )
    sub_8B1930(v10);
  return a2;
}
