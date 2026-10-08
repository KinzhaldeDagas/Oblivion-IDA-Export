// Pass225/226: NiScreenTexture stream load; loads 0x1C-byte records and queues one object reference for +0x14 texturing property. Does not set +0x18 dirty mask.
int __thiscall sub_73E2B0(NiRenderer *this, signed int a2)
{
  unsigned int *v2; // ebx
  void (__cdecl *v4)(unsigned int, unsigned int *, int, signed int *, int); // eax
  unsigned int *p_accumulator; // ebp
  unsigned int v6; // eax
  void (__cdecl *v7)(unsigned int, float *, int, int *, int); // eax
  void (__cdecl *v8)(unsigned int, char *, int, int *, int); // eax
  void (__cdecl *v9)(unsigned int, float *, int, int *, int); // eax
  void (__cdecl *v10)(unsigned int, char *, int, int *, int); // eax
  void (__cdecl *v11)(unsigned int, float *, int, int *, int); // eax
  void (__cdecl *v12)(unsigned int, char *, int, int *, int); // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  signed int v15; // eax
  unsigned int v17; // [esp-58h] [ebp-84h]
  unsigned int v18; // [esp-44h] [ebp-70h]
  unsigned int v19; // [esp-30h] [ebp-5Ch]
  unsigned int v20; // [esp-30h] [ebp-5Ch]
  unsigned int v21; // [esp-1Ch] [ebp-48h]
  unsigned int v22; // [esp-1Ch] [ebp-48h]
  unsigned int v23; // [esp-14h] [ebp-40h]
  unsigned int v24; // [esp+8h] [ebp-24h] BYREF
  int v25; // [esp+Ch] [ebp-20h] BYREF
  float v26[7]; // [esp+10h] [ebp-1Ch] BYREF

  v2 = (unsigned int *)a2; /*0x73e2b4*/
  sub_7008A0(this, a2); /*0x73e2bc*/
  v23 = v2[0x87]; /*0x73e2d5*/
  v4 = *(void (__cdecl **)(unsigned int, unsigned int *, int, signed int *, int))(v23 + 4); /*0x73e2d6*/
  a2 = 4; /*0x73e2d9*/
  v4(v23, &v24, 4, &a2, 1); /*0x73e2e1*/
  a2 = 0; /*0x73e2eb*/
  if ( v24 ) /*0x73e2f3*/
  {
    p_accumulator = (unsigned int *)&this->members.accumulator; /*0x73e2fb*/
    do /*0x73e422*/
    {
      v6 = v2[0x87]; /*0x73e302*/
      v26[3] = 0.0; /*0x73e30a*/
      v26[4] = 0.0; /*0x73e312*/
      v26[5] = 0.0; /*0x73e317*/
      v26[6] = 0.0; /*0x73e320*/
      v21 = v6; /*0x73e32a*/
      v7 = *(void (__cdecl **)(unsigned int, float *, int, int *, int))(v6 + 4); /*0x73e32b*/
      v25 = 2; /*0x73e32e*/
      v7(v21, v26, 2, &v25, 1); /*0x73e332*/
      v19 = v2[0x87]; /*0x73e347*/
      v8 = *(void (__cdecl **)(unsigned int, char *, int, int *, int))(v19 + 4); /*0x73e348*/
      v25 = 2; /*0x73e34b*/
      v8(v19, (char *)v26 + 2, 2, &v25, 1); /*0x73e34f*/
      v18 = v2[0x87]; /*0x73e364*/
      v9 = *(void (__cdecl **)(unsigned int, float *, int, int *, int))(v18 + 4); /*0x73e365*/
      v25 = 2; /*0x73e368*/
      v9(v18, &v26[1], 2, &v25, 1); /*0x73e36c*/
      v17 = v2[0x87]; /*0x73e381*/
      v10 = *(void (__cdecl **)(unsigned int, char *, int, int *, int))(v17 + 4); /*0x73e382*/
      v25 = 2; /*0x73e385*/
      v10(v17, (char *)&v26[1] + 2, 2, &v25, 1); /*0x73e389*/
      v22 = v2[0x87]; /*0x73e3a1*/
      v11 = *(void (__cdecl **)(unsigned int, float *, int, int *, int))(v22 + 4); /*0x73e3a2*/
      v25 = 2; /*0x73e3a5*/
      v11(v22, &v26[2], 2, &v25, 1); /*0x73e3a9*/
      v20 = v2[0x87]; /*0x73e3be*/
      v12 = *(void (__cdecl **)(unsigned int, char *, int, int *, int))(v20 + 4); /*0x73e3bf*/
      v25 = 2; /*0x73e3c2*/
      v12(v20, (char *)&v26[2] + 2, 2, &v25, 1); /*0x73e3c6*/
      sub_715420((char *)&v26[3], (signed int)v2); /*0x73e3d0*/
      v13 = p_accumulator[1]; /*0x73e3d5*/
      if ( p_accumulator[2] == v13 ) /*0x73e3db*/
      {
        if ( v13 ) /*0x73e3df*/
          v14 = 2 * v13; /*0x73e3e1*/
        else
          v14 = 1; /*0x73e3e5*/
        sub_73DD70(p_accumulator, v14); /*0x73e3ed*/
      }
      v15 = a2; /*0x73e401*/
      qmemcpy((void *)(*p_accumulator + 0x1C * p_accumulator[2]++), v26, 0x1Cu); /*0x73e411*/
      a2 = v15 + 1; /*0x73e41e*/
    }
    while ( v15 + 1 < v24 ); /*0x73e422*/
  }
  return sub_712A20(v2); /*0x73e431*/
}
