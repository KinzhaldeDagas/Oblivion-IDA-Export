InterfaceManager *__thiscall InitializeInterfaceManager(InterfaceManager *this)
{
  double v2; // st7
  volatile LONG *unk078; // edi
  volatile LONG *v4; // edi
  double v5; // st7
  bool v6; // zf
  NiObjectNET *v7; // eax
  NiObjectNET *v8; // edi
  volatile LONG *v9; // ebp
  volatile LONG *v10; // edi
  NiNode *v11; // eax
  SceneGraph *unk004; // edi
  SceneGraph *v13; // ebp
  SceneGraph *v14; // eax
  SceneGraph *unk000; // edi
  SceneGraph *v16; // ebp
  _BYTE *v17; // eax
  _BYTE *v18; // eax
  int v19; // eax
  double v20; // st7
  float v22; // [esp+14h] [ebp-20h]
  float v23; // [esp+14h] [ebp-20h]
  float v24; // [esp+14h] [ebp-20h]
  float v25; // [esp+20h] [ebp-14h]
  float v26; // [esp+20h] [ebp-14h]
  float v27; // [esp+20h] [ebp-14h]

  this->unk000 = 0;
  this->unk004 = 0;
  this->unk078 = 0;
  v2 = 0.0;
  this->unk054[0] = 0;
  *(float *)&this->unk074 = 0.0;
  *(float *)&this->unk0C0[4] = 0.0;
  *(float *)&this->unk0C0[5] = 0.0;
  this->unk054[1] = 0;
  this->unk054[2] = 0;
  this->unk054[3] = 0;
  this->menuRoot = 0;
  this->unk070 = 0;
  *(float *)&this->unk0C0[6] = 0.0;
  LOBYTE(this->unk0C0[7]) = 0;
  this->unk0C0[2] = 0;
  this->unk0C0[3] = 0;
  this->debugSelection = 0;
  this->unk0C0[0] = 0;
  this->unk0C0[1] = 0;
  this->unk018 = 0;
  LOBYTE(this->unk008[0]) = 1;
  BYTE1(this->unk008[0]) = 0;
  BYTE2(this->unk008[0]) = 0xFF;
  HIBYTE(this->unk008[0]) = 0xFF;
  LOBYTE(this->unk008[1]) = 0xFF;
  BYTE1(this->unk008[1]) = 0xFF;
  HIWORD(this->unk07C) = 0;
  this->altActiveTile = 0;
  this->activeTile = 0;
  this->activeMenu = 0;
  this->unk0A0 = 0;
  this->unk0A4 = 0;
  unk078 = (volatile LONG *)this->unk078;
  if ( unk078 )
  {
    if ( !InterlockedDecrement(unk078 + 1) )
      (**(void (__thiscall ***)(void *, int))unk078)((void *)unk078, 1);
    v2 = 0.0;
    this->unk078 = 0;
  }
  *(float *)&this->unk020[6] = v2;
  this->unk008[2] = 0x50;
  v4 = (volatile LONG *)this->unk078;
  if ( v4 )
  {
    if ( !InterlockedDecrement(v4 + 1) )
      (**(void (__thiscall ***)(void *, int))v4)((void *)v4, 1);
    v2 = 0.0;
    this->unk078 = 0;
  }
  *(float *)&this->unk020[7] = v2;
  this->unk0C0[0x13] = 0;
  this->cursor = 0;
  LOBYTE(this->unk0C0[0x15]) = 0;
  this->unk0C0[0x16] = 0;
  this->unk0C0[0x17] = 0;
  this->unk0C0[0x18] = 0;
  this->unk0C0[0x1A] = 0;
  this->hudReticule = 0;
  this->unk084 = 0;
  LOBYTE(this->unk0A8) = 0;
  this->msgBoxButtonPressed = 0xFF;
  this->unk0B4 = 0;
  LOBYTE(this->unk0B8) = 0;
  BYTE1(this->unk0B8) = 1;
  this->unk08C = 0x64;
  LOBYTE(this->unk094) = 0;
  this->unk0C0[8] = 0;
  this->unk0C0[9] = 0;
  this->unk0C0[0xA] = 0;
  this->unk0C0[0xB] = 0;
  this->unk0C0[0xC] = 0;
  this->unk0C0[0xD] = 0;
  this->unk0C0[0xE] = 0;
  this->unk0C0[0xF] = 0;
  this->unk0C0[0x10] = 0;
  this->unk0C0[0x11] = 0;
  v22 = (float)nWidth;
  v25 = (float)nHeight;
  if ( v25 >= (double)v22 )
    v5 = flt_A688A8;
  else
    v5 = v22 / v25 * dbl_A68D70;
  v23 = v5;
  v26 = sin(dbl_A690D0);
  v24 = v23 * dbl_A2FAA0 / v26;
  v27 = cos(dbl_A690D0);
  v6 = this->unk078 == 0;
  *(float *)&this->unk074 = v27 * v24;
  if ( v6 )
  {
    v7 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
    v8 = v7;
    if ( v7 )
    {
      NiObjectNET::NiObjectNET(v7);
      v8->vtbl = (NiObjectVtbl **)&NiAlphaProperty::`vftable';
      LOWORD(v8[1].vtbl) = 0xEC;
      BYTE2(v8[1].vtbl) = 0;
      v9 = (volatile LONG *)v8;
    }
    else
    {
      v9 = 0;
    }
    v10 = (volatile LONG *)this->unk078;
    if ( v10 != v9 )
    {
      if ( v10 )
      {
        if ( !InterlockedDecrement(v10 + 1) )
          (**(void (__thiscall ***)(void *, int))v10)((void *)v10, 1);
      }
      this->unk078 = (void *)v9;
      if ( v9 )
        InterlockedIncrement(v9 + 1);
    }
    *((_WORD *)this->unk078 + 0xC) |= 1u;
    *((_WORD *)this->unk078 + 0xC) &= ~0x2000u;
  }
  v11 = sub_57ED20(this, (NiNode *)g_Interface3DScenegraph, "Menu3DRoot", 1);
  unk004 = this->unk004;
  v13 = (SceneGraph *)v11;
  if ( unk004 != (SceneGraph *)v11 )
  {
    if ( unk004 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&unk004->super) )
        (*(void (__thiscall **)(SceneGraph *, int))unk004->vftable)(unk004, 1);
    }
    this->unk004 = v13;
    if ( v13 )
      InterlockedIncrement((volatile LONG *)&v13->super);
  }
  v14 = (SceneGraph *)sub_57ED20(this, (NiNode *)g_InterfaceScenegraph, "MenuRoot", 0);
  unk000 = this->unk000;
  v16 = v14;
  if ( this->unk000 != v14 )
  {
    if ( unk000 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&unk000->super) )
        (*(void (__thiscall **)(SceneGraph *, int))unk000->vftable)(unk000, 1);
    }
    this->unk000 = v16;
    if ( v16 )
      InterlockedIncrement((volatile LONG *)&v16->super);
  }
  FontManager_GetSingleton();
  Menu_GetB3A708(1);
  sub_5888A0();
  v17 = (_BYTE *)FormHeapAlloc(0xCu);
  if ( v17 )
    v18 = sub_538B20(v17);
  else
    v18 = 0;
  this->unk0C0[0x12] = (UInt32)v18;
  v19 = FormHeapAlloc(0x14u);
  if ( v19 )
  {
    *(_DWORD *)(v19 + 0xC) = 0;
    *(float *)(v19 + 4) = 0.0;
    *(_DWORD *)(v19 + 0x10) = 0;
    v20 = flt_A37080;
    *(_DWORD *)v19 = 0;
    *(float *)(v19 + 8) = v20;
  }
  else
  {
    v19 = 0;
  }
  this->unk0C0[0x1C] = v19;
  *(_DWORD *)(v19 + 0xC) = v19;
  this->unk0C0[0x13] = 0;
  this->unk0C0[0x14] = 0;
  return this;
}
