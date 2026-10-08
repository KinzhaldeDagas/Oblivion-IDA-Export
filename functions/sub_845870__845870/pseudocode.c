void __thiscall sub_845870(void *this, int a2, int a3, int a4, _DWORD *a5)
{
  int v5; // ebx
  int v6; // ebp
  int v7; // eax
  int v8; // esi
  int v9; // ebp
  int v10; // esi
  int v11; // ecx
  float *v12; // ebp
  double v13; // st6
  unsigned int v14; // eax
  double v15; // st5
  int v16; // [esp+18h] [ebp-D8h]
  int v17; // [esp+18h] [ebp-D8h]
  float v18; // [esp+20h] [ebp-D0h]
  float v19; // [esp+28h] [ebp-C8h]
  int v20; // [esp+34h] [ebp-BCh]
  int v21; // [esp+40h] [ebp-B0h]
  int v22; // [esp+50h] [ebp-A0h]
  int v23; // [esp+64h] [ebp-8Ch]
  float v24[13]; // [esp+70h] [ebp-80h] BYREF
  float v25[16]; // [esp+A4h] [ebp-4Ch] BYREF

  v5 = unk_B45BCC; /*0x8458ac*/
  (*(void (__thiscall **)(void *, int, _DWORD, _DWORD))(*(_DWORD *)this + 0xBC))(this, a2, 0, 0); /*0x8458c3*/
  v6 = **(_DWORD **)(v5 + 0x24); /*0x8458d1*/
  v7 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0); /*0x8458db*/
  v8 = *(_DWORD *)(v6 + 4); /*0x8458dd*/
  v16 = v7; /*0x8458e2*/
  if ( v8 != v7 ) /*0x8458e6*/
  {
    if ( v8 ) /*0x8458ea*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x8458f0*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x845906*/
      v7 = v16; /*0x845908*/
    }
    *(_DWORD *)(v6 + 4) = v7; /*0x84590e*/
    if ( v7 ) /*0x845911*/
      InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x845917*/
  }
  sub_848FA0((_DWORD **)v6, (int)a5); /*0x845928*/
  v9 = *(_DWORD *)(*(_DWORD *)(v5 + 0x24) + 4); /*0x845930*/
  v10 = *(_DWORD *)(v9 + 4); /*0x845938*/
  v11 = unk_B43128; /*0x84593d*/
  v17 = unk_B43128; /*0x84593f*/
  if ( v10 != unk_B43128 ) /*0x845943*/
  {
    if ( v10 ) /*0x845947*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x84594d*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x845963*/
      v11 = v17; /*0x845965*/
    }
    *(_DWORD *)(v9 + 4) = v11; /*0x84596b*/
    if ( v11 ) /*0x84596e*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x845974*/
  }
  v12 = (float *)sub_7EE1F0(a5); /*0x84598e*/
  if ( !v12 ) /*0x845992*/
  {
    v12 = (float *)sub_7EE1D0(a5); /*0x8459a0*/
    if ( !v12 ) /*0x8459a4*/
      JUMPOUT(0x845C6A); /*0x845c6a*/
  }
  v13 = kHeadBodyNormalMatchRadius; /*0x8459b4*/
  if ( *(int *)&OB_DisplayDebugFlags_010201A0[4] > 1 ) /*0x8459c6*/
  {
    qmemcpy(v24, v12 + 2, sizeof(v24)); /*0x8459d8*/
    v25[0] = v24[0]; /*0x8459de*/
    v25[1] = v24[1]; /*0x8459e9*/
    v25[2] = v24[2]; /*0x8459f4*/
    v25[3] = v24[9]; /*0x845a02*/
    v25[4] = v24[3]; /*0x845a0d*/
    v25[5] = v24[4]; /*0x845a18*/
    v25[6] = v24[5]; /*0x845a2f*/
    v14 = 0xA; /*0x845a44*/
    v25[7] = v24[0xA]; /*0x845a49*/
    v25[8] = v24[6]; /*0x845a57*/
    v25[9] = v24[7]; /*0x845a65*/
    v25[0xA] = v24[8]; /*0x845a73*/
    v25[0xB] = v24[0xB]; /*0x845a81*/
    v25[0xC] = 0.0; /*0x845a8a*/
    v25[0xD] = 0.0; /*0x845a91*/
    v25[0xE] = 0.0; /*0x845a98*/
    v25[0xF] = v24[0xC]; /*0x845aa6*/
    qmemcpy(&unk_B462D8, v25, 0x40u); /*0x845aad*/
    v18 = v12[0x10]; /*0x845ab2*/
    v19 = 1.0; /*0x845ab8*/
    while ( 1 ) /*0x845abe*/
    {
      v15 = v18; /*0x845abe*/
      if ( (v14 & 1) != 0 ) /*0x845ac2*/
        v19 = v15 * v19; /*0x845aca*/
      v14 >>= 1; /*0x845ace*/
      if ( !v14 ) /*0x845ad0*/
      {
        unk_B46228 = 1.0 - v19; /*0x845aec*/
        switch ( *((_BYTE *)v12 + 0x44) ) /*0x845aff*/
        {
          case 0: /*0x845aff*/
            flt_B461A8 = 0.0; /*0x845b18*/
            *(float *)&v20 = v13; /*0x845b1e*/
            unk_B461AC = v20; /*0x845b2e*/
            flt_B461B0 = 0.0; /*0x845b34*/
            unk_B461B4 = v20; /*0x845b3a*/
            break; /*0x845b40*/
          case 1: /*0x845aff*/
            *(float *)&v22 = v13; /*0x845b47*/
            LODWORD(flt_B461A8) = v22; /*0x845b5b*/
            unk_B461AC = v22; /*0x845b6f*/
            flt_B461B0 = 0.0; /*0x845b75*/
            unk_B461B4 = v22; /*0x845b7b*/
            JUMPOUT(0x845C1F); /*0x845c1f*/
          case 2: /*0x845aff*/
            flt_B461A8 = 0.0; /*0x845b90*/
            *(float *)&v23 = v13; /*0x845b96*/
            unk_B461AC = v23; /*0x845bae*/
            LODWORD(flt_B461B0) = v23; /*0x845bb4*/
            unk_B461B4 = v23; /*0x845bba*/
            break; /*0x845bc0*/
          case 3: /*0x845aff*/
            *(float *)&v21 = v13; /*0x845bc4*/
            LODWORD(flt_B461A8) = v21; /*0x845bd4*/
            unk_B461AC = v21; /*0x845bea*/
            LODWORD(flt_B461B0) = v21; /*0x845bf0*/
            unk_B461B4 = v21; /*0x845bf6*/
            break; /*0x845bfc*/
          default:
            JUMPOUT(0x845BFE); /*0x845bfe*/
        }
        JUMPOUT(0x845C21); /*0x845c21*/
      }
      v18 = v15 * v15; /*0x845ad4*/
    }
  }
  JUMPOUT(0x845C62); /*0x845c62*/
}
