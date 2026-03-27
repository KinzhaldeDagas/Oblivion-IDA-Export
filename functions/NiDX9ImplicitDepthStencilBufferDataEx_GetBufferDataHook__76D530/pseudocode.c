char __thiscall NiDX9ImplicitDepthStencilBufferDataEx_GetBufferDataHook(_DWORD *this, int a2)
{
  _DWORD *v3; // esi
  NiSurfaceData *SurfaceData; // eax
  _DWORD *v6; // ecx
  D3DFORMAT v7; // [esp+0h] [ebp-30h]
  D3DFORMAT v8; // [esp+4h] [ebp-2Ch]
  D3DFORMAT a1[8]; // [esp+10h] [ebp-20h] BYREF

  v3 = this + 3;
  if ( *(this + 3) )
    (*(void (__thiscall **)(_DWORD *))(*this + 0x2C))(this);
  if ( (*(int (__stdcall **)(int, _DWORD *))(*(_DWORD *)a2 + 0xA0))(a2, v3) < 0 )
    return 0;
  if ( (*(int (__stdcall **)(_DWORD, D3DFORMAT *))(*(_DWORD *)*v3 + 0x30))(*v3, a1) < 0 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v3 + 8))(*v3);
    *v3 = 0;
    return 0;
  }
  SurfaceData = CreateSurfaceData(a1[0]);
  v8 = a1[7];
  v6 = (_DWORD *)*(this + 2);
  v7 = a1[6];
  *(this + 4) = SurfaceData;
  sub_731E40(v6, v7, v8);
  return 1;
}
