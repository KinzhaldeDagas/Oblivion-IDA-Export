char __thiscall sub_76D5C0(_DWORD *this, int a2)
{
  NiDX9Renderer *v4; // esi
  NiRenderTargetGroup *v5; // eax
  int v6; // ebx
  int v7; // eax
  signed int v8; // eax
  _DWORD *v9; // esi
  void *v10; // ecx
  D3DFORMAT a1[8]; // [esp+4Ch] [ebp-20h] BYREF

  if ( *(this + 3) )
    (*(void (__thiscall **)(_DWORD *))(*this + 0x2C))(this);
  if ( !*(this + 5) )
    return 0;
  v4 = g_Renderer;
  v5 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
  v6 = dword_B42154;
  v7 = (int)v5->vtbl->GetPixelFormat(v5, 0);
  v8 = (*(int (__stdcall **)(int, UInt32, UInt32, _DWORD, int, int, _DWORD))(*(_DWORD *)v6 + 0x28))(
         v6,
         v4->member.adapterIdx,
         v4->member.d3dDevType,
         *(_DWORD *)(v7 + 0xC),
         2,
         1,
         *(this + 5));
  if ( v8 >= 0
    && (v9 = this + 3,
        v8 = (*(int (__stdcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD *, _DWORD))(*(_DWORD *)a2 + 0x74))(
               a2,
               *(_DWORD *)(*(this + 2) + 8),
               *(_DWORD *)(*(this + 2) + 0xC),
               *(this + 5),
               0,
               0,
               *(this + 6),
               this + 3,
               0),
        v8 >= 0) )
  {
    if ( (*(int (__stdcall **)(_DWORD, D3DFORMAT *))(*(_DWORD *)*v9 + 0x30))(*v9, a1) >= 0 )
    {
      *(this + 4) = CreateSurfaceData(a1[0]);
      return 1;
    }
    else
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v9 + 8))(*v9);
      *v9 = 0;
      return 0;
    }
  }
  else
  {
    sub_7736F0(v8);
    TESTexture::ClearComponentReferences(v10);
    return 0;
  }
}
