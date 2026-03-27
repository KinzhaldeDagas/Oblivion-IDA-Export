int *__thiscall sub_786C60(int *this, _DWORD *a2)
{
  int *v2; // edi
  int *v3; // esi
  _DWORD *v4; // eax
  int v5; // eax
  _BYTE v7[8]; // [esp+10h] [ebp-34h] BYREF
  int v8; // [esp+18h] [ebp-2Ch] BYREF
  unsigned int v9; // [esp+1Ch] [ebp-28h]
  int v10; // [esp+2Ch] [ebp-18h]
  unsigned int v11; // [esp+30h] [ebp-14h]
  int v12; // [esp+34h] [ebp-10h]
  int v13; // [esp+40h] [ebp-4h]

  v2 = this;
  v3 = sub_784930(this, (int)a2);
  if ( !v2 )
    _invalid_parameter_noinfo();
  if ( v3 == (int *)v2[1]
    || ((unsigned int)v3[9] < 0x10 ? (v4 = v3 + 4) : (v4 = (_DWORD *)v3[4]), sub_6F5DE0(a2, 0, a2[5], v4, v3[8]) < 0) )
  {
    v11 = 0xF;
    v10 = 0;
    LOBYTE(v9) = 0;
    sub_414420((int)&v8, a2, 0, 0xFFFFFFFF);
    v12 = 0;
    v13 = 0;
    v5 = sub_7868F0((int)v2, (int)v7, v2, (int)v3, &v8);
    v2 = *(int **)v5;
    v3 = *(int **)(v5 + 4);
    if ( v11 >= 0x10 )
      FormHeapFree(v9);
    v11 = 0xF;
    v10 = 0;
    LOBYTE(v9) = 0;
  }
  if ( !v2 )
    _invalid_parameter_noinfo();
  if ( v3 == (int *)v2[1] )
    _invalid_parameter_noinfo();
  return v3 + 0xA;
}
