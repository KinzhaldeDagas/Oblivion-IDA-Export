// Generic precache helper: takes caller-supplied shader definition id and precaches one geometry. Dynamic shader id path, not a SpeedTree tree-builder-specific frond consumer.
void __cdecl sub_551140(int arg0, unsigned int a1)
{
  UInt32 v2; // esi
  UInt32 *ShaderDefinition; // eax

  if ( unk_B39D80 ) /*0x551140*/
  {
    if ( arg0 ) /*0x551153*/
    {
      v2 = (*(int (__thiscall **)(int))(*(_DWORD *)arg0 + 0x10))(arg0); /*0x55115d*/
      ShaderDefinition = (UInt32 *)GetShaderDefinition(a1); /*0x551164*/
      if ( ShaderDefinition ) /*0x55116e*/
      {
        if ( v2 ) /*0x551172*/
        {
          if ( *(_DWORD *)(v2 + 0xB4) ) /*0x551174*/
          {
            if ( !*(_DWORD *)(v2 + 0xB8) ) /*0x55117d*/
            {
              *(_WORD *)(*(_DWORD *)(v2 + 0xB4) + 0x2E) = *(_WORD *)(*(_DWORD *)(v2 + 0xB4) + 0x2E) & 0xFFF | 0x4000; /*0x55119a*/
              *(_BYTE *)(*(_DWORD *)(v2 + 0xB4) + 0x31) = 0x1F; /*0x5511a4*/
              renderer->__vftable->super.NiRenderer::PrecacheGeometryData( /*0x5511be*/
                (NiRenderer *)renderer,
                v2,
                0,
                0,
                *ShaderDefinition);
              sub_769030(renderer); /*0x5511c7*/
            }
          }
        }
      }
    }
  }
}
