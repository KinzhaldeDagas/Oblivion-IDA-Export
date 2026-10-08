NiD3DShaderConstantManager *__thiscall NiD3DShaderConstantManager::NiD3DShaderConstantManager(
        NiD3DShaderConstantManager *this,
        int a2)
{
  int v3; // eax

  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x782a7b*/
  *((_DWORD *)this + 1) = 0; /*0x782a81*/
  InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x782a84*/
  *(_DWORD *)this = &NiD3DShaderConstantManager::`vftable'; /*0x782a90*/
  *((_DWORD *)this + 2) = 0; /*0x782a96*/
  *((_DWORD *)this + 3) = 0; /*0x782a99*/
  *((_DWORD *)this + 4) = 0; /*0x782a9c*/
  *((_DWORD *)this + 5) = 0; /*0x782a9f*/
  *((_DWORD *)this + 6) = 0; /*0x782aa2*/
  *((_DWORD *)this + 7) = 0; /*0x782aa5*/
  *((_DWORD *)this + 8) = 0; /*0x782aa8*/
  *((_DWORD *)this + 9) = 0; /*0x782aab*/
  *((_DWORD *)this + 0xA) = 0; /*0x782aae*/
  *((_DWORD *)this + 0xB) = 0; /*0x782ab1*/
  *((_DWORD *)this + 0xC) = 0; /*0x782ab4*/
  *((_DWORD *)this + 0xD) = 0; /*0x782ab7*/
  *((_DWORD *)this + 0xE) = 0; /*0x782aba*/
  *((_DWORD *)this + 0xF) = 0; /*0x782abd*/
  *((_DWORD *)this + 0x10) = 0; /*0x782ac0*/
  *((_DWORD *)this + 0x11) = 0; /*0x782ac3*/
  *((_DWORD *)this + 0x12) = 0; /*0x782ac6*/
  *((_DWORD *)this + 0x13) = 0; /*0x782ac9*/
  *((_DWORD *)this + 0x14) = 0; /*0x782acc*/
  *((_DWORD *)this + 0x15) = 0; /*0x782acf*/
  *((_DWORD *)this + 0x16) = 0; /*0x782ad2*/
  *((_DWORD *)this + 0x17) = 0; /*0x782ad5*/
  *((_DWORD *)this + 0x18) = 0; /*0x782ad8*/
  *((_DWORD *)this + 0x19) = 0; /*0x782adb*/
  *((_DWORD *)this + 0x1A) = 0; /*0x782ade*/
  *((_DWORD *)this + 0x1B) = 0; /*0x782ae1*/
  *((_DWORD *)this + 0x1C) = 0; /*0x782ae4*/
  *((_DWORD *)this + 0x1D) = 0; /*0x782ae7*/
  *((_DWORD *)this + 0x1E) = 0; /*0x782aea*/
  *((_DWORD *)this + 0x1F) = 0; /*0x782aed*/
  *((_DWORD *)this + 0x21) = a2; /*0x782af0*/
  if ( a2 ) /*0x782af6*/
    *((_DWORD *)this + 0x20) = *(_DWORD *)(a2 + 0x280); /*0x782afe*/
  v3 = *((_DWORD *)this + 0x20); /*0x782b04*/
  if ( v3 ) /*0x782b0c*/
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 4))(*((_DWORD *)this + 0x20)); /*0x782b14*/
  return this; /*0x782b16*/
}
