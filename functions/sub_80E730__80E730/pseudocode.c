//
//
// [2026-10-03 profile comparison] Native frond pass creates exactly one texture stage, sampler0, then binds VS/PS variants. Local RT4.1 compile switches FROND_NORMAL_MAPPING/SELF_SHADOW_LAYER represent a broader material profile; they are not latent bindings in this native pass. Current restored profile remains diffuse-only, with normal/detail/self-shadow metadata retained but not bound. This limitation is explicit and is not claimed as full RT4.1 material parity.
// [2026-10-03 VERIFIED crash defect] Exact entry is80E730, confirmed by function.start_ea and nativefactory CALL80EF7A bytesE8B1F7FFFF. Earlier decompilation requests at80E740 silently normalized to this containing function; the plugin incorrectly called literal80E740. That address is the immediate08 byte of83EC08 (SUB ESP,8) starting80E73E, after required PUSH -1/PUSH SEH handler/MOV EAX,FS:[0]/PUSH EAX. Entering there executes mid-instruction bytes and bypasses SEH/stack setup. 13:31 runtime checkpoints prove all six GPU program handles exist and SEHhead001AF708 unchanged, then stop at native-pass-enter. This aligns with repeated INVALID_EXCEPTION_CHAIN/c0000005 at18894A41. Plugin corrected call to80E730 and installation verifies the saved factory rel32 target matches that constant. Post-fix game startup remains to be confirmed.
// [2026-10-03 post-fix runtime evidence] 13:53 log contains native-pass-return, both stage-bound status0, material-pass-return and shadow-binding-return status0, with SEHhead unchanged001AF708. Ordinary tree processing follows. The earlier pass-entry startup failure is therefore passed on this run. A different later save-load AV is at7D22D5(BBX shadow-caster lookup dereference), not this construction boundary.
void __thiscall OB_SpeedTreeFrondShader_BuildDrawPass_010201A0(SpeedTreeFrondShader *this)
{
  NiD3DPass **v2; // edi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  int v7; // ebp
  int v8; // ebx
  int v9; // edi
  int v10; // ebx
  int v11; // esi
  int v12; // edi
  NiD3DTextureStage *v13; // eax
  unsigned int *a3; // [esp+14h] [ebp-14h] BYREF
  NiD3DPass *v15; // [esp+18h] [ebp-10h] BYREF
  int v16; // [esp+24h] [ebp-4h]

  v2 = NiD3DPassPool_Acquire(&v15); /*0x80e766*/
  v3 = *((NiD3DPass **)this + 0x25); /*0x80e768*/
  v4 = v3 == *v2; /*0x80e76e*/
  v16 = 0; /*0x80e770*/
  if ( !v4 ) /*0x80e778*/
  {
    if ( v3 ) /*0x80e77c*/
    {
      v4 = v3->RefCount-- == 1; /*0x80e77e*/
      if ( v4 ) /*0x80e782*/
        NiD3DPass_ReleaseToPool(v3); /*0x80e784*/
    }
    v5 = *v2; /*0x80e789*/
    v4 = *v2 == 0; /*0x80e78b*/
    *((_DWORD *)this + 0x25) = *v2; /*0x80e78d*/
    if ( !v4 ) /*0x80e793*/
      ++v5->RefCount; /*0x80e795*/
  }
  v6 = v15; /*0x80e799*/
  v16 = 0xFFFFFFFF; /*0x80e79f*/
  if ( v15 ) /*0x80e7a7*/
  {
    --v15->RefCount; /*0x80e7a9*/
    if ( !v6->RefCount ) /*0x80e7b2*/
      NiD3DPass_ReleaseToPool(v6); /*0x80e7b7*/
  }
  NiD3DTextureStagePool_Acquire(&a3); /*0x80e7c1*/
  v16 = 1; /*0x80e7d1*/
  BSShader_ConfigureTextureStageSampler(a3, 0, 3, 2); /*0x80e7d9*/
  NiD3DPass_SetTextureStage(*((NiD3DPass **)this + 0x25), *(_DWORD *)(*((_DWORD *)this + 0x25) + 0x14), a3); /*0x80e7f0*/
  v7 = *((_DWORD *)this + 0x25); /*0x80e7f5*/
  v8 = *((_DWORD *)this + 0x1F); /*0x80e7fb*/
  v9 = *(_DWORD *)(v7 + 0x58); /*0x80e7fe*/
  if ( v9 != v8 ) /*0x80e803*/
  {
    if ( v9 ) /*0x80e807*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x80e80d*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x80e823*/
    }
    *(_DWORD *)(v7 + 0x58) = v8; /*0x80e827*/
    if ( v8 ) /*0x80e82a*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x80e830*/
  }
  v10 = *((_DWORD *)this + 0x23); /*0x80e836*/
  v11 = *((_DWORD *)this + 0x25); /*0x80e83c*/
  v12 = *(_DWORD *)(v11 + 0x44); /*0x80e842*/
  if ( v12 != v10 ) /*0x80e847*/
  {
    if ( v12 ) /*0x80e84b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x80e851*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x80e867*/
    }
    *(_DWORD *)(v11 + 0x44) = v10; /*0x80e86b*/
    if ( v10 ) /*0x80e86e*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x80e874*/
  }
  v13 = (NiD3DTextureStage *)a3; /*0x80e87a*/
  v16 = 0xFFFFFFFF; /*0x80e880*/
  if ( a3 ) /*0x80e888*/
  {
    --a3[0x17]; /*0x80e88a*/
    if ( !v13[7].Unk08 ) /*0x80e893*/
      sub_772560(v13); /*0x80e898*/
  }
}
