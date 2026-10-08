int __thiscall sub_708EB0(int *this, unsigned int *a2)
{
  unsigned int *v2; // esi
  int result; // eax
  int (__cdecl *v5)(unsigned int, unsigned int **, int, int *, int); // eax
  int (__cdecl *v6)(unsigned int, unsigned int **, int, int *, int); // edx
  int i; // edi
  int (__cdecl *v8)(unsigned int, _BYTE *, int, int *, int); // eax
  unsigned int v9; // [esp-14h] [ebp-24h]
  unsigned int v10; // [esp-14h] [ebp-24h]
  unsigned int v11; // [esp-14h] [ebp-24h]
  int v12; // [esp+8h] [ebp-8h] BYREF
  _BYTE v13[4]; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x708eb4*/
  result = sub_707F00(this, (int)a2); /*0x708ebc*/
  if ( v2[0x36] >= 0xA010066 ) /*0x708ecb*/
  {
    v9 = v2[0x87]; /*0x708ee1*/
    v5 = *(int (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v9 + 4); /*0x708ee2*/
    v12 = 1; /*0x708ee5*/
    result = v5(v9, &a2, 1, &v12, 1); /*0x708eed*/
    *((_BYTE *)this + 0xAC) = (_BYTE)a2 != 0; /*0x708efa*/
  }
  if ( v2[0x36] < 0x4010000 ) /*0x708f0a*/
  {
    v6 = *(int (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v2[0x87] + 4); /*0x708f19*/
    v10 = v2[0x87]; /*0x708f23*/
    v12 = 4; /*0x708f24*/
    result = v6(v10, &a2, 4, &v12, 1); /*0x708f2c*/
    for ( i = 0; i < (int)a2; ++i ) /*0x708f37*/
    {
      v11 = v2[0x87]; /*0x708f54*/
      v8 = *(int (__cdecl **)(unsigned int, _BYTE *, int, int *, int))(v11 + 4); /*0x708f55*/
      v12 = 4; /*0x708f58*/
      result = v8(v11, v13, 4, &v12, 1); /*0x708f60*/
    }
  }
  if ( v2[0x36] >= 0xA00010E ) /*0x708f78*/
    return sub_712AE0(v2); /*0x708f7c*/
  return result; /*0x708f81*/
}
