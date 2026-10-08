double __userpurge sub_5B1A40@<st0>(
        int this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double result@<st0>,
        int a5)
{
  int v6; // edi
  unsigned int v7; // ebp
  int v8; // ecx
  Tile *v9; // edi
  int v10; // eax
  unsigned int v11; // ebx
  Tile *v12; // edi
  Tile *v13; // edi
  Tile *v14; // esi
  float *Singleton; // eax
  Tile **v16; // eax
  float v17; // [esp+0h] [ebp-24h]
  float v18; // [esp+0h] [ebp-24h]
  float v19; // [esp+0h] [ebp-24h]
  float v20; // [esp+0h] [ebp-24h]
  float v21; // [esp+0h] [ebp-24h]
  float a2; // [esp+4h] [ebp-20h]
  float a2a; // [esp+4h] [ebp-20h]
  float a2b; // [esp+4h] [ebp-20h]
  float a2c; // [esp+4h] [ebp-20h]
  float a2d; // [esp+4h] [ebp-20h]
  int a3; // [esp+14h] [ebp-10h]
  unsigned int v28; // [esp+18h] [ebp-Ch]
  int v29; // [esp+1Ch] [ebp-8h]

  v6 = *(_DWORD *)(*(_DWORD *)(this + 0x2C) + 0x38); /*0x5b1a4b*/
  v7 = 0xFFFFFFFF; /*0x5b1a52*/
  v28 = 0xFFFFFFFF; /*0x5b1a58*/
  a3 = 0xFFFFFFFF; /*0x5b1a5c*/
  if ( (a5 & 8) != 0 ) /*0x5b1a64*/
  {
    v7 = 0; /*0x5b1a66*/
    a3 = 0; /*0x5b1a68*/
  }
  Tile_SetFloat(*(Tile **)(this + 4), (_DWORD *)0xFAF, flt_A53954); /*0x5b1a7e*/
  Tile_SetFloat(*(Tile **)(this + 4), (_DWORD *)0xFB0, flt_A53954); /*0x5b1a95*/
  Tile_SetFloat(*(Tile **)(this + 4), (_DWORD *)0xFB1, flt_A53954); /*0x5b1aac*/
  Tile_SetFloat(*(Tile **)(this + 4), (_DWORD *)0xFB2, flt_A53954); /*0x5b1ac3*/
  if ( v6 ) /*0x5b1aca*/
  {
    while ( 1 ) /*0x5b1ad7*/
    {
      v8 = *(_DWORD *)(v6 + 4); /*0x5b1ad7*/
      v9 = *(Tile **)(v6 + 8); /*0x5b1add*/
      v29 = v8; /*0x5b1adf*/
      Tile_GetFloat(v9, 0xFB7); /*0x5b1aea*/
      if ( (Double_To_SInt32(result) & a5) != 0 && Tile_GetFloat(v9, 0xFA8) >= dbl_A6C1E0 ) /*0x5b1b17*/
        break; /*0x5b1b17*/
      Tile_SetFloat(v9, (_DWORD *)0xFB6, 1.0); /*0x5b1bde*/
LABEL_21:
      if ( !v29 ) /*0x5b1be8*/
        goto LABEL_22; /*0x5b1be8*/
      v6 = v29; /*0x5b1ad3*/
    }
    Tile_GetFloat(v9, 0xFB5); /*0x5b1b24*/
    v10 = Double_To_SInt32(result); /*0x5b1b29*/
    v11 = v10; /*0x5b1b33*/
    if ( (a5 & 8) == 0 && v10 != v28 ) /*0x5b1b3b*/
    {
      if ( (v10 & 1) != 0 ) /*0x5b1b40*/
      {
        v17 = (float)a3; /*0x5b1b47*/
        Tile_SetFloat(*(Tile **)(this + 4), (_DWORD *)0xFAF, v17); /*0x5b1b4f*/
LABEL_18:
        a3 = ++v7; /*0x5b1b96*/
        goto LABEL_19; /*0x5b1b96*/
      }
      if ( (v10 & 2) != 0 ) /*0x5b1b54*/
      {
        v18 = (float)a3; /*0x5b1b5b*/
        Tile_SetFloat(*(Tile **)(this + 4), (_DWORD *)0xFB0, v18); /*0x5b1b63*/
        goto LABEL_18; /*0x5b1b63*/
      }
      if ( (v10 & 4) != 0 ) /*0x5b1b68*/
      {
        v19 = (float)a3; /*0x5b1b6f*/
        Tile_SetFloat(*(Tile **)(this + 4), (_DWORD *)0xFB1, v19); /*0x5b1b77*/
        goto LABEL_18; /*0x5b1b77*/
      }
      if ( (v10 & 8) != 0 ) /*0x5b1b7c*/
      {
        v20 = (float)a3; /*0x5b1b83*/
        Tile_SetFloat(*(Tile **)(this + 4), (_DWORD *)0xFB2, v20); /*0x5b1b8e*/
        goto LABEL_18; /*0x5b1b8e*/
      }
    }
LABEL_19:
    v28 = v11; /*0x5b1b9a*/
    Tile_SetFloat(v9, (_DWORD *)0xFB6, fConstant_2); /*0x5b1baf*/
    v21 = (float)a3; /*0x5b1bbb*/
    Tile_SetFloat(v9, (_DWORD *)0xFAA, v21); /*0x5b1bc3*/
    a3 = ++v7; /*0x5b1bcb*/
    goto LABEL_21; /*0x5b1bcf*/
  }
LABEL_22:
  a2 = (float)(int)((v7 - 1) & (((int)(v7 - 1) < 0) - 1)); /*0x5b1bef*/
  Tile_SetFloat(*(Tile **)(this + 0x2C), (_DWORD *)0xFAE, a2); /*0x5b1c12*/
  a2a = (float)(int)((v7 - 1) & (((int)(v7 - 1) < 0) - 1)); /*0x5b1c2f*/
  Tile_SetFloat(*(Tile **)(this + 4), (_DWORD *)0xFB3, a2a); /*0x5b1c37*/
  if ( Tile_GetFloat((_DWORD *)*(_DWORD *)(this + 4), 0xFB2) == flt_A53954 ) /*0x5b1c54*/
    Tile_SetFloat(*(Tile **)(this + 4), (_DWORD *)0xFB2, flt_A6C958); /*0x5b1c68*/
  if ( Tile_GetFloat((_DWORD *)*(_DWORD *)(this + 4), 0xFB1) == flt_A53954 ) /*0x5b1c85*/
  {
    v12 = *(Tile **)(this + 4); /*0x5b1c87*/
    a2b = Tile_GetFloat(v12, 0xFB2); /*0x5b1c97*/
    Tile_SetFloat(v12, (_DWORD *)0xFB1, a2b); /*0x5b1ca1*/
  }
  if ( Tile_GetFloat((_DWORD *)*(_DWORD *)(this + 4), 0xFB0) == flt_A53954 ) /*0x5b1cbe*/
  {
    v13 = *(Tile **)(this + 4); /*0x5b1cc0*/
    a2c = Tile_GetFloat(v13, 0xFB1); /*0x5b1cd0*/
    Tile_SetFloat(v13, (_DWORD *)0xFB0, a2c); /*0x5b1cda*/
  }
  if ( Tile_GetFloat((_DWORD *)*(_DWORD *)(this + 4), 0xFAF) == flt_A53954 ) /*0x5b1cf7*/
  {
    v14 = *(Tile **)(this + 4); /*0x5b1cf9*/
    a2d = Tile_GetFloat(v14, 0xFB0); /*0x5b1d09*/
    Tile_SetFloat(v14, (_DWORD *)0xFAF, a2d); /*0x5b1d13*/
  }
  if ( !BYTE1(InterfaceManager_GetSingleton(0, 1)->unk0B8) ) /*0x5b1d24*/
  {
    Singleton = (float *)InterfaceManager_GetSingleton(0, 1); /*0x5b1d3d*/
    result = InterfaceManager::SetCurrentFocusTarget(Singleton, st5_0, result, st6_0, 0.0, (_DWORD *)0xFDD, 0); /*0x5b1d47*/
    v16 = (Tile **)InterfaceManager_GetSingleton(0, 1); /*0x5b1d50*/
    InterfaceManager::GetDefaultFocus(v16, st5_0, st6_0, result); /*0x5b1d5a*/
  }
  return result; /*0x5b1d2b*/
}
