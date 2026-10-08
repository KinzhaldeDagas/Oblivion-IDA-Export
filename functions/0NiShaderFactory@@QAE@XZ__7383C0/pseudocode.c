NiShaderFactory *__thiscall NiShaderFactory::NiShaderFactory(NiShaderFactory *this)
{
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x7383cb*/
  *((_DWORD *)this + 1) = 0; /*0x7383d1*/
  InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x7383d4*/
  *((_DWORD *)this + 2) = 0; /*0x7383da*/
  *((_DWORD *)this + 3) = 0; /*0x7383dd*/
  *((_DWORD *)this + 4) = 0; /*0x7383e0*/
  *(_DWORD *)this = &NiShaderFactory::`vftable'; /*0x7383e4*/
  return this; /*0x7383e3*/
}
