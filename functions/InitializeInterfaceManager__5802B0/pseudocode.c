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

  this->unk000 = 0; /*0x5802df*/
  this->unk004 = 0; /*0x5802e5*/
  this->unk078 = 0; /*0x5802e8*/
  v2 = 0.0; /*0x5802eb*/
  this->unk054[0] = 0; /*0x5802f1*/
  *(float *)&this->unk074 = 0.0; /*0x580308*/
  *(float *)&this->unk0C0[4] = 0.0; /*0x58030b*/
  *(float *)&this->unk0C0[5] = 0.0; /*0x580311*/
  this->unk054[1] = 0; /*0x580317*/
  this->unk054[2] = 0; /*0x58031a*/
  this->unk054[3] = 0; /*0x58031d*/
  this->menuRoot = 0; /*0x580320*/
  this->unk070 = 0; /*0x580323*/
  *(float *)&this->unk0C0[6] = 0.0; /*0x580326*/
  LOBYTE(this->unk0C0[7]) = 0; /*0x58032c*/
  this->unk0C0[2] = 0; /*0x580332*/
  this->unk0C0[3] = 0; /*0x580338*/
  this->debugSelection = 0; /*0x58033e*/
  this->unk0C0[0] = 0; /*0x580344*/
  this->unk0C0[1] = 0; /*0x58034a*/
  this->unk018 = 0; /*0x580350*/
  LOBYTE(this->unk008[0]) = 1; /*0x580353*/
  BYTE1(this->unk008[0]) = 0; /*0x580357*/
  BYTE2(this->unk008[0]) = 0xFF; /*0x58035a*/
  HIBYTE(this->unk008[0]) = 0xFF; /*0x58035e*/
  LOBYTE(this->unk008[1]) = 0xFF; /*0x580362*/
  BYTE1(this->unk008[1]) = 0xFF; /*0x580366*/
  HIWORD(this->unk07C) = 0; /*0x58036a*/
  this->altActiveTile = 0; /*0x58036e*/
  this->activeTile = 0; /*0x580374*/
  this->activeMenu = 0; /*0x58037a*/
  this->unk0A0 = 0; /*0x580380*/
  this->unk0A4 = 0; /*0x580386*/
  unk078 = (volatile LONG *)this->unk078; /*0x58038c*/
  if ( unk078 ) /*0x580396*/
  {
    if ( !InterlockedDecrement(unk078 + 1) ) /*0x58039e*/
      (**(void (__thiscall ***)(void *, int))unk078)((void *)unk078, 1); /*0x5803b4*/
    v2 = 0.0; /*0x5803b6*/
    this->unk078 = 0; /*0x5803b8*/
  }
  *(float *)&this->unk020[6] = v2; /*0x5803bb*/
  this->unk008[2] = 0x50; /*0x5803be*/
  v4 = (volatile LONG *)this->unk078; /*0x5803c5*/
  if ( v4 ) /*0x5803ca*/
  {
    if ( !InterlockedDecrement(v4 + 1) ) /*0x5803d2*/
      (**(void (__thiscall ***)(void *, int))v4)((void *)v4, 1); /*0x5803e8*/
    v2 = 0.0; /*0x5803ea*/
    this->unk078 = 0; /*0x5803ec*/
  }
  *(float *)&this->unk020[7] = v2; /*0x5803ef*/
  this->unk0C0[0x13] = 0; /*0x5803f2*/
  this->cursor = 0; /*0x5803f8*/
  LOBYTE(this->unk0C0[0x15]) = 0; /*0x5803fb*/
  this->unk0C0[0x16] = 0; /*0x580401*/
  this->unk0C0[0x17] = 0; /*0x580407*/
  this->unk0C0[0x18] = 0; /*0x58040d*/
  this->unk0C0[0x1A] = 0; /*0x580413*/
  this->hudReticule = 0; /*0x580419*/
  this->unk084 = 0; /*0x58041f*/
  LOBYTE(this->unk0A8) = 0; /*0x580425*/
  this->msgBoxButtonPressed = 0xFF; /*0x58042b*/
  this->unk0B4 = 0; /*0x580432*/
  LOBYTE(this->unk0B8) = 0; /*0x580438*/
  BYTE1(this->unk0B8) = 1; /*0x58043e*/
  this->unk08C = 0x64; /*0x580445*/
  LOBYTE(this->unk094) = 0; /*0x58044f*/
  this->unk0C0[8] = 0; /*0x580455*/
  this->unk0C0[9] = 0; /*0x58045b*/
  this->unk0C0[0xA] = 0; /*0x580461*/
  this->unk0C0[0xB] = 0; /*0x580467*/
  this->unk0C0[0xC] = 0; /*0x58046d*/
  this->unk0C0[0xD] = 0; /*0x580473*/
  this->unk0C0[0xE] = 0; /*0x580479*/
  this->unk0C0[0xF] = 0; /*0x58047f*/
  this->unk0C0[0x10] = 0; /*0x580485*/
  this->unk0C0[0x11] = 0; /*0x58048b*/
  v22 = (float)nWidth; /*0x580497*/
  v25 = (float)nHeight; /*0x5804a1*/
  if ( v25 >= (double)v22 ) /*0x5804b4*/
    v5 = flt_A688A8; /*0x5804c4*/
  else
    v5 = v22 / v25 * dbl_A68D70; /*0x5804b8*/
  v23 = v5; /*0x5804ca*/
  v26 = sin(dbl_A690D0); /*0x5804e7*/
  v24 = v23 * dbl_A2FAA0 / v26; /*0x5804f3*/
  v27 = cos(dbl_A690D0); /*0x580502*/
  v6 = this->unk078 == 0; /*0x580506*/
  *(float *)&this->unk074 = v27 * v24; /*0x580511*/
  if ( v6 ) /*0x580514*/
  {
    v7 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x58051c*/
    v8 = v7; /*0x580521*/
    if ( v7 ) /*0x580531*/
    {
      NiObjectNET::NiObjectNET(v7); /*0x580535*/
      v8->vtbl = (NiObjectVtbl **)&NiAlphaProperty::`vftable'; /*0x58053a*/
      LOWORD(v8[1].vtbl) = 0xEC; /*0x580540*/
      BYTE2(v8[1].vtbl) = 0; /*0x580546*/
      v9 = (volatile LONG *)v8; /*0x580549*/
    }
    else
    {
      v9 = 0; /*0x58054d*/
    }
    v10 = (volatile LONG *)this->unk078; /*0x58054f*/
    if ( v10 != v9 ) /*0x580559*/
    {
      if ( v10 ) /*0x58055d*/
      {
        if ( !InterlockedDecrement(v10 + 1) ) /*0x580563*/
          (**(void (__thiscall ***)(void *, int))v10)((void *)v10, 1); /*0x580579*/
      }
      this->unk078 = (void *)v9; /*0x58057d*/
      if ( v9 ) /*0x580580*/
        InterlockedIncrement(v9 + 1); /*0x580586*/
    }
    *((_WORD *)this->unk078 + 0xC) |= 1u; /*0x58058f*/
    *((_WORD *)this->unk078 + 0xC) &= ~0x2000u; /*0x580597*/
  }
  v11 = InterfaceManager_CreateSceneGraph(this, (NiNode *)MEMORY[0xB333D4], "Menu3DRoot", 1); /*0x5805ad*/
  unk004 = this->unk004; /*0x5805b2*/
  v13 = (SceneGraph *)v11; /*0x5805b5*/
  if ( unk004 != (SceneGraph *)v11 ) /*0x5805b9*/
  {
    if ( unk004 ) /*0x5805bd*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&unk004->super) ) /*0x5805c3*/
        (*(void (__thiscall **)(SceneGraph *, int))unk004->vftable)(unk004, 1); /*0x5805d9*/
    }
    this->unk004 = v13; /*0x5805dd*/
    if ( v13 ) /*0x5805e0*/
      InterlockedIncrement((volatile LONG *)&v13->super); /*0x5805e6*/
  }
  v14 = (SceneGraph *)InterfaceManager_CreateSceneGraph(this, (NiNode *)MEMORY[0xB333D0], "MenuRoot", 0); /*0x5805fa*/
  unk000 = this->unk000; /*0x5805ff*/
  v16 = v14; /*0x580601*/
  if ( this->unk000 != v14 ) /*0x580605*/
  {
    if ( unk000 ) /*0x580609*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&unk000->super) ) /*0x58060f*/
        (*(void (__thiscall **)(SceneGraph *, int))unk000->vftable)(unk000, 1); /*0x580625*/
    }
    this->unk000 = v16; /*0x580629*/
    if ( v16 ) /*0x58062b*/
      InterlockedIncrement((volatile LONG *)&v16->super); /*0x580631*/
  }
  FontManager_GetSingleton(); /*0x580637*/
  Menu_GetB3A708(1); /*0x58063e*/
  sub_5888A0(); /*0x580643*/
  v17 = (_BYTE *)FormHeapAlloc(0xCu); /*0x58064a*/
  if ( v17 ) /*0x58065d*/
    v18 = sub_538B20(v17); /*0x580661*/
  else
    v18 = 0; /*0x580668*/
  this->unk0C0[0x12] = (UInt32)v18; /*0x580671*/
  v19 = FormHeapAlloc(0x14u); /*0x580677*/
  if ( v19 ) /*0x580681*/
  {
    *(_DWORD *)(v19 + 0xC) = 0; /*0x580685*/
    *(float *)(v19 + 4) = 0.0; /*0x580688*/
    *(_DWORD *)(v19 + 0x10) = 0; /*0x58068b*/
    v20 = flt_A37080; /*0x58068e*/
    *(_DWORD *)v19 = 0; /*0x580694*/
    *(float *)(v19 + 8) = v20; /*0x580696*/
  }
  else
  {
    v19 = 0; /*0x58069b*/
  }
  this->unk0C0[0x1C] = v19; /*0x58069d*/
  *(_DWORD *)(v19 + 0xC) = v19; /*0x5806a3*/
  this->unk0C0[0x13] = 0; /*0x5806a6*/
  this->unk0C0[0x14] = 0; /*0x5806ac*/
  return this; /*0x5806b4*/
}
