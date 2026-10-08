0x552990: push    0FFFFFFFFh; Four-matrix combine. Normal branch adds base+delta; optional positive maximumRms rescales using sqrt(sumSquares/rows), NOT sqrt(sumSquares/(rows*columns)). Equivalent to coefficient RMS only for columns=1. Special second-bank branch copies base matrices 2/3 rather than adding delta. No claim of malformed multi-column asset impact without callers/asset evidence.
0x552992: push    offset SEH_552990
0x552997: mov     eax, large fs:0
0x55299D: push    eax
0x55299E: sub     esp, 28h
0x5529A1: push    ebx
0x5529A2: push    ebp
0x5529A3: push    esi
0x5529A4: push    edi
0x5529A5: mov     eax, ds:0B30AACh
0x5529AA: xor     eax, esp
0x5529AC: push    eax
0x5529AD: lea     eax, [esp+48h+var_C]
0x5529B1: mov     large fs:0, eax
0x5529B7: mov     edx, [esp+48h+outParameters]
0x5529BB: test    edx, edx
0x5529BD: jz      loc_552BF2
0x5529C3: mov     eax, [esp+48h+base]
0x5529C7: test    eax, eax
0x5529C9: jnz     short loc_5529F5
0x5529CB: mov     eax, [esp+48h+delta]
0x5529CF: test    eax, eax
0x5529D1: jz      loc_552BF2
0x5529D7: push    edx; destination
0x5529D8: push    eax; source
0x5529D9: call    FaceGenHeadParameters_Copy; Deep-copies all four FaceGen matrices, preserving dimensions and engine ownership of destination coefficient buffers.
0x5529DE: add     esp, 8
0x5529E1: mov     ecx, [esp+48h+var_C]
0x5529E5: mov     large fs:0, ecx
0x5529EC: pop     ecx
0x5529ED: pop     edi
0x5529EE: pop     esi
0x5529EF: pop     ebp
0x5529F0: pop     ebx
0x5529F1: add     esp, 34h
0x5529F4: retn
0x5529F5: mov     ecx, [esp+48h+delta]
0x5529F9: test    ecx, ecx
0x5529FB: jz      short loc_5529D7
0x5529FD: sub     ecx, eax
0x5529FF: mov     [esp+48h+var_28], ecx
0x552A03: mov     ecx, eax
0x552A05: xor     ebx, ebx
0x552A07: sub     ecx, edx
0x552A09: mov     [esp+48h+var_34], ecx
0x552A0D: jmp     short loc_552A18
0x552A10: mov     ecx, [esp+48h+var_34]
0x552A14: mov     edx, [esp+48h+outParameters]
0x552A18: lea     esi, [ebx+ebx*2]
0x552A1B: shl     esi, 4
0x552A1E: add     esi, edx
0x552A20: lea     ebp, [edx+30h]
0x552A23: mov     [esp+48h+var_30], 2
0x552A2B: jmp     short loc_552A34
0x552A30: mov     ecx, [esp+48h+var_34]
0x552A34: mov     eax, [ecx+esi]
0x552A37: fldz
0x552A39: test    eax, eax
0x552A3B: lea     edi, [ecx+esi]
0x552A3E: jz      loc_552BB4
0x552A44: mov     ecx, [ecx+esi+4]
0x552A48: test    ecx, ecx
0x552A4A: jz      loc_552BB4
0x552A50: mov     [esi], eax
0x552A52: imul    eax, ecx
0x552A55: push    ecx
0x552A56: mov     [esi+4], ecx
0x552A59: lea     ecx, [esi+8]; int
0x552A5C: fstp    [esp+4Ch+scale]; int
0x552A5F: push    eax; int
0x552A60: call    FaceGenFloatVector_ResizeFill; Vector resize: retain existing prefix, erase surplus elements when shrinking, fill only newly inserted elements when growing. Equal size does not overwrite coefficients. Matrix dimension products must already be valid; no recovery from rows*columns overflow.
0x552A65: cmp     ebx, 1
0x552A68: jnz     loc_552AFE
0x552A6E: cmp     [esp+48h+specialSecondBankMode], 0
0x552A73: jz      loc_552AFE
0x552A79: mov     eax, [esp+48h+var_34]
0x552A7D: add     eax, ebp
0x552A7F: push    eax; source
0x552A80: mov     ecx, ebp; this
0x552A82: call    FaceGenMatrix_Assign; Deep matrix assignment. Copies rows/columns, resizes coefficient storage, then copies rows*columns floats.
0x552A87: fldz
0x552A89: fcomp   [esp+48h+maximumRms]
0x552A8D: fnstsw  ax
0x552A8F: test    ah, 5
0x552A92: jp      loc_552BD5
0x552A98: mov     edi, [ebp+0]
0x552A9B: mov     ecx, ebp; this
0x552A9D: call    FaceGenMatrix_SumSquares; Special second-bank limiter computes sqrt(sumSquares / matrix.rows), then scales when greater than maximumRms; denominator omits columns.
0x552AA2: test    edi, edi
0x552AA4: mov     [esp+48h+var_2C], edi
0x552AA8: fild    [esp+48h+var_2C]
0x552AAC: jge     short loc_552AB4
0x552AAE: fadd    dword ptr ds:0A2FC78h
0x552AB4: fdivp   st(1), st
0x552AB6: fstp    [esp+48h+var_2C]
0x552ABA: fld     [esp+48h+var_2C]
0x552ABE: call    __CIsqrt
0x552AC3: fstp    [esp+48h+var_2C]
0x552AC7: fld     [esp+48h+var_2C]
0x552ACB: fstp    [esp+48h+var_2C]
0x552ACF: fld     [esp+48h+var_2C]
0x552AD3: fld     [esp+48h+maximumRms]
0x552AD7: fcom    st(1)
0x552AD9: fnstsw  ax
0x552ADB: test    ah, 5
0x552ADE: jp      loc_552BD1
0x552AE4: fdivrp  st(1), st
0x552AE6: push    ecx
0x552AE7: mov     ecx, ebp; this
0x552AE9: fstp    [esp+4Ch+var_2C]
0x552AED: fld     [esp+4Ch+var_2C]
0x552AF1: fstp    [esp+4Ch+scale]; scale
0x552AF4: call    FaceGenMatrix_ScaleInPlace; Verified Oblivion: multiply every stored float in [begin,end) by scale, independently of rows/columns; return this. ECX=this, one stack float, ret 4. EBX is saved and overwritten, not a semantic argument; prior userpurge signature was a decompiler artifact.
0x552AF9: jmp     loc_552BD5
0x552AFE: mov     ecx, [esp+48h+var_28]
0x552B02: lea     edx, [edi+ecx]
0x552B05: push    edx; right
0x552B06: lea     eax, [esp+4Ch+outSum]
0x552B0A: push    eax; outSum
0x552B0B: mov     ecx, edi; this
0x552B0D: call    FaceGenMatrix_Add; Normal combine path adds corresponding base and delta matrices element by element.
0x552B12: xor     edi, edi
0x552B14: push    eax; source
0x552B15: mov     ecx, esi; this
0x552B17: mov     [esp+4Ch+var_4], edi
0x552B1B: call    FaceGenMatrix_Assign; Deep matrix assignment. Copies rows/columns, resizes coefficient storage, then copies rows*columns floats.
0x552B20: mov     eax, [esp+48h+outSum.begin]
0x552B24: cmp     eax, edi
0x552B26: mov     [esp+48h+var_4], 0FFFFFFFFh
0x552B2E: jz      short loc_552B39
0x552B30: push    eax
0x552B31: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x552B36: add     esp, 4
0x552B39: fldz
0x552B3B: mov     [esp+48h+outSum.begin], edi
0x552B3F: fcomp   [esp+48h+maximumRms]
0x552B43: mov     [esp+48h+outSum.end], edi
0x552B47: mov     [esp+48h+outSum.capacityEnd], edi
0x552B4B: fnstsw  ax
0x552B4D: test    ah, 5
0x552B50: jp      loc_552BD5
0x552B56: mov     edi, [esi]
0x552B58: mov     ecx, esi; this
0x552B5A: call    FaceGenMatrix_SumSquares; Normal combined-matrix limiter computes sqrt(sumSquares / matrix.rows); coefficient RMS interpretation assumes columns==1.
0x552B5F: test    edi, edi
0x552B61: mov     [esp+48h+var_2C], edi
0x552B65: fild    [esp+48h+var_2C]
0x552B69: jge     short loc_552B71
0x552B6B: fadd    dword ptr ds:0A2FC78h
0x552B71: fdivp   st(1), st
0x552B73: fstp    [esp+48h+var_2C]
0x552B77: fld     [esp+48h+var_2C]
0x552B7B: call    __CIsqrt
0x552B80: fstp    [esp+48h+var_2C]
0x552B84: fld     [esp+48h+var_2C]
0x552B88: fstp    [esp+48h+var_2C]
0x552B8C: fld     [esp+48h+var_2C]
0x552B90: fld     [esp+48h+maximumRms]
0x552B94: fcom    st(1)
0x552B96: fnstsw  ax
0x552B98: test    ah, 5
0x552B9B: jp      short loc_552BD1
0x552B9D: fdivrp  st(1), st
0x552B9F: push    ecx
0x552BA0: mov     ecx, esi; this
0x552BA2: fstp    [esp+4Ch+var_2C]
0x552BA6: fld     [esp+4Ch+var_2C]
0x552BAA: fstp    [esp+4Ch+scale]; scale
0x552BAD: call    FaceGenMatrix_ScaleInPlace; Verified Oblivion: multiply every stored float in [begin,end) by scale, independently of rows/columns; return this. ECX=this, one stack float, ret 4. EBX is saved and overwritten, not a semantic argument; prior userpurge signature was a decompiler artifact.
0x552BB2: jmp     short loc_552BD5
0x552BB4: push    ecx
0x552BB5: fstp    [esp+4Ch+scale]; int
0x552BB8: push    0; int
0x552BBA: lea     ecx, [esi+8]; int
0x552BBD: mov     dword ptr [esi], 0
0x552BC3: mov     dword ptr [esi+4], 0
0x552BCA: call    FaceGenFloatVector_ResizeFill; Vector resize: retain existing prefix, erase surplus elements when shrinking, fill only newly inserted elements when growing. Equal size does not overwrite coefficients. Matrix dimension products must already be valid; no recovery from rows*columns overflow.
0x552BCF: jmp     short loc_552BD5
0x552BD1: fstp    st
0x552BD3: fstp    st
0x552BD5: add     ebp, 18h
0x552BD8: add     esi, 18h
0x552BDB: sub     [esp+48h+var_30], 1
0x552BE0: jnz     loc_552A30
0x552BE6: add     ebx, 1
0x552BE9: cmp     ebx, 2
0x552BEC: jl      loc_552A10
0x552BF2: mov     ecx, [esp+48h+var_C]
0x552BF6: mov     large fs:0, ecx
0x552BFD: pop     ecx
0x552BFE: pop     edi
0x552BFF: pop     esi
0x552C00: pop     ebp
0x552C01: pop     ebx
0x552C02: add     esp, 34h
0x552C05: retn
0x9BBD60: lea     ecx, [ebp-24h]; this
0x9BBD63: jmp     FaceGenMatrix_Destruct; Destroys a FaceGenMatrix by freeing the coefficient allocation at +0x0C, then clears begin/end/capacity-end.
0x9BBD68: mov     edx, [esp+delta]
0x9BBD6C: lea     eax, [edx-38h]
0x9BBD6F: mov     ecx, [edx-3Ch]
0x9BBD72: xor     ecx, eax
0x9BBD74: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BBD79: mov     eax, offset stru_AE5A68
0x9BBD7E: jmp     ___CxxFrameHandler3
