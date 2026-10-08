// [Controller decode 2026-07-09] Non-player QueryControlState consumer: special control 31 SysRq/PrintScreen screenshot edge.
void __usercall sub_40D4D0(
        InputGlobal *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        double a5@<st7>,
        double a6@<st6>,
        double a7@<st5>,
        double a8@<st4>,
        double a9@<st3>)
{
  NiDX9Renderer *v10; // edi
  void (__thiscall ***v11)(_DWORD, int); // esi
  GridCellArray *gridCellArray; // ecx
  ShaderDefinition *ShaderDefinition; // eax
  void *v14; // ecx
  int v15; // eax
  bool v16; // zf
  CHAR PathName[260]; // [esp+10h] [ebp-108h] BYREF

  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x40d4eb*/
  sub_7A99A0(); /*0x40d4f3*/
  v10 = renderer; /*0x40d4f8*/
  if ( MEMORY[0xB34FA4] ) /*0x40d506*/
    Renderer_ApplyPendingGammaRamp(); /*0x40d508*/
  if ( !sub_572E30(2) ) /*0x40d51c*/
  {
    unk_B33418 = 0; /*0x40d5f8*/
LABEL_20:
    if ( unk_B33397 ) /*0x40d604*/
      goto LABEL_29; /*0x40d604*/
    goto LABEL_21; /*0x40d604*/
  }
  if ( ++unk_B33418 == 1 ) /*0x40d532*/
  {
    sub_440AF0((int)MEMORY[0xB333A0], a2, a3, (char)this, 0, 0, 0); /*0x40d5e7*/
    sub_674500((int)&MEMORY[0xB3BD00], a4); /*0x40d5f1*/
    goto LABEL_20; /*0x40d5f6*/
  }
  if ( unk_B33418 != 0xA ) /*0x40d53b*/
    goto LABEL_20; /*0x40d53b*/
  sub_572EC0(a2, a3, a4, (char)this, 2, 0); /*0x40d54a*/
  g_TESSaveLoadGame->flags &= ~0x2000u; /*0x40d554*/
  if ( (g_TESSaveLoadGame->flags & 0x8000) != 0 ) /*0x40d569*/
  {
    g_TESSaveLoadGame->flags &= ~0x8000u; /*0x40d56b*/
    sub_466B70((int)g_TESSaveLoadGame, a5, a6, a7, a8, a9, a2, a3); /*0x40d578*/
  }
  if ( texture ) /*0x40d584*/
  {
    BSTextureManager__ReturnRenderedTexture(MEMORY[0xB42F50], (BSRenderedTexture *)texture); /*0x40d58e*/
    v11 = (void (__thiscall ***)(_DWORD, int))texture; /*0x40d593*/
    if ( texture ) /*0x40d59b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(texture + 4)) ) /*0x40d5a1*/
      {
        if ( v11 ) /*0x40d5ad*/
          (**v11)(v11, 1); /*0x40d5b7*/
      }
      texture = 0; /*0x40d5b9*/
    }
    if ( unk_B42D54 ) /*0x40d5c6*/
      unk_B42D50 = 0.0; /*0x40d5ca*/
    unk_B42D54 = 0; /*0x40d5d0*/
  }
  unk_B33397 = 0; /*0x40d5d6*/
LABEL_21:
  if ( GetOpenedMenuCode() != 0x414 && reference->vtbl->super.super.super.GetNiNode(reference) && !sub_572DF0(2) ) /*0x40d62e*/
  {
    if ( !MEMORY[0xB333A0]->currentInteriorCell ) /*0x40d63c*/
    {
      gridCellArray = MEMORY[0xB333A0]->gridCellArray; /*0x40d641*/
      if ( gridCellArray ) /*0x40d646*/
      {
        if ( g_bCanopyShadowMapPending ) /*0x40d64e*/
          ShadowCanopyPass(gridCellArray);      // Outer frame path invokes ShadowCanopyPass when the native canopy shadow-map latch is pending. /*0x40d650*/
      }
    }
    NiRenderer_Render((NiDX9Renderer *)this, 0); /*0x40d658*/
    goto LABEL_41; /*0x40d65d*/
  }
LABEL_29:
  if ( texture ) /*0x40d668*/
  {
    if ( MEMORY[0xB42F3E] ) /*0x40d674*/
    {
      if ( sub_572E70(2) ) /*0x40d67e*/
        ShaderDefinition = GetShaderDefinition(0xCu); /*0x40d689*/
      else
        ShaderDefinition = GetShaderDefinition(0x19u); /*0x40d68d*/
      if ( ShaderDefinition ) /*0x40d697*/
        sub_7B4900(ShaderDefinition->shader, v10, texture, 0); /*0x40d6a6*/
    }
    else
    {
      NiRenderer_BeginScene1(kClear_ALL, 0); /*0x40d6b3*/
      if ( (v10->member.super.SceneState1 == 1 || v10->member.super.SceneState2 == 1) && v10->member.super.IsReady == 1 ) /*0x40d6d6*/
        v10->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v10, 0); /*0x40d6e3*/
      sub_709C60(MEMORY[0xB333EC]); /*0x40d6ec*/
    }
  }
LABEL_41:
  sub_7B8400(); /*0x40d6f1*/
  sub_579260(a2, a3, 0); /*0x40d6f7*/
  if ( !InputGlobals::QueryControlState((InputGlobal *)this->joystickInterfaces[6], 0x1F, 1) ) /*0x40d70d*/
    goto LABEL_51; /*0x40d70d*/
  LOBYTE(v15) = InputGlobals::QueryKeyboardState((InputGlobal *)this->joystickInterfaces[6], 0x9D, 0); /*0x40d71c*/
  if ( v15 ) /*0x40d728*/
  {
    v16 = unk_B333B9 == 0; /*0x40d73c*/
  }
  else
  {
    v16 = unk_B333B9 == 0; /*0x40d72a*/
    if ( !unk_B333B9 ) /*0x40d72c*/
    {
      TakeScreenshot(0); /*0x40d72f*/
      goto LABEL_51; /*0x40d737*/
    }
  }
  unk_B333B9 = v16; /*0x40d743*/
  if ( v16 ) /*0x40d748*/
  {
    ++dword_B02D58; /*0x40d753*/
    unk_B333C8 = 0; /*0x40d768*/
    _sprintf(PathName, "%s%03d", off_B02D50[0], dword_B02D58); /*0x40d76e*/
    CreateDirectoryA(PathName, 0); /*0x40d77c*/
    if ( dword_B02D48 ) /*0x40d789*/
      MEMORY[0xB33E94] = 1000.0 / (double)(unsigned int)dword_B02D48; /*0x40d7a3*/
    else
      MEMORY[0xB33E94] = 0.0; /*0x40d7ad*/
  }
  else
  {
    MEMORY[0xB33E94] = 0.0; /*0x40d7b7*/
  }
LABEL_51:
  if ( !sub_40FDA0(v14) ) /*0x40d7bd*/
  {
    if ( v10->member.super.SceneState1 ) /*0x40d7c6*/
      sub_7D7210(); /*0x40d7ce*/
  }
  sub_411100((int)g_WorldSceneReceiverRoot); /*0x40d7d9*/
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x40d7e0*/
}
