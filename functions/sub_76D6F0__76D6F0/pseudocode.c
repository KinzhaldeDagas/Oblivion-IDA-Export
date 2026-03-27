char __thiscall sub_76D6F0(_DWORD *this, int a2)
{
  _DWORD *v3; // edi
  int v4; // eax
  void *v6; // ecx
  D3DFORMAT a1[8]; // [esp+1Ch] [ebp-20h] BYREF

  v3 = this + 3;
  if ( *(this + 3) )
    (*(void (__thiscall **)(_DWORD *))(*this + 0x2C))(this);
  dword_B42600[0] = 0;
  dword_B42610 = 0;
  v4 = *(this + 0x13);
  if ( v4 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 8))(*(this + 0x13));
    *(this + 0x13) = 0;
  }
  *(this + 0x13) = a2;
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2);
  if ( (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD *))(*(_DWORD *)*(this + 0x13) + 0x98))(*(this + 0x13), 0, v3) < 0 )
    return 0;
  if ( (*(int (__stdcall **)(_DWORD, D3DFORMAT *))(*(_DWORD *)*v3 + 0x30))(*v3, a1) < 0 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v3 + 8))(*v3);
    *v3 = 0;
    return 0;
  }
  sub_731E40((_DWORD *)*(this + 2), a1[6], a1[7]);
  *(this + 4) = CreateSurfaceData(a1[0]);
  sub_774BD0(a1[0]);
  TESTexture::ClearComponentReferences(v6);
  return 1;
}
