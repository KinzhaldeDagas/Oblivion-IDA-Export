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
  int v14; // eax
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

  v2 = (unsigned int *)a2;
  sub_7008A0(this, a2);
  v23 = v2[0x87];
  v4 = *(void (__cdecl **)(unsigned int, unsigned int *, int, signed int *, int))(v23 + 4);
  a2 = 4;
  v4(v23, &v24, 4, &a2, 1);
  a2 = 0;
  if ( v24 )
  {
    p_accumulator = (unsigned int *)&this->members.accumulator;
    do
    {
      v6 = v2[0x87];
      v26[3] = 0.0;
      v26[4] = 0.0;
      v26[5] = 0.0;
      v26[6] = 0.0;
      v21 = v6;
      v7 = *(void (__cdecl **)(unsigned int, float *, int, int *, int))(v6 + 4);
      v25 = 2;
      v7(v21, v26, 2, &v25, 1);
      v19 = v2[0x87];
      v8 = *(void (__cdecl **)(unsigned int, char *, int, int *, int))(v19 + 4);
      v25 = 2;
      v8(v19, (char *)v26 + 2, 2, &v25, 1);
      v18 = v2[0x87];
      v9 = *(void (__cdecl **)(unsigned int, float *, int, int *, int))(v18 + 4);
      v25 = 2;
      v9(v18, &v26[1], 2, &v25, 1);
      v17 = v2[0x87];
      v10 = *(void (__cdecl **)(unsigned int, char *, int, int *, int))(v17 + 4);
      v25 = 2;
      v10(v17, (char *)&v26[1] + 2, 2, &v25, 1);
      v22 = v2[0x87];
      v11 = *(void (__cdecl **)(unsigned int, float *, int, int *, int))(v22 + 4);
      v25 = 2;
      v11(v22, &v26[2], 2, &v25, 1);
      v20 = v2[0x87];
      v12 = *(void (__cdecl **)(unsigned int, char *, int, int *, int))(v20 + 4);
      v25 = 2;
      v12(v20, (char *)&v26[2] + 2, 2, &v25, 1);
      sub_715420((char *)&v26[3], (signed int)v2);
      v13 = p_accumulator[1];
      if ( p_accumulator[2] == v13 )
      {
        if ( v13 )
          v14 = 2 * v13;
        else
          v14 = 1;
        sub_73DD70(p_accumulator, v14);
      }
      v15 = a2;
      qmemcpy((void *)(*p_accumulator + 0x1C * p_accumulator[2]++), v26, 0x1Cu);
      a2 = v15 + 1;
    }
    while ( v15 + 1 < v24 );
  }
  return sub_712A20(v2);
}
