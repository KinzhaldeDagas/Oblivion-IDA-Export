NiD3DShaderConstantManager *__thiscall NiD3DShaderConstantManager::NiD3DShaderConstantManager(
        NiD3DShaderConstantManager *this,
        int a2)
{
  int v3; // eax

  *(_DWORD *)this = &NiRefObject::`vftable';
  *((_DWORD *)this + 1) = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  *(_DWORD *)this = &NiD3DShaderConstantManager::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xE) = 0;
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0;
  *((_DWORD *)this + 0x12) = 0;
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + 0x14) = 0;
  *((_DWORD *)this + 0x15) = 0;
  *((_DWORD *)this + 0x16) = 0;
  *((_DWORD *)this + 0x17) = 0;
  *((_DWORD *)this + 0x18) = 0;
  *((_DWORD *)this + 0x19) = 0;
  *((_DWORD *)this + 0x1A) = 0;
  *((_DWORD *)this + 0x1B) = 0;
  *((_DWORD *)this + 0x1C) = 0;
  *((_DWORD *)this + 0x1D) = 0;
  *((_DWORD *)this + 0x1E) = 0;
  *((_DWORD *)this + 0x1F) = 0;
  *((_DWORD *)this + 0x21) = a2;
  if ( a2 )
    *((_DWORD *)this + 0x20) = *(_DWORD *)(a2 + 0x280);
  v3 = *((_DWORD *)this + 0x20);
  if ( v3 )
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 4))(*((_DWORD *)this + 0x20));
  return this;
}
