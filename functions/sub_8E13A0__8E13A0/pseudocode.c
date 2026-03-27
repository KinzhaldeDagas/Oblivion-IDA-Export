int __thiscall sub_8E13A0(char **this, int a2, int a3, _DWORD *a4)
{
  char *v5; // ecx
  char *v6; // edx
  char *v7; // esi
  char *v8; // edi
  int v9; // eax
  char v10; // dl
  int result; // eax
  int v12; // eax
  char *i; // [esp+Ch] [ebp-4h]

  v5 = *this;
  v6 = &v5[4 * (_DWORD)*(this + 1)];
  v7 = v5;
  v8 = 0;
  for ( i = v6; v7 < v6; v7 += 4 )
  {
    v9 = *(_DWORD *)(*a4 + 4 * *((unsigned __int16 *)v7 + 1));
    if ( v9 >= 0 )
    {
      *(_DWORD *)v5 = *(_DWORD *)v7;
      v10 = *v5;
      *((_WORD *)v5 + 1) = v9;
      v5 += 4;
      *(_WORD *)(*(_DWORD *)(4 * ((v10 & 1) + 2 * a3) + 0xB2FC84) + 0x10 * v9 + a2) = (_WORD)v8;
      v6 = i;
      ++v8;
    }
  }
  result = (unsigned int)*(this + 2) & 0x3FFFFFFF;
  if ( result < (int)v8 )
  {
    v12 = 2 * result;
    if ( (int)v8 >= v12 )
      v12 = (int)v8;
    result = sub_8A6E40((const void **)this, v12, 4);
  }
  *(this + 1) = v8;
  return result;
}
