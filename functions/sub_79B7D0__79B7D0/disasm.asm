0x79B7D0: push    0FFFFFFFFh; Placement copy-construction of one Oblivion compact SFrondGuide. Deep-copy-constructs the embedded SFrondVertex vector and copies all scalar fields; no stock RT 4.1 stack-vertex/pointer relinking exists in this layout.
0x79B7D2: push    offset SEH_79B7D0
0x79B7D7: mov     eax, large fs:0
0x79B7DD: push    eax
0x79B7DE: push    ecx
0x79B7DF: push    esi
0x79B7E0: push    edi
0x79B7E1: mov     eax, ds:0B30AACh
0x79B7E6: xor     eax, esp
0x79B7E8: push    eax
0x79B7E9: lea     eax, [esp+1Ch+var_C]
0x79B7ED: mov     large fs:0, eax
0x79B7F3: mov     esi, [esp+1Ch+arg_0]
0x79B7F7: mov     [esp+1Ch+arg_0], esi
0x79B7FB: mov     [esp+1Ch+var_10], esi
0x79B7FF: test    esi, esi
0x79B801: mov     [esp+1Ch+var_4], 0
0x79B809: jz      short loc_79B847
0x79B80B: mov     edi, [esp+1Ch+source]
0x79B80F: push    edi; source
0x79B810: mov     ecx, esi; this
0x79B812: call    OB_stVector_SFrondVertex_CopyCtor_010201A0; Oblivion-authoritative copy construction for the 16-byte vector wrapper embedded at SFrondGuide+0x00. Allocates capacity for the exact source count and deep-copies 0x38-byte SFrondVertex records; scalar guide fields are copied separately by callers.
0x79B817: fld     dword ptr [edi+10h]
0x79B81A: fstp    dword ptr [esi+10h]
0x79B81D: fld     dword ptr [edi+14h]
0x79B820: fstp    dword ptr [esi+14h]
0x79B823: mov     al, [edi+18h]
0x79B826: mov     [esi+18h], al
0x79B829: fld     dword ptr [edi+1Ch]
0x79B82C: fstp    dword ptr [esi+1Ch]
0x79B82F: fld     dword ptr [edi+20h]
0x79B832: fstp    dword ptr [esi+20h]
0x79B835: fld     dword ptr [edi+24h]
0x79B838: fstp    dword ptr [esi+24h]
0x79B83B: mov     ecx, [edi+28h]
0x79B83E: mov     [esi+28h], ecx
0x79B841: mov     edx, [edi+2Ch]
0x79B844: mov     [esi+2Ch], edx
0x79B847: mov     ecx, [esp+1Ch+var_C]
0x79B84B: mov     large fs:0, ecx
0x79B852: pop     ecx
0x79B853: pop     edi
0x79B854: pop     esi
0x79B855: add     esp, 10h
0x79B858: retn
0x9CC270: mov     eax, [ebp+4]
0x9CC273: push    eax
0x9CC274: mov     ecx, [ebp-10h]; this
0x9CC277: push    ecx
0x9CC278: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9CC27D: add     esp, 8
0x9CC280: retn
0x9CC281: mov     edx, [esp+source]
0x9CC285: lea     eax, [edx-0Ch]
0x9CC288: mov     ecx, [edx-10h]
0x9CC28B: xor     ecx, eax
0x9CC28D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CC292: mov     eax, offset stru_AF53D4
0x9CC297: jmp     ___CxxFrameHandler3
