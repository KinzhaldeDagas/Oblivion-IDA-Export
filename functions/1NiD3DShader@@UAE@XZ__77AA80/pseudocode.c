void __thiscall NiD3DShader::~NiD3DShader(NiD3DShader *this)
{
  IDirect3DDevice9 *D3DDevice; // eax
  char *Name; // esi
  NiD3DShaderFactory *v4; // esi
  int (__thiscall **v5)(NiD3DShaderFactory *, char *, int); // edi
  int CastingType; // eax
  void (__thiscall **v7)(NiD3DShaderFactory *, char *, int); // edi
  int v8; // eax
  NiDX9Renderer *D3DRenderer; // ecx
  NiD3DPass *v10; // esi
  bool v11; // zf
  NiD3DPass *CurrentPass; // ecx
  NiD3DShaderConstantMap *VertexConstantMap; // esi
  LONG (__stdcall *v14)(volatile LONG *); // edi
  NiD3DShaderConstantMap *PixelConstantMap; // esi
  NiD3DShaderDeclaration *ShaderDeclaration; // esi
  int v17; // [esp-18h] [ebp-3Ch]
  NiD3DPass *RenderStateGroup; // [esp-14h] [ebp-38h]
  NiD3DPass *v19; // [esp+0h] [ebp-24h] BYREF

  Name = this->member.super.super.Name;
  this->__vftable = (NiD3DShaderInterfaceVtbl *)&NiD3DShader::`vftable';
  if ( Name )
  {
    if ( strcmp(Name, EmptyString) )
    {
      v4 = sub_77C0F0();
      v5 = (int (__thiscall **)(NiD3DShaderFactory *, char *, int))(*(_DWORD *)v4 + 8);
      CastingType = TESEnchantableForm_GetCastingType(this);
      if ( this == (NiD3DShader *)(*v5)(v4, this->member.super.super.Name, CastingType) )
      {
        v7 = (void (__thiscall **)(NiD3DShaderFactory *, char *, int))(*(_DWORD *)v4 + 0x1C);
        v8 = TESEnchantableForm_GetCastingType(this);
        (*v7)(v4, this->member.super.super.Name, v8);
      }
      if ( this->member.super.Unk01D )
      {
        if ( this == (NiD3DShader *)(*(int (__thiscall **)(NiD3DShaderFactory *, char *, unsigned int))(*(_DWORD *)v4 + 8))(
                                      v4,
                                      this->member.super.super.Name,
                                      0xFFFFFFFF) )
          (*(void (__thiscall **)(NiD3DShaderFactory *, char *, unsigned int))(*(_DWORD *)v4 + 0x1C))(
            v4,
            this->member.super.super.Name,
            0xFFFFFFFF);
      }
    }
  }
  D3DRenderer = this->member.super.D3DRenderer;
  if ( D3DRenderer )
    sub_76B320(D3DRenderer, (NiD3DShaderInterface *)this);
  RenderStateGroup = (NiD3DPass *)this->member.RenderStateGroup;
  this->member.super.IsRenderSet = 0;
  sub_772E30(RenderStateGroup);
  v10 = 0;
  v11 = this->member.Passes.end == 0;
  this->member.CurrentPassIndex = 0;
  this->member.PassCount = 0;
  if ( !v11 )
  {
    v19 = 0;
    do
    {
      sub_76CE40(&this->member.Passes, v10, &v19);
      v10 = (NiD3DPass *)((char *)v10 + 1);
    }
    while ( (unsigned int)v10 < this->member.Passes.end );
  }
  sub_76C8C0(&this->member.Passes);
  NiTArray<NiPointer<NiD3DPass>>::~NiTArray<NiPointer<NiD3DPass>>(&this->member.Passes._vtbl);
  CurrentPass = this->member.CurrentPass;
  if ( CurrentPass )
  {
    v11 = CurrentPass->RefCount-- == 1;
    if ( v11 )
      sub_7604D0(CurrentPass);
  }
  VertexConstantMap = this->member.VertexConstantMap;
  v14 = InterlockedDecrement;
  if ( VertexConstantMap )
  {
    if ( !v14((volatile LONG *)&VertexConstantMap->Unk04) )
      ((void (__thiscall *)(NiD3DShaderConstantMap *, int))VertexConstantMap->_vtbl->Destroy)(VertexConstantMap, 1);
  }
  PixelConstantMap = this->member.PixelConstantMap;
  if ( PixelConstantMap )
  {
    if ( !v14((volatile LONG *)&PixelConstantMap->Unk04) )
      ((void (__thiscall *)(NiD3DShaderConstantMap *, int))PixelConstantMap->_vtbl->Destroy)(PixelConstantMap, 1);
  }
  ShaderDeclaration = this->member.ShaderDeclaration;
  if ( ShaderDeclaration )
  {
    if ( !v14((volatile LONG *)&ShaderDeclaration->member) )
      (*(void (__thiscall **)(NiD3DShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1);
  }
  D3DDevice = this->member.super.D3DDevice;
  this->__vftable = (NiD3DShaderInterfaceVtbl *)&NiD3DShaderInterface::`vftable';
  this->member.super.D3DRenderer = 0;
  this->member.super.D3DRenderState = 0;
  if ( D3DDevice )
    ((void (__cdecl *)(IDirect3DDevice9 *, int))D3DDevice->lpVtbl->Release)(D3DDevice, v17);
  this->member.super.D3DDevice = 0;
  sub_738600((unsigned int *)this);
}
