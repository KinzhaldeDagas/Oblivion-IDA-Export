// BSShaderAccumulator pass-bucket flush (vtable +0x60). Indexes the original uint16 passBucket at this+0x104+0x14*passBucket, tests count at bucket+0x10, and returns immediately when empty. Water reflection remaps only activation/draw selector 0x49->0x48 and 0x16F->0x16E. Generic buckets 0x177..0x17A use ordinary DrawRenderPass. Non-frozen flush recycles accumulator nodes while retaining property ownership; FreezeRenderAccumulation intentionally leaves active nodes in the bucket for debug replay.
// DX11 replacement adapter audit 2026-10-01: this is the void __thiscall FlushPassBucket entry (ECX accumulator, two raw DWORD stack arguments, RET8), reached through BSShaderAccumulator vtable+0x60 (table entry A8CCBC). The backend observer now offers an optional post-Before replacement callback restricted to this kind and nonzero qualified cookie. Completed omits Original and uses normal completion; failure/exception invalidates and aborts without replay. Replacement preserves input nonvolatile/FX/flags and uses EAX=0 as a void diagnostic; do not infer exact native volatile outputs. The callback is NOT configured in production yet; lifetime/pool/write exclusion, complete effects and the GPU transaction still require proof. Adapter code alone grants no native ownership.
// DX11 integration boundary 2026-10-01: metadata commit timing is separate from bucket Before read capture. New backend WithRenderPhaseCommit requires the exact current phase, no draws/covered writers, and an independent native code/owner/lifetime/pool validator. A covered writer announces before the shared gate; contention during commit causes restoration before that writer can run native code. Entered commits/rollbacks expire the phase read epoch. No COM/GPU/native method is allowed under this private gate. This describes backend infrastructure only, not verified native lock coverage; production writer/pool coverage and replacement activation remain unresolved.
// DX11 integration 2026-10-01: LocalLightPublicationRuntime now routes a short metadata commit through this exact qualified bucket cookie plus enclosing Flush/Cull cookies and world/domain identity. Its configured write-proof callback is independent of read capture and must prove replacement-phase identity and native lifetime/writer/pool coverage. It performs no source-owner promotion and grants no registry read phase. One entered apply per bucket is allowed, including rollback. Committed status survives later close/health failure to prevent native replay. Production write validator and replacement callback remain unset; these are backend contracts, not evidence that all native writers are covered.
void __thiscall BSShaderAccumulator_FlushPassBucket(
        BSShaderAccumulator *this,
        unsigned int passBucket,
        int specialMode)
{
  unsigned int v3; // edi
  BSShader *shader; // ebp
  char *v5; // ebx
  BSShader *v6; // esi
  NiD3DShaderConstantMap *PixelConstantMap; // ecx
  _DWORD **v8; // eax
  int *v9; // esi
  _DWORD *v10; // eax
  bool v11; // zf
  void *v12; // ecx
  int *v13; // ebp
  _DWORD *v14; // eax
  _DWORD *v15; // esi
  BSShader *v17; // [esp+14h] [ebp-8h]
  BSShader *v18; // [esp+18h] [ebp-4h]
  _DWORD *specialModea; // [esp+24h] [ebp+8h]

  v3 = passBucket; /*0x7ac9ae*/
  if ( g_bWaterReflectionPassActive )           // Water-reflection bucket-flush gate. When active, remap the material activation/draw selector but continue indexing the accumulator list by the original passBucket. /*0x7ac9a3*/
  {                                             // During water reflection, selector 0x49 activates/draws as 0x48 while its nodes remain in original bucket 0x49.
    if ( passBucket == 0x49 ) /*0x7ac9be*/
    {
      v3 = 0x48; /*0x7ac9c0*/
    }
    else if ( passBucket == 0x16F )             // During water reflection, selector 0x16F activates/draws as 0x16E while its nodes remain in original bucket 0x16F. /*0x7ac9cd*/
    {
      v3 = 0x16E; /*0x7ac9cf*/
    }
  }
  shader = GetShaderDefinition(1u)->shader; /*0x7ac9db*/
  v5 = (char *)this + 0x14 * (unsigned __int16)passBucket; /*0x7ac9ef*/
  if ( !*((_DWORD *)v5 + 0x45) ) /*0x7ac9fc*/
    return; /*0x7ac9fc*/
  v6 = *(BSShader **)(**(_DWORD **)(*((_DWORD *)v5 + 0x42) + 8) + 0xBC); /*0x7aca0d*/
  v17 = 0; /*0x7aca17*/
  v18 = 0; /*0x7aca1b*/
  if ( v6 ) /*0x7aca1f*/
  {
    if ( ((int (__thiscall *)(BSShader *))v6->__vftable->super.super.super.No1C)(v6) < 1 /*0x7aca3f*/
      || ((int (__thiscall *)(BSShader *))v6->__vftable->super.super.super.No1C)(v6) > 5 )
    {
      if ( ((int (__thiscall *)(BSShader *))v6->__vftable->super.super.super.No1C)(v6) == 0x1B ) /*0x7aca86*/
      {
        v18 = v6; /*0x7aca8e*/
        Lighting30Shader_SelectRenderPass(v3); /*0x7aca92*/
        v6->member.super.VertexConstantMap->_vtbl->sub_9A97B0(v6->member.super.VertexConstantMap); /*0x7acaa2*/
        PixelConstantMap = v6->member.super.PixelConstantMap; /*0x7acaa4*/
        goto LABEL_14; /*0x7acaa4*/
      }
    }
    else
    {
      v17 = v6; /*0x7aca47*/
      sub_7D1320((int *)v3); /*0x7aca4b*/
      v6->member.super.VertexConstantMap->_vtbl->sub_9A97B0(v6->member.super.VertexConstantMap); /*0x7aca5b*/
      v6->member.super.PixelConstantMap->_vtbl->sub_9A97B0(v6->member.super.PixelConstantMap); /*0x7aca65*/
      if ( v6 != shader ) /*0x7aca69*/
      {
        shader->member.super.VertexConstantMap->_vtbl->sub_9A97B0(shader->member.super.VertexConstantMap); /*0x7aca73*/
        PixelConstantMap = shader->member.super.PixelConstantMap; /*0x7aca75*/
LABEL_14:
        PixelConstantMap->_vtbl->sub_9A97B0(PixelConstantMap); /*0x7acaa7*/
      }
    }
  }
  if ( byte_B2BB7C ) /*0x7acaae*/
  {
    if ( v3 == 0x48 || v3 == 0x49 || v3 >= 0x168 && v3 <= 0x175 ) /*0x7acadb*/
    {
      sub_7AA550( /*0x7acd2f*/
        (_DWORD *)this + 5 * (unsigned __int16)passBucket + 0x41,
        (int (__cdecl *)(_DWORD *, _DWORD *))sub_7AA390);
      sub_7F6FC0(*((int **)this + 0x899), (_DWORD *)this + 5 * (unsigned __int16)passBucket + 0x41, v3); /*0x7acd3c*/
      return; /*0x7acd48*/
    }
    if ( v3 == 0xC || v3 == 0xD || v3 >= 0x195 && v3 <= 0x197 ) /*0x7acb01*/
    {
      sub_7AA550( /*0x7accfd*/
        (_DWORD *)this + 5 * (unsigned __int16)passBucket + 0x41,
        (int (__cdecl *)(_DWORD *, _DWORD *))sub_7AA390);
      sub_7F7680(*((int **)this + 0x899), (_DWORD *)this + 5 * (unsigned __int16)passBucket + 0x41, v3);// Special TallGrass selector-0x197 submission path; distinct from generic RenderPass draw at 0x007A9820. /*0x7acd0a*/
      return; /*0x7acd16*/
    }
    switch ( v3 ) /*0x7acc39*/
    {
      case 0x54u: /*0x7acc39*/
      case 0x5Fu: /*0x7acc39*/
      case 0x6Au: /*0x7acc39*/
      case 0x75u: /*0x7acc39*/
      case 0x82u: /*0x7acc39*/
      case 0x90u: /*0x7acc39*/
      case 0x9Du: /*0x7acc39*/
      case 0xAAu: /*0x7acc39*/
      case 0xB8u: /*0x7acc39*/
      case 0xC5u: /*0x7acc39*/
      case 0xD2u: /*0x7acc39*/
      case 0xDFu: /*0x7acc39*/
      case 0xEEu: /*0x7acc39*/
      case 0xF5u: /*0x7acc39*/
      case 0xFCu: /*0x7acc39*/
      case 0x103u: /*0x7acc39*/
      case 0x10Bu: /*0x7acc39*/
      case 0x11Bu: /*0x7acc39*/
      case 0x122u: /*0x7acc39*/
      case 0x129u: /*0x7acc39*/
      case 0x194u: /*0x7acc39*/
      case 0x18u: /*0x7acc39*/
      case 0x2Fu: /*0x7acc39*/
      case 0x30u: /*0x7acc39*/
      case 0x33u: /*0x7acc39*/
      case 0xE7u: /*0x7acc39*/
      case 0x113u: /*0x7acc39*/
      case 0x114u: /*0x7acc39*/
        sub_7AA550( /*0x7acccb*/
          (_DWORD *)this + 5 * (unsigned __int16)passBucket + 0x41,
          (int (__cdecl *)(_DWORD *, _DWORD *))sub_7AA390);
        sub_7F7EE0(*((int **)this + 0x899), (_DWORD *)this + 5 * (unsigned __int16)passBucket + 0x41, v3); /*0x7accd8*/
        return; /*0x7acce4*/
      case 0xEu: /*0x7acc39*/
        sub_7AA550( /*0x7acc56*/
          (_DWORD *)this + 5 * (unsigned __int16)passBucket + 0x41,
          (int (__cdecl *)(_DWORD *, _DWORD *))sub_7AA390);
        sub_7F86C0(*((int **)this + 0x899), (_DWORD *)this + 5 * (unsigned __int16)passBucket + 0x41, 0xE); /*0x7acc64*/
        return; /*0x7acc70*/
      case 0x17Bu: /*0x7acc39*/
        sub_7AA550( /*0x7acc95*/
          (_DWORD *)this + 5 * (unsigned __int16)passBucket + 0x41,
          (int (__cdecl *)(_DWORD *, _DWORD *))sub_7AA390);
        sub_7F8DB0(*((int **)this + 0x899), (_DWORD *)this + 5 * (unsigned __int16)passBucket + 0x41, 0x17B); /*0x7acca6*/
        return; /*0x7accb2*/
    }
  }
  v8 = *((_DWORD ***)v5 + 0x42); /*0x7acd52*/
  v9 = v8[2]; /*0x7acd58*/
  specialModea = *v8; /*0x7acd60*/
  if ( MEMORY[0xB42E97] && (v10 = *((_DWORD **)this + 0x87C)) != 0 ) /*0x7acd72*/
  {
    while ( 1 ) /*0x7acd76*/
    {
      v11 = *v9 == v10[2]; /*0x7acd76*/
      v12 = v10 + 2; /*0x7acd79*/
      v10 = (_DWORD *)*v10; /*0x7acd7e*/
      if ( v11 ) /*0x7acd80*/
        break; /*0x7acd80*/
      if ( !v10 ) /*0x7acd84*/
        goto LABEL_65; /*0x7acd84*/
    }
  }
  else
  {
LABEL_65:
    if ( (v3 < 0x160 || v3 > 0x162) && v3 - 0x156 > 2 ) /*0x7acda5*/
    {
      if ( *((_BYTE *)this + 0x21E2) ) /*0x7acdbd*/
      {
        if ( v17 || v18 ) /*0x7acdd2*/
          BSTPersistentList_AppendTailReusingFreeNode((_DWORD *)this + 0x885, v9); /*0x7acddb*/
      }
      BSShaderAccumulator_DrawRenderPass(v9, v3); /*0x7acde4*/
    }
    else
    {
      BSTPersistentList_AppendTailReusingFreeNode((_DWORD *)this + 0x880, v9); /*0x7acdb2*/
    }
    ++g_rendererPassCount; /*0x7acde9*/
    v12 = (void *)(*(unsigned __int16 (__thiscall **)(_DWORD))(**(_DWORD **)(*v9 + 0xB4) + 0x5C))(*(_DWORD *)(*v9 + 0xB4)); /*0x7ace02*/
    g_rendererTrianglePassCount += (int)v12; /*0x7ace05*/
  }
  if ( v17 ) /*0x7ace10*/
  {
    sub_7D1800(v3); /*0x7ace13*/
  }
  else if ( v18 ) /*0x7ace1f*/
  {
    Shared_NoOpVirtual_60D0A0(v12); /*0x7ace22*/
  }
  while ( specialModea ) /*0x7ace33*/
  {
    v13 = (int *)specialModea[2]; /*0x7ace4d*/
    specialModea = (_DWORD *)*specialModea; /*0x7ace53*/
    if ( MEMORY[0xB42E97] && (v14 = *((_DWORD **)this + 0x87C)) != 0 ) /*0x7ace61*/
    {
      while ( 1 ) /*0x7ace66*/
      {
        v11 = *v13 == v14[2]; /*0x7ace66*/
        v14 = (_DWORD *)*v14; /*0x7ace6e*/
        if ( v11 ) /*0x7ace70*/
          break; /*0x7ace70*/
        if ( !v14 ) /*0x7ace74*/
          goto LABEL_86; /*0x7ace74*/
      }
    }
    else
    {
LABEL_86:
      if ( (v3 < 0x160 || v3 > 0x162) && v3 - 0x156 > 2 ) /*0x7ace95*/
      {
        if ( *((_BYTE *)this + 0x21E2) ) /*0x7acea5*/
        {
          if ( v17 || v18 ) /*0x7aceba*/
            BSTPersistentList_AppendTailReusingFreeNode((_DWORD *)this + 0x885, v13); /*0x7acec3*/
        }
        BSShaderAccumulator_DrawRenderPass(v13, v3); /*0x7acecc*/
      }
      else
      {
        BSTPersistentList_AppendTailReusingFreeNode((_DWORD *)this + 0x880, v13); /*0x7ace9e*/
      }
      ++g_rendererPassCount; /*0x7aced1*/
      g_rendererTrianglePassCount += (*(unsigned __int16 (__thiscall **)(_DWORD))(**(_DWORD **)(*v13 + 0xB4) + 0x5C))(*(_DWORD *)(*v13 + 0xB4)); /*0x7aceee*/
    }
  }
  if ( !g_bRendererAccumulationFrozen )         // If accumulation is frozen, retain the active bucket nodes and their borrowed RenderPass pointers after drawing. /*0x7aceff*/
  {
    v15 = (_DWORD *)((char *)this + 0x14 * (unsigned __int16)passBucket + 0x104); /*0x7acf10*/
    BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)v15);// Non-frozen flush first returns the bucket's old free-node chain to the global pool; it does not destroy RenderPass payloads. /*0x7acf15*/
    v15[3] = v15[1];                            // Move the just-flushed active nodes to this bucket's free list, then clear head/tail/count. Borrowed RenderPass payloads remain property-owned. /*0x7acf1d*/
    v15[1] = 0; /*0x7acf22*/
    v15[2] = 0; /*0x7acf25*/
    v15[4] = 0; /*0x7acf28*/
  }
}
