void __thiscall NiShaderFactory::~NiShaderFactory(NiShaderFactory *this)
{
  *(_DWORD *)this = &NiShaderFactory::`vftable'; /*0x738538*/
  if ( unk_B40120 ) /*0x73853e*/
  {
    (*(void (__thiscall **)(NiD3DShaderFactory *))(*(_DWORD *)unk_B40120 + 0x20))(unk_B40120); /*0x738555*/
    if ( unk_B40120 ) /*0x738557*/
      (*(void (__thiscall **)(NiD3DShaderFactory *))(*(_DWORD *)unk_B40120 + 0x30))(unk_B40120); /*0x738566*/
  }
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x73856d*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x738573*/
}
