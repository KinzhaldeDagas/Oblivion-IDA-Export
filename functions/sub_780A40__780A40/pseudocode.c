// Constructs the Oblivion DX9 shader constant manager. Its vtable +4 entry is Shared_NoOpVirtual_60D0A0; actual constant-map uploads occur during NiD3DShader__SetupShaderPrograms.
NiD3DShaderConstantManager *__thiscall sub_780A40(NiD3DShaderConstantManager *this, int a2, int a3)
{
  int v4; // eax
  int v5; // eax
  int v7; // ecx

  NiD3DShaderConstantManager::NiD3DShaderConstantManager(this, a2); /*0x780a4a*/
  *(_DWORD *)this = &NiDX9ShaderConstantManager::`vftable'; /*0x780a53*/
  *((_DWORD *)this + 0xA) = *(_DWORD *)(a3 + 0xC8); /*0x780a5f*/
  v4 = *(unsigned __int8 *)(a3 + 0xC5); /*0x780a62*/
  if ( v4 != 1 )
  {
    if ( v4 == 2 )
    {
      *((_DWORD *)this + 0x1F) = *(_DWORD *)(a3 + 0xFC) != 0 ? 0x10 : 0;
    }
    else
    {
      if ( v4 != 3 ) /*0x780a96*/
        goto LABEL_8; /*0x780a96*/
      *((_DWORD *)this + 0x1E) = 0x10; /*0x780a98*/
    }
    *((_DWORD *)this + 0x14) = 0x10; /*0x780a9b*/
    goto LABEL_8; /*0x780a9b*/
  }
  *((_DWORD *)this + 0x1E) = 0; /*0x780a75*/
  *((_DWORD *)this + 0x14) = 0; /*0x780a78*/
LABEL_8:
  if ( *((_DWORD *)this + 0xA) || !*(_BYTE *)(a2 + 0x5C8) ) /*0x780aa3*/
  {
    *((_BYTE *)this + 0x88) = 0; /*0x780abb*/
  }
  else
  {
    *((_BYTE *)this + 0x88) = 1; /*0x780aab*/
    *((_DWORD *)this + 0xA) = 0x2000; /*0x780ab2*/
  }
  v5 = *(unsigned __int8 *)(a3 + 0xCD); /*0x780ac1*/
  if ( v5 == 1 )
  {
    *((_DWORD *)this + 0xB) = 8; /*0x780ace*/
    *((_DWORD *)this + 0x1F) = 0; /*0x780ad5*/
    *((_DWORD *)this + 0x15) = 0; /*0x780ad8*/
    return this; /*0x780adb*/
  }
  else if ( v5 == 2 )
  {
    *((_DWORD *)this + 0xB) = 0x20; /*0x780ae7*/
    v7 = *(_DWORD *)(a3 + 0x10C) != 0 ? 0x10 : 0;
    *((_DWORD *)this + 0x15) = 0x10; /*0x780afb*/
    *((_DWORD *)this + 0x1F) = v7; /*0x780afe*/
    return this; /*0x780b01*/
  }
  else
  {
    if ( v5 == 3 ) /*0x780b0b*/
    {
      *((_DWORD *)this + 0xB) = 0xE0; /*0x780b0d*/
      *((_DWORD *)this + 0x1F) = 0x10; /*0x780b14*/
      *((_DWORD *)this + 0x15) = 0x10; /*0x780b17*/
    }
    return this; /*0x780b1b*/
  }
}
