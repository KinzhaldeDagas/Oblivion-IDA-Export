void __usercall sub_40D4D0(InputGlobal *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  NiDX9Renderer *v5; // edi
  void (__thiscall ***v6)(_DWORD, int); // esi
  GridCellArray *gridCellArray; // ecx
  ShaderDefinition *ShaderDefinition; // eax
  void *v9; // ecx
  int v10; // eax
  bool v11; // zf
  CHAR PathName[260]; // [esp+10h] [ebp-108h] BYREF

  nullsub_returnTrue_0arg();
  sub_7A99A0();
  v5 = g_Renderer;
  if ( byte_B34FA4 )
    sub_497C30();
  if ( !sub_572E30(2) )
  {
    dword_B33418 = 0;
LABEL_20:
    if ( byte_B33397 )
      goto LABEL_29;
    goto LABEL_21;
  }
  if ( ++dword_B33418 == 1 )
  {
    sub_440AF0((int)TES, a2, a3, (char)this, 0, 0, 0);
    sub_674500((int)&ActorProcessManager_ptr);
    goto LABEL_20;
  }
  if ( dword_B33418 != 0xA )
    goto LABEL_20;
  sub_572EC0(a2, a3, a4, (char)this, 2, 0);
  SaveLoad_CurrentSavegame->flags &= ~0x2000u;
  if ( (SaveLoad_CurrentSavegame->flags & 0x8000) != 0 )
  {
    SaveLoad_CurrentSavegame->flags &= ~0x8000u;
    sub_466B70(SaveLoad_CurrentSavegame);
  }
  if ( menuRenderedTexture )
  {
    sub_7C1EE0(g_textureManager, (BSRenderedTexture *)menuRenderedTexture);
    v6 = (void (__thiscall ***)(_DWORD, int))menuRenderedTexture;
    if ( menuRenderedTexture )
    {
      if ( !InterlockedDecrement((volatile LONG *)(menuRenderedTexture + 4)) )
      {
        if ( v6 )
          (**v6)(v6, 1);
      }
      menuRenderedTexture = 0;
    }
    if ( byte_B42D54 )
    {
      a4 = 0.0;
      flt_B42D50 = 0.0;
    }
    byte_B42D54 = 0;
  }
  byte_B33397 = 0;
LABEL_21:
  if ( GetOpenedMenuCode((char)this, a2, a3, a4) != 0x414
    && TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetNiNode(TESDataHandler_g_PlayerRef)
    && !sub_572DF0(2) )
  {
    if ( !TES->currentInteriorCell )
    {
      gridCellArray = TES->gridCellArray;
      if ( gridCellArray )
      {
        if ( byte_B06A28 )
          ShadowCanopyPass(gridCellArray);
      }
    }
    NiRenderer_Render((NiDX9Renderer *)this, 0);
    goto LABEL_41;
  }
LABEL_29:
  if ( menuRenderedTexture )
  {
    if ( ImageSpaceEffectEnabled )
    {
      if ( sub_572E70(2) )
        ShaderDefinition = GetShaderDefinition(0xCu);
      else
        ShaderDefinition = GetShaderDefinition(0x19u);
      if ( ShaderDefinition )
        sub_7B4900(ShaderDefinition->shader, v5, menuRenderedTexture, 0);
    }
    else
    {
      NiRenderer_BeginScene1(kClear_ALL, 0);
      if ( (v5->member.super.SceneState1 == 1 || v5->member.super.SceneState2 == 1) && v5->member.super.IsReady == 1 )
        v5->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v5, 0);
      sub_709C60(ScreenElementsRoot_);
    }
  }
LABEL_41:
  sub_7B8400();
  sub_579260(a2, a3, 0);
  if ( !InputGlobals::QueryControlState((InputGlobal *)this->joystickInterfaces[6], 0x1F, 1) )
    goto LABEL_51;
  LOBYTE(v10) = InputGlobals::QueryKeyboardState((InputGlobal *)this->joystickInterfaces[6], 0x9D, 0);
  if ( v10 )
  {
    v11 = byte_B333B9 == 0;
  }
  else
  {
    v11 = byte_B333B9 == 0;
    if ( !byte_B333B9 )
    {
      TakeScreenshot(0);
      goto LABEL_51;
    }
  }
  byte_B333B9 = v11;
  if ( v11 )
  {
    ++dword_B02D58;
    dword_B333C8 = 0;
    _sprintf(PathName, "%s%03d", off_B02D50[0], dword_B02D58);
    CreateDirectoryA(PathName, 0);
    if ( dword_B02D48 )
      g_FPSGlobal = 1000.0 / (double)(unsigned int)dword_B02D48;
    else
      g_FPSGlobal = 0.0;
  }
  else
  {
    g_FPSGlobal = 0.0;
  }
LABEL_51:
  if ( !sub_40FDA0(v9) )
  {
    if ( v5->member.super.SceneState1 )
      sub_7D7210();
  }
  sub_411100((int)g_worldScenegraph);
  nullsub_returnTrue_0arg();
}
