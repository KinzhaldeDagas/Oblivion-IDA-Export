LONG __thiscall sub_813960(float *this, int a2, int a3)
{
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  NiDX9Renderer *v7; // ecx
  void (__thiscall *GetClearColor)(NiRenderer *, NiRenderer *, float *); // edx
  float v9; // ecx
  NiDX9Renderer *v10; // ecx
  int v11; // eax
  float v12; // esi
  float *v13; // eax
  _DWORD *v14; // ebp
  int v15; // esi
  int v16; // eax
  void (__stdcall *v17)(volatile LONG *); // ebp
  NiRenderTargetGroup *v18; // eax
  char v20; // [esp+14h] [ebp-144h]
  float v21[3]; // [esp+1Ch] [ebp-13Ch] BYREF
  float v22[32]; // [esp+28h] [ebp-130h] BYREF
  _DWORD v23[41]; // [esp+A8h] [ebp-B0h] BYREF
  int v24; // [esp+154h] [ebp-4h]

  v4 = dword_B25AD4;
  v5 = dword_B25AD8;
  v23[0] = dword_B25AD0;
  v6 = dword_B25ADC;
  v23[1] = v4;
  v7 = dword_B43104;
  v23[2] = v5;
  v23[3] = v6;
  GetClearColor = v7->__vftable->super.GetClearColor;
  v21[0] = 0.0;
  v22[3] = 0.0;
  ((void (__thiscall *)(NiDX9Renderer *, _DWORD *))GetClearColor)(v7, v23);
  if ( LOWORD(dword_B42EAC) == 5 )
  {
    LODWORD(v9) = *(unsigned __int16 *)(*((_DWORD *)this + 0x51) + 0x118);
    v21[0] = flt_A3765C;
    v21[1] = v21[0];
    v22[2] = v9;
    v10 = dword_B43104;
    v21[2] = v21[0];
    v22[0] = 1.0;
    ((void (__thiscall *)(NiDX9Renderer *, float *))v10->__vftable->super.SetClearColor4)(v10, v21);
  }
  if ( v24 != 0xFFFFFFFF )
  {
    if ( v24 )
      JUMPOUT(0x8140B0);
  }
  sub_812EF0(this, 0);
  v11 = *((_DWORD *)this + 0x50);
  if ( v11 )
  {
    v12 = v22[0];
    v13 = (float *)(v11 + 0x20);
  }
  else
  {
    v12 = 0.0;
    v20 |= 1u;
    v22[0] = 0.0;
    v13 = v22;
  }
  v14 = *(_DWORD **)v13;
  if ( (v20 & 1) != 0 && v12 != 0.0 && !InterlockedDecrement((volatile LONG *)(LODWORD(v12) + 4)) )
    (**(void (__thiscall ***)(float, int))LODWORD(v12))(COERCE_FLOAT(LODWORD(v12)), 1);
  v14[0x10] = 0;
  v15 = v14[0xC];
  if ( v15 == v14[0x11] )
    goto LABEL_18;
  if ( v15 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
      (**(void (__thiscall ***)(int, int))v15)(v15, 1);
  }
  v16 = v14[0x11];
  v14[0xC] = v16;
  if ( !v16 )
  {
LABEL_18:
    v17 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement;
  }
  else
  {
    v17 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement;
    InterlockedIncrement((volatile LONG *)(v16 + 4));
  }
  v18 = BSRenderedTexture::UseTextureToRender(*((BSRenderedTexture **)this + 0x50));
  NiRenderer_BeginScene(kClear_ALL, v18);
  NiSmartPointer_Set__((Ni2DBuffer **)&dword_B474EC, (Ni2DBuffer *)dword_B43100);
  return def_813AFD(1u, 0, v17, (int)this, a2);
}
