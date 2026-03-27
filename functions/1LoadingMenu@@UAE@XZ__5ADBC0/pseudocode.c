void __usercall LoadingMenu::~LoadingMenu(LoadingMenu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // edi
  OSGlobals *v6; // eax
  int sound; // ecx
  int v8; // eax
  double v9; // st7
  NiDX9Renderer *v10; // ebx
  BSShaderAccumulator *inited; // eax
  volatile LONG *accumulator; // edi
  NiAccumulator *v13; // ebp

  *(_DWORD *)this = &LoadingMenu::`vftable';
  *((_DWORD *)this + 0xF) = 0x64;
  if ( !sub_40FDA0(this) )
    sub_5ADB40(a2, a4);
  sub_583DF0(0xFF);
  if ( *((_DWORD *)this + 0x14) )
  {
    do
    {
      v5 = *(_DWORD *)(*((_DWORD *)this + 0x14) + 4);
      FormHeapFree(*((_DWORD *)this + 0x14));
      *((_DWORD *)this + 0x14) = v5;
    }
    while ( v5 );
  }
  *((_DWORD *)this + 0x13) = 0;
  FormHeapFree(*((_DWORD *)this + 0x15));
  v6 = OSGlobals;
  byte_B3A6D3 = 0;
  sound = (int)v6->sound;
  if ( sound )
  {
    if ( !ObjectPtr || (v8 = *(_DWORD *)(ObjectPtr + 0x20)) == 0 || v8 == 2 )
      sub_6A9C00(sound);
  }
  v9 = nullsub_returnTrue_0arg();
  v10 = g_Renderer;
  inited = InitBSShaderAccumulator();
  accumulator = (volatile LONG *)v10->member.super.accumulator;
  v13 = inited;
  if ( accumulator != (volatile LONG *)inited )
  {
    if ( accumulator )
    {
      if ( !InterlockedDecrement(accumulator + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))accumulator)(accumulator, 1);
    }
    v10->member.super.accumulator = v13;
    if ( v13 )
      v9 = ((double (__stdcall *)(char *))InterlockedIncrement)((char *)v13 + 4);
  }
  Menu::~Menu((Menu *)this, a2, a3, v9);
}
