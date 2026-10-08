0x79B8D0: push    0FFFFFFFFh; Swaps two complete 0x30-byte SFrondGuide records. Uses a temporary deep copy of the embedded vertex vector, assigns both vectors safely, copies all scalar fields, then releases the temporary vector allocation.
0x79B8D2: push    offset SEH_79B8D0
0x79B8D7: mov     eax, large fs:0
0x79B8DD: push    eax
0x79B8DE: sub     esp, 30h
0x79B8E1: push    ebx
0x79B8E2: push    ebp
0x79B8E3: push    esi
0x79B8E4: push    edi
0x79B8E5: mov     eax, ds:0B30AACh
0x79B8EA: xor     eax, esp
0x79B8EC: push    eax
0x79B8ED: lea     eax, [esp+50h+var_C]
0x79B8F1: mov     large fs:0, eax
0x79B8F7: mov     esi, [esp+50h+left]
0x79B8FB: push    esi; source
0x79B8FC: lea     ecx, [esp+54h+source]; this
0x79B900: call    OB_stVector_SFrondVertex_CopyCtor_010201A0; Oblivion-authoritative copy construction for the 16-byte vector wrapper embedded at SFrondGuide+0x00. Allocates capacity for the exact source count and deep-copies 0x38-byte SFrondVertex records; scalar guide fields are copied separately by callers.
0x79B905: fld     dword ptr [esi+10h]
0x79B908: mov     bl, [esi+18h]
0x79B90B: fstp    [esp+50h+var_2C]
0x79B90F: fld     dword ptr [esi+14h]
0x79B912: mov     ebp, [esi+28h]
0x79B915: mov     eax, [esi+2Ch]
0x79B918: fstp    [esp+50h+var_28]
0x79B91C: fld     dword ptr [esi+1Ch]
0x79B91F: mov     [esp+50h+var_24], bl
0x79B923: fstp    [esp+50h+var_20]
0x79B927: mov     [esp+50h+var_14], ebp
0x79B92B: fld     dword ptr [esi+20h]
0x79B92E: mov     [esp+50h+var_10], eax
0x79B932: fstp    [esp+50h+var_1C]
0x79B936: fld     dword ptr [esi+24h]
0x79B939: fstp    [esp+50h+var_18]
0x79B93D: mov     edi, [esp+50h+right]
0x79B941: push    edi; source
0x79B942: mov     ecx, esi; this
0x79B944: mov     [esp+54h+var_4], 0
0x79B94C: call    OB_stVector_SFrondVertex_CopyAssign_010201A0; Oblivion-authoritative copy assignment for the SFrondGuide vertex vector at +0x00. Reuses existing 0x38-byte-element capacity when possible, otherwise frees/reserves and deep-copies the source range.
0x79B951: fld     dword ptr [edi+10h]
0x79B954: fstp    dword ptr [esi+10h]
0x79B957: fld     dword ptr [edi+14h]
0x79B95A: fstp    dword ptr [esi+14h]
0x79B95D: mov     cl, [edi+18h]
0x79B960: mov     [esi+18h], cl
0x79B963: fld     dword ptr [edi+1Ch]
0x79B966: fstp    dword ptr [esi+1Ch]
0x79B969: lea     ecx, [esp+50h+source]
0x79B96D: fld     dword ptr [edi+20h]
0x79B970: push    ecx; source
0x79B971: fstp    dword ptr [esi+20h]
0x79B974: mov     ecx, edi; this
0x79B976: fld     dword ptr [edi+24h]
0x79B979: fstp    dword ptr [esi+24h]
0x79B97C: mov     edx, [edi+28h]
0x79B97F: mov     [esi+28h], edx
0x79B982: mov     eax, [edi+2Ch]
0x79B985: mov     [esi+2Ch], eax
0x79B988: call    OB_stVector_SFrondVertex_CopyAssign_010201A0; Oblivion-authoritative copy assignment for the SFrondGuide vertex vector at +0x00. Reuses existing 0x38-byte-element capacity when possible, otherwise frees/reserves and deep-copies the source range.
0x79B98D: fld     [esp+50h+var_2C]
0x79B991: mov     eax, [esp+50h+source.begin]
0x79B995: fstp    dword ptr [edi+10h]
0x79B998: test    eax, eax
0x79B99A: fld     [esp+50h+var_28]
0x79B99E: mov     edx, [esp+50h+var_10]
0x79B9A2: fstp    dword ptr [edi+14h]
0x79B9A5: fld     [esp+50h+var_20]
0x79B9A9: mov     [edi+18h], bl
0x79B9AC: fstp    dword ptr [edi+1Ch]
0x79B9AF: mov     [edi+28h], ebp
0x79B9B2: fld     [esp+50h+var_1C]
0x79B9B6: mov     [edi+2Ch], edx
0x79B9B9: fstp    dword ptr [edi+20h]
0x79B9BC: fld     [esp+50h+var_18]
0x79B9C0: fstp    dword ptr [edi+24h]
0x79B9C3: jz      short loc_79B9CE
0x79B9C5: push    eax
0x79B9C6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x79B9CB: add     esp, 4
0x79B9CE: mov     ecx, [esp+50h+var_C]
0x79B9D2: mov     large fs:0, ecx
0x79B9D9: pop     ecx
0x79B9DA: pop     edi
0x79B9DB: pop     esi
0x79B9DC: pop     ebp
0x79B9DD: pop     ebx
0x79B9DE: add     esp, 3Ch
0x79B9E1: retn
0x9CC2A0: lea     ecx, [ebp-3Ch]; this
0x9CC2A3: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CC2A8: mov     edx, [esp+right]
0x9CC2AC: lea     eax, [edx-40h]
0x9CC2AF: mov     ecx, [edx-44h]
0x9CC2B2: xor     ecx, eax
0x9CC2B4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CC2B9: mov     eax, offset stru_AF5400
0x9CC2BE: jmp     ___CxxFrameHandler3
