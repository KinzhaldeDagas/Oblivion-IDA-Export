//
// [2026-10-03 render-state distinction] Pixel program family tests DWORD 0xB42F48 against2 at 0x80E314 (legacy STFROND/ps_1_3 versus STFROND2/ps_2_0). This is distinct from render-mode WORD 0xB42EAC used for pass lists and stencil modes; the prior plugin reused that render-mode value as shaderPackage and incorrectly suppressed ordinary fog. Exact broader hardware/package semantics of B42F48 remain unnamed here.
//
// [2026-10-03 shader provenance audit] Parsed installed SDP tables and September05 baseline: 226 frond records, 14 unique bytecodes; 42 additional July backup records had no new variants. Current PS bytecode is plugin-mutated (lighting chains replaced with MOV/NOP; fog chains NOPed). VS001/003 emit lit color oT1 and fog oT2 while modern PS declarations expect v0 color and t1 fog; HDR PS also declares v1. VS002/003 have no c8 directional-dot consumer and reuse the point Lambert value for the c6 contribution. These are verified observations of local asset bytecode, not claims about pristine retail assets. Evidence inventory/disassembly: SpeedTreeOBSE/out/frond_shader_audit_2026-10-03. No shader package writes were made during this audit.
//
// [2026-10-03 program implementation] Complete embedded replacement set now implemented in SpeedTreeOBSE: 4 VS variants x HDR on/off, 2 PS legacy, 2 PS modern. VS preserves native declaration, c18 matrix-index/weight wind and clip-XYZ fog distance; fixes independent sun/point dot products and applies HDR TreeDimmer exactly once. Sample alpha survives lighting/fog. A separate hidden D3D9 HAL fixture created all12 programs and passed60 rendered cases on Parallels WDDM. This proves isolated shader math/interface on that device, not in-game loader hooks or scene lifetime. Current game packages remain untouched; native package lookup hooks supply the records.
// [2026-10-03 ABI re-audit] Actual exit80E4FA is RET(no immediate), no stack arguments; nativefactory setsECX=this before virtual+A8. Diagnostic wrapper preserves pointer result and logs program wrapper/GPU-handle presence after this function returns. Existing supplied-record logs alone do not prove completion of this call.
NiD3DShaderProgram *__thiscall OB_SpeedTreeFrondShader_LoadPrograms_010201A0(char *this)
{
  int v1; // esi
  char **v2; // edi
  char *v3; // ebx
  NiD3DShaderProgram *VertexShader; // eax
  int v5; // esi
  NiD3DShaderProgram *v6; // edi
  int v7; // esi
  bool v8; // cc
  int v9; // esi
  NiD3DShaderProgram **v10; // ebx
  NiD3DShaderProgram **v11; // edi
  NiD3DShaderProgram *result; // eax
  NiD3DShaderProgram *v13; // esi
  NiD3DShaderProgram *v14; // edi
  NiD3DShaderProgram *v15; // esi
  NiD3DShaderProgram *v16; // esi
  NiD3DShaderProgram *v17; // edi
  NiD3DShaderProgram *v18; // esi
  _DWORD *v19; // [esp+10h] [ebp-3E0h]
  _DWORD *v20; // [esp+10h] [ebp-3E0h]
  _DWORD *v21; // [esp+10h] [ebp-3E0h]
  int v22; // [esp+14h] [ebp-3DCh]
  int v23; // [esp+14h] [ebp-3DCh]
  _DWORD v25[38]; // [esp+1Ch] [ebp-3D4h] BYREF
  _DWORD v26[76]; // [esp+B4h] [ebp-33Ch] BYREF
  char FileName[260]; // [esp+1E4h] [ebp-20Ch] BYREF
  char v28[260]; // [esp+2E8h] [ebp-108h] BYREF

  v26[0] = "speedtree\\frond.v.hlsl"; /*0x80e0f0*/
  memset(&v26[1], 0, 0x48); /*0x80e0f7*/
  v26[0x13] = "speedtree\\frond.v.hlsl"; /*0x80e121*/
  v26[0x14] = &off_A90D88; /*0x80e128*/
  v26[0x15] = EmptyString; /*0x80e133*/
  memset(&v26[0x16], 0, 0x40); /*0x80e13a*/
  v26[0x26] = "speedtree\\frond.v.hlsl"; /*0x80e158*/
  v26[0x27] = "PT"; /*0x80e15f*/
  v26[0x28] = EmptyString; /*0x80e16a*/
  memset(&v26[0x29], 0, 0x40); /*0x80e171*/
  v26[0x39] = "speedtree\\frond.v.hlsl"; /*0x80e18f*/
  v26[0x3A] = "PT"; /*0x80e196*/
  v26[0x3B] = EmptyString; /*0x80e1a1*/
  v26[0x3C] = &off_A90D88; /*0x80e1a8*/
  v26[0x3D] = EmptyString; /*0x80e1b3*/
  memset(&v26[0x3E], 0, 0x38); /*0x80e1ba*/
  v25[0] = "speedtree\\frond.p.hlsl"; /*0x80e1d3*/
  memset(&v25[1], 0, 0x48); /*0x80e1d7*/
  v25[0x13] = "speedtree\\frond.p.hlsl"; /*0x80e1f3*/
  v25[0x14] = &off_A90D88; /*0x80e1fa*/
  v25[0x15] = EmptyString; /*0x80e205*/
  memset(&v25[0x16], 0, 0x40); /*0x80e20c*/
  v1 = 0; /*0x80e21f*/
  v2 = (char **)v26; /*0x80e221*/
  v22 = 0; /*0x80e22b*/
  v19 = v26; /*0x80e22f*/
  v3 = this + 0x7C; /*0x80e233*/
  do /*0x80e302*/
  {
    if ( *v2 ) /*0x80e236*/
    {
      sub_801030(*v2, (int)FileName); /*0x80e249*/
      _sprintf(v28, "STFROND%03i.vso", v1); /*0x80e25c*/
      VertexShader = CreateVertexShader(FileName, v2 + 1, "vs_1_1", v28, 0, 0); /*0x80e283*/
      v5 = *(_DWORD *)v3; /*0x80e288*/
      v6 = VertexShader; /*0x80e28a*/
      if ( *(NiD3DShaderProgram **)v3 != VertexShader ) /*0x80e28e*/
      {
        if ( v5 ) /*0x80e292*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x80e298*/
            (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x80e2ae*/
        }
        *(_DWORD *)v3 = v6; /*0x80e2b2*/
        if ( v6 ) /*0x80e2b4*/
          InterlockedIncrement((volatile LONG *)v6 + 1); /*0x80e2ba*/
      }
    }
    else
    {
      v7 = *(_DWORD *)v3; /*0x80e2c2*/
      if ( *(_DWORD *)v3 ) /*0x80e2c2*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x80e2cc*/
        {
          if ( v7 ) /*0x80e2d8*/
            (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x80e2e2*/
        }
        *(_DWORD *)v3 = 0; /*0x80e2e4*/
      }
    }
    v1 = v22 + 1; /*0x80e2ee*/
    v2 = (char **)(v19 + 0x13); /*0x80e2f1*/
    v3 += 4; /*0x80e2f4*/
    v8 = ++v22 < 4; /*0x80e2f7*/
    v19 += 0x13; /*0x80e2fe*/
  }
  while ( v8 ); /*0x80e302*/
  v9 = 0; /*0x80e30c*/
  v10 = (NiD3DShaderProgram **)(this + 0x8C); /*0x80e30e*/
  v11 = (NiD3DShaderProgram **)v25; /*0x80e31b*/
  v23 = 0; /*0x80e31f*/
  if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] < 2 ) /*0x80e323*/
  {
    v21 = v25; /*0x80e407*/
    do /*0x80e4dc*/
    {
      result = *v11; /*0x80e410*/
      if ( *v11 ) /*0x80e410*/
      {
        sub_801030((char *)result, (int)FileName); /*0x80e423*/
        _sprintf(v28, "STFROND%03i.pso", v9); /*0x80e436*/
        result = CreatePixelShader(FileName, v11 + 1, "ps_1_3", v28, 0, 0); /*0x80e45d*/
        v16 = *v10; /*0x80e462*/
        v17 = result; /*0x80e464*/
        if ( *v10 != result ) /*0x80e468*/
        {
          if ( v16 ) /*0x80e46c*/
          {
            result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v16 + 1); /*0x80e472*/
            if ( !result ) /*0x80e47a*/
              result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v16)(v16, 1); /*0x80e488*/
          }
          *v10 = v17; /*0x80e48c*/
          if ( v17 ) /*0x80e48e*/
            result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v17 + 1); /*0x80e494*/
        }
      }
      else
      {
        v18 = *v10; /*0x80e49c*/
        if ( *v10 ) /*0x80e49c*/
        {
          result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v18 + 1); /*0x80e4a6*/
          if ( !result ) /*0x80e4ae*/
          {
            if ( v18 ) /*0x80e4b2*/
              result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v18)(v18, 1); /*0x80e4bc*/
          }
          *v10 = 0; /*0x80e4be*/
        }
      }
      v9 = v23 + 1; /*0x80e4c8*/
      v11 = (NiD3DShaderProgram **)(v21 + 0x13); /*0x80e4cb*/
      ++v10; /*0x80e4ce*/
      v8 = ++v23 < 2; /*0x80e4d1*/
      v21 += 0x13; /*0x80e4d8*/
    }
    while ( v8 ); /*0x80e4dc*/
  }
  else
  {
    v20 = v25; /*0x80e329*/
    do /*0x80e3fc*/
    {
      result = *v11; /*0x80e330*/
      if ( *v11 ) /*0x80e330*/
      {
        sub_801030((char *)result, (int)FileName); /*0x80e343*/
        _sprintf(v28, "STFROND2%03i.pso", v9); /*0x80e356*/
        result = CreatePixelShader(FileName, v11 + 1, "ps_2_0", v28, 0, 0); /*0x80e37d*/
        v13 = *v10; /*0x80e382*/
        v14 = result; /*0x80e384*/
        if ( *v10 != result ) /*0x80e388*/
        {
          if ( v13 ) /*0x80e38c*/
          {
            result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v13 + 1); /*0x80e392*/
            if ( !result ) /*0x80e39a*/
              result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v13)(v13, 1); /*0x80e3a8*/
          }
          *v10 = v14; /*0x80e3ac*/
          if ( v14 ) /*0x80e3ae*/
            result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v14 + 1); /*0x80e3b4*/
        }
      }
      else
      {
        v15 = *v10; /*0x80e3bc*/
        if ( *v10 ) /*0x80e3bc*/
        {
          result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v15 + 1); /*0x80e3c6*/
          if ( !result ) /*0x80e3ce*/
          {
            if ( v15 ) /*0x80e3d2*/
              result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v15)(v15, 1); /*0x80e3dc*/
          }
          *v10 = 0; /*0x80e3de*/
        }
      }
      v9 = v23 + 1; /*0x80e3e8*/
      v11 = (NiD3DShaderProgram **)(v20 + 0x13); /*0x80e3eb*/
      ++v10; /*0x80e3ee*/
      v8 = ++v23 < 2; /*0x80e3f1*/
      v20 += 0x13; /*0x80e3f8*/
    }
    while ( v8 ); /*0x80e3fc*/
  }
  return result; /*0x80e4e2*/
}
