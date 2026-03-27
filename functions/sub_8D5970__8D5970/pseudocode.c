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

  if ( *(_DWORD *)(a4 + 0x88) )
  {
    LOWORD(v20) = a3;
    LOBYTE(v18) = 0x16;
    v19 = a2;
    sub_898820((int *)a4, (int)&v18);
  }
  else
  {
    v4 = *(float *)(a4 + 0x18);
    v5 = *(float *)(a4 + 0xC);
    v6 = (float *)(*(_DWORD *)(a4 + 0x74) + 0x10);
    *(_DWORD *)(a4 + 0x88) = 1;
    v18 = *v6;
    v19 = *((_DWORD *)v6 + 1);
    v7 = *((_DWORD *)v6 + 2);
    v8 = *((_DWORD *)v6 + 3);
    v22 = v5;
    v21 = v8;
    v23 = v4;
    v20 = v7;
    v24 = v4 - v5;
    if ( v24 == *(float *)&SrcStr )
      v25 = 0.0;
    else
      v25 = fConstant_1 / v24;
    *v6 = v22;
    v6[1] = v23;
    v6[2] = v24;
    v9 = 0;
    for ( v6[3] = v25; v9 < a3; ++v9 )
    {
      v10 = *(_DWORD *)(a2 + 4 * v9);
      sub_8DD530(*(float *)(a4 + 0xC), *(_DWORD *)(v10 + 0x50) + 0x10);
      (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(v10 + 0x50) + 0xC))(*(_DWORD *)(v10 + 0x50), &v22);
    }
    sub_8D4590(a2, a3, a4, 0);
    for ( i = 0; i < a3; ++i )
      sub_8E77C0(*(_DWORD *)(a2 + 4 * i), *(_DWORD **)(a4 + 0x74));
    sub_8D72F0((int)this, a3, a2, a3, *(_DWORD *)(a4 + 0x74), (void (__thiscall *)(int, _DWORD, int, char *))sub_8D44D0);
    v12 = *(_DWORD *)(a4 + 0x88) - 1;
    *(_DWORD *)(a4 + 0x88) = v12;
    if ( !v12 )
    {
      if ( *(_DWORD *)(a4 + 0x84) )
      {
        if ( !*(_BYTE *)(a4 + 0x90) )
          sub_899210(a4);
      }
    }
    v13 = v19;
    v14 = (float *)(*(_DWORD *)(a4 + 0x74) + 0x10);
    *v14 = v18;
    v15 = v20;
    *((_DWORD *)v14 + 1) = v13;
    v16 = v21;
    *((_DWORD *)v14 + 2) = v15;
    *((_DWORD *)v14 + 3) = v16;
  }
}
