// Verified (Oblivion): pass-level binder applies the active NiD3DPass PixelConstantMap and VertexConstantMap after binding its shader programs. The ShadowLightShader pixel/vertex maps are then applied by NiD3DShader_SetupShaderPrograms, so texture-effect constants flow through shader-owned maps after any pass-owned map entries.
int __thiscall sub_75FBA0(NiD3DPass *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // ebx
  int v11; // esi
  NiD3DPixelShader *PixelShader; // ecx
  void (__thiscall **v14)(_DWORD, int); // ebp
  int v15; // eax
  NiD3DShaderConstantMap *PixelConstantMap; // ecx
  NiD3DVertexShader *VertexShader; // ecx
  void (__thiscall **v18)(_DWORD, int); // ebp
  int v19; // eax
  NiD3DShaderConstantMap *VertexConstantMap; // ecx
  UInt32 v21; // esi
  int v22; // ebx
  int v23; // eax
  _DWORD *v24; // eax
  int v26; // eax
  int v27; // edx

  v10 = a4; /*0x75fba1*/
  v11 = a5; /*0x75fba7*/
  PixelShader = this->PixelShader; /*0x75fbae*/
  if ( PixelShader ) /*0x75fbb5*/
  {
    v14 = (void (__thiscall **)(_DWORD, int))(*(_DWORD *)LODWORD(MEMORY[0xB3F9B0][0x9A4]) + 0x78); /*0x75fbc3*/
    v15 = (*(int (__thiscall **)(NiD3DPixelShader *, _DWORD))(*(_DWORD *)PixelShader + 0x38))(PixelShader, 0); /*0x75fbc6*/
    (*v14)(LODWORD(MEMORY[0xB3F9B0][0x9A4]), v15); /*0x75fbd2*/
    PixelConstantMap = this->PixelConstantMap; /*0x75fbd4*/
    if ( PixelConstantMap ) /*0x75fbd9*/
      ((void (__thiscall *)(NiD3DShaderConstantMap *, NiD3DPixelShader *, int, int, int, int, int, int, int, int, int, _DWORD))PixelConstantMap->_vtbl->sub_9A8E30)( /*0x75fc0b*/
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
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(MEMORY[0xB3F9B0][0x9A4]) + 0x78))( /*0x75fc1c*/
      LODWORD(MEMORY[0xB3F9B0][0x9A4]),
      0,
      0);
  }
  VertexShader = this->VertexShader; /*0x75fc1e*/
  if ( !VertexShader ) /*0x75fc25*/
  {
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(MEMORY[0xB3F9B0][0x9A4]) + 0x88))( /*0x75fd34*/
      LODWORD(MEMORY[0xB3F9B0][0x9A4]),
      0,
      0);
    if ( !v11 ) /*0x75fd38*/
    {
      if ( v10 ) /*0x75fd3c*/
        v11 = *(_DWORD *)(v10 + 0x28); /*0x75fd3e*/
      else
        v11 = *(_DWORD *)(*(_DWORD *)(a2 + 0xB4) + 0x38); /*0x75fd4d*/
    }
    v26 = *(_DWORD *)(v11 + 8); /*0x75fd50*/
    v27 = *(_DWORD *)LODWORD(MEMORY[0xB3F9B0][0x9A4]); /*0x75fd5b*/
    if ( v26 ) /*0x75fd5f*/
    {
      (*(void (__stdcall **)(int, _DWORD))(v27 + 0x98))(v26, 0); /*0x75fd68*/
      return 0; /*0x75fd70*/
    }
    (*(void (__stdcall **)(_DWORD, _DWORD))(v27 + 0xA8))(*(_DWORD *)(v11 + 0xC), 0); /*0x75fd7d*/
    return 0; /*0x75fd7d*/
  }
  v18 = (void (__thiscall **)(_DWORD, int))(*(_DWORD *)LODWORD(MEMORY[0xB3F9B0][0x9A4]) + 0x88); /*0x75fc38*/
  v19 = (*(int (__thiscall **)(NiD3DVertexShader *, _DWORD))(*(_DWORD *)VertexShader + 0x40))(VertexShader, 0); /*0x75fc3e*/
  (*v18)(LODWORD(MEMORY[0xB3F9B0][0x9A4]), v19); /*0x75fc4a*/
  VertexConstantMap = this->VertexConstantMap; /*0x75fc4c*/
  if ( VertexConstantMap ) /*0x75fc53*/
    ((void (__thiscall *)(NiD3DShaderConstantMap *, NiD3DVertexShader *, int, int, int, int, int, int, int, int, int, _DWORD))VertexConstantMap->_vtbl->sub_9A8E30)( /*0x75fc84*/
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
  v21 = 0; /*0x75fc86*/
  if ( !dword_B28CB0 ) /*0x75fc8e*/
    return 0; /*0x75fd82*/
  do /*0x75fd19*/
  {
    (*(void (__thiscall **)(_DWORD, UInt32, int, UInt32, _DWORD))(*(_DWORD *)LODWORD(MEMORY[0xB3F9B0][0x9A4]) + 0xC8))( /*0x75fcb3*/
      LODWORD(MEMORY[0xB3F9B0][0x9A4]),
      v21,
      0xB,
      v21,
      0);
    v22 = 0; /*0x75fcb5*/
    if ( v21 < this->StageCount ) /*0x75fcba*/
    {
      v23 = *(&this->Stages.data->Stage + v21); /*0x75fcbf*/
      if ( v23 ) /*0x75fcc4*/
      {
        v24 = *(_DWORD **)(v23 + 0xC); /*0x75fcc6*/
        if ( v24 ) /*0x75fccb*/
        {
          a10 = 0; /*0x75fcdb*/
          LOBYTE(a2) = 0; /*0x75fcdf*/
          if ( sub_7730A0(v24, 0x18, &a10, &a2) ) /*0x75fce3*/
          {
            if ( (a10 & 0x100) != 0 ) /*0x75fcf4*/
              v22 = 0x100; /*0x75fcf6*/
          }
        }
      }
    }
    (*(void (__thiscall **)(_DWORD, UInt32, int, int, _DWORD))(*(_DWORD *)LODWORD(MEMORY[0xB3F9B0][0x9A4]) + 0xC8))( /*0x75fd0e*/
      LODWORD(MEMORY[0xB3F9B0][0x9A4]),
      v21++,
      0x18,
      v22,
      0);
  }
  while ( v21 < dword_B28CB0 ); /*0x75fd19*/
  return 0; /*0x75fd1b*/
}
