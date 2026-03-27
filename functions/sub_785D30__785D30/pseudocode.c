int __thiscall sub_785D30(void *this)
{
  _DWORD *v1; // edi
  _DWORD **v2; // esi
  int v3; // ebx
  unsigned int v4; // ebx
  _DWORD *v5; // eax
  int result; // eax
  _DWORD **i; // [esp+Ch] [ebp-8h] BYREF
  _DWORD *v8; // [esp+10h] [ebp-4h]

  v1 = *(_DWORD **)dword_B42970;
  v2 = &dword_B4296C;
  v8 = v1;
  for ( i = &dword_B4296C; ; v2 = i )
  {
    v3 = dword_B42970;
    if ( !v2 || v2 != &dword_B4296C )
      _invalid_parameter_noinfo();
    if ( v1 == (_DWORD *)v3 )
      break;
    if ( !v2 )
      _invalid_parameter_noinfo();
    if ( v1 == v2[1] )
      _invalid_parameter_noinfo();
    v4 = v1[0xA];
    if ( v4 )
    {
      sub_784B60((unsigned int *)v1[0xA]);
      FormHeapFree(v4);
    }
    if ( v1 == v2[1] )
      _invalid_parameter_noinfo();
    v1[0xA] = 0;
    sub_7846D0(&i);
    v1 = v8;
  }
  sub_784FF0(*(unsigned int **)(dword_B42970 + 4));
  *(_DWORD *)(dword_B42970 + 4) = dword_B42970;
  v5 = (_DWORD *)dword_B42970;
  dword_B42974 = 0;
  *v5 = v5;
  result = dword_B42970;
  *(_DWORD *)(dword_B42970 + 8) = dword_B42970;
  return result;
}
