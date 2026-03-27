void __usercall sub_497E70(char a1@<bpl>, double a2@<st2>, double a3@<st1>)
{
  BSShaderAccumulator *inited; // eax
  int v4; // ecx
  double v5; // st7
  int v6; // esi
  _DWORD *v7; // edi
  HWND window; // esi
  LONG v9; // eax
  LONG v10; // ecx
  LONG WindowLongA; // eax
  _DWORD *v12; // eax
  BSShaderAccumulator *v13; // eax
  NiDX9Renderer *v14; // ecx
  HWND v15; // [esp-8h] [ebp-38h]
  DWORD ClassLongA; // [esp-4h] [ebp-34h]
  struct tagRECT Rect; // [esp+14h] [ebp-1Ch] BYREF
  unsigned int v18; // [esp+2Ch] [ebp-4h]

  if ( dword_B350D8 )
  {
    if ( dword_B350CC )
    {
      if ( dword_B350D0 )
      {
        inited = InitBSShaderAccumulator();
        sub_7A9CF0(inited);
        v4 = dword_B350D0;
        v5 = (double)dword_B350D0 / (double)dword_B350CC;
        dword_B06C5C = dword_B350CC;
        dword_B06C64 = v4;
        byte_B350D7 = 0;
        if ( v5 != dbl_A31C70 )
          byte_B350D7 = 1;
        sub_410B00();
        sub_578EF0(a1, a2, a3, v5);
        sub_405B00();
        Interface3dScenegraph_Destructor();
        v6 = *(_DWORD *)(dword_B350D8 + 8);
        v7 = (_DWORD *)(dword_B350D8 + 8);
        if ( v6 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
            (**(void (__thiscall ***)(int, int))v6)(v6, 1);
          *v7 = 0;
        }
        if ( sub_76B090((unsigned __int16 *)dword_B350D8, dword_B350CC, dword_B350D0) )
        {
          window = OSGlobals->window;
          v9 = dword_B06C5C;
          v10 = dword_B06C64;
          v15 = hWnd;
          Rect.left = 0;
          Rect.top = 0;
          Rect.right = v9;
          Rect.bottom = v10;
          ClassLongA = GetClassLongA(v15, 0xFFFFFFF8);
          WindowLongA = GetWindowLongA(window, 0xFFFFFFF0);
          AdjustWindowRect(&Rect, WindowLongA, ClassLongA);
          SetWindowPos(window, 0, X, Y, Rect.right - Rect.left, Rect.bottom - Rect.top, 0x40);
        }
        else
        {
          sub_497B20("Failed to Recreate Gamebryo Render in desired dimensions.");
        }
        RecreateImageSpaceShader(a1);
        v12 = (_DWORD *)FormHeapAlloc(0x38u);
        v18 = 0;
        if ( v12 )
          v13 = (BSShaderAccumulator *)NiAlphaAccumulator_Constructor(v12);
        else
          v13 = 0;
        v14 = (NiDX9Renderer *)dword_B350D8;
        v18 = 0xFFFFFFFF;
        NiDX9Renderer::SetShaderAccumulator(v14, v13);
        sub_4112E0(g_worldScenegraph);
        InterfaceMenuScenegraph_Create();
        Interface3dScenegraph_Create();
        sub_578CC0(a1, a2, a3, v5, 0);
        sub_578CD0(a1, a2, a3, v5);
        sub_5B6040(a1, a3, v5, a2);
      }
    }
  }
}
