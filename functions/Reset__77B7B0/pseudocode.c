// Reset tracked DX9 render state and common Gamebryo defaults, including blend/test, depth, cull, fill, fog, and texture state caches.
int __thiscall Reset(NiDX9RenderState *this)
{
  double v2; // rt0
  int result; // eax

  ((void (__thiscall *)(NiDX9RenderState *))this->vtbl->InitializeRenderStates)(this); /*0x77b7bb*/
  ((void (__thiscall *)(NiDX9RenderState *))this->vtbl->ClearPixelShaders)(this); /*0x77b7c4*/
  ((void (__thiscall *)(NiDX9RenderState *))this->vtbl->func_02E)(this); /*0x77b7d0*/
  ((void (__thiscall *)(NiDX9RenderState *))this->vtbl->ClearTextureList)(this); /*0x77b7dc*/
  sub_780A20(this->member.unk0F8); /*0x77b7e4*/
  ((void (__thiscall *)(NiDX9RenderState *, int, int, _DWORD))this->vtbl->SetRenderState)(this, 0x16, 2, 0); /*0x77b7f6*/
  ((void (__thiscall *)(NiDX9RenderState *, int, int, _DWORD))this->vtbl->SetRenderState)(this, 8, 3, 0); /*0x77b805*/
  ((void (__thiscall *)(NiDX9RenderState *, int, int, _DWORD))this->vtbl->SetRenderState)(this, 9, 2, 0); /*0x77b814*/
  ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))this->vtbl->SetRenderState)(this, 0x1B, 0, 0); /*0x77b823*/
  ((void (__thiscall *)(NiDX9RenderState *, int, UInt32, _DWORD))this->vtbl->SetRenderState)( /*0x77b834*/
    this,
    0x13,
    this->member.unk000C[0xB],
    0);
  ((void (__thiscall *)(NiDX9RenderState *, int, UInt32, _DWORD))this->vtbl->SetRenderState)( /*0x77b845*/
    this,
    0x14,
    this->member.unk000C[0xC],
    0);
  ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))this->vtbl->SetRenderState)(this, 0xF, 0, 0); /*0x77b854*/
  ((void (__thiscall *)(NiDX9RenderState *, int, int, _DWORD))this->vtbl->SetRenderState)(this, 0x19, 8, 0); /*0x77b863*/
  ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))this->vtbl->SetRenderState)(this, 0x18, 0, 0); /*0x77b872*/
  ((void (__thiscall *)(NiDX9RenderState *, int, int, _DWORD))this->vtbl->SetRenderState)(this, 0x17, 8, 0); /*0x77b881*/
  ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))this->vtbl->SetRenderState)(this, 0xE, 0, 0); /*0x77b890*/
  ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))this->vtbl->SetRenderState)(this, 0x1A, 0, 0); /*0x77b89f*/
  ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))this->vtbl->SetRenderState)(this, 0x1D, 0, 0); /*0x77b8ae*/
  ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))this->vtbl->SetRenderState)(this, 0x1C, 0, 0);// Fog decode: Reset disables fixed-function fog with D3DRS_FOGENABLE=0; shader paths upload their own fog constants. /*0x77b8bd*/
  ((void (__thiscall *)(NiDX9RenderState *, int, int, _DWORD))this->vtbl->SetRenderState)(
    this,
    0x23,
    (this->member.Flags & 1) != 0 ? 3 : 0,
    0);
  ((void (__thiscall *)(NiDX9RenderState *, int, int, _DWORD))this->vtbl->SetRenderState)(this, 0x8C, 3, 0);// Fog decode: Reset sets fixed-function vertex fog mode default. /*0x77b8ea*/
  ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))this->vtbl->SetRenderState)(this, 0x30, 0, 0);// Fog decode: Reset disables fixed-function range fog. /*0x77b8f9*/
  ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))this->vtbl->SetRenderState)(this, 0x22, 0, 0);// Fog decode: Reset initializes fixed-function D3DRS_FOGCOLOR to 0. /*0x77b908*/
  ((void (__thiscall *)(NiDX9RenderState *, int, int, _DWORD))this->vtbl->SetRenderState)(this, 0x8F, 1, 0); /*0x77b91a*/
  ((void (__thiscall *)(NiDX9RenderState *, int, int, _DWORD))this->vtbl->SetRenderState)(this, 7, 1, 0); /*0x77b929*/
  ((void (__thiscall *)(NiDX9RenderState *, int, int, _DWORD))this->vtbl->SetRenderState)(this, 0x8D, 1, 0); /*0x77b93b*/
  LODWORD(this->member.CurrentFogColor.r) = stru_B3FA90;// Fog decode: Reset copies default fog color R from B3FA90 into renderer current fog color cache. /*0x77b946*/
  LODWORD(this->member.CurrentFogColor.g) = MEMORY[0xB3FA94];// Fog decode: Reset copies default fog color G from B3FA94 into renderer current fog color cache. /*0x77b957*/
  LODWORD(this->member.CurrentFogColor.b) = MEMORY[0xB3FA98];// Fog decode: Reset copies default fog color B from B3FA98 into renderer current fog color cache. /*0x77b96c*/
  v2 = dbl_A3DDD8; /*0x77b984*/
  result = (unsigned __int8)(int)(v2 * this->member.CurrentFogColor.b); /*0x77b9f6*/
  this->member.unk098[0] = result /*0x77b9ff*/
                         | (((unsigned __int8)(int)(this->member.CurrentFogColor.g * v2)
                           | (((int)(this->member.CurrentFogColor.r * v2) | 0xFFFFFF00) << 8)) << 8);// Fog decode: packs cached current fog color; fixed-function/cache boundary, not world shader fog source.
  return result; /*0x77ba05*/
}
