0x6F1940: push    ebp
0x6F1941: mov     ebp, esp
0x6F1943: push    0FFFFFFFFh
0x6F1945: push    offset SEH_6F1940
0x6F194A: mov     eax, large fs:0
0x6F1950: push    eax
0x6F1951: sub     esp, 14h
0x6F1954: push    ebx
0x6F1955: push    esi
0x6F1956: push    edi
0x6F1957: mov     eax, ds:0B30AACh
0x6F195C: xor     eax, ebp
0x6F195E: push    eax
0x6F195F: lea     eax, [ebp+var_C]
0x6F1962: mov     large fs:0, eax
0x6F1968: mov     [ebp+var_10], esp
0x6F196B: mov     esi, ecx
0x6F196D: mov     eax, [ebp+destinationLast]
0x6F1970: mov     ecx, [eax]
0x6F1972: mov     edx, [eax+4]
0x6F1975: mov     ebx, [esi+4]
0x6F1978: test    ebx, ebx
0x6F197A: mov     eax, [eax+8]
0x6F197D: mov     [ebp+value.parentVertexIndex], ecx
0x6F1980: mov     [ebp+value.percentBetweenParentVertices], edx
0x6F1983: mov     [ebp+value.childBranch], eax; CBranch*.
0x6F1986: jnz     short loc_6F198C
0x6F1988: xor     ecx, ecx
0x6F198A: jmp     short loc_6F19A1
0x6F198C: mov     ecx, [esi+0Ch]
0x6F198F: sub     ecx, ebx
0x6F1991: mov     eax, 2AAAAAABh
0x6F1996: imul    ecx
0x6F1998: sar     edx, 1
0x6F199A: mov     ecx, edx
0x6F199C: shr     ecx, 1Fh
0x6F199F: add     ecx, edx
0x6F19A1: mov     edi, [ebp+last]
0x6F19A4: test    edi, edi
0x6F19A6: jz      loc_6F1BD8
0x6F19AC: test    ebx, ebx
0x6F19AE: jnz     short loc_6F19B4
0x6F19B0: xor     eax, eax
0x6F19B2: jmp     short loc_6F19C9
0x6F19B4: mov     edx, [esi+8]
0x6F19B7: sub     edx, ebx
0x6F19B9: mov     eax, 2AAAAAABh
0x6F19BE: imul    edx
0x6F19C0: sar     edx, 1
0x6F19C2: mov     eax, edx
0x6F19C4: shr     eax, 1Fh
0x6F19C7: add     eax, edx
0x6F19C9: or      edx, 0FFFFFFFFh
0x6F19CC: sub     edx, eax
0x6F19CE: cmp     edx, edi
0x6F19D0: jnb     short loc_6F19D7
0x6F19D2: call    OB_stVector_ThrowLengthError_010201A0; Shared Oblivion STL vector length guard failure. Constructs std::length_error("vector<T> too long") and throws; used by multiple element specializations after max_size checks.
0x6F19D7: test    ebx, ebx
0x6F19D9: jnz     short loc_6F19DF
0x6F19DB: xor     eax, eax
0x6F19DD: jmp     short loc_6F19F4
0x6F19DF: mov     edx, [esi+8]
0x6F19E2: sub     edx, ebx
0x6F19E4: mov     eax, 2AAAAAABh
0x6F19E9: imul    edx
0x6F19EB: sar     edx, 1
0x6F19ED: mov     eax, edx
0x6F19EF: shr     eax, 1Fh
0x6F19F2: add     eax, edx
0x6F19F4: add     eax, edi
0x6F19F6: cmp     ecx, eax
0x6F19F8: jnb     loc_6F1B0E
0x6F19FE: mov     eax, ecx
0x6F1A00: shr     eax, 1
0x6F1A02: or      edx, 0FFFFFFFFh
0x6F1A05: sub     edx, eax
0x6F1A07: cmp     edx, ecx
0x6F1A09: jnb     short loc_6F1A0F
0x6F1A0B: xor     ecx, ecx
0x6F1A0D: jmp     short loc_6F1A11
0x6F1A0F: add     ecx, eax
0x6F1A11: test    ebx, ebx
0x6F1A13: jnz     short loc_6F1A19
0x6F1A15: xor     eax, eax
0x6F1A17: jmp     short loc_6F1A2E
0x6F1A19: mov     edx, [esi+8]
0x6F1A1C: sub     edx, ebx
0x6F1A1E: mov     eax, 2AAAAAABh
0x6F1A23: imul    edx
0x6F1A25: sar     edx, 1
0x6F1A27: mov     eax, edx
0x6F1A29: shr     eax, 1Fh
0x6F1A2C: add     eax, edx
0x6F1A2E: add     eax, edi
0x6F1A30: cmp     ecx, eax
0x6F1A32: jnb     short loc_6F1A3F
0x6F1A34: mov     ecx, esi
0x6F1A36: call    sub_6F1080
0x6F1A3B: mov     ecx, eax
0x6F1A3D: add     ecx, edi
0x6F1A3F: lea     ecx, [ecx+ecx*2]
0x6F1A42: add     ecx, ecx
0x6F1A44: add     ecx, ecx
0x6F1A46: push    ecx; Size
0x6F1A47: mov     [ebp+var_14], ecx
0x6F1A4A: call    FormHeapAlloc
0x6F1A4F: mov     ebx, [ebp+first]
0x6F1A52: mov     ecx, [esi+4]
0x6F1A55: mov     byte ptr [ebp+last], 0
0x6F1A59: mov     edx, [ebp+last]
0x6F1A5C: push    edx
0x6F1A5D: mov     [ebp+destinationLast], eax
0x6F1A60: mov     edx, [ebp+destinationLast]
0x6F1A63: push    edx
0x6F1A64: push    esi
0x6F1A65: push    eax
0x6F1A66: push    ebx
0x6F1A67: push    ecx
0x6F1A68: mov     [ebp+var_4], 0
0x6F1A6F: call    sub_6F11A0
0x6F1A74: add     esp, 1Ch
0x6F1A77: lea     ecx, [ebp+value]
0x6F1A7A: push    ecx
0x6F1A7B: push    edi
0x6F1A7C: push    eax
0x6F1A7D: mov     ecx, esi
0x6F1A7F: call    sub_6F1380
0x6F1A84: mov     ecx, [esi+8]
0x6F1A87: mov     byte ptr [ebp+last], 0
0x6F1A8B: mov     edx, [ebp+last]
0x6F1A8E: push    edx
0x6F1A8F: mov     edx, [ebp+destinationLast]
0x6F1A92: push    edx
0x6F1A93: push    esi
0x6F1A94: push    eax
0x6F1A95: push    ecx
0x6F1A96: push    ebx
0x6F1A97: call    sub_6F11A0
0x6F1A9C: mov     ebx, [esi+4]
0x6F1A9F: add     esp, 18h
0x6F1AA2: test    ebx, ebx
0x6F1AA4: jnz     short loc_6F1AAA
0x6F1AA6: xor     eax, eax
0x6F1AA8: jmp     short loc_6F1ABF
0x6F1AAA: mov     ecx, [esi+8]
0x6F1AAD: sub     ecx, ebx
0x6F1AAF: mov     eax, 2AAAAAABh
0x6F1AB4: imul    ecx
0x6F1AB6: sar     edx, 1
0x6F1AB8: mov     eax, edx
0x6F1ABA: shr     eax, 1Fh
0x6F1ABD: add     eax, edx
0x6F1ABF: add     edi, eax
0x6F1AC1: test    ebx, ebx
0x6F1AC3: jz      short loc_6F1ACE
0x6F1AC5: push    ebx
0x6F1AC6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6F1ACB: add     esp, 4
0x6F1ACE: mov     eax, [ebp+destinationLast]
0x6F1AD1: mov     ecx, [ebp+var_14]
0x6F1AD4: add     ecx, eax
0x6F1AD6: lea     edx, [edi+edi*2]
0x6F1AD9: mov     [esi+0Ch], ecx
0x6F1ADC: lea     ecx, [eax+edx*4]
0x6F1ADF: mov     [esi+8], ecx
0x6F1AE2: mov     [esi+4], eax
0x6F1AE5: mov     ecx, [ebp+var_C]
0x6F1AE8: mov     large fs:0, ecx
0x6F1AEF: pop     ecx
0x6F1AF0: pop     edi
0x6F1AF1: pop     esi
0x6F1AF2: pop     ebx
0x6F1AF3: mov     esp, ebp
0x6F1AF5: pop     ebp
0x6F1AF6: retn    10h
0x6F1AF9: mov     edx, [ebp+destinationLast]
0x6F1AFC: push    edx
0x6F1AFD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6F1B02: add     esp, 4
0x6F1B05: push    0
0x6F1B07: push    0
0x6F1B09: call    ThrowException??
0x6F1B0E: mov     ecx, [esi+8]
0x6F1B11: mov     ebx, [ebp+first]
0x6F1B14: mov     edx, ecx
0x6F1B16: sub     edx, ebx
0x6F1B18: mov     eax, 2AAAAAABh
0x6F1B1D: imul    edx
0x6F1B1F: sar     edx, 1
0x6F1B21: mov     eax, edx
0x6F1B23: shr     eax, 1Fh
0x6F1B26: add     eax, edx
0x6F1B28: cmp     eax, edi
0x6F1B2A: mov     [ebp+destinationLast], ecx
0x6F1B2D: jnb     short loc_6F1B9F
0x6F1B2F: lea     eax, [edi+edi*2]
0x6F1B32: add     eax, eax
0x6F1B34: add     eax, eax
0x6F1B36: mov     [ebp+destinationLast], eax
0x6F1B39: add     eax, ebx
0x6F1B3B: push    eax
0x6F1B3C: push    ecx
0x6F1B3D: push    ebx
0x6F1B3E: mov     ecx, esi
0x6F1B40: call    sub_6F15A0
0x6F1B45: mov     ecx, [esi+8]
0x6F1B48: lea     edx, [ebp+value]
0x6F1B4B: push    edx
0x6F1B4C: mov     edx, ecx
0x6F1B4E: sub     edx, ebx
0x6F1B50: mov     eax, 2AAAAAABh
0x6F1B55: imul    edx
0x6F1B57: sar     edx, 1
0x6F1B59: mov     eax, edx
0x6F1B5B: shr     eax, 1Fh
0x6F1B5E: add     eax, edx
0x6F1B60: sub     edi, eax
0x6F1B62: push    edi
0x6F1B63: push    ecx
0x6F1B64: mov     ecx, esi
0x6F1B66: mov     [ebp+var_4], 2
0x6F1B6D: call    sub_6F1380
0x6F1B72: mov     eax, [ebp+destinationLast]
0x6F1B75: add     [esi+8], eax
0x6F1B78: mov     esi, [esi+8]
0x6F1B7B: lea     ecx, [ebp+value]
0x6F1B7E: push    ecx; value
0x6F1B7F: sub     esi, eax
0x6F1B81: push    esi; last
0x6F1B82: push    ebx; first
0x6F1B83: call    OB_stVectorBranchChildRef_FillRange_010201A0; Copies one 0x0C-byte OB_CBranchChildRef value into every record in [first,last) and returns last. Used by both in-place child-vector insert/fill bodies.
0x6F1B88: add     esp, 0Ch
0x6F1B8B: mov     ecx, [ebp+var_C]
0x6F1B8E: mov     large fs:0, ecx
0x6F1B95: pop     ecx
0x6F1B96: pop     edi
0x6F1B97: pop     esi
0x6F1B98: pop     ebx
0x6F1B99: mov     esp, ebp
0x6F1B9B: pop     ebp
0x6F1B9C: retn    10h
0x6F1B9F: lea     edi, [edi+edi*2]
0x6F1BA2: push    ecx
0x6F1BA3: add     edi, edi
0x6F1BA5: mov     eax, ecx
0x6F1BA7: add     edi, edi
0x6F1BA9: sub     eax, edi
0x6F1BAB: push    ecx
0x6F1BAC: push    eax
0x6F1BAD: mov     ecx, esi
0x6F1BAF: mov     [ebp+last], eax
0x6F1BB2: call    sub_6F15A0
0x6F1BB7: mov     edx, [ebp+destinationLast]
0x6F1BBA: mov     [esi+8], eax
0x6F1BBD: mov     eax, [ebp+last]
0x6F1BC0: push    edx; destinationLast
0x6F1BC1: push    eax; last
0x6F1BC2: push    ebx; first
0x6F1BC3: call    OB_CBranchChildRef_CopyBackwardThunk_010201A0; OBLIVION AUTHORITY (2026-08-30): Adapter for the 0x0C-byte CBranchChildRef backward-copy routine used by checked vector insertion.
0x6F1BC8: lea     ecx, [ebp+value]
0x6F1BCB: push    ecx; value
0x6F1BCC: add     edi, ebx
0x6F1BCE: push    edi; last
0x6F1BCF: push    ebx; first
0x6F1BD0: call    OB_stVectorBranchChildRef_FillRange_010201A0; Copies one 0x0C-byte OB_CBranchChildRef value into every record in [first,last) and returns last. Used by both in-place child-vector insert/fill bodies.
0x6F1BD5: add     esp, 18h
0x6F1BD8: mov     ecx, [ebp+var_C]
0x6F1BDB: mov     large fs:0, ecx
0x6F1BE2: pop     ecx
0x6F1BE3: pop     edi
0x6F1BE4: pop     esi
0x6F1BE5: pop     ebx
0x6F1BE6: mov     esp, ebp
0x6F1BE8: pop     ebp
0x6F1BE9: retn    10h
0x9C87E0: mov     edx, [esp-4+first]
0x9C87E4: lea     eax, [edx+0Ch]
0x9C87E7: mov     ecx, [edx-24h]
0x9C87EA: xor     ecx, eax
0x9C87EC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C87F1: mov     eax, offset stru_AF0D50
0x9C87F6: jmp     ___CxxFrameHandler3
