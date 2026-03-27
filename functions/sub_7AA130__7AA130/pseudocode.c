void __thiscall sub_7AA130(BSShaderAccumulator *this, int a2, unsigned int a3)
{
  char *v3; // ebp
  IDirect3DQuery9 **v4; // edi
  BSShader *shader; // esi
  int v6[4]; // [esp+1Ch] [ebp-1Ch] BYREF
  unsigned int v7; // [esp+34h] [ebp-4h]

  if ( !*((_BYTE *)this + 0xC0) && a3 < 3 )
  {
    v3 = (char *)this + 0x14 * a3;
    if ( !v3[0xCC] )
    {
      v4 = (IDirect3DQuery9 **)((char *)this + 0x14 * a3 + 0xC8);
      if ( *v4
        || (dword_B43104->member.device->lpVtbl->CreateQuery(dword_B43104->member.device, D3DQUERYTYPE_OCCLUSION, v4),
            *v4) )
      {
        shader = GetShaderDefinition(1u)->shader;
        sub_7D1320((int *)3);
        shader->member.super.VertexConstantMap->_vtbl->sub_9A97B0(shader->member.super.VertexConstantMap);
        shader->member.super.PixelConstantMap->_vtbl->sub_9A97B0(shader->member.super.PixelConstantMap);
        (*v4)->lpVtbl->Issue(*v4, 2);
        sub_7E2370((int)v6, a2, 3, 1, 0, 0);
        v7 = 0;
        sub_7A9820(v6, 3u);
        (*v4)->lpVtbl->Issue(*v4, 1);
        v3[0xCC] = 1;
        *((_DWORD *)v3 + 0x36) = 0;
        v7 = 0xFFFFFFFF;
        sub_7E2400((int)v6);
      }
      else
      {
        v3[0xCC] = 0;
        *((float *)v3 + 0x34) = 0.0;
        *((_DWORD *)v3 + 0x36) = 0;
      }
    }
  }
}
