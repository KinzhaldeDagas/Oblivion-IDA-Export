int __thiscall sub_75FBA0(NiD3DPass *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // ebx
  int v11; // esi
  NiD3DPixelShader *PixelShader; // ecx
  void (__thiscall **p_SetPixelShader)(NiDX9RenderState, IDirect3DPixelShader9 *, UInt8); // ebp
  int v15; // eax
  NiD3DShaderConstantMap *PixelConstantMap; // ecx
  NiD3DVertexShader *VertexShader; // ecx
  void (__thiscall **p_SetVertexShader)(NiDX9RenderState, IDirect3DVertexShader9 *, UInt8); // ebp
  int v19; // eax
  NiD3DShaderConstantMap *VertexConstantMap; // ecx
  UInt32 v21; // esi
  int v22; // ebx
  int v23; // eax
  _DWORD *v24; // eax
  int v26; // eax
  NiDX9RenderStateVtbl *vtbl; // edx

  v10 = a4;
  v11 = a5;
  PixelShader = this->PixelShader;
  if ( PixelShader )
  {
    p_SetPixelShader = &renderStateG->vtbl->SetPixelShader;
    v15 = (*(int (__thiscall **)(NiD3DPixelShader *, _DWORD))(*(_DWORD *)PixelShader + 0x38))(PixelShader, 0);
    ((void (__thiscall *)(NiDX9RenderState *, int))*p_SetPixelShader)(renderStateG, v15);
    PixelConstantMap = this->PixelConstantMap;
    if ( PixelConstantMap )
      ((void (__thiscall *)(NiD3DShaderConstantMap *, NiD3DPixelShader *, int, int, int, int, int, int, int, int, int, _DWORD))PixelConstantMap->_vtbl->sub_9A8E30)(
        PixelConstantMap,
        this->PixelShader,
        a2,
        a3,
        v10,
        v11,
        a6,
        a7,
        a8,
        a9,
        a10,
        0);
  }
  else
  {
    ((void (__thiscall *)(NiDX9RenderState *, _DWORD, _DWORD))renderStateG->vtbl->SetPixelShader)(renderStateG, 0, 0);
  }
  VertexShader = this->VertexShader;
  if ( !VertexShader )
  {
    ((void (__thiscall *)(NiDX9RenderState *, _DWORD, _DWORD))renderStateG->vtbl->SetVertexShader)(renderStateG, 0, 0);
    if ( !v11 )
    {
      if ( v10 )
        v11 = *(_DWORD *)(v10 + 0x28);
      else
        v11 = *(_DWORD *)(*(_DWORD *)(a2 + 0xB4) + 0x38);
    }
    v26 = *(_DWORD *)(v11 + 8);
    vtbl = renderStateG->vtbl;
    if ( v26 )
    {
      ((void (__stdcall *)(int, _DWORD))vtbl->SetFVF)(v26, 0);
      return 0;
    }
    ((void (__stdcall *)(_DWORD, _DWORD))vtbl->SetVertexDeclaration)(*(_DWORD *)(v11 + 0xC), 0);
    return 0;
  }
  p_SetVertexShader = &renderStateG->vtbl->SetVertexShader;
  v19 = (*(int (__thiscall **)(NiD3DVertexShader *, _DWORD))(*(_DWORD *)VertexShader + 0x40))(VertexShader, 0);
  ((void (__thiscall *)(NiDX9RenderState *, int))*p_SetVertexShader)(renderStateG, v19);
  VertexConstantMap = this->VertexConstantMap;
  if ( VertexConstantMap )
    ((void (__thiscall *)(NiD3DShaderConstantMap *, NiD3DVertexShader *, int, int, int, int, int, int, int, int, int, _DWORD))VertexConstantMap->_vtbl->sub_9A8E30)(
      VertexConstantMap,
      this->VertexShader,
      a2,
      a3,
      v10,
      v11,
      a6,
      a7,
      a8,
      a9,
      a10,
      0);
  v21 = 0;
  if ( !dword_B28CB0 )
    return 0;
  do
  {
    ((void (__thiscall *)(NiDX9RenderState *, UInt32, int, UInt32, _DWORD))renderStateG->vtbl->SetTextureStageState)(
      renderStateG,
      v21,
      0xB,
      v21,
      0);
    v22 = 0;
    if ( v21 < this->StageCount )
    {
      v23 = *(&this->Stages.data->Stage + v21);
      if ( v23 )
      {
        v24 = *(_DWORD **)(v23 + 0xC);
        if ( v24 )
        {
          a10 = 0;
          LOBYTE(a2) = 0;
          if ( sub_7730A0(v24, 0x18, &a10, &a2) )
          {
            if ( (a10 & 0x100) != 0 )
              v22 = 0x100;
          }
        }
      }
    }
    ((void (__thiscall *)(NiDX9RenderState *, UInt32, int, int, _DWORD))renderStateG->vtbl->SetTextureStageState)(
      renderStateG,
      v21++,
      0x18,
      v22,
      0);
  }
  while ( v21 < dword_B28CB0 );
  return 0;
}
