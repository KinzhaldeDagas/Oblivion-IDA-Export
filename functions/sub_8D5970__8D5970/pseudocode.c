void __thiscall sub_8D5970(void *this, int a2, int a3, int a4)
{
  double v4; // st7
  double v5; // st6
  float *v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // edi
  int v10; // ebp
  int i; // edi
  int v12; // eax
  int v13; // eax
  float *v14; // ecx
  int v15; // edx
  int v16; // eax
  float v18; // [esp+8h] [ebp-20h] BYREF
  int v19; // [esp+Ch] [ebp-1Ch]
  int v20; // [esp+10h] [ebp-18h]
  int v21; // [esp+14h] [ebp-14h]
  float v22; // [esp+18h] [ebp-10h] BYREF
  float v23; // [esp+1Ch] [ebp-Ch]
  float v24; // [esp+20h] [ebp-8h]
  float v25; // [esp+24h] [ebp-4h]

  if ( *(_DWORD *)(a4 + 0x88) ) /*0x8d5978*/
  {
    LOWORD(v20) = a3; /*0x8d5993*/
    LOBYTE(v18) = 0x16; /*0x8d599b*/
    v19 = a2; /*0x8d59a0*/
    sub_898820((int *)a4, (int)&v18); /*0x8d59a4*/
  }
  else
  {
    v4 = *(float *)(a4 + 0x18); /*0x8d59b3*/
    v5 = *(float *)(a4 + 0xC); /*0x8d59b6*/
    v6 = (float *)(*(_DWORD *)(a4 + 0x74) + 0x10); /*0x8d59b9*/
    *(_DWORD *)(a4 + 0x88) = 1; /*0x8d59bc*/
    v18 = *v6; /*0x8d59ca*/
    v19 = *((_DWORD *)v6 + 1); /*0x8d59d1*/
    v7 = *((_DWORD *)v6 + 2); /*0x8d59d5*/
    v8 = *((_DWORD *)v6 + 3); /*0x8d59d8*/
    v22 = v5; /*0x8d59db*/
    v21 = v8; /*0x8d59e1*/
    v23 = v4; /*0x8d59e5*/
    v20 = v7; /*0x8d59e9*/
    v24 = v4 - v5; /*0x8d59f1*/
    if ( v24 == *(float *)&SrcStr ) /*0x8d5a08*/
      v25 = 0.0; /*0x8d5a0a*/
    else
      v25 = fConstant_1 / v24; /*0x8d5a1e*/
    *v6 = v22; /*0x8d5a26*/
    v6[1] = v23; /*0x8d5a31*/
    v6[2] = v24; /*0x8d5a39*/
    v9 = 0; /*0x8d5a41*/
    for ( v6[3] = v25; v9 < a3; ++v9 ) /*0x8d5a48*/
    {
      v10 = *(_DWORD *)(a2 + 4 * v9); /*0x8d5a54*/
      sub_8DD530(*(float *)(a4 + 0xC), (__m128 *)(*(_DWORD *)(v10 + 0x50) + 0x10)); /*0x8d5a62*/
      (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(v10 + 0x50) + 0xC))(*(_DWORD *)(v10 + 0x50), &v22); /*0x8d5a74*/
    }
    sub_8D4590(a2, a3, a4, 0); /*0x8d5a89*/
    for ( i = 0; i < a3; ++i ) /*0x8d5a92*/
      sub_8E77C0(*(_DWORD *)(a2 + 4 * i), *(_DWORD **)(a4 + 0x74)); /*0x8d5a9d*/
    sub_8D72F0((int)this, a3, a2, a3, *(_DWORD *)(a4 + 0x74), (void (__thiscall *)(int, _DWORD, int, char *))sub_8D44D0); /*0x8d5ab9*/
    v12 = *(_DWORD *)(a4 + 0x88) - 1; /*0x8d5ac5*/
    *(_DWORD *)(a4 + 0x88) = v12; /*0x8d5ac7*/
    if ( !v12 ) /*0x8d5ace*/
    {
      if ( *(_DWORD *)(a4 + 0x84) ) /*0x8d5ad0*/
      {
        if ( !*(_BYTE *)(a4 + 0x90) ) /*0x8d5ada*/
          sub_899210(a4); /*0x8d5ae6*/
      }
    }
    v13 = v19; /*0x8d5af2*/
    v14 = (float *)(*(_DWORD *)(a4 + 0x74) + 0x10); /*0x8d5af6*/
    *v14 = v18; /*0x8d5af9*/
    v15 = v20; /*0x8d5afb*/
    *((_DWORD *)v14 + 1) = v13; /*0x8d5aff*/
    v16 = v21; /*0x8d5b02*/
    *((_DWORD *)v14 + 2) = v15; /*0x8d5b06*/
    *((_DWORD *)v14 + 3) = v16; /*0x8d5b09*/
  }
}
