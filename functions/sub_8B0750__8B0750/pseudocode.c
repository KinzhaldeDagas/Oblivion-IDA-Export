void __thiscall sub_8B0750(void *this, __m128 *a2)
{
  __m128 *v2; // esi
  int v3; // ecx
  int (__thiscall *v4)(int, int, int); // eax
  __m128 *v5; // eax
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // ebx
  __m128 *v10; // eax
  _WORD *v11; // eax
  void *v12; // ecx
  _WORD *v13; // edi
  void (__thiscall *v14)(void *, _WORD *); // eax
  int v15; // [esp+10h] [ebp-38h] BYREF
  __m128 *v16; // [esp+28h] [ebp-20h]
  void *v17; // [esp+2Ch] [ebp-1Ch]
  __m128 *v18; // [esp+30h] [ebp-18h]
  int *v19; // [esp+34h] [ebp-14h]
  int v20; // [esp+44h] [ebp-4h]

  v17 = this; /*0x8b0781*/
  v18 = a2; /*0x8b0785*/
  if ( a2 ) /*0x8b0789*/
  {
    v2 = (__m128 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x70, 0x24); /*0x8b07a0*/
    v2->m128_i16[2] = 0x70; /*0x8b07a2*/
    v16 = v2; /*0x8b07a8*/
    v20 = 0; /*0x8b07b2*/
    sub_8F01A0(v2, a2 + 1); /*0x8b07ba*/
    v2->m128_i32[0] = (__int32)&hkBSHeightFieldShape::`vftable'; /*0x8b07bf*/
    v2[6].m128_i32[0] = a2[3].m128_i32[0]; /*0x8b07c8*/
    v3 = unk_BA7D98; /*0x8b07cb*/
    v4 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10); /*0x8b07d3*/
    v20 = 0xFFFFFFFF; /*0x8b07dd*/
    v5 = (__m128 *)v4(v3, 0x18, 0x24); /*0x8b07e1*/
    v5->m128_i16[2] = 0x18; /*0x8b07e3*/
    v16 = v5; /*0x8b07e9*/
    *(float *)&v15 = flt_B2EFC4; /*0x8b07f4*/
    v20 = 1; /*0x8b07fa*/
    v6 = sub_8F0C10(v5, (int)v2, v15); /*0x8b0802*/
    v7 = unk_BA7D98; /*0x8b0807*/
    v8 = *(_DWORD *)unk_BA7D98; /*0x8b080d*/
    v15 = 0x24; /*0x8b080f*/
    v9 = (int)v6; /*0x8b0811*/
    v10 = (__m128 *)(*(int (__thiscall **)(int, int, int))(v8 + 0x10))(v7, 0x14, 0x24); /*0x8b081c*/
    v10->m128_i16[2] = 0x14; /*0x8b081e*/
    v16 = v10; /*0x8b0824*/
    v19 = &v15; /*0x8b082b*/
    v20 = 2; /*0x8b0835*/
    v11 = sub_8F0590(v10, v9, 1); /*0x8b083d*/
    v12 = v17; /*0x8b0842*/
    v13 = v11; /*0x8b0846*/
    *((_BYTE *)v11 + 0x10) = 0; /*0x8b0848*/
    v14 = *(void (__thiscall **)(void *, _WORD *))(*(_DWORD *)v12 + 0x4C); /*0x8b084e*/
    v20 = 0xFFFFFFFF; /*0x8b0852*/
    v14(v12, v13); /*0x8b085a*/
    if ( v13[2] ) /*0x8b085c*/
    {
      if ( !--v13[3] ) /*0x8b0868*/
        (**(void (__thiscall ***)(_WORD *, int))v13)(v13, 1); /*0x8b0879*/
    }
    if ( *(_WORD *)(v9 + 4) ) /*0x8b087b*/
    {
      if ( !--*(_WORD *)(v9 + 6) ) /*0x8b0887*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x8b0898*/
    }
    if ( v2->m128_i16[2] ) /*0x8b089a*/
    {
      if ( !--v2->m128_i16[3] ) /*0x8b08a6*/
        (*(void (__thiscall **)(__m128 *, int))v2->m128_i32[0])(v2, 1); /*0x8b08b7*/
    }
    (*(void (__thiscall **)(void *, __m128 *))(*(_DWORD *)v17 + 0x7C))(v17, v18); /*0x8b08c7*/
  }
}
