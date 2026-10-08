// Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
// Comparative queue audit 2026-10-01: verified body releases pixel map/program, vertex map/program, render-state group, six strings and texture stages, resets counters, then returns renderer-owned pass to pool; otherwise virtual destruction. Fallout827B68C0 has the same broad cleanup family but platform-specific layout/allocation calls. It is not a trivial free-list pointer update and must not execute inside a private DX11 metadata gate.
// DX11 restricted replacement lifetime audit 2026-10-01: pass+5D selects renderer-owned pool cleanup. Zero-reference release is not permitted inside a DX11 metadata gate. Pool pointer is the DWORD at B42044 (verified native operand), not the decompiler MEMORY B3F9B0 array expression. Resource cleanup and pool mutation require their own exclusion. A nonretiring external pin decrement may only proceed while count+60 is greater than one.
void __thiscall sub_7604D0(NiD3DPass *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  NiD3DShaderConstantMap *PixelConstantMap; // edi
  NiD3DPixelShader *PixelShader; // edi
  NiD3DShaderConstantMap *VertexConstantMap; // edi
  NiD3DVertexShader *VertexShader; // edi
  unsigned int *v7; // ecx
  char *VertexShaderTarget; // [esp-1Ch] [ebp-30h]
  char *VertexShaderEntryPoint; // [esp-18h] [ebp-2Ch]
  char *VertexShaderProgramFile; // [esp-14h] [ebp-28h]
  char *PixelShaderTarget; // [esp-10h] [ebp-24h]
  char *PixelShaderEntryPoint; // [esp-Ch] [ebp-20h]
  char *PixelShaderProgramFile; // [esp-8h] [ebp-1Ch]
  NiD3DPass *a2; // [esp+10h] [ebp-4h] BYREF

  if ( this->RendererOwned ) /*0x7604d7*/
  {
    v2 = InterlockedDecrement; /*0x7604e9*/
    PixelConstantMap = this->PixelConstantMap; /*0x7604f0*/
    if ( PixelConstantMap ) /*0x7604f5*/
    {
      if ( !v2((volatile LONG *)&PixelConstantMap->Unk04) ) /*0x7604fb*/
        ((void (__thiscall *)(NiD3DShaderConstantMap *, int))PixelConstantMap->_vtbl->Destroy)(PixelConstantMap, 1); /*0x76050d*/
      this->PixelConstantMap = 0; /*0x76050f*/
    }
    PixelShader = this->PixelShader; /*0x760512*/
    if ( PixelShader ) /*0x760517*/
    {
      if ( !v2((volatile LONG *)PixelShader + 1) ) /*0x76051d*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1); /*0x76052f*/
      this->PixelShader = 0; /*0x760531*/
    }
    VertexConstantMap = this->VertexConstantMap; /*0x760534*/
    if ( VertexConstantMap ) /*0x760539*/
    {
      if ( !v2((volatile LONG *)&VertexConstantMap->Unk04) ) /*0x76053f*/
        ((void (__thiscall *)(NiD3DShaderConstantMap *, int))VertexConstantMap->_vtbl->Destroy)(VertexConstantMap, 1); /*0x760551*/
      this->VertexConstantMap = 0; /*0x760553*/
    }
    VertexShader = this->VertexShader; /*0x760556*/
    if ( VertexShader ) /*0x76055b*/
    {
      if ( !v2((volatile LONG *)VertexShader + 1) ) /*0x760561*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1); /*0x760573*/
      this->VertexShader = 0; /*0x760575*/
    }
    NiD3DRenderStateGroup_ReleaseToPool((NiD3DPass *)this->RenderStateGroup); /*0x76057c*/
    PixelShaderProgramFile = this->PixelShaderProgramFile; /*0x760584*/
    this->RenderStateGroup = 0; /*0x760585*/
    FormHeapFree((unsigned int)PixelShaderProgramFile); /*0x760588*/
    PixelShaderEntryPoint = this->PixelShaderEntryPoint; /*0x760590*/
    this->PixelShaderProgramFile = 0; /*0x760591*/
    FormHeapFree((unsigned int)PixelShaderEntryPoint); /*0x760594*/
    PixelShaderTarget = this->PixelShaderTarget; /*0x76059c*/
    this->PixelShaderEntryPoint = 0; /*0x76059d*/
    FormHeapFree((unsigned int)PixelShaderTarget); /*0x7605a0*/
    VertexShaderProgramFile = this->VertexShaderProgramFile; /*0x7605a8*/
    this->PixelShaderTarget = 0; /*0x7605a9*/
    FormHeapFree((unsigned int)VertexShaderProgramFile); /*0x7605ac*/
    VertexShaderEntryPoint = this->VertexShaderEntryPoint; /*0x7605b4*/
    this->VertexShaderProgramFile = 0; /*0x7605b5*/
    FormHeapFree((unsigned int)VertexShaderEntryPoint); /*0x7605b8*/
    VertexShaderTarget = this->VertexShaderTarget; /*0x7605c0*/
    this->VertexShaderEntryPoint = 0; /*0x7605c1*/
    FormHeapFree((unsigned int)VertexShaderTarget); /*0x7605c4*/
    this->VertexShaderTarget = 0; /*0x7605cf*/
    sub_75FF80(&this->Stages); /*0x7605d2*/
    this->CurrentStage = 0; /*0x7605db*/
    this->StageCount = 0; /*0x7605de*/
    this->TexturesPerPass = 0; /*0x7605e1*/
    this->SoftwareVP = 0; /*0x7605e4*/
    v7 = (unsigned int *)LODWORD(MEMORY[0xB3F9B0][0x9A5]); /*0x7605e7*/
    a2 = this; /*0x7605ee*/
    sub_73A5E0(v7, &a2); /*0x7605f2*/
  }
  else
  {
    this->__vftable->Destroy(this, 1u); /*0x7604e2*/
  }
}
