0x6EDE10: push    0FFFFFFFFh; SetControlPair computes clampedTarget-current projection for two controls, multiplies deltas by cached 2x2 transform at this+0xC34+0x10*(channel+2*fan), then adds two scaled basis transposes to matrix[2*channel]. Uninitialized FanControls produces no update. Fan upper-bound assertion logs/returns; this entry has no direct channel guard.
0x6EDE12: push    offset SEH_6EDE10
0x6EDE17: mov     eax, large fs:0
0x6EDE1D: push    eax
0x6EDE1E: sub     esp, 50h
0x6EDE21: push    ebx
0x6EDE22: push    ebp
0x6EDE23: push    esi
0x6EDE24: push    edi
0x6EDE25: mov     eax, ds:0B30AACh
0x6EDE2A: xor     eax, esp
0x6EDE2C: push    eax
0x6EDE2D: lea     eax, [esp+70h+var_C]
0x6EDE31: mov     large fs:0, eax
0x6EDE37: mov     ebp, ecx
0x6EDE39: mov     ebx, [esp+70h+fanIndex]
0x6EDE3D: cmp     ebx, 5
0x6EDE40: jl      short loc_6EDE54
0x6EDE42: push    0D9h ; 'Ù'; sourceLine
0x6EDE47: push    offset a_Fancontrols_c; ".\\FanControls.cpp"
0x6EDE4C: call    FaceGen_ReportAssertionViolation; FaceGen assertion reporter: PrintError("FR2 ASSERT violation in %s line %i. Code may crash.", sourceFile, sourceLine); returns normally. NOT noreturn and NOT a validation barrier.
0x6EDE51: add     esp, 8
0x6EDE54: cmp     byte ptr [ebp+0], 0
0x6EDE58: jz      loc_6EDFF5
0x6EDE5E: fld     dword ptr ds:0A468FCh; Per-pair target clamps: age control 0 is [15,65]; absolute sex control 1 is [-4,4].
0x6EDE64: mov     eax, [esp+70h+targetPair]
0x6EDE68: mov     edi, [esp+70h+matrixChannel]
0x6EDE6C: fstp    [esp+70h+var_54]
0x6EDE70: fld     dword ptr ds:0A63CD4h
0x6EDE76: lea     ecx, [esp+70h+var_54]
0x6EDE7A: fstp    [esp+70h+var_50]
0x6EDE7E: xor     esi, esi
0x6EDE80: fld     dword ptr ds:0A47800h
0x6EDE86: sub     eax, ecx
0x6EDE88: fstp    [esp+70h+var_4C]
0x6EDE8C: mov     [esp+70h+targetPair], eax
0x6EDE90: fld     dword ptr ds:0A46B10h
0x6EDE96: fstp    [esp+70h+var_48]
0x6EDE9A: fldz
0x6EDE9C: fst     [esp+70h+var_5C]
0x6EDEA0: fstp    [esp+70h+var_58]
0x6EDEA4: jmp     short loc_6EDEB4
0x6EDEA6: jmp     short loc_6EDEB0
0x6EDEB0: mov     eax, [esp+70h+targetPair]
0x6EDEB4: lea     ecx, [esp+esi*4+70h+var_54]
0x6EDEB8: fld     dword ptr [eax+ecx]
0x6EDEBB: fstp    [esp+70h+fanIndex]
0x6EDEBF: fld     [esp+70h+fanIndex]
0x6EDEC3: fld     dword ptr [ecx]
0x6EDEC5: fcompp
0x6EDEC7: fnstsw  ax
0x6EDEC9: test    ah, 41h
0x6EDECC: jnz     short loc_6EDED4
0x6EDECE: fld     dword ptr [ecx]
0x6EDED0: fstp    [esp+70h+fanIndex]
0x6EDED4: fld     [esp+70h+fanIndex]
0x6EDED8: fld     [esp+esi*4+70h+var_4C]
0x6EDEDC: fcompp
0x6EDEDE: fnstsw  ax
0x6EDEE0: test    ah, 5
0x6EDEE3: jp      short loc_6EDEED
0x6EDEE5: fld     [esp+esi*4+70h+var_4C]
0x6EDEE9: fstp    [esp+70h+fanIndex]
0x6EDEED: mov     edx, [esp+70h+parameters]
0x6EDEF4: fld     [esp+70h+fanIndex]
0x6EDEF8: push    edx; parameters
0x6EDEF9: fstp    [esp+74h+var_44]
0x6EDEFD: push    edi; matrixChannel
0x6EDEFE: push    esi; controlIndex
0x6EDEFF: push    ebx; fanIndex
0x6EDF00: mov     ecx, ebp; this
0x6EDF02: call    FaceGenFanControls_GetControlValue; Compute each control adjustment independently as clampedTarget - currentProjectedControl.
0x6EDF07: fsubr   [esp+70h+var_44]
0x6EDF0B: add     esi, 1
0x6EDF0E: cmp     esi, 2
0x6EDF11: fstp    [esp+esi*4+70h+var_60]
0x6EDF15: jl      short loc_6EDEB0
0x6EDF17: lea     eax, [edi+ebx*2]; Selects the authored 2x2 coupling transform for (fanIndex, matrixChannel).
0x6EDF1A: shl     eax, 4
0x6EDF1D: fld     dword ptr [eax+ebp+0C38h]
0x6EDF24: lea     eax, [eax+ebp+0C34h]
0x6EDF2B: fld     [esp+70h+var_58]
0x6EDF2F: mov     edx, [esp+70h+parameters]
0x6EDF36: fld     st
0x6EDF38: lea     ecx, [edi+edi*2]
0x6EDF3B: fmulp   st(2), st; Selects FaceGen matrix 2*matrixChannel: channel 0 updates matrix 0, channel 1 updates matrix 2.
0x6EDF3D: shl     ecx, 4
0x6EDF40: fld     dword ptr [eax]
0x6EDF42: add     ecx, edx
0x6EDF44: fld     [esp+70h+var_5C]
0x6EDF48: xor     esi, esi
0x6EDF4A: fld     st
0x6EDF4C: mov     [esp+70h+parameters], ecx; Apply the coupled basis corrections to parameters.matrix[2 * matrixChannel].
0x6EDF53: fmulp   st(2), st
0x6EDF55: fxch    st(3)
0x6EDF57: faddp   st(1), st
0x6EDF59: fstp    [esp+70h+var_4C]; Coupled correction scale uses cached 2x2 transform and projected deltas; no finite-value or success check before matrix updates. Prettier Faces 1.19.6 verifies coefficients after restoring control projections and rolls back the final candidate when normalization produces invalid output. Native setter returns void; checking only finite requested controls does not validate the result.
0x6EDF5D: fmul    dword ptr [eax+0Ch]
0x6EDF60: fld     dword ptr [eax+8]
0x6EDF63: lea     eax, [edi+ebx*4]
0x6EDF66: fmulp   st(2), st
0x6EDF68: shl     eax, 5
0x6EDF6B: lea     edi, [eax+ebp+25Ch]
0x6EDF72: or      ebp, 0FFFFFFFFh
0x6EDF75: faddp   st(1), st
0x6EDF77: fstp    [esp+70h+var_48]
0x6EDF7B: jmp     short loc_6EDF80
0x6EDF80: lea     ecx, [esp+70h+out]
0x6EDF84: push    ecx; out
0x6EDF85: mov     ecx, edi; this
0x6EDF87: call    FaceGenMatrix_Transpose; Matrix transpose: out has source.columns x source.rows and receives out[col,row] = source[row,col].
0x6EDF8C: fld     [esp+esi*4+70h+var_4C]
0x6EDF90: push    ecx
0x6EDF91: lea     edx, [esp+74h+var_3C]
0x6EDF95: fstp    [esp+74h+scale]; scale
0x6EDF98: xor     ebx, ebx
0x6EDF9A: push    edx; out
0x6EDF9B: mov     ecx, eax; this
0x6EDF9D: mov     [esp+78h+var_4], ebx
0x6EDFA1: call    FaceGenMatrix_Scale; Matrix scalar multiply: out = this * scale. Dimensions and storage are initialized from the source matrix.
0x6EDFA6: mov     ecx, [esp+70h+parameters]; this
0x6EDFAD: push    eax; rhs
0x6EDFAE: mov     byte ptr [esp+74h+var_4], 1
0x6EDFB3: call    FaceGenMatrix_AddInPlace; Dimension-checked in-place element addition: this += rhs.
0x6EDFB8: mov     eax, [esp+70h+var_3C.begin]
0x6EDFBC: cmp     eax, ebx
0x6EDFBE: jz      short loc_6EDFC9
0x6EDFC0: push    eax
0x6EDFC1: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6EDFC6: add     esp, 4
0x6EDFC9: mov     eax, [esp+70h+out.begin]
0x6EDFCD: cmp     eax, ebx
0x6EDFCF: mov     [esp+70h+var_3C.begin], ebx
0x6EDFD3: mov     [esp+70h+var_3C.end], ebx
0x6EDFD7: mov     [esp+70h+var_3C.capacityEnd], ebx
0x6EDFDB: mov     [esp+70h+var_4], ebp
0x6EDFDF: jz      short loc_6EDFEA
0x6EDFE1: push    eax
0x6EDFE2: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6EDFE7: add     esp, 4
0x6EDFEA: add     esi, 1
0x6EDFED: add     edi, 40h ; '@'
0x6EDFF0: cmp     esi, 2
0x6EDFF3: jb      short loc_6EDF80
0x6EDFF5: mov     ecx, [esp+70h+var_C]
0x6EDFF9: mov     large fs:0, ecx
0x6EE000: pop     ecx
0x6EE001: pop     edi
0x6EE002: pop     esi
0x6EE003: pop     ebp
0x6EE004: pop     ebx
0x6EE005: add     esp, 5Ch
0x6EE008: retn    10h
0x9C8460: lea     ecx, [ebp-24h]; this
0x9C8463: jmp     FaceGenMatrix_Destruct; Destroys a FaceGenMatrix by freeing the coefficient allocation at +0x0C, then clears begin/end/capacity-end.
0x9C8468: lea     ecx, [ebp-3Ch]; this
0x9C846B: jmp     FaceGenMatrix_Destruct; Destroys a FaceGenMatrix by freeing the coefficient allocation at +0x0C, then clears begin/end/capacity-end.
0x9C8470: mov     edx, [esp+matrixChannel]
0x9C8474: lea     eax, [edx-60h]
0x9C8477: mov     ecx, [edx-64h]
0x9C847A: xor     ecx, eax
0x9C847C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C8481: mov     eax, offset stru_AF0700
0x9C8486: jmp     ___CxxFrameHandler3
