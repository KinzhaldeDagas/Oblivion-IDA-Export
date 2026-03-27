int __thiscall Reset(NiDX9RenderState *this)
{
  double v2; // rt0
  int result; // eax

  ((void (__thiscall *)(NiDX9RenderState *))this->vtbl->InitializeRenderStates)(this);
  ((void (__thiscall *)(NiDX9RenderState *))this->vtbl->ClearPixelShaders)(this);
  ((void (__thiscall *)(NiDX9RenderState *))this->vtbl->func_02E)(this);
  ((void (__thiscall *)(NiDX9RenderState *))this->vtbl->ClearTextureList)(this);
  sub_780A20(this->member.unk0F8);
  ((void (__thiscall *)(NiDX9RenderState *, int, int, _DWORD))this->vtbl->SetRenderState)(this, 0x16, 2, 0);
  ((void (__thiscall *)(NiDX9RenderState *, int, int, _DWORD))this->vtbl->SetRenderState)(this, 8, 3, 0);
  ((void (__thiscall *)(NiDX9RenderState *, int, int, _DWORD))this->vtbl->SetRenderState)(this, 9, 2, 0);
  ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))this->vtbl->SetRenderState)(this, 0x1B, 0, 0);
  ((void (__thiscall *)(NiDX9RenderState *, int, UInt32, _DWORD))this->vtbl->SetRenderState)(
    this,
    0x13,
    this->member.unk000C[0xB],
    0);
  ((void (__thiscall *)(NiDX9RenderState *, int, UInt32, _DWORD))this->vtbl->SetRenderState)(
    this,
    0x14,
    this->member.unk000C[0xC],
    0);
  ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))this->vtbl->SetRenderState)(this, 0xF, 0, 0);
  ((void (__thiscall *)(NiDX9RenderState *, int, int, _DWORD))this->vtbl->SetRenderState)(this, 0x19, 8, 0);
  ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))this->vtbl->SetRenderState)(this, 0x18, 0, 0);
  ((void (__thiscall *)(NiDX9RenderState *, int, int, _DWORD))this->vtbl->SetRenderState)(this, 0x17, 8, 0);
  ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))this->vtbl->SetRenderState)(this, 0xE, 0, 0);
  ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))this->vtbl->SetRenderState)(this, 0x1A, 0, 0);
  ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))this->vtbl->SetRenderState)(this, 0x1D, 0, 0);
  ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))this->vtbl->SetRenderState)(this, 0x1C, 0, 0);
  ((void (__thiscall *)(NiDX9RenderState *, int, int, _DWORD))this->vtbl->SetRenderState)(
    this,
    0x23,
    (this->member.Flags & 1) != 0 ? 3 : 0,
    0);
  ((void (__thiscall *)(NiDX9RenderState *, int, int, _DWORD))this->vtbl->SetRenderState)(this, 0x8C, 3, 0);
  ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))this->vtbl->SetRenderState)(this, 0x30, 0, 0);
  ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))this->vtbl->SetRenderState)(this, 0x22, 0, 0);
  ((void (__thiscall *)(NiDX9RenderState *, int, int, _DWORD))this->vtbl->SetRenderState)(this, 0x8F, 1, 0);
  ((void (__thiscall *)(NiDX9RenderState *, int, int, _DWORD))this->vtbl->SetRenderState)(this, 7, 1, 0);
  ((void (__thiscall *)(NiDX9RenderState *, int, int, _DWORD))this->vtbl->SetRenderState)(this, 0x8D, 1, 0);
  LODWORD(this->member.CurrentFogColor.r) = dword_B3FA90;
  LODWORD(this->member.CurrentFogColor.g) = dword_B3FA94;
  LODWORD(this->member.CurrentFogColor.b) = dword_B3FA98;
  v2 = dbl_A3DDD8;
  result = (unsigned __int8)(int)(v2 * this->member.CurrentFogColor.b);
  this->member.unk098[0] = result
                         | (((unsigned __int8)(int)(this->member.CurrentFogColor.g * v2)
                           | (((int)(this->member.CurrentFogColor.r * v2) | 0xFFFFFF00) << 8)) << 8);
  return result;
}
