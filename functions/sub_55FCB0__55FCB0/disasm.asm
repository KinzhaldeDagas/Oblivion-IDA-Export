0x55FCB0: push    0FFFFFFFFh; Refresh cached tree model distance parameters across singleton tree cache using fTreeNearDistanceBase and flt_B39E10.
0x55FCB2: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x55FCB7: mov     eax, large fs:0
0x55FCBD: push    eax
0x55FCBE: sub     esp, 0Ch
0x55FCC1: push    esi
0x55FCC2: push    edi
0x55FCC3: mov     eax, ds:0B30AACh
0x55FCC8: xor     eax, esp
0x55FCCA: push    eax
0x55FCCB: lea     eax, [esp+24h+var_C]
0x55FCCF: mov     large fs:0, eax
0x55FCD5: mov     esi, ds:0B39E04h
0x55FCDB: test    esi, esi
0x55FCDD: jnz     short loc_55FCEE
0x55FCDF: push    esi; recreate
0x55FCE0: call    BSTreeManager_Create; Verified singleton Create(recreate): optionally destroys/frees an existing BSTreeManager, allocates 0x28 bytes, runs BSTreeManager_ctor, and stores the instance.
0x55FCE5: mov     esi, ds:0B39E04h
0x55FCEB: add     esp, 4
0x55FCEE: mov     ecx, [esi]
0x55FCF0: test    ecx, ecx
0x55FCF2: jz      loc_55FDD2
0x55FCF8: mov     edx, [ecx+4]
0x55FCFB: xor     eax, eax
0x55FCFD: test    edx, edx
0x55FCFF: jbe     short loc_55FD15
0x55FD01: mov     edi, [ecx+8]
0x55FD04: mov     ecx, edi
0x55FD06: cmp     dword ptr [ecx], 0
0x55FD09: jnz     short loc_55FD28
0x55FD0B: add     eax, 1
0x55FD0E: add     ecx, 4
0x55FD11: cmp     eax, edx
0x55FD13: jb      short loc_55FD06
0x55FD15: xor     eax, eax
0x55FD17: test    eax, eax
0x55FD19: mov     [esp+24h+position], eax
0x55FD1D: jz      loc_55FDD2
0x55FD23: or      edi, 0FFFFFFFFh
0x55FD26: jmp     short loc_55FD36
0x55FD28: mov     eax, [edi+eax*4]
0x55FD2B: jmp     short loc_55FD17
0x55FD30: mov     esi, ds:0B39E04h
0x55FD36: test    esi, esi
0x55FD38: jnz     short loc_55FD67
0x55FD3A: push    28h ; '('; Size
0x55FD3C: call    FormHeapAlloc
0x55FD41: add     esp, 4
0x55FD44: mov     [esp+24h+keyOut], eax
0x55FD48: test    eax, eax
0x55FD4A: mov     [esp+24h+var_4], esi
0x55FD4E: jz      short loc_55FD59
0x55FD50: mov     ecx, eax; this
0x55FD52: call    BSTreeManager_ctor; Verified Oblivion manager layout is 0x28 bytes with modelCacheByTree at +0 and pendingReferenceNodes at +0x24; constructor initializes shared Ni properties and the TESObjectREFR* -> BSTreeNode* map. Fallout's manager size/field offsets differ. Confidence applies to these local offsets and constructor stores.
0x55FD57: jmp     short loc_55FD5B
0x55FD59: xor     eax, eax
0x55FD5B: mov     esi, eax
0x55FD5D: mov     [esp+24h+var_4], edi
0x55FD61: mov     ds:0B39E04h, esi
0x55FD67: lea     eax, [esp+24h+valueOut]
0x55FD6B: push    eax; valueOut
0x55FD6C: lea     ecx, [esp+28h+keyOut]
0x55FD70: push    ecx; keyOut
0x55FD71: mov     ecx, [esi]; self
0x55FD73: lea     edx, [esp+2Ch+position]
0x55FD77: push    edx; position
0x55FD78: call    NiTMap_U32Pointer_GetNextEntry
0x55FD7D: mov     eax, [esp+24h+valueOut]
0x55FD81: test    eax, eax
0x55FD83: jz      short loc_55FDC7
0x55FD85: mov     eax, [eax]
0x55FD87: test    eax, eax
0x55FD89: jz      short loc_55FDC7
0x55FD8B: mov     eax, [eax+0Ch]
0x55FD8E: test    eax, eax
0x55FD90: jz      short loc_55FDC7
0x55FD92: fld     dword ptr ds:0B0760Ch
0x55FD98: sub     esp, 8
0x55FD9B: fld     st
0x55FD9D: mov     ecx, eax; this
0x55FD9F: fmul    dword ptr ds:0B39E10h
0x55FDA5: fstp    [esp+2Ch+keyOut]
0x55FDA9: fld     [esp+2Ch+keyOut]
0x55FDAD: fstp    [esp+2Ch+farDistance]; farDistance
0x55FDB1: fmul    dword ptr ds:0B39E08h
0x55FDB7: fstp    [esp+2Ch+keyOut]
0x55FDBB: fld     [esp+2Ch+keyOut]
0x55FDBF: fstp    [esp+2Ch+nearDistance]; nearDistance
0x55FDC2: call    CSpeedTreeRT__SetLodLimits; CSpeedTreeRT::SetLodLimits thin wrapper. Forwards near/far limits to CTreeEngine::SetLodLimits at 0x7A24D0.
0x55FDC7: cmp     [esp+24h+position], 0
0x55FDCC: jnz     loc_55FD30
0x55FDD2: mov     ecx, [esp+24h+var_C]
0x55FDD6: mov     large fs:0, ecx
0x55FDDD: pop     ecx
0x55FDDE: pop     edi
0x55FDDF: pop     esi
0x55FDE0: add     esp, 18h
0x55FDE3: retn
0x9CAD70: mov     eax, [ebp-10h]
0x9CAD73: push    eax
0x9CAD74: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CAD79: pop     ecx
0x9CAD7A: retn
0x9CAD7B: mov     edx, [esp+arg_4]
0x9CAD7F: lea     eax, [edx-14h]
0x9CAD82: mov     ecx, [edx-18h]
0x9CAD85: xor     ecx, eax
0x9CAD87: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CAD8C: mov     eax, offset stru_AF3390
0x9CAD91: jmp     ___CxxFrameHandler3
