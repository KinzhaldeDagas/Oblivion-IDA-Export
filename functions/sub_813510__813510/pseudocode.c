int __thiscall sub_813510(int this)
{
  int v2; // ecx
  int v3; // edx
  float v4; // eax
  NiDX9Renderer *v5; // ecx
  void (__thiscall *GetClearColor)(NiRenderer *, NiRenderer *, float *); // edx
  int v7; // ecx
  NiDX9Renderer *v8; // ecx
  int v9; // eax
  int v10; // esi
  _DWORD **v11; // eax
  _DWORD *v12; // ebx
  int v13; // esi
  int v14; // eax
  void (__stdcall *v15)(volatile LONG *); // ebx
  NiRenderTargetGroup *v16; // eax
  char v18; // [esp+Ch] [ebp-E0h]
  _DWORD v19[3]; // [esp+1Ch] [ebp-D0h] BYREF
  _DWORD v20[3]; // [esp+28h] [ebp-C4h] BYREF
  float v21[43]; // [esp+34h] [ebp-B8h] BYREF

  v2 = dword_B25AD4;
  v3 = dword_B25AD8;
  v20[0] = dword_B25AD0;
  v4 = *(float *)&dword_B25ADC;
  v20[1] = v2;
  v5 = dword_B43104;
  v20[2] = v3;
  v21[0] = v4;
  GetClearColor = v5->__vftable->super.GetClearColor;
  v19[1] = 0;
  ((void (__thiscall *)(NiDX9Renderer *, _DWORD *))GetClearColor)(v5, v20);
  if ( LOWORD(dword_B42EAC) == 5 )
  {
    v7 = *(unsigned __int16 *)(*(_DWORD *)(this + 0x144) + 0x118);
    v21[0] = flt_A3765C;
    v21[1] = v21[0];
    v19[0] = v7;
    v8 = dword_B43104;
    v21[2] = v21[0];
    v21[3] = 1.0;
    ((void (__thiscall *)(NiDX9Renderer *, float *))v8->__vftable->super.SetClearColor4)(v8, v21);
  }
  sub_812EF0((float *)this, 0);
  v9 = *(_DWORD *)(this + 0x140);
  if ( v9 )
  {
    v10 = v19[0];
    v11 = (_DWORD **)(v9 + 0x20);
  }
  else
  {
    v10 = 0;
    v18 |= 1u;
    v19[0] = 0;
    v11 = (_DWORD **)v19;
  }
  v12 = *v11;
  if ( (v18 & 1) != 0 )
  {
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    }
  }
  v12[0x10] = 0;
  v13 = v12[0xC];
  if ( v13 == v12[0x11] )
    goto LABEL_16;
  if ( v13 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) )
      (**(void (__thiscall ***)(int, int))v13)(v13, 1);
  }
  v14 = v12[0x11];
  v12[0xC] = v14;
  if ( !v14 )
  {
LABEL_16:
    v15 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement;
  }
  else
  {
    v15 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement;
    InterlockedIncrement((volatile LONG *)(v14 + 4));
  }
  v16 = BSRenderedTexture::UseTextureToRender(*(BSRenderedTexture **)(this + 0x140));
  NiRenderer_BeginScene(kClear_ALL, v16);
  return def_813686(1u, v15, this, 0);
}
