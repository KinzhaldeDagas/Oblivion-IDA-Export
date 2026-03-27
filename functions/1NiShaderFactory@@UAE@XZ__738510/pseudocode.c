void __thiscall NiShaderFactory::~NiShaderFactory(NiShaderFactory *this)
{
  *(_DWORD *)this = &NiShaderFactory::`vftable';
  if ( dword_B40120 )
  {
    (*(void (__thiscall **)(NiD3DShaderFactory *))(*(_DWORD *)dword_B40120 + 0x20))(dword_B40120);
    if ( dword_B40120 )
      (*(void (__thiscall **)(NiD3DShaderFactory *))(*(_DWORD *)dword_B40120 + 0x30))(dword_B40120);
  }
  *(_DWORD *)this = &NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
}
