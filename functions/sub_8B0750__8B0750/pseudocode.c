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

  v17 = this;
  v18 = a2;
  if ( a2 )
  {
    v2 = (__m128 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x70, 0x24);
    v2->m128_i16[2] = 0x70;
    v16 = v2;
    v20 = 0;
    sub_8F01A0(v2, a2 + 1);
    v2->m128_i32[0] = (__int32)&hkBSHeightFieldShape::`vftable';
    v2[6].m128_i32[0] = a2[3].m128_i32[0];
    v3 = dword_BA7D98;
    v4 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10);
    v20 = 0xFFFFFFFF;
    v5 = (__m128 *)v4(v3, 0x18, 0x24);
    v5->m128_i16[2] = 0x18;
    v16 = v5;
    *(float *)&v15 = flt_B2EFC4;
    v20 = 1;
    v6 = sub_8F0C10(v5, (int)v2, v15);
    v7 = dword_BA7D98;
    v8 = *(_DWORD *)dword_BA7D98;
    v15 = 0x24;
    v9 = (int)v6;
    v10 = (__m128 *)(*(int (__thiscall **)(int, int, int))(v8 + 0x10))(v7, 0x14, 0x24);
    v10->m128_i16[2] = 0x14;
    v16 = v10;
    v19 = &v15;
    v20 = 2;
    v11 = sub_8F0590(v10, v9, 1);
    v12 = v17;
    v13 = v11;
    *((_BYTE *)v11 + 0x10) = 0;
    v14 = *(void (__thiscall **)(void *, _WORD *))(*(_DWORD *)v12 + 0x4C);
    v20 = 0xFFFFFFFF;
    v14(v12, v13);
    if ( v13[2] )
    {
      if ( !--v13[3] )
        (**(void (__thiscall ***)(_WORD *, int))v13)(v13, 1);
    }
    if ( *(_WORD *)(v9 + 4) )
    {
      if ( !--*(_WORD *)(v9 + 6) )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    }
    if ( v2->m128_i16[2] )
    {
      if ( !--v2->m128_i16[3] )
        (*(void (__thiscall **)(__m128 *, int))v2->m128_i32[0])(v2, 1);
    }
    (*(void (__thiscall **)(void *, __m128 *))(*(_DWORD *)v17 + 0x7C))(v17, v18);
  }
}
