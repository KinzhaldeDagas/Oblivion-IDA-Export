void __cdecl sub_5A5900(float a1, float arg4)
{
  InterfaceManager *Singleton; // ebx
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  float *v5; // ebp
  double v6; // st7
  PlayerCharacterVtbl *vtbl; // eax
  double (*GetScale)(void); // edx
  double v9; // st7
  double v10; // st6
  double v11; // st7
  double v12; // st7
  double v13; // st6
  double v14; // st6
  float *v15; // eax
  double v16; // st5
  double v17; // st4
  double v18; // st3
  double v19; // st6
  float a2; // [esp+4h] [ebp-70h]
  float v21; // [esp+1Ch] [ebp-58h] BYREF
  float v22; // [esp+20h] [ebp-54h]
  float v23; // [esp+24h] [ebp-50h] BYREF
  float v24; // [esp+28h] [ebp-4Ch] BYREF
  float v25; // [esp+2Ch] [ebp-48h]
  float v26; // [esp+30h] [ebp-44h]
  float v27; // [esp+34h] [ebp-40h]
  float v28; // [esp+38h] [ebp-3Ch]
  float v29; // [esp+3Ch] [ebp-38h]
  float v30; // [esp+40h] [ebp-34h]
  float v31; // [esp+44h] [ebp-30h]
  float v32; // [esp+48h] [ebp-2Ch]
  float v33; // [esp+4Ch] [ebp-28h]
  float v34[9]; // [esp+50h] [ebp-24h] BYREF

  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5a5912*/
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EC); /*0x5a5914*/
  if ( OpenMenuTile ) /*0x5a591e*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5a5937*/
    v5 = (float *)OblivionDynamicCast( /*0x5a5945*/
                    ParentMenu,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                    &HUDMainMenu `RTTI Type Descriptor',
                    0);
    sub_711300((float *)&Singleton->unk054[3]->members.super.m_localTransform, &v24, &v23, &v21); /*0x5a595c*/
    v22 = a1 * dbl_A2FAA0; /*0x5a5976*/
    v21 = v21 - v22 * dbl_A31C78; /*0x5a5986*/
    sub_711580(v34, v24, v23, v21); /*0x5a59a1*/
    qmemcpy(&Singleton->unk054[3]->members.super.m_localTransform, v34, 0x24u); /*0x5a59b5*/
    v6 = ((double (__thiscall *)(PlayerCharacter *))reference->vtbl->super.super.super.GetScale)(reference); /*0x5a59c5*/
    vtbl = reference->vtbl; /*0x5a59cd*/
    v22 = v6; /*0x5a59cf*/
    GetScale = (double (*)(void))vtbl->super.super.super.GetScale; /*0x5a59d7*/
    v28 = dbl_A492F8 * v22; /*0x5a59e5*/
    v29 = dbl_A6BEC8 * v22; /*0x5a59f1*/
    v30 = v22 * dbl_A6BEC0; /*0x5a59fb*/
    v22 = GetScale(); /*0x5a5a01*/
    v25 = dbl_A6BEB8 * v22; /*0x5a5a11*/
    v26 = dbl_A6BEB0 * v22; /*0x5a5a1d*/
    v27 = v22 * dbl_A6BEA8; /*0x5a5a27*/
    v22 = arg4 / dbl_A6BEA0 + v5[0x1C]; /*0x5a5a38*/
    v9 = v22; /*0x5a5a3c*/
    v5[0x1C] = v22; /*0x5a5a40*/
    if ( v9 >= 1.0 ) /*0x5a5a4c*/
    {
      v22 = 1.0; /*0x5a5a56*/
      v10 = v9; /*0x5a5a5a*/
      v11 = 1.0; /*0x5a5a5a*/
    }
    else
    {
      v10 = v9; /*0x5a5a4e*/
      v11 = 1.0; /*0x5a5a4e*/
      v22 = v10; /*0x5a5a50*/
    }
    if ( v22 >= dbl_A2FC68 ) /*0x5a5a6d*/
    {
      if ( v10 < v11 ) /*0x5a5a82*/
        v11 = v10; /*0x5a5a84*/
      v13 = v11; /*0x5a5a8a*/
      v12 = 0.0; /*0x5a5a8a*/
      v22 = v13; /*0x5a5a8c*/
    }
    else
    {
      v12 = 0.0; /*0x5a5a71*/
      v22 = 0.0; /*0x5a5a73*/
    }
    v14 = v22; /*0x5a5a90*/
    v15 = (float *)Singleton->unk054[3]; /*0x5a5a94*/
    v5[0x1C] = v22; /*0x5a5a97*/
    v15 += 0x15; /*0x5a5a9a*/
    v16 = v28; /*0x5a5aab*/
    v31 = v25 - v28; /*0x5a5aad*/
    v17 = v29; /*0x5a5abd*/
    v32 = v26 - v29; /*0x5a5abf*/
    v33 = v27 - v30; /*0x5a5ad1*/
    v18 = v14; /*0x5a5ad5*/
    v19 = v30; /*0x5a5ad5*/
    v22 = v18; /*0x5a5ad7*/
    v28 = v31 * v22; /*0x5a5ae9*/
    v29 = v32 * v22; /*0x5a5af3*/
    v30 = v22 * v33; /*0x5a5afb*/
    v31 = v16 + v28; /*0x5a5b07*/
    *v15 = v31; /*0x5a5b0f*/
    v32 = v17 + v29; /*0x5a5b15*/
    v15[1] = v32; /*0x5a5b1d*/
    v33 = v19 + v30; /*0x5a5b24*/
    v15[2] = v33; /*0x5a5b2d*/
    a2 = v12; /*0x5a5b30*/
    NiAVObject_UpdateNiAVObject((NiAVObject *)Singleton->unk054[3], a2, 1); /*0x5a5b36*/
  }
}
