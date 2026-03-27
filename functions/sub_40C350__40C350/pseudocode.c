void __thiscall sub_40C350(InputGlobal **this)
{
  unsigned int v2; // edi
  unsigned int v3; // esi
  SceneGraph *v4; // esi
  NiNode *v5; // esi
  NiNode *v6; // esi
  BSShaderProperty *v7; // esi
  BSShaderProperty *v8; // esi
  void (__thiscall ***v9)(_DWORD, int); // esi
  NiScreenElements *v10; // esi
  unsigned int v11; // esi
  unsigned int i; // esi
  unsigned int v13; // edi
  unsigned int j; // edi
  unsigned int v15; // esi
  int v16; // eax
  _BYTE *v17; // eax
  unsigned int k; // edi
  unsigned int v19; // esi
  int v20; // eax
  _BYTE *v21; // eax
  unsigned int m; // edi
  unsigned int v23; // esi
  int v24; // eax
  _BYTE *v25; // eax
  unsigned int n; // edi
  unsigned int v27; // esi
  int v28; // eax
  _BYTE *v29; // eax
  unsigned int ii; // edi
  unsigned int v31; // esi
  int v32; // eax
  _BYTE *v33; // eax
  unsigned int jj; // edi
  unsigned int v35; // esi
  int v36; // eax
  _BYTE *v37; // eax
  unsigned int kk; // edi
  unsigned int v39; // esi
  int v40; // eax
  _BYTE *v41; // eax
  unsigned int mm; // edi
  unsigned int v43; // esi
  int v44; // eax
  _BYTE *v45; // eax

  ArchiveManager_Clear_();
  InputGlobals::SaveControlSettingsToINI((DIDEVCAPS *)*(this + 8));
  LODRoot = 0;
  ObjectLODRoot = 0;
  MagicProjectileRoot = 0;
  v2 = (unsigned int)*(this + 8);
  if ( v2 )
  {
    sub_4043A0(*(this + 8));
    FormHeapFree(v2);
  }
  *(this + 8) = 0;
  v3 = dword_B3339C;
  if ( dword_B3339C )
  {
    sub_494F30((unsigned int *)dword_B3339C);
    FormHeapFree(v3);
  }
  if ( g_worldScenegraph )
  {
    v4 = g_worldScenegraph;
    if ( !InterlockedDecrement((volatile LONG *)&g_worldScenegraph->super) )
    {
      if ( v4 )
        (*(void (__thiscall **)(SceneGraph *, int))v4->vftable)(v4, 1);
    }
    g_worldScenegraph = 0;
  }
  v5 = dword_B333D8;
  if ( dword_B333D8 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&dword_B333D8->members) )
    {
      if ( v5 )
        v5->vtbl->super.super.super.Destructor((NiRefObject *)v5, 1);
    }
    dword_B333D8 = 0;
  }
  v6 = dword_B333DC;
  if ( dword_B333DC )
  {
    if ( !InterlockedDecrement((volatile LONG *)&dword_B333DC->members) )
    {
      if ( v6 )
        v6->vtbl->super.super.super.Destructor((NiRefObject *)v6, 1);
    }
    dword_B333DC = 0;
  }
  v7 = dword_B333E0;
  if ( dword_B333E0 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&dword_B333E0->member) )
    {
      if ( v7 )
        (*(void (__thiscall **)(BSShaderProperty *, int))v7->vtbl)(v7, 1);
    }
    dword_B333E0 = 0;
  }
  v8 = dword_B333E4;
  if ( dword_B333E4 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&dword_B333E4->member) )
    {
      if ( v8 )
        (*(void (__thiscall **)(BSShaderProperty *, int))v8->vtbl)(v8, 1);
    }
    dword_B333E4 = 0;
  }
  v9 = (void (__thiscall ***)(_DWORD, int))menuRenderedTexture;
  if ( menuRenderedTexture )
  {
    if ( !InterlockedDecrement((volatile LONG *)(menuRenderedTexture + 4)) )
    {
      if ( v9 )
        (**v9)(v9, 1);
    }
    menuRenderedTexture = 0;
  }
  v10 = ScreenElementsRoot_;
  if ( ScreenElementsRoot_ )
  {
    if ( !InterlockedDecrement((volatile LONG *)ScreenElementsRoot_ + 1) )
    {
      if ( v10 )
        (**(void (__thiscall ***)(NiScreenElements *, int))v10)(v10, 1);
    }
    ScreenElementsRoot_ = 0;
  }
  if ( dword_B34D90 )
  {
    if ( !*(_BYTE *)(dword_B34D90 + 4) )
    {
      v11 = dword_B34D90;
      sub_4946B0((_DWORD *)dword_B34D90);
      FormHeapFree(v11);
    }
  }
  for ( i = 0; i < 3; ++i )
  {
    v13 = dword_B39548[i];
    if ( v13 )
    {
      GameSetting_destr((int *)dword_B39548[i]);
      FormHeapFree(v13);
    }
  }
  for ( j = 0; j < 0xEE; ++j )
  {
    v15 = dword_B39578[j];
    if ( v15 )
    {
      v16 = *(_DWORD *)(v15 + 4);
      if ( v16 )
        NiTMap_RemoveAt(&dword_B35574, v16);
      v17 = *(_BYTE **)(v15 + 4);
      if ( v17 )
      {
        if ( *v17 == 0x53 )
          FormHeapFree((unsigned int)v17);
      }
      FormHeapFree(v15);
    }
  }
  for ( k = 0; k < 9; ++k )
  {
    v19 = dword_B39554[k];
    if ( v19 )
    {
      v20 = *(_DWORD *)(v19 + 4);
      if ( v20 )
        NiTMap_RemoveAt(&dword_B35574, v20);
      v21 = *(_BYTE **)(v19 + 4);
      if ( v21 )
      {
        if ( *v21 == 0x53 )
          FormHeapFree((unsigned int)v21);
      }
      FormHeapFree(v19);
    }
  }
  for ( m = 0; m < 8; ++m )
  {
    v23 = dword_B39930[m];
    if ( v23 )
    {
      v24 = *(_DWORD *)(v23 + 4);
      if ( v24 )
        NiTMap_RemoveAt(&dword_B35574, v24);
      v25 = *(_BYTE **)(v23 + 4);
      if ( v25 )
      {
        if ( *v25 == 0x53 )
          FormHeapFree((unsigned int)v25);
      }
      FormHeapFree(v23);
    }
  }
  for ( n = 0; n < 0x1D; ++n )
  {
    v27 = dword_B399D0[n];
    if ( v27 )
    {
      v28 = *(_DWORD *)(v27 + 4);
      if ( v28 )
        NiTMap_RemoveAt(&dword_B35574, v28);
      v29 = *(_BYTE **)(v27 + 4);
      if ( v29 )
      {
        if ( *v29 == 0x53 )
          FormHeapFree((unsigned int)v29);
      }
      FormHeapFree(v27);
    }
  }
  for ( ii = 0; ii < 6; ++ii )
  {
    v31 = dword_B39A44[ii];
    if ( v31 )
    {
      v32 = *(_DWORD *)(v31 + 4);
      if ( v32 )
        NiTMap_RemoveAt(&dword_B35574, v32);
      v33 = *(_BYTE **)(v31 + 4);
      if ( v33 )
      {
        if ( *v33 == 0x53 )
          FormHeapFree((unsigned int)v33);
      }
      FormHeapFree(v31);
    }
  }
  for ( jj = 0; jj < 0x14; ++jj )
  {
    v35 = dword_B39A60[jj];
    if ( v35 )
    {
      v36 = *(_DWORD *)(v35 + 4);
      if ( v36 )
        NiTMap_RemoveAt(&dword_B35574, v36);
      v37 = *(_BYTE **)(v35 + 4);
      if ( v37 )
      {
        if ( *v37 == 0x53 )
          FormHeapFree((unsigned int)v37);
      }
      FormHeapFree(v35);
    }
  }
  for ( kk = 0; kk < 0x1F; ++kk )
  {
    v39 = dword_B39950[kk];
    if ( v39 )
    {
      v40 = *(_DWORD *)(v39 + 4);
      if ( v40 )
        NiTMap_RemoveAt(&dword_B35574, v40);
      v41 = *(_BYTE **)(v39 + 4);
      if ( v41 )
      {
        if ( *v41 == 0x53 )
          FormHeapFree((unsigned int)v41);
      }
      FormHeapFree(v39);
    }
  }
  for ( mm = 0; mm < 6; ++mm )
  {
    v43 = dword_B39530[mm];
    if ( v43 )
    {
      v44 = *(_DWORD *)(v43 + 4);
      if ( v44 )
        NiTMap_RemoveAt(&dword_B35574, v44);
      v45 = *(_BYTE **)(v43 + 4);
      if ( v45 )
      {
        if ( *v45 == 0x53 )
          FormHeapFree((unsigned int)v45);
      }
      FormHeapFree(v43);
    }
  }
}
