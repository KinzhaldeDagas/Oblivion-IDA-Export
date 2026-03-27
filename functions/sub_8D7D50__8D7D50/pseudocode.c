void __thiscall sub_8D7D50(void *this, _DWORD *a2, int a3, int a4)
{
  double v4; // st7
  double v5; // st6
  float *v6; // eax
  int v7; // edi
  int v8; // ebx
  int i; // edi
  int v10; // eax
  char v12[4]; // [esp+8h] [ebp-1Ch] BYREF
  _DWORD *v13; // [esp+Ch] [ebp-18h]
  __int16 v14; // [esp+10h] [ebp-14h]
  float v15; // [esp+14h] [ebp-10h] BYREF
  float v16; // [esp+18h] [ebp-Ch]
  float v17; // [esp+1Ch] [ebp-8h]
  float v18; // [esp+20h] [ebp-4h]

  if ( *(_DWORD *)(a4 + 0x88) )
  {
    v14 = a3;
    v12[0] = 0x16;
    v13 = a2;
    sub_898820((int *)a4, (int)v12);
  }
  else
  {
    v4 = *(float *)(a4 + 0x18);
    *(_DWORD *)(a4 + 0x88) = 1;
    v5 = *(float *)(a4 + 0xC);
    v15 = *(float *)(a4 + 0xC);
    v16 = v4;
    v17 = v4 - v5;
    if ( v17 == *(float *)&SrcStr )
      v18 = 0.0;
    else
      v18 = fConstant_1 / v17;
    v6 = (float *)(*(_DWORD *)(a4 + 0x74) + 0x10);
    *v6 = v15;
    v6[1] = v16;
    v6[2] = v17;
    v7 = 0;
    for ( v6[3] = v18; v7 < a3; ++v7 )
    {
      v8 = a2[v7];
      sub_8DD530(*(float *)(a4 + 0xC), *(_DWORD *)(v8 + 0x50) + 0x10);
      (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(v8 + 0x50) + 0xC))(*(_DWORD *)(v8 + 0x50), &v15);
    }
    sub_8D7400(a2, a3, a4);
    for ( i = 0; i < a3; ++i )
      sub_8E77C0(a2[i], *(_DWORD **)(a4 + 0x74));
    sub_8D72F0(
      (int)this,
      (int)a2,
      (int)a2,
      a3,
      *(_DWORD *)(a4 + 0x74),
      (void (__thiscall *)(int, _DWORD, int, char *))sub_8D6D80);
    v10 = *(_DWORD *)(a4 + 0x88) - 1;
    *(_DWORD *)(a4 + 0x88) = v10;
    if ( !v10 )
    {
      if ( *(_DWORD *)(a4 + 0x84) )
      {
        if ( !*(_BYTE *)(a4 + 0x90) )
          sub_899210(a4);
      }
    }
  }
}
