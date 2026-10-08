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

  if ( *(_DWORD *)(a4 + 0x88) ) /*0x8d7d58*/
  {
    v14 = a3; /*0x8d7d73*/
    v12[0] = 0x16; /*0x8d7d7b*/
    v13 = a2; /*0x8d7d80*/
    sub_898820((int *)a4, (int)v12); /*0x8d7d84*/
  }
  else
  {
    v4 = *(float *)(a4 + 0x18); /*0x8d7d90*/
    *(_DWORD *)(a4 + 0x88) = 1; /*0x8d7d93*/
    v5 = *(float *)(a4 + 0xC); /*0x8d7d9d*/
    v15 = *(float *)(a4 + 0xC); /*0x8d7da0*/
    v16 = v4; /*0x8d7da6*/
    v17 = v4 - v5; /*0x8d7dae*/
    if ( v17 == *(float *)&SrcStr ) /*0x8d7dc5*/
      v18 = 0.0; /*0x8d7dc7*/
    else
      v18 = fConstant_1 / v17; /*0x8d7ddb*/
    v6 = (float *)(*(_DWORD *)(a4 + 0x74) + 0x10); /*0x8d7de6*/
    *v6 = v15; /*0x8d7de9*/
    v6[1] = v16; /*0x8d7def*/
    v6[2] = v17; /*0x8d7dfc*/
    v7 = 0; /*0x8d7e04*/
    for ( v6[3] = v18; v7 < a3; ++v7 ) /*0x8d7e0b*/
    {
      v8 = a2[v7]; /*0x8d7e14*/
      sub_8DD530(*(float *)(a4 + 0xC), (__m128 *)(*(_DWORD *)(v8 + 0x50) + 0x10)); /*0x8d7e22*/
      (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(v8 + 0x50) + 0xC))(*(_DWORD *)(v8 + 0x50), &v15); /*0x8d7e36*/
    }
    sub_8D7400(a2, a3, a4); /*0x8d7e45*/
    for ( i = 0; i < a3; ++i ) /*0x8d7e51*/
      sub_8E77C0(a2[i], *(_DWORD **)(a4 + 0x74)); /*0x8d7e5b*/
    sub_8D72F0( /*0x8d7e77*/
      (int)this,
      (int)a2,
      (int)a2,
      a3,
      *(_DWORD *)(a4 + 0x74),
      (void (__thiscall *)(int, _DWORD, int, char *))sub_8D6D80);
    v10 = *(_DWORD *)(a4 + 0x88) - 1; /*0x8d7e83*/
    *(_DWORD *)(a4 + 0x88) = v10; /*0x8d7e85*/
    if ( !v10 ) /*0x8d7e8c*/
    {
      if ( *(_DWORD *)(a4 + 0x84) ) /*0x8d7e8e*/
      {
        if ( !*(_BYTE *)(a4 + 0x90) ) /*0x8d7e98*/
          sub_899210(a4); /*0x8d7ea4*/
      }
    }
  }
}
