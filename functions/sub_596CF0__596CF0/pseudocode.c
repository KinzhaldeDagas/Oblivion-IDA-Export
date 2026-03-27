void __thiscall sub_596CF0(_DWORD *this, TESChildCELL *arg0)
{
  TESObjectREFR *v4; // esi
  int i; // ebx
  int v7; // eax
  char *v8; // eax
  _DWORD *v9; // ebx
  TESObjectCELL *ParentCell; // eax
  char *v11; // eax
  Tile *v12; // ebx
  _DWORD *v13; // ebx
  UInt32 AV; // eax
  char *v15; // eax
  Tile *v16; // ebx
  _DWORD *v17; // ebx
  void *NiNode; // eax
  char *v19; // eax
  Tile *v20; // ebx
  char *v21; // esi
  _DWORD *v22; // ebx
  Tile *v23; // esi
  InterfaceManager *Singleton; // eax
  double v25; // st7
  float a2; // [esp+0h] [ebp-18h]
  float a2a; // [esp+0h] [ebp-18h]
  float a2b; // [esp+0h] [ebp-18h]
  float a2c; // [esp+0h] [ebp-18h]
  float v30; // [esp+4h] [ebp-14h]
  Tile *v31; // [esp+14h] [ebp-4h]
  TESChildCELL *v32; // [esp+1Ch] [ebp+4h]

  v4 = (TESObjectREFR *)arg0;
  if ( !arg0 )
    v4 = (TESObjectREFR *)this[0xF];
  for ( i = 0; i < 7; ++i )
  {
    v32 = (TESChildCELL *)this[1];
    v7 = sub_51BF00(v4, i);
    v8 = (char *)sub_52E800(v7);
    Tile_SetString(v32, (_DWORD *)(i + 0xFAF), v8);
    v31 = (Tile *)this[1];
    a2 = (float)sub_51BF00(v4, i);
    Tile_SetFloat(v31, (_DWORD *)(i + 0xFB9), a2);
  }
  v9 = (_DWORD *)this[1];
  ParentCell = TESObjectREFR_GetParentCell(v4);
  v11 = (char *)sub_52E7E0((unsigned int)ParentCell);
  Tile_SetString(v9, (_DWORD *)0xFB6, v11);
  v12 = (Tile *)this[1];
  a2a = (float)(int)TESObjectREFR_GetParentCell(v4);
  Tile_SetFloat(v12, (_DWORD *)0xFC0, a2a);
  v13 = (_DWORD *)this[1];
  AV = ValueModifierEffect_GetAV((HighProcess *)v4);
  v15 = (char *)sub_51BE50(AV);
  Tile_SetString(v13, (_DWORD *)0xFB7, v15);
  v16 = (Tile *)this[1];
  a2b = (float)(int)ValueModifierEffect_GetAV((HighProcess *)v4);
  Tile_SetFloat(v16, (_DWORD *)0xFC1, a2b);
  v17 = (_DWORD *)this[1];
  NiNode = TESObjectREFR_GetNiNode(v4);
  v19 = (char *)sub_51BE50((unsigned int)NiNode);
  Tile_SetString(v17, (_DWORD *)0xFB8, v19);
  v20 = (Tile *)this[1];
  a2c = (float)(int)TESObjectREFR_GetNiNode(v4);
  Tile_SetFloat(v20, (_DWORD *)0xFC2, a2c);
  v21 = (char *)LODWORD(v4->member.pos[1]);
  if ( !v21 )
    v21 = EmptyString;
  Tile_SetString((_DWORD *)this[1], (_DWORD *)0xFC3, v21);
  v22 = *(_DWORD **)(this[0xA] + 0x34);
  while ( v22 )
  {
    v23 = (Tile *)v22[2];
    v22 = (_DWORD *)*v22;
    if ( (double)(int)this[0x11] == Tile_GetFloat(v23, 0xFAA) )
    {
      Tile_SetFloat(v23, (_DWORD *)0xFB0, fConstant_2);
      InterfaceManager_GetSingleton(0, 1);
      Singleton = InterfaceManager_GetSingleton(0, 1);
      v25 = (double)(int)++Singleton->unk08C;
      if ( (int)Singleton->unk08C < 0 )
        v25 = v25 + flt_A2FC78;
      v30 = v25;
      Tile_SetFloat(v23, (_DWORD *)0xFF0, v30);
    }
    else
    {
      Tile_SetFloat(v23, (_DWORD *)0xFB0, 1.0);
    }
  }
}
