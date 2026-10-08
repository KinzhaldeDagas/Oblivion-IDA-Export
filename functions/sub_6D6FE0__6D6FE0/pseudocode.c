int __thiscall sub_6D6FE0(int *this, unsigned int *a2)
{
  unsigned int *v2; // esi
  void (__cdecl *v4)(unsigned int, unsigned int **, int, int *, int); // eax
  void (__cdecl *v5)(unsigned int, int *, int, int *, int); // edx
  int (__cdecl *v6)(unsigned int, int *, int, int *, int); // eax
  int result; // eax
  unsigned int v8; // [esp-3Ch] [ebp-4Ch]
  unsigned int v9; // [esp-28h] [ebp-38h]
  unsigned int v10; // [esp-14h] [ebp-24h]
  int v11; // [esp+8h] [ebp-8h] BYREF
  int v12; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x6d6fe4*/
  j_NiSingleInterpController_LoadBinary(this, a2); /*0x6d6fec*/
  v10 = v2[0x87]; /*0x6d7005*/
  v4 = *(void (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v10 + 4); /*0x6d7006*/
  v11 = 1; /*0x6d7009*/
  v4(v10, &a2, 1, &v11, 1); /*0x6d7011*/
  *((_BYTE *)this + 0x48) = (_BYTE)a2 != 0; /*0x6d7022*/
  v5 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v2[0x87] + 4); /*0x6d702b*/
  v9 = v2[0x87]; /*0x6d7034*/
  v11 = 4; /*0x6d7035*/
  v5(v9, this + 0x13, 4, &v11, 1); /*0x6d703d*/
  v8 = v2[0x87]; /*0x6d7053*/
  v6 = *(int (__cdecl **)(unsigned int, int *, int, int *, int))(v8 + 4); /*0x6d7054*/
  v11 = 4; /*0x6d7057*/
  result = v6(v8, &v12, 4, &v11, 1); /*0x6d705f*/
  *(this + 0x14) = v12; /*0x6d7068*/
  if ( v2[0x36] < 0xA010068 ) /*0x6d7075*/
    return sub_712A20(v2); /*0x6d7079*/
  return result; /*0x6d707e*/
}
