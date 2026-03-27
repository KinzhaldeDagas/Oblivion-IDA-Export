void __thiscall sub_7D3370(int this, char a2)
{
  int v3; // eax
  int v4; // edi

  if ( (!*(_BYTE *)(this + 0xF4) || a2) && ShaderPackage >= 3 && (dword_B42F40 & 0x10) != 0
    || (v3 = *(_DWORD *)(this + 0x114)) == 0 )
  {
    *(_BYTE *)(this + 0xF4) = a2;
  }
  else
  {
    BSTextureManager_DiscardShadowMap(g_textureManager, v3);
    v4 = *(_DWORD *)(this + 0x114);
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      *(_DWORD *)(this + 0x114) = 0;
    }
    *(_BYTE *)(this + 0xF4) = a2;
  }
}
