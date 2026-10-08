void __usercall LoadingMenu::~LoadingMenu(LoadingMenu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // edi
  OSGlobals *v6; // eax
  int sound; // ecx
  int v8; // eax
  NiDX9Renderer *v9; // ebx
  BSShaderAccumulator *Global; // eax
  volatile LONG *accumulator; // edi
  NiAccumulator *v12; // ebp

  *(_DWORD *)this = &LoadingMenu::`vftable'; /*0x5adbeb*/
  *((_DWORD *)this + 0xF) = 0x64; /*0x5adbf7*/
  if ( !sub_40FDA0(this) ) /*0x5adbfe*/
    sub_5ADB40(a2, a4); /*0x5adc07*/
  sub_583DF0(0xFF); /*0x5adc11*/
  if ( *((_DWORD *)this + 0x14) ) /*0x5adc19*/
  {
    do /*0x5adc34*/
    {
      v5 = *(_DWORD *)(*((_DWORD *)this + 0x14) + 4); /*0x5adc23*/
      FormHeapFree(*((_DWORD *)this + 0x14)); /*0x5adc27*/
      *((_DWORD *)this + 0x14) = v5; /*0x5adc31*/
    }
    while ( v5 ); /*0x5adc34*/
  }
  *((_DWORD *)this + 0x13) = 0; /*0x5adc36*/
  FormHeapFree(*((_DWORD *)this + 0x15)); /*0x5adc3d*/
  v6 = MEMORY[0xB33398]; /*0x5adc42*/
  unk_B3A6D3 = 0; /*0x5adc47*/
  sound = (int)v6->sound; /*0x5adc4d*/
  if ( sound ) /*0x5adc55*/
  {
    if ( !MEMORY[0xB33428] || (v8 = *(_DWORD *)(MEMORY[0xB33428] + 0x20)) == 0 || v8 == 2 ) /*0x5adc6f*/
      sub_6A9C00(sound); /*0x5adc71*/
  }
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x5adc78*/
  v9 = renderer; /*0x5adc7d*/
  Global = BSShaderAccumulator_GetOrCreateGlobal(); /*0x5adc86*/
  accumulator = (volatile LONG *)v9->member.super.accumulator; /*0x5adc8b*/
  v12 = Global; /*0x5adc8e*/
  if ( accumulator != (volatile LONG *)Global ) /*0x5adc92*/
  {
    if ( accumulator ) /*0x5adc96*/
    {
      if ( !InterlockedDecrement(accumulator + 1) ) /*0x5adc9c*/
        (**(void (__thiscall ***)(volatile LONG *, int))accumulator)(accumulator, 1); /*0x5adcb2*/
    }
    v9->member.super.accumulator = v12; /*0x5adcb6*/
    if ( v12 ) /*0x5adcb9*/
      a4 = ((double (__stdcall *)(char *))InterlockedIncrement)((char *)v12 + 4); /*0x5adcbf*/
  }
  Menu::~Menu((Menu *)this, a2, a3, a4); /*0x5adccf*/
}
