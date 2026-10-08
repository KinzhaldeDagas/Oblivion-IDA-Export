void __cdecl Player_UpdateHUDHealthBarTarget_(Actor *a1)
{
  TESForm *ActorBaseForm; // eax
  int *v2; // esi
  int v3; // eax
  CHAR *v4; // eax
  int v5; // ecx
  float Float; // [esp+Ch] [ebp-20h]
  float v7; // [esp+10h] [ebp-1Ch]
  float v8; // [esp+14h] [ebp-18h]
  float v9; // [esp+1Ch] [ebp-10h]
  float v10; // [esp+1Ch] [ebp-10h]
  float v11; // [esp+20h] [ebp-Ch]
  float v12; // [esp+24h] [ebp-8h]
  float v13; // [esp+28h] [ebp-4h]

  if ( !bHealthBarShowing_Gameplay && (!a1 || !a1->vtbl->super.super.IsDead((TESObjectREFR *)a1, 0)) ) /*0x5a89c5*/
  {
    if ( (Actor *)dword_B3B0B4[0xAC] == a1 ) /*0x5a89d5*/
      goto LABEL_13; /*0x5a89d5*/
    dword_B3B0B4[0xAC] = (int)a1; /*0x5a89dd*/
    if ( !a1 ) /*0x5a89e3*/
      goto LABEL_13; /*0x5a89e3*/
    ActorBaseForm = Actor_GetActorBaseForm(a1, 0); /*0x5a89ed*/
    v11 = (float)(int)ActorBaseForm->vtbl[1].GetSaveSize(ActorBaseForm, 8); /*0x5a8a18*/
    v12 = (float)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_B3B0B4[0xAC] + 0x284))(dword_B3B0B4[0xAC], 8); /*0x5a8a3b*/
    v2 = (int *)OblivionDynamicCast( /*0x5a8a44*/
                  (void *)dword_B3B0B4[0xA9],
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                  &Tile3D `RTTI Type Descriptor',
                  0);
    v3 = v2[0x11]; /*0x5a8a46*/
    if ( v3 /*0x5a8a6d*/
      || (v4 = sub_588C10((_DWORD *)dword_B3B0B4[0xA9], 0xFEC),
          sub_590740(v2, (BSAnimGroupSequence *)v4),
          (v3 = v2[0x11]) != 0) )
    {
      v13 = *(float *)(v3 + 0x30); /*0x5a8a76*/
      v9 = 0.0; /*0x5a8a7c*/
      if ( v11 > 0.0 ) /*0x5a8a8d*/
        v9 = v12 / v11; /*0x5a8a93*/
      v10 = v13 - v9 * v13; /*0x5a8aa9*/
      if ( v10 > (double)v13 ) /*0x5a8ab8*/
        v10 = v13; /*0x5a8aba*/
      v5 = dword_B3B0B4[0xA9]; /*0x5a8ac2*/
      *(float *)(v5 + 0x58) = v10; /*0x5a8acc*/
      v8 = flt_B140C0; /*0x5a8ad8*/
      v7 = flt_A40098; /*0x5a8ae2*/
      Float = Tile_GetFloat((_DWORD *)v5, 0xFB6); /*0x5a8af6*/
      sub_589980((_DWORD *)dword_B3B0B4[0xA9], 0xFB6, Float, v7, v8); /*0x5a8afe*/
      BYTE2(dword_B3B0B4[0xAB]) = 1; /*0x5a8b03*/
LABEL_13:
      dword_B3B0B4[0xAA] = SLODWORD(g_GameSettingStringPointers_B36CD8[0x112]); /*0x5a8b0a*/
    }
  }
}
