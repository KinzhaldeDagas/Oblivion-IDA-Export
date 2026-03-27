void __cdecl sub_551140(int arg0, unsigned int a1)
{
  UInt32 v2; // esi
  UInt32 *ShaderDefinition; // eax

  if ( byte_B39D80 )
  {
    if ( arg0 )
    {
      v2 = (*(int (__thiscall **)(int))(*(_DWORD *)arg0 + 0x10))(arg0);
      ShaderDefinition = (UInt32 *)GetShaderDefinition(a1);
      if ( ShaderDefinition )
      {
        if ( v2 )
        {
          if ( *(_DWORD *)(v2 + 0xB4) )
          {
            if ( !*(_DWORD *)(v2 + 0xB8) )
            {
              *(_WORD *)(*(_DWORD *)(v2 + 0xB4) + 0x2E) = *(_WORD *)(*(_DWORD *)(v2 + 0xB4) + 0x2E) & 0xFFF | 0x4000;
              *(_BYTE *)(*(_DWORD *)(v2 + 0xB4) + 0x31) = 0x1F;
              g_Renderer->__vftable->super.NiRenderer::PrecacheGeometryData(
                (NiRenderer *)g_Renderer,
                v2,
                0,
                0,
                *ShaderDefinition);
              sub_769030(g_Renderer);
            }
          }
        }
      }
    }
  }
}
