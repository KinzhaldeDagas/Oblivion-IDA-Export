int __cdecl sub_77EBB0(NiDX9Renderer *a1)
{
  IDirect3DDevice9 *device; // esi
  int result; // eax
  bool v3; // zf

  dword_B428B4 = (int)a1;
  if ( a1 )
  {
    device = a1->member.device;
    if ( dword_B428B0 )
      (*(void (__stdcall **)(int))(*(_DWORD *)dword_B428B0 + 8))(dword_B428B0);
    dword_B428B0 = (int)device;
    if ( device )
      device->lpVtbl->AddRef(device);
    result = *(_DWORD *)(dword_B428B4 + 0x8AC);
    dword_B428B8 = result;
  }
  else
  {
    result = dword_B428B0;
    v3 = dword_B428B0 == 0;
    dword_B428B8 = 0;
    if ( !v3 )
      result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result);
    dword_B428B0 = 0;
  }
  return result;
}
