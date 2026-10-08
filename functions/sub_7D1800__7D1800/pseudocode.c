void __cdecl sub_7D1800(unsigned __int16 a1)
{
  char v1; // dl
  Ni2DBuffer **v2; // edi
  int v3; // ebp
  Ni2DBuffer *v4; // eax
  Ni2DBuffer *v5; // eax
  Ni2DBuffer *v6; // eax
  ShaderDefinition *ShaderDefinition; // eax
  int i; // eax
  int v9; // edx
  ShaderDefinition *v10; // eax

  if ( unk_B43490[a1] ) /*0x7d180a*/
  {
    v1 = 2; /*0x7d181a*/
    v2 = &dword_B4501C; /*0x7d181f*/
    v3 = 9; /*0x7d1824*/
    do /*0x7d18a0*/
    {
      v4 = v2[0xFFFFFFFF]; /*0x7d1830*/
      if ( v4 ) /*0x7d1835*/
      {
        if ( LOBYTE(v4->members.width) ) /*0x7d1837*/
          LOBYTE(v4->members.width) = ((1 << (v1 - 1)) & unk_B43490[a1]) == 0; /*0x7d1850*/
      }
      v5 = *v2; /*0x7d1853*/
      if ( *v2 ) /*0x7d1853*/
      {
        if ( LOBYTE(v5->members.width) ) /*0x7d1859*/
          LOBYTE(v5->members.width) = ((1 << v1) & unk_B43490[a1]) == 0; /*0x7d1871*/
      }
      v6 = v2[1]; /*0x7d1874*/
      if ( v6 ) /*0x7d1879*/
      {
        if ( LOBYTE(v6->members.width) ) /*0x7d187b*/
          LOBYTE(v6->members.width) = ((1 << (v1 + 1)) & unk_B43490[a1]) == 0; /*0x7d1894*/
      }
      v1 += 3; /*0x7d1897*/
      v2 += 3; /*0x7d189a*/
      --v3; /*0x7d189d*/
    }
    while ( v3 ); /*0x7d18a0*/
    ShaderDefinition = GetShaderDefinition(1u); /*0x7d18a4*/
    ShaderDefinition->shader->member.super.VertexConstantMap->_vtbl->sub_9A97B0(ShaderDefinition->shader->member.super.VertexConstantMap); /*0x7d18ba*/
  }
  if ( unk_B44840[a1] ) /*0x7d18be*/
  {
    for ( i = 0; i < 0x11; ++i ) /*0x7d18c7*/
    {
      v9 = *(_DWORD *)(4 * i + 0xB45518); /*0x7d18d0*/
      if ( v9 ) /*0x7d18d9*/
      {
        if ( *(_BYTE *)(v9 + 8) ) /*0x7d18db*/
          *(_BYTE *)(v9 + 8) = ((1 << (i + 1)) & unk_B44840[a1]) == 0; /*0x7d18f4*/
      }
    }
    v10 = GetShaderDefinition(1u); /*0x7d1901*/
    v10->shader->member.super.PixelConstantMap->_vtbl->sub_9A97B0(v10->shader->member.super.PixelConstantMap); /*0x7d1919*/
  }
}
