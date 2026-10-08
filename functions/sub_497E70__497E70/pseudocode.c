// MoonSugarEffect decode: display/render resize recreate caller. Recreates Gamebryo render dimensions, then calls RecreateImageSpaceShader before rebuilding accumulators and scenegraphs.
void __usercall sub_497E70(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double a4@<st3>)
{
  BSShaderAccumulator *inited; // eax
  int v5; // ecx
  double v6; // st7
  int v7; // esi
  _DWORD *v8; // edi
  HWND window; // esi
  LONG v10; // eax
  LONG v11; // ecx
  LONG WindowLongA; // eax
  _DWORD *v13; // eax
  BSShaderAccumulator *v14; // eax
  NiDX9Renderer *v15; // ecx
  HWND v16; // [esp-8h] [ebp-38h]
  DWORD ClassLongA; // [esp-4h] [ebp-34h]
  struct tagRECT Rect; // [esp+14h] [ebp-1Ch] BYREF
  unsigned int v19; // [esp+2Ch] [ebp-4h]

  if ( *(_DWORD *)&MEMORY[0xB33E90][0x1248] ) /*0x497e98*/
  {
    if ( *(_DWORD *)&MEMORY[0xB33E90][0x123C] ) /*0x497ea4*/
    {
      if ( *(_DWORD *)&MEMORY[0xB33E90][0x1240] ) /*0x497eb0*/
      {
        inited = BSShaderAccumulator_GetOrCreateGlobal(); /*0x497ebc*/
        sub_7A9CF0(inited); /*0x497ec3*/
        v5 = *(_DWORD *)&MEMORY[0xB33E90][0x1240]; /*0x497ed3*/
        v6 = (double)*(int *)&MEMORY[0xB33E90][0x1240] / (double)*(int *)&MEMORY[0xB33E90][0x123C]; /*0x497ed9*/
        dword_B06C5C = *(_DWORD *)&MEMORY[0xB33E90][0x123C]; /*0x497edf*/
        dword_B06C64 = v5; /*0x497ee4*/
        MEMORY[0xB33E90][0x1247] = 0; /*0x497eea*/
        if ( v6 != dbl_A31C70 ) /*0x497efb*/
          MEMORY[0xB33E90][0x1247] = 1; /*0x497efd*/
        sub_410B00(); /*0x497f04*/
        sub_578EF0(a2, a3, v6); /*0x497f09*/
        sub_405B00(); /*0x497f0e*/
        Interface3dScenegraph_Destructor(); /*0x497f13*/
        v7 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB33E90][0x1248] + 8); /*0x497f1e*/
        v8 = (_DWORD *)(*(_DWORD *)&MEMORY[0xB33E90][0x1248] + 8); /*0x497f21*/
        if ( v7 ) /*0x497f26*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x497f2c*/
            (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x497f42*/
          *v8 = 0; /*0x497f44*/
        }
        if ( NiDX9Renderer_Recreate( /*0x497f59*/
               *(unsigned __int16 **)&MEMORY[0xB33E90][0x1248],
               *(_DWORD *)&MEMORY[0xB33E90][0x123C],
               *(_DWORD *)&MEMORY[0xB33E90][0x1240]) )
        {
          window = MEMORY[0xB33398]->window; /*0x497f6d*/
          v10 = dword_B06C5C; /*0x497f76*/
          v11 = dword_B06C64; /*0x497f7b*/
          v16 = *(HWND *)&MEMORY[0xB33E90][0x1118]; /*0x497f83*/
          Rect.left = 0; /*0x497f84*/
          Rect.top = 0; /*0x497f88*/
          Rect.right = v10; /*0x497f8c*/
          Rect.bottom = v11; /*0x497f90*/
          ClassLongA = GetClassLongA(v16, 0xFFFFFFF8); /*0x497f9a*/
          WindowLongA = GetWindowLongA(window, 0xFFFFFFF0); /*0x497f9e*/
          AdjustWindowRect(&Rect, WindowLongA, ClassLongA); /*0x497faa*/
          SetWindowPos(window, 0, X, Y, Rect.right - Rect.left, Rect.bottom - Rect.top, 0x40); /*0x497fd4*/
        }
        else
        {
          sub_497B20("Failed to Recreate Gamebryo Render in desired dimensions."); /*0x497fe1*/
        }
        RecreateImageSpaceShader(a1);           // MoonSugarEffect decode: display/render resize resource fence. sub_497E70 calls RecreateImageSpaceShader after Gamebryo render dimensions are recreated and before installing a new shader accumulator/rebuilding scenegraphs. Good boundary for plugin-owned renderer helper resources to invalidate/rebuild. /*0x497fe9*/
        v13 = (_DWORD *)FormHeapAlloc(0x38u); /*0x497ff0*/
        v19 = 0; /*0x497ffe*/
        if ( v13 ) /*0x498002*/
          v14 = (BSShaderAccumulator *)NiAlphaAccumulator_Constructor(v13); /*0x498006*/
        else
          v14 = 0; /*0x49800d*/
        v15 = *(NiDX9Renderer **)&MEMORY[0xB33E90][0x1248]; /*0x49800f*/
        v19 = 0xFFFFFFFF; /*0x498016*/
        NiDX9Renderer::SetShaderAccumulator(v15, v14); /*0x49801e*/
        sub_4112E0((SceneGraph *)g_WorldSceneReceiverRoot); /*0x498029*/
        InterfaceMenuScenegraph_Create(); /*0x49802e*/
        Interface3dScenegraph_Create(); /*0x498033*/
        sub_578CC0(0); /*0x498039*/
        sub_578CD0(a3, v6); /*0x498041*/
        MainMenu_Open(a1, a3, v6, a2, a4); /*0x498046*/
      }
    }
  }
}
