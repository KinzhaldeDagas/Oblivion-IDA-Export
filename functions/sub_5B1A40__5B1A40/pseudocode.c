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

  v6 = *(_DWORD *)(*(_DWORD *)(this + 0x2C) + 0x38);
  v7 = 0xFFFFFFFF;
  v28 = 0xFFFFFFFF;
  a3 = 0xFFFFFFFF;
  if ( (a5 & 8) != 0 )
  {
    v7 = 0;
    a3 = 0;
  }
  Tile_SetFloat(*(Tile **)(this + 4), (_DWORD *)0xFAF, flt_A53954);
  Tile_SetFloat(*(Tile **)(this + 4), (_DWORD *)0xFB0, flt_A53954);
  Tile_SetFloat(*(Tile **)(this + 4), (_DWORD *)0xFB1, flt_A53954);
  Tile_SetFloat(*(Tile **)(this + 4), (_DWORD *)0xFB2, flt_A53954);
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v6 + 4);
      v9 = *(Tile **)(v6 + 8);
      v29 = v8;
      Tile_GetFloat(v9, 0xFB7);
      if ( (Double_To_SInt32(result) & a5) != 0 && Tile_GetFloat(v9, 0xFA8) >= dbl_A6C1E0 )
        break;
      Tile_SetFloat(v9, (_DWORD *)0xFB6, 1.0);
LABEL_21:
      if ( !v29 )
        goto LABEL_22;
      v6 = v29;
    }
    Tile_GetFloat(v9, 0xFB5);
    v10 = Double_To_SInt32(result);
    v11 = v10;
    if ( (a5 & 8) == 0 && v10 != v28 )
    {
      if ( (v10 & 1) != 0 )
      {
        v17 = (float)a3;
        Tile_SetFloat(*(Tile **)(this + 4), (_DWORD *)0xFAF, v17);
LABEL_18:
        a3 = ++v7;
        goto LABEL_19;
      }
      if ( (v10 & 2) != 0 )
      {
        v18 = (float)a3;
        Tile_SetFloat(*(Tile **)(this + 4), (_DWORD *)0xFB0, v18);
        goto LABEL_18;
      }
      if ( (v10 & 4) != 0 )
      {
        v19 = (float)a3;
        Tile_SetFloat(*(Tile **)(this + 4), (_DWORD *)0xFB1, v19);
        goto LABEL_18;
      }
      if ( (v10 & 8) != 0 )
      {
        v20 = (float)a3;
        Tile_SetFloat(*(Tile **)(this + 4), (_DWORD *)0xFB2, v20);
        goto LABEL_18;
      }
    }
LABEL_19:
    v28 = v11;
    Tile_SetFloat(v9, (_DWORD *)0xFB6, fConstant_2);
    v21 = (float)a3;
    Tile_SetFloat(v9, (_DWORD *)0xFAA, v21);
    a3 = ++v7;
    goto LABEL_21;
  }
LABEL_22:
  a2 = (float)(int)((v7 - 1) & (((int)(v7 - 1) < 0) - 1));
  Tile_SetFloat(*(Tile **)(this + 0x2C), (_DWORD *)0xFAE, a2);
  a2a = (float)(int)((v7 - 1) & (((int)(v7 - 1) < 0) - 1));
  Tile_SetFloat(*(Tile **)(this + 4), (_DWORD *)0xFB3, a2a);
  if ( Tile_GetFloat((_DWORD *)*(_DWORD *)(this + 4), 0xFB2) == flt_A53954 )
    Tile_SetFloat(*(Tile **)(this + 4), (_DWORD *)0xFB2, flt_A6C958);
  if ( Tile_GetFloat((_DWORD *)*(_DWORD *)(this + 4), 0xFB1) == flt_A53954 )
  {
    v12 = *(Tile **)(this + 4);
    a2b = Tile_GetFloat(v12, 0xFB2);
    Tile_SetFloat(v12, (_DWORD *)0xFB1, a2b);
  }
  if ( Tile_GetFloat((_DWORD *)*(_DWORD *)(this + 4), 0xFB0) == flt_A53954 )
  {
    v13 = *(Tile **)(this + 4);
    a2c = Tile_GetFloat(v13, 0xFB1);
    Tile_SetFloat(v13, (_DWORD *)0xFB0, a2c);
  }
  if ( Tile_GetFloat((_DWORD *)*(_DWORD *)(this + 4), 0xFAF) == flt_A53954 )
  {
    v14 = *(Tile **)(this + 4);
    a2d = Tile_GetFloat(v14, 0xFB0);
    Tile_SetFloat(v14, (_DWORD *)0xFAF, a2d);
  }
  if ( !BYTE1(InterfaceManager_GetSingleton(0, 1)->unk0B8) )
  {
    Singleton = (float *)InterfaceManager_GetSingleton(0, 1);
    result = sub_57F9F0(Singleton, st5_0, result, st6_0, 0.0, (_DWORD *)0xFDD, 0);
    v16 = (Tile **)InterfaceManager_GetSingleton(0, 1);
    sub_57FD60(v16, st5_0, st6_0, result);
  }
  return result;
}
