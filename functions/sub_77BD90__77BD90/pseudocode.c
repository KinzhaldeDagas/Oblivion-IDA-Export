void sub_77BD90()
{
  void *v0; // esi
  HMODULE v1; // eax
  TESObjectCELL *v2; // eax
  bool v3; // zf
  TESObjectCELL *v4; // eax
  TESObjectCELL *v5; // eax

  if ( unk_B4288C ) /*0x77bd93*/
  {
    v2 = (TESObjectCELL *)unk_B428C8; /*0x77bd9f*/
    v3 = unk_B428C8 == 0; /*0x77bda4*/
    unk_B4288C = 0; /*0x77bda6*/
    if ( !v3 ) /*0x77bdac*/
    {
      sub_77EE20(v2); /*0x77bdaf*/
      if ( unk_B428C8 ) /*0x77bdb4*/
        (**(void (__thiscall ***)(int, int))unk_B428C8)(unk_B428C8, 1); /*0x77bdc7*/
    }
    v4 = (TESObjectCELL *)unk_B428D0; /*0x77bdc9*/
    v3 = unk_B428D0 == 0; /*0x77bdce*/
    unk_B428C8 = 0; /*0x77bdd0*/
    if ( !v3 ) /*0x77bdd6*/
    {
      sub_77EE20(v4); /*0x77bdd9*/
      if ( unk_B428D0 ) /*0x77bdde*/
        (**(void (__thiscall ***)(int, int))unk_B428D0)(unk_B428D0, 1); /*0x77bdf1*/
    }
    v5 = (TESObjectCELL *)unk_B428CC; /*0x77bdf3*/
    v3 = unk_B428CC == 0; /*0x77bdf8*/
    unk_B428D0 = 0; /*0x77bdfa*/
    if ( !v3 ) /*0x77be00*/
    {
      sub_77EE20(v5); /*0x77be03*/
      if ( unk_B428CC ) /*0x77be08*/
        (**(void (__thiscall ***)(int, int))unk_B428CC)(unk_B428CC, 1); /*0x77be1b*/
    }
    unk_B428CC = 0; /*0x77be1e*/
    sub_77F7E0(0); /*0x77be24*/
    sub_77EEB0(); /*0x77be2c*/
    sub_77C270(); /*0x77be31*/
    sub_76F900(); /*0x77be36*/
    sub_7797C0(); /*0x77be3b*/
    sub_772B20(); /*0x77be40*/
    sub_773580(); /*0x77be45*/
    if ( g_Direct3D9 ) /*0x7645c0*/
    {
      ((void (__cdecl *)(IDirect3D9 *))g_Direct3D9->lpVtbl->Release)(g_Direct3D9); /*0x7645cf*/
      g_Direct3D9 = 0; /*0x7645d1*/
    }
    v0 = g_NiDX9AdapterDescArray; /*0x7645e4*/
    if ( g_NiDX9AdapterDescArray ) /*0x7645db*/
    {
      sub_775F10(g_NiDX9AdapterDescArray); /*0x7645e8*/
      FormHeapFree((unsigned int)v0); /*0x7645ee*/
    }
    v1 = g_D3D9Module; /*0x7645f6*/
    v3 = g_D3D9Module == 0; /*0x7645fb*/
    g_NiDX9AdapterDescArray = 0; /*0x7645fd*/
    if ( !v3 ) /*0x764608*/
      FreeLibrary(v1); /*0x76460b*/
    g_Direct3DCreate9 = 0; /*0x764611*/
    NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)&off_B28E00); /*0x764620*/
  }
}
