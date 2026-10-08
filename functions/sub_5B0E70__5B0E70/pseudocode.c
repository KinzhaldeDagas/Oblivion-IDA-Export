void __usercall sub_5B0E70(int a1@<ecx>, double st7_0@<st0>)
{
  InterfaceManager *Singleton; // ebp
  int v4; // edi
  double Float; // st7
  int v6; // edi
  double v7; // st7
  int v8; // ebp
  double v9; // st7
  int v10; // eax
  _DWORD *v11; // ecx
  int v12; // eax
  double v13; // st7
  int v14; // ebp
  double v15; // st6
  double v16; // st5
  int v17; // eax
  int v18; // ecx
  UInt32 *v19; // ecx
  int v20; // eax
  Tile **v21; // esi
  int v22; // edi
  float a2; // [esp+0h] [ebp-2Ch]
  bool v24; // [esp+17h] [ebp-15h]
  int v25; // [esp+18h] [ebp-14h]
  double VirtualScreenHeight; // [esp+1Ch] [ebp-10h]
  float v27; // [esp+1Ch] [ebp-10h]
  int v28; // [esp+1Ch] [ebp-10h]
  double v29; // [esp+24h] [ebp-8h]

  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5b0e89*/
  UI_GetVirtualScreenWidth(); /*0x5b0e8b*/
  v4 = Double_To_SInt32(st7_0 * dbl_A2FAA0 + *(float *)Singleton->unk020); /*0x5b0ea6*/
  Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x28), 0xFAD); /*0x5b0ea8*/
  v6 = v4 - Double_To_SInt32(Float); /*0x5b0eb2*/
  v25 = v6; /*0x5b0eb4*/
  VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x5b0ebd*/
  v7 = UI_GetVirtualScreenHeight(); /*0x5b0ec1*/
  v8 = Double_To_SInt32(VirtualScreenHeight - (v7 * dbl_A2FAA0 + *(float *)&Singleton->unk020[2])); /*0x5b0ee0*/
  v9 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x28), 0xFAC); /*0x5b0ee2*/
  v10 = Double_To_SInt32(v9); /*0x5b0ee7*/
  sub_583DF0((unsigned __int8)((v8 - v10 < 0x28A) - 1)); /*0x5b0f01*/
  v11 = *(_DWORD **)(a1 + 0x28); /*0x5b0f06*/
  *(_DWORD *)(a1 + 0x168) = 0xFFFFFFFF; /*0x5b0f11*/
  *(float *)&VirtualScreenHeight = Tile_GetFloat(v11, 0xFCB); /*0x5b0f20*/
  v12 = Double_To_SInt32(*(float *)&VirtualScreenHeight); /*0x5b0f2a*/
  v27 = *(float *)&VirtualScreenHeight / dbl_A3F3F0; /*0x5b0f41*/
  v24 = *(_BYTE *)(a1 + 0x94) != 0; /*0x5b0f47*/
  if ( *(_BYTE *)(a1 + 0xBC) ) /*0x5b0f4b*/
    v24 = 1; /*0x5b0f54*/
  if ( *(_BYTE *)(a1 + 0xE4) ) /*0x5b0f58*/
    v24 = 1; /*0x5b0f61*/
  if ( *(_BYTE *)(a1 + 0x10C) ) /*0x5b0f65*/
    v24 = 1; /*0x5b0f6e*/
  if ( *(_BYTE *)(a1 + 0x134) ) /*0x5b0f72*/
    v24 = 1; /*0x5b0f7b*/
  if ( (v6 <= 0 ? 0 : v6) >= v12 )
  {
    v6 = v12; /*0x5b0f9a*/
    v25 = v12; /*0x5b0f9c*/
  }
  else if ( v6 <= 0 ) /*0x5b0f90*/
  {
    v6 = 0; /*0x5b0f92*/
    v25 = 0; /*0x5b0f94*/
  }
  v13 = v27; /*0x5b0fa0*/
  v14 = 0; /*0x5b0fa4*/
  v29 = v27; /*0x5b0fa6*/
  v15 = 0.0; /*0x5b0faa*/
  do /*0x5b1154*/
  {
    v28 = v14 + 1; /*0x5b0faf*/
    v16 = (double)(v14 + 1) * v13; /*0x5b0fb7*/
    if ( v6 >= Double_To_SInt32(v13) && v6 < Double_To_SInt32(v13) ) /*0x5b0fcd*/
      goto LABEL_21; /*0x5b0fcd*/
    if ( !v14 ) /*0x5b0fd5*/
    {
      if ( v6 > 0 ) /*0x5b0fd9*/
        goto LABEL_34; /*0x5b0fd9*/
LABEL_21:
      if ( !v24 ) /*0x5b1007*/
        *(_DWORD *)(a1 + 0x168) = v14; /*0x5b1009*/
      if ( v15 < *(float *)(a1 + 0x14C) ) /*0x5b101a*/
      {
        v17 = *(_DWORD *)(a1 + 0x160); /*0x5b1020*/
        if ( v17 >= 0 ) /*0x5b1028*/
        {
          v18 = a1 + 0x28 * v17; /*0x5b1038*/
          if ( v15 == *(float *)(v18 + 0x90) && !*(_BYTE *)(v18 + 0x94) && !*(_BYTE *)(v18 + 0x95) ) /*0x5b1053*/
          {
            sub_5AFD50("UILockTumblerNudge"); /*0x5b106b*/
            sub_5AFDA0((int *)a1, *(_DWORD *)(a1 + 0x160)); /*0x5b1079*/
            v19 = *(UInt32 **)(a1 + 0x28 * (*(_DWORD *)(a1 + 0x160) + 4)); /*0x5b108a*/
            if ( v19 ) /*0x5b108f*/
            {
              if ( !SoundHandle::IsPlaying(v19) ) /*0x5b1091*/
                sub_6B7190(*(int **)(a1 + 0x28 * (*(_DWORD *)(a1 + 0x160) + 4)), 1); /*0x5b10aa*/
            }
            *(float *)(a1 + 0x28 * *(_DWORD *)(a1 + 0x160) + 0x90) = *(float *)(a1 /*0x5b10c2*/
                                                                              + 0x28 * *(_DWORD *)(a1 + 0x160)
                                                                              + 0x88);
            *(_BYTE *)(a1 + 0x28 * *(_DWORD *)(a1 + 0x160) + 0x96) = 1; /*0x5b10d3*/
            *(float *)(a1 + 0x28 * *(_DWORD *)(a1 + 0x160) + 0x7C) = 0.0; /*0x5b10e3*/
            *(_BYTE *)(a1 + 0x28 * *(_DWORD *)(a1 + 0x160) + 0x94) = 1; /*0x5b10f2*/
            Tile_SetFloat(*(Tile **)(a1 + 0x28 * *(_DWORD *)(a1 + 0x160) + 0x9C), 0xFAEu, 1.0); /*0x5b1112*/
            sub_58FBA0(*(_DWORD *)(a1 + 0x28 * *(_DWORD *)(a1 + 0x160) + 0x9C), v16, v15, 1.0, 0); /*0x5b1129*/
            v13 = v29; /*0x5b112e*/
            v15 = 0.0; /*0x5b1132*/
          }
        }
      }
      v20 = *(_DWORD *)(a1 + 0x28 * v14 + 0x9C); /*0x5b1138*/
      if ( *(_DWORD *)(a1 + 0x174) != v20 ) /*0x5b1145*/
        *(_DWORD *)(a1 + 0x174) = v20; /*0x5b1147*/
      goto LABEL_34; /*0x5b1147*/
    }
    if ( v14 == 4 ) /*0x5b0fe3*/
    {
      v16 = (double)v25; /*0x5b0fe9*/
      if ( v13 * dbl_A3F3F0 <= v16 ) /*0x5b0ffc*/
        goto LABEL_21; /*0x5b0ffc*/
    }
LABEL_34:
    ++v14; /*0x5b114d*/
  }
  while ( v28 < 5 ); /*0x5b1154*/
  sub_5B0830((float *)a1); /*0x5b1160*/
  v21 = (Tile **)(a1 + 0x9C); /*0x5b1165*/
  v22 = 5; /*0x5b116b*/
  do /*0x5b1195*/
  {
    a2 = (float)Double_To_SInt32(*((float *)v21 + 0xFFFFFFF8)); /*0x5b1183*/
    Tile_SetFloat(*v21, 0xFB1u, a2); /*0x5b118b*/
    v21 += 0xA; /*0x5b1190*/
    --v22; /*0x5b1193*/
  }
  while ( v22 ); /*0x5b1195*/
}
