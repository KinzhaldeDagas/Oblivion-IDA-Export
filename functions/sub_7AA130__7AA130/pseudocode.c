void __thiscall sub_7AA130(BSShaderAccumulator *this, void *a2, unsigned int a3)
{
  char *v3; // ebp
  IDirect3DQuery9 **v4; // edi
  BSShader *shader; // esi
  RenderPass_DecodedLayout outPass; // [esp+1Ch] [ebp-1Ch] BYREF
  unsigned int v7; // [esp+34h] [ebp-4h]

  if ( !*((_BYTE *)this + 0xC0) && a3 < 3 ) /*0x7aa16d*/
  {
    v3 = (char *)this + 0x14 * a3; /*0x7aa17e*/
    if ( !v3[0xCC] ) /*0x7aa176*/
    {
      v4 = (IDirect3DQuery9 **)((char *)this + 0x14 * a3 + 0xC8); /*0x7aa18f*/
      if ( *v4 /*0x7aa1ad*/
        || (unk_B43104->member.device->lpVtbl->CreateQuery(unk_B43104->member.device, D3DQUERYTYPE_OCCLUSION, v4), *v4) )
      {
        shader = GetShaderDefinition(1u)->shader; /*0x7aa1bd*/
        sub_7D1320((int *)3); /*0x7aa1c7*/
        shader->member.super.VertexConstantMap->_vtbl->sub_9A97B0(shader->member.super.VertexConstantMap); /*0x7aa1d7*/
        shader->member.super.PixelConstantMap->_vtbl->sub_9A97B0(shader->member.super.PixelConstantMap); /*0x7aa1e1*/
        (*v4)->lpVtbl->Issue(*v4, 2); /*0x7aa1ed*/
        RenderPass_Construct(&outPass, a2, 3u, 1u, 0, 0); /*0x7aa201*/
        v7 = 0; /*0x7aa212*/
        BSShaderAccumulator_DrawRenderPass(&outPass, 3u); /*0x7aa216*/
        (*v4)->lpVtbl->Issue(*v4, 1); /*0x7aa225*/
        v3[0xCC] = 1; /*0x7aa22b*/
        *((_DWORD *)v3 + 0x36) = 0; /*0x7aa232*/
        v7 = 0xFFFFFFFF; /*0x7aa238*/
        RenderPass_Destroy((int)&outPass); /*0x7aa240*/
      }
      else
      {
        v3[0xCC] = 0; /*0x7aa249*/
        *((float *)v3 + 0x34) = 0.0; /*0x7aa250*/
        *((_DWORD *)v3 + 0x36) = 0; /*0x7aa256*/
      }
    }
  }
}
