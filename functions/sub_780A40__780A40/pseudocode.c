NiD3DShaderConstantManager *__thiscall sub_780A40(NiD3DShaderConstantManager *this, int a2, int a3)
{
  int v4; // eax
  int v5; // eax
  int v7; // ecx

  NiD3DShaderConstantManager::NiD3DShaderConstantManager(this, a2);
  *(_DWORD *)this = &NiDX9ShaderConstantManager::`vftable';
  *((_DWORD *)this + 0xA) = *(_DWORD *)(a3 + 0xC8);
  v4 = *(unsigned __int8 *)(a3 + 0xC5);
  if ( v4 != 1 )
  {
    if ( v4 == 2 )
    {
      *((_DWORD *)this + 0x1F) = *(_DWORD *)(a3 + 0xFC) != 0 ? 0x10 : 0;
    }
    else
    {
      if ( v4 != 3 )
        goto LABEL_8;
      *((_DWORD *)this + 0x1E) = 0x10;
    }
    *((_DWORD *)this + 0x14) = 0x10;
    goto LABEL_8;
  }
  *((_DWORD *)this + 0x1E) = 0;
  *((_DWORD *)this + 0x14) = 0;
LABEL_8:
  if ( *((_DWORD *)this + 0xA) || !*(_BYTE *)(a2 + 0x5C8) )
  {
    *((_BYTE *)this + 0x88) = 0;
  }
  else
  {
    *((_BYTE *)this + 0x88) = 1;
    *((_DWORD *)this + 0xA) = 0x2000;
  }
  v5 = *(unsigned __int8 *)(a3 + 0xCD);
  if ( v5 == 1 )
  {
    *((_DWORD *)this + 0xB) = 8;
    *((_DWORD *)this + 0x1F) = 0;
    *((_DWORD *)this + 0x15) = 0;
    return this;
  }
  else if ( v5 == 2 )
  {
    *((_DWORD *)this + 0xB) = 0x20;
    v7 = *(_DWORD *)(a3 + 0x10C) != 0 ? 0x10 : 0;
    *((_DWORD *)this + 0x15) = 0x10;
    *((_DWORD *)this + 0x1F) = v7;
    return this;
  }
  else
  {
    if ( v5 == 3 )
    {
      *((_DWORD *)this + 0xB) = 0xE0;
      *((_DWORD *)this + 0x1F) = 0x10;
      *((_DWORD *)this + 0x15) = 0x10;
    }
    return this;
  }
}
