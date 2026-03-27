void __usercall sub_5B0E70(int a1@<ecx>, double st7_0@<st0>)
{
  InterfaceManager *Singleton; // ebp
  int v7; // edi
  double Float; // st7
  int v9; // edi
  double v10; // st7
  int v11; // ebp
  double v12; // st7
  int v13; // eax
  _DWORD *v14; // ecx
  int v15; // eax
  double v16; // st7
  int v17; // ebp
  double v18; // st6
  double v19; // st5
  int v20; // eax
  int v21; // ecx
  int *v22; // ecx
  int v23; // eax
  Tile **v24; // esi
  int v25; // edi
  float a2; // [esp+0h] [ebp-2Ch]
  bool v27; // [esp+17h] [ebp-15h]
  int v28; // [esp+18h] [ebp-14h]
  double v29; // [esp+1Ch] [ebp-10h]
  float v30; // [esp+1Ch] [ebp-10h]
  int v31; // [esp+1Ch] [ebp-10h]
  double v32; // [esp+24h] [ebp-8h]

  Singleton = InterfaceManager_GetSingleton(0, 1);
  sub_57D7A0();
  v7 = Double_To_SInt32(st7_0 * dbl_A2FAA0 + *(float *)Singleton->unk020);
  Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x28), 0xFAD);
  v9 = v7 - Double_To_SInt32(Float);
  v28 = v9;
  v29 = sub_57D7F0();
  v10 = sub_57D7F0();
  v11 = Double_To_SInt32(v29 - (v10 * dbl_A2FAA0 + *(float *)&Singleton->unk020[2]));
  v12 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x28), 0xFAC);
  v13 = Double_To_SInt32(v12);
  sub_583DF0((unsigned __int8)((v11 - v13 < 0x28A) - 1));
  v14 = *(_DWORD **)(a1 + 0x28);
  *(_DWORD *)(a1 + 0x168) = 0xFFFFFFFF;
  *(float *)&v29 = Tile_GetFloat(v14, 0xFCB);
  v15 = Double_To_SInt32(*(float *)&v29);
  v30 = *(float *)&v29 / dbl_A3F3F0;
  v27 = *(_BYTE *)(a1 + 0x94) != 0;
  if ( *(_BYTE *)(a1 + 0xBC) )
    v27 = 1;
  if ( *(_BYTE *)(a1 + 0xE4) )
    v27 = 1;
  if ( *(_BYTE *)(a1 + 0x10C) )
    v27 = 1;
  if ( *(_BYTE *)(a1 + 0x134) )
    v27 = 1;
  if ( (v9 <= 0 ? 0 : v9) >= v15 )
  {
    v9 = v15;
    v28 = v15;
  }
  else if ( v9 <= 0 )
  {
    v9 = 0;
    v28 = 0;
  }
  v16 = v30;
  v17 = 0;
  v32 = v30;
  v18 = 0.0;
  do
  {
    v31 = v17 + 1;
    v19 = (double)(v17 + 1) * v16;
    if ( v9 >= Double_To_SInt32(v16) && v9 < Double_To_SInt32(v16) )
      goto LABEL_21;
    if ( !v17 )
    {
      if ( v9 > 0 )
        goto LABEL_34;
LABEL_21:
      if ( !v27 )
        *(_DWORD *)(a1 + 0x168) = v17;
      if ( v18 < *(float *)(a1 + 0x14C) )
      {
        v20 = *(_DWORD *)(a1 + 0x160);
        if ( v20 >= 0 )
        {
          v21 = a1 + 0x28 * v20;
          if ( v18 == *(float *)(v21 + 0x90) && !*(_BYTE *)(v21 + 0x94) && !*(_BYTE *)(v21 + 0x95) )
          {
            sub_5AFD50("UILockTumblerNudge");
            sub_5AFDA0((int *)a1, *(_DWORD *)(a1 + 0x160));
            v22 = *(int **)(a1 + 0x28 * (*(_DWORD *)(a1 + 0x160) + 4));
            if ( v22 )
            {
              if ( !sub_6B7260(v22) )
                sub_6B7190(*(int **)(a1 + 0x28 * (*(_DWORD *)(a1 + 0x160) + 4)), 1);
            }
            *(float *)(a1 + 0x28 * *(_DWORD *)(a1 + 0x160) + 0x90) = *(float *)(a1
                                                                              + 0x28 * *(_DWORD *)(a1 + 0x160)
                                                                              + 0x88);
            *(_BYTE *)(a1 + 0x28 * *(_DWORD *)(a1 + 0x160) + 0x96) = 1;
            *(float *)(a1 + 0x28 * *(_DWORD *)(a1 + 0x160) + 0x7C) = 0.0;
            *(_BYTE *)(a1 + 0x28 * *(_DWORD *)(a1 + 0x160) + 0x94) = 1;
            Tile_SetFloat(*(Tile **)(a1 + 0x28 * *(_DWORD *)(a1 + 0x160) + 0x9C), (_DWORD *)0xFAE, 1.0);
            sub_58FBA0(*(_DWORD *)(a1 + 0x28 * *(_DWORD *)(a1 + 0x160) + 0x9C), v19, v18, 1.0, 0);
            v16 = v32;
            v18 = 0.0;
          }
        }
      }
      v23 = *(_DWORD *)(a1 + 0x28 * v17 + 0x9C);
      if ( *(_DWORD *)(a1 + 0x174) != v23 )
        *(_DWORD *)(a1 + 0x174) = v23;
      goto LABEL_34;
    }
    if ( v17 == 4 )
    {
      v19 = (double)v28;
      if ( v16 * dbl_A3F3F0 <= v19 )
        goto LABEL_21;
    }
LABEL_34:
    ++v17;
  }
  while ( v31 < 5 );
  sub_5B0830((float *)a1);
  v24 = (Tile **)(a1 + 0x9C);
  v25 = 5;
  do
  {
    a2 = (float)Double_To_SInt32(*((float *)v24 + 0xFFFFFFF8));
    Tile_SetFloat(*v24, (_DWORD *)0xFB1, a2);
    v24 += 0xA;
    --v25;
  }
  while ( v25 );
}
