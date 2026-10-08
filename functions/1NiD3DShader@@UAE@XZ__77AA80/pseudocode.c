//
// DX11 shader-child lifetime audit 2026-10-01: NiD3DShader destructor77AA80 releases pooled render-state group, clears/destroys the instance pass array, drops CurrentPass at shader+3C using NiD3DPass+60 then its pool return, and releases active VS map+30, PS map+2C and declaration+24 using pointee+4 InterlockedDecrement/destroy-on-zero. Retaining the shader prevents its destructor, but does NOT prevent replacement of those child bindings or mutation/reallocation of their arrays. Those lifetimes and writer intervals remain separate replacement requirements. Comparative Fallout827C6178 shares factory unregister, renderer release, pooled state group and map/declaration cleanup, but its decoded current-pass handling differs; do not infer Oblivion ownership offsets or pass-pool rules from it.
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
  unsigned int v10; // esi
  bool v11; // zf
  NiD3DPass *CurrentPass; // ecx
  NiD3DShaderConstantMap *VertexConstantMap; // esi
  LONG (__stdcall *v14)(volatile LONG *); // edi
  NiD3DShaderConstantMap *PixelConstantMap; // esi
  NiD3DShaderDeclaration *ShaderDeclaration; // esi
  int v17; // [esp-18h] [ebp-3Ch]
  NiD3DRenderStateGroup *RenderStateGroup; // [esp-14h] [ebp-38h]
  NiD3DPass *value; // [esp+0h] [ebp-24h] BYREF

  Name = this->member.super.super.Name; /*0x77aa86*/
  this->__vftable = (NiD3DShaderInterfaceVtbl *)&NiD3DShader::`vftable'; /*0x77aa8e*/
  if ( Name ) /*0x77aa95*/
  {
    if ( strcmp(Name, EmptyString) ) /*0x77aaa3*/
    {
      v4 = sub_77C0F0(); /*0x77aaac*/
      v5 = (int (__thiscall **)(NiD3DShaderFactory *, char *, int))(*(_DWORD *)v4 + 8); /*0x77aab2*/
      CastingType = TESEnchantableForm_GetCastingType(this); /*0x77aab5*/
      if ( this == (NiD3DShader *)(*v5)(v4, this->member.super.super.Name, CastingType) ) /*0x77aac7*/
      {
        v7 = (void (__thiscall **)(NiD3DShaderFactory *, char *, int))(*(_DWORD *)v4 + 0x1C); /*0x77aacd*/
        v8 = TESEnchantableForm_GetCastingType(this); /*0x77aad0*/
        (*v7)(v4, this->member.super.super.Name, v8); /*0x77aade*/
      }
      if ( this->member.super.Unk01D ) /*0x77aae0*/
      {
        if ( this == (NiD3DShader *)(*(int (__thiscall **)(NiD3DShaderFactory *, char *, unsigned int))(*(_DWORD *)v4 + 8))( /*0x77aaf6*/
                                      v4,
                                      this->member.super.super.Name,
                                      0xFFFFFFFF) )
          (*(void (__thiscall **)(NiD3DShaderFactory *, char *, unsigned int))(*(_DWORD *)v4 + 0x1C))( /*0x77ab05*/
            v4,
            this->member.super.super.Name,
            0xFFFFFFFF);
      }
    }
  }
  D3DRenderer = this->member.super.D3DRenderer; /*0x77ab07*/
  if ( D3DRenderer ) /*0x77ab0c*/
    sub_76B320(D3DRenderer, (NiD3DShaderInterface *)this); /*0x77ab0f*/
  RenderStateGroup = this->member.RenderStateGroup; /*0x77ab17*/
  this->member.super.IsRenderSet = 0; /*0x77ab18*/
  NiD3DRenderStateGroup_ReleaseToPool((OblivionPooledRenderStateGroupPrefix *)RenderStateGroup); /*0x77ab1b*/
  v10 = 0; /*0x77ab23*/
  v11 = this->member.Passes.end == 0; /*0x77ab25*/
  this->member.CurrentPassIndex = 0; /*0x77ab29*/
  this->member.PassCount = 0; /*0x77ab2c*/
  if ( !v11 ) /*0x77ab2f*/
  {
    value = 0; /*0x77ab31*/
    do /*0x77ab4e*/
      NiTArray_NiD3DPass_SetAt(&this->member.Passes, v10++, &value); /*0x77ab40*/
    while ( v10 < this->member.Passes.end ); /*0x77ab4e*/
  }
  sub_76C8C0(&this->member.Passes); /*0x77ab55*/
  NiTArray<NiPointer<NiD3DPass>>::~NiTArray<NiPointer<NiD3DPass>>(&this->member.Passes._vtbl); /*0x77ab5c*/
  CurrentPass = this->member.CurrentPass; /*0x77ab61*/
  if ( CurrentPass ) /*0x77ab66*/
  {
    v11 = CurrentPass->RefCount-- == 1; /*0x77ab68*/
    if ( v11 ) /*0x77ab6c*/
      NiD3DPass_ReleaseToPool(CurrentPass); /*0x77ab6e*/
  }
  VertexConstantMap = this->member.VertexConstantMap; /*0x77ab73*/
  v14 = InterlockedDecrement; /*0x77ab78*/
  if ( VertexConstantMap ) /*0x77ab7e*/
  {
    if ( !v14((volatile LONG *)&VertexConstantMap->Unk04) ) /*0x77ab84*/
      ((void (__thiscall *)(NiD3DShaderConstantMap *, int))VertexConstantMap->_vtbl->Destroy)(VertexConstantMap, 1); /*0x77ab96*/
  }
  PixelConstantMap = this->member.PixelConstantMap; /*0x77ab98*/
  if ( PixelConstantMap ) /*0x77ab9d*/
  {
    if ( !v14((volatile LONG *)&PixelConstantMap->Unk04) ) /*0x77aba3*/
      ((void (__thiscall *)(NiD3DShaderConstantMap *, int))PixelConstantMap->_vtbl->Destroy)(PixelConstantMap, 1); /*0x77abb5*/
  }
  ShaderDeclaration = this->member.ShaderDeclaration; /*0x77abb7*/
  if ( ShaderDeclaration ) /*0x77abbc*/
  {
    if ( !v14((volatile LONG *)&ShaderDeclaration->member) ) /*0x77abc2*/
      (*(void (__thiscall **)(NiD3DShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x77abd4*/
  }
  D3DDevice = this->member.super.D3DDevice; /*0x779163*/
  this->__vftable = (NiD3DShaderInterfaceVtbl *)&NiD3DShaderInterface::`vftable'; /*0x779168*/
  this->member.super.D3DRenderer = 0; /*0x77916e*/
  this->member.super.D3DRenderState = 0; /*0x779175*/
  if ( D3DDevice ) /*0x77917c*/
    ((void (__cdecl *)(IDirect3DDevice9 *, int))D3DDevice->lpVtbl->Release)(D3DDevice, v17); /*0x779184*/
  this->member.super.D3DDevice = 0; /*0x779186*/
  sub_738600((unsigned int *)this); /*0x779190*/
}
