void __cdecl sub_5A5900(float a1, float arg4)
{
  InterfaceManager *Singleton; // ebx
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  float *v9; // ebp
  double v10; // st7
  PlayerCharacterVtbl *vtbl; // eax
  double (*GetScale)(void); // edx
  double v13; // st7
  double v14; // st6
  double v15; // st7
  double v16; // st7
  double v17; // st6
  double v18; // st6
  float *v19; // eax
  double v20; // st5
  double v21; // st4
  double v22; // st3
  double v23; // st6
  float a2; // [esp+4h] [ebp-70h]
  float v25; // [esp+1Ch] [ebp-58h] BYREF
  float v26; // [esp+20h] [ebp-54h]
  float v27; // [esp+24h] [ebp-50h] BYREF
  float v28; // [esp+28h] [ebp-4Ch] BYREF
  float v29; // [esp+2Ch] [ebp-48h]
  float v30; // [esp+30h] [ebp-44h]
  float v31; // [esp+34h] [ebp-40h]
  float v32; // [esp+38h] [ebp-3Ch]
  float v33; // [esp+3Ch] [ebp-38h]
  float v34; // [esp+40h] [ebp-34h]
  float v35; // [esp+44h] [ebp-30h]
  float v36; // [esp+48h] [ebp-2Ch]
  float v37; // [esp+4Ch] [ebp-28h]
  float v38[9]; // [esp+50h] [ebp-24h] BYREF

  Singleton = InterfaceManager_GetSingleton(0, 1);
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EC);
  if ( OpenMenuTile )
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    v9 = (float *)OblivionDynamicCast(
                    ParentMenu,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                    &HUDMainMenu `RTTI Type Descriptor',
                    0);
    sub_711300((float *)&Singleton->unk054[3]->members.super.m_localTransform, &v28, &v27, &v25);
    v26 = a1 * dbl_A2FAA0;
    v25 = v25 - v26 * dbl_A31C78;
    sub_711580(v38, v28, v27, v25);
    qmemcpy(&Singleton->unk054[3]->members.super.m_localTransform, v38, 0x24u);
    v10 = ((double (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetScale)(TESDataHandler_g_PlayerRef);
    vtbl = TESDataHandler_g_PlayerRef->vtbl;
    v26 = v10;
    GetScale = (double (*)(void))vtbl->super.super.super.GetScale;
    v32 = dbl_A492F8 * v26;
    v33 = dbl_A6BEC8 * v26;
    v34 = v26 * dbl_A6BEC0;
    v26 = GetScale();
    v29 = dbl_A6BEB8 * v26;
    v30 = dbl_A6BEB0 * v26;
    v31 = v26 * dbl_A6BEA8;
    v26 = arg4 / dbl_A6BEA0 + v9[0x1C];
    v13 = v26;
    v9[0x1C] = v26;
    if ( v13 >= 1.0 )
    {
      v26 = 1.0;
      v14 = v13;
      v15 = 1.0;
    }
    else
    {
      v14 = v13;
      v15 = 1.0;
      v26 = v14;
    }
    if ( v26 >= dbl_A2FC68 )
    {
      if ( v14 < v15 )
        v15 = v14;
      v17 = v15;
      v16 = 0.0;
      v26 = v17;
    }
    else
    {
      v16 = 0.0;
      v26 = 0.0;
    }
    v18 = v26;
    v19 = (float *)Singleton->unk054[3];
    v9[0x1C] = v26;
    v19 += 0x15;
    v20 = v32;
    v35 = v29 - v32;
    v21 = v33;
    v36 = v30 - v33;
    v37 = v31 - v34;
    v22 = v18;
    v23 = v34;
    v26 = v22;
    v32 = v35 * v26;
    v33 = v36 * v26;
    v34 = v26 * v37;
    v35 = v20 + v32;
    *v19 = v35;
    v36 = v21 + v33;
    v19[1] = v36;
    v37 = v23 + v34;
    v19[2] = v37;
    a2 = v16;
    NiAVObject_UpdateNiAVObject((NiAVObject *)Singleton->unk054[3], a2, 1);
  }
}
