void __cdecl sub_7D1800(unsigned __int16 a1)
{
  char v1; // dl
  UInt32 *v2; // edi
  int v3; // ebp
  UInt32 v4; // eax
  UInt32 v5; // eax
  UInt32 v6; // eax
  ShaderDefinition *ShaderDefinition; // eax
  int i; // eax
  int v9; // edx
  ShaderDefinition *v10; // eax

  if ( dword_B43490[a1] )
  {
    v1 = 2;
    v2 = &dword_B4501C;
    v3 = 9;
    do
    {
      v4 = v2[0xFFFFFFFF];
      if ( v4 )
      {
        if ( *(_BYTE *)(v4 + 8) )
          *(_BYTE *)(v4 + 8) = ((1 << (v1 - 1)) & dword_B43490[a1]) == 0;
      }
      v5 = *v2;
      if ( *v2 )
      {
        if ( *(_BYTE *)(v5 + 8) )
          *(_BYTE *)(v5 + 8) = ((1 << v1) & dword_B43490[a1]) == 0;
      }
      v6 = v2[1];
      if ( v6 )
      {
        if ( *(_BYTE *)(v6 + 8) )
          *(_BYTE *)(v6 + 8) = ((1 << (v1 + 1)) & dword_B43490[a1]) == 0;
      }
      v1 += 3;
      v2 += 3;
      --v3;
    }
    while ( v3 );
    ShaderDefinition = GetShaderDefinition(1u);
    ShaderDefinition->shader->member.super.VertexConstantMap->_vtbl->sub_9A97B0(ShaderDefinition->shader->member.super.VertexConstantMap);
  }
  if ( dword_B44840[a1] )
  {
    for ( i = 0; i < 0x11; ++i )
    {
      v9 = *(_DWORD *)(4 * i + 0xB45518);
      if ( v9 )
      {
        if ( *(_BYTE *)(v9 + 8) )
          *(_BYTE *)(v9 + 8) = ((1 << (i + 1)) & dword_B44840[a1]) == 0;
      }
    }
    v10 = GetShaderDefinition(1u);
    v10->shader->member.super.PixelConstantMap->_vtbl->sub_9A97B0(v10->shader->member.super.PixelConstantMap);
  }
}
