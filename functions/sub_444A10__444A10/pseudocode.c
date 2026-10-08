void __thiscall sub_444A10(Ni2DBuffer ***this)
{
  const char *v2; // eax
  bool v3; // zf
  Ni2DBuffer *ModelData; // eax
  Ni2DBuffer *v5; // eax
  Ni2DBuffer *v6; // eax
  Ni2DBuffer *v7; // eax
  Ni2DBuffer *v8; // eax
  Ni2DBuffer *v9; // eax
  Ni2DBuffer *v10; // eax
  Ni2DBuffer *v11; // eax
  Ni2DBuffer *v12; // eax
  Ni2DBuffer *v13; // eax
  Ni2DBuffer *v14; // eax
  Ni2DBuffer *v15; // eax
  Ni2DBuffer *v16; // eax
  Ni2DBuffer *v17; // eax
  Ni2DBuffer *v18; // eax
  Ni2DBuffer *v19; // eax

  if ( !unk_B33A68 ) /*0x444a10*/
  {
    v2 = (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x11E]); /*0x444a20*/
    v3 = *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x11E]) == 0; /*0x444a25*/
    unk_B33A68 = 1; /*0x444a28*/
    if ( !v3 ) /*0x444a2f*/
    {
      ModelData = (Ni2DBuffer *)ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], v2, 0, 0, 1); /*0x444a3e*/
      sub_443F00(this, ModelData); /*0x444a46*/
    }
    if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x120]) ) /*0x444a50*/
    {
      v5 = (Ni2DBuffer *)ModelLoader_LoadModelData( /*0x444a62*/
                           (int *)MEMORY[0xB33A1C],
                           (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x120]),
                           0,
                           0,
                           1);
      sub_443F00(this, v5); /*0x444a6a*/
    }
    if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x122]) ) /*0x444a74*/
    {
      v6 = (Ni2DBuffer *)ModelLoader_LoadModelData( /*0x444a86*/
                           (int *)MEMORY[0xB33A1C],
                           (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x122]),
                           0,
                           0,
                           1);
      sub_443F00(this, v6); /*0x444a8e*/
    }
    if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x124]) ) /*0x444a98*/
    {
      v7 = (Ni2DBuffer *)ModelLoader_LoadModelData( /*0x444aaa*/
                           (int *)MEMORY[0xB33A1C],
                           (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x124]),
                           0,
                           0,
                           1);
      sub_443F00(this, v7); /*0x444ab2*/
    }
    if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x126]) ) /*0x444abc*/
    {
      v8 = (Ni2DBuffer *)ModelLoader_LoadModelData( /*0x444ace*/
                           (int *)MEMORY[0xB33A1C],
                           (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x126]),
                           0,
                           0,
                           1);
      sub_443F00(this, v8); /*0x444ad6*/
    }
    if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x128]) ) /*0x444ae0*/
    {
      v9 = (Ni2DBuffer *)ModelLoader_LoadModelData( /*0x444af2*/
                           (int *)MEMORY[0xB33A1C],
                           (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x128]),
                           0,
                           0,
                           1);
      sub_443F00(this, v9); /*0x444afa*/
    }
    if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x12A]) ) /*0x444b04*/
    {
      v10 = (Ni2DBuffer *)ModelLoader_LoadModelData( /*0x444b16*/
                            (int *)MEMORY[0xB33A1C],
                            (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x12A]),
                            0,
                            0,
                            1);
      sub_443F00(this, v10); /*0x444b1e*/
    }
    if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x12C]) ) /*0x444b28*/
    {
      v11 = (Ni2DBuffer *)ModelLoader_LoadModelData( /*0x444b3a*/
                            (int *)MEMORY[0xB33A1C],
                            (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x12C]),
                            0,
                            0,
                            1);
      sub_443F00(this, v11); /*0x444b42*/
    }
    if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x12E]) ) /*0x444b4c*/
    {
      v12 = (Ni2DBuffer *)ModelLoader_LoadModelData( /*0x444b5e*/
                            (int *)MEMORY[0xB33A1C],
                            (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x12E]),
                            0,
                            0,
                            1);
      sub_443F00(this, v12); /*0x444b66*/
    }
    if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x130]) ) /*0x444b70*/
    {
      v13 = (Ni2DBuffer *)ModelLoader_LoadModelData( /*0x444b82*/
                            (int *)MEMORY[0xB33A1C],
                            (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x130]),
                            0,
                            0,
                            1);
      sub_443F00(this, v13); /*0x444b8a*/
    }
    if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x132]) ) /*0x444b94*/
    {
      v14 = (Ni2DBuffer *)ModelLoader_LoadModelData( /*0x444ba6*/
                            (int *)MEMORY[0xB33A1C],
                            (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x132]),
                            0,
                            0,
                            1);
      sub_443F00(this, v14); /*0x444bae*/
    }
    if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x134]) ) /*0x444bb8*/
    {
      v15 = (Ni2DBuffer *)ModelLoader_LoadModelData( /*0x444bca*/
                            (int *)MEMORY[0xB33A1C],
                            (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x134]),
                            0,
                            0,
                            1);
      sub_443F00(this, v15); /*0x444bd2*/
    }
    if ( *MEMORY[0xB371B0].value ) /*0x444bdc*/
    {
      v16 = (Ni2DBuffer *)ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], MEMORY[0xB371B0].value, 0, 0, 1); /*0x444bee*/
      sub_443F00(this, v16); /*0x444bf6*/
    }
    if ( *stru_B371B8.value ) /*0x444c00*/
    {
      v17 = (Ni2DBuffer *)ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], stru_B371B8.value, 0, 0, 1); /*0x444c12*/
      sub_443F00(this, v17); /*0x444c1a*/
    }
    if ( *stru_B371C0.value ) /*0x444c24*/
    {
      v18 = (Ni2DBuffer *)ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], stru_B371C0.value, 0, 0, 1); /*0x444c36*/
      sub_443F00(this, v18); /*0x444c3e*/
    }
    if ( *(_BYTE *)LODWORD(MEMORY[0xB37A58][0x38]) ) /*0x444c48*/
    {
      v19 = (Ni2DBuffer *)ModelLoader_LoadModelData( /*0x444c5a*/
                            (int *)MEMORY[0xB33A1C],
                            (const char *)LODWORD(MEMORY[0xB37A58][0x38]),
                            0,
                            0,
                            1);
      sub_443F00(this, v19); /*0x444c62*/
    }
  }
}
