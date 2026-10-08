0x875EF0: push    0FFFFFFFFh
0x875EF2: push    offset SEH_880560
0x875EF7: mov     eax, large fs:0
0x875EFD: push    eax
0x875EFE: push    ebx
0x875EFF: push    ebp
0x875F00: push    esi
0x875F01: push    edi
0x875F02: mov     eax, ds:0B30AACh
0x875F07: xor     eax, esp
0x875F09: push    eax
0x875F0A: lea     eax, [esp+20h+var_C]
0x875F0E: mov     large fs:0, eax
0x875F14: mov     esi, ecx
0x875F16: mov     ebx, [esp+20h+arg_8]
0x875F1A: mov     eax, [ebx+10h]
0x875F1D: mov     edi, ds:0B47670h
0x875F23: push    eax
0x875F24: call    sub_848C40
0x875F29: mov     ebx, [ebx+0Ch]
0x875F2C: push    ebx
0x875F2D: mov     ecx, esi
0x875F2F: call    sub_848E50
0x875F34: mov     ecx, [esp+20h+arg_0]
0x875F38: mov     eax, [esi]
0x875F3A: mov     edx, [eax+0BCh]
0x875F40: push    0
0x875F42: push    ebx
0x875F43: push    ecx
0x875F44: mov     ecx, esi
0x875F46: call    edx
0x875F48: mov     eax, [edi+24h]
0x875F4B: mov     ecx, [esp+20h+value]
0x875F4F: mov     ebx, [eax]
0x875F51: mov     edx, [ecx]
0x875F53: mov     eax, [edx+88h]
0x875F59: push    0
0x875F5B: mov     [esp+24h+arg_8], ebx
0x875F5F: call    eax
0x875F61: mov     ebx, [ebx+4]
0x875F64: mov     ebp, eax
0x875F66: cmp     ebx, ebp
0x875F68: jz      short loc_875F9F
0x875F6A: test    ebx, ebx
0x875F6C: jz      short loc_875F8A
0x875F6E: lea     ecx, [ebx+4]
0x875F71: push    ecx; lpAddend
0x875F72: call    dword ptr ds:0A2807Ch
0x875F78: test    eax, eax
0x875F7A: jnz     short loc_875F8A
0x875F7C: test    ebx, ebx
0x875F7E: jz      short loc_875F8A
0x875F80: mov     edx, [ebx]
0x875F82: mov     eax, [edx]
0x875F84: push    1
0x875F86: mov     ecx, ebx
0x875F88: call    eax
0x875F8A: test    ebp, ebp
0x875F8C: mov     ecx, [esp+20h+arg_8]
0x875F90: mov     [ecx+4], ebp
0x875F93: jz      short loc_875F9F
0x875F95: add     ebp, 4
0x875F98: push    ebp; lpAddend
0x875F99: call    dword ptr ds:0A28078h
0x875F9F: mov     edx, [edi+24h]
0x875FA2: mov     eax, [esp+20h+value]
0x875FA6: mov     ebx, [edx+4]
0x875FA9: push    0
0x875FAB: push    eax
0x875FAC: mov     ecx, esi
0x875FAE: mov     [esp+28h+arg_8], ebx
0x875FB2: call    sub_848FD0
0x875FB7: mov     ebx, [ebx+4]
0x875FBA: mov     ebp, eax
0x875FBC: cmp     ebx, ebp
0x875FBE: jz      short loc_875FF5
0x875FC0: test    ebx, ebx
0x875FC2: jz      short loc_875FE0
0x875FC4: lea     ecx, [ebx+4]
0x875FC7: push    ecx; lpAddend
0x875FC8: call    dword ptr ds:0A2807Ch
0x875FCE: test    eax, eax
0x875FD0: jnz     short loc_875FE0
0x875FD2: test    ebx, ebx
0x875FD4: jz      short loc_875FE0
0x875FD6: mov     edx, [ebx]
0x875FD8: mov     eax, [edx]
0x875FDA: push    1
0x875FDC: mov     ecx, ebx
0x875FDE: call    eax
0x875FE0: test    ebp, ebp
0x875FE2: mov     ecx, [esp+20h+arg_8]
0x875FE6: mov     [ecx+4], ebp
0x875FE9: jz      short loc_875FF5
0x875FEB: add     ebp, 4
0x875FEE: push    ebp; lpAddend
0x875FEF: call    dword ptr ds:0A28078h
0x875FF5: mov     edx, [edi+24h]
0x875FF8: mov     ebp, [edx+18h]
0x875FFB: mov     eax, ds:0B43108h
0x876000: mov     ebx, [ebp+4]
0x876003: add     ebp, 4
0x876006: cmp     ebx, eax
0x876008: mov     [esp+20h+value], eax
0x87600C: jz      short loc_876043
0x87600E: test    ebx, ebx
0x876010: jz      short loc_876032
0x876012: lea     eax, [ebx+4]
0x876015: push    eax; lpAddend
0x876016: call    dword ptr ds:0A2807Ch
0x87601C: test    eax, eax
0x87601E: jnz     short loc_87602E
0x876020: test    ebx, ebx
0x876022: jz      short loc_87602E
0x876024: mov     edx, [ebx]
0x876026: mov     eax, [edx]
0x876028: push    1
0x87602A: mov     ecx, ebx
0x87602C: call    eax
0x87602E: mov     eax, [esp+20h+value]
0x876032: test    eax, eax
0x876034: mov     [ebp+0], eax
0x876037: jz      short loc_876043
0x876039: add     eax, 4
0x87603C: push    eax; lpAddend
0x87603D: call    dword ptr ds:0A28078h
0x876043: mov     ecx, [edi+24h]
0x876046: mov     ebp, [ecx+1Ch]
0x876049: mov     eax, ds:0B4310Ch
0x87604E: mov     ebx, [ebp+4]
0x876051: cmp     ebx, eax
0x876053: mov     ecx, eax
0x876055: mov     [esp+20h+value], ecx
0x876059: jz      short loc_876090
0x87605B: test    ebx, ebx
0x87605D: jz      short loc_87607F
0x87605F: lea     edx, [ebx+4]
0x876062: push    edx; lpAddend
0x876063: call    dword ptr ds:0A2807Ch
0x876069: test    eax, eax
0x87606B: jnz     short loc_87607B
0x87606D: test    ebx, ebx
0x87606F: jz      short loc_87607B
0x876071: mov     eax, [ebx]
0x876073: mov     edx, [eax]
0x876075: push    1
0x876077: mov     ecx, ebx
0x876079: call    edx
0x87607B: mov     ecx, [esp+20h+value]
0x87607F: test    ecx, ecx
0x876081: mov     [ebp+4], ecx
0x876084: jz      short loc_876090
0x876086: add     ecx, 4
0x876089: push    ecx; lpAddend
0x87608A: call    dword ptr ds:0A28078h
0x876090: mov     ebx, 1
0x876095: add     [edi+60h], ebx
0x876098: mov     [esp+20h+value], edi
0x87609C: mov     ecx, [esi+38h]
0x87609F: lea     eax, [esp+20h+value]
0x8760A3: push    eax; value
0x8760A4: push    ecx; index
0x8760A5: lea     ecx, [esi+40h]; this
0x8760A8: mov     [esp+28h+var_4], 0
0x8760B0: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x8760B5: or      eax, 0FFFFFFFFh
0x8760B8: add     [edi+60h], eax
0x8760BB: mov     [esp+20h+var_4], eax
0x8760BF: jnz     short loc_8760C8
0x8760C1: mov     ecx, edi
0x8760C3: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x8760C8: add     [esi+38h], ebx
0x8760CB: mov     ecx, [esp+20h+var_C]
0x8760CF: mov     large fs:0, ecx
0x8760D6: pop     ecx
0x8760D7: pop     edi
0x8760D8: pop     esi
0x8760D9: pop     ebp
0x8760DA: pop     ebx
0x8760DB: add     esp, 0Ch
0x8760DE: retn    10h
0x9D3390: lea     ecx, [ebp+10h]; void *
0x9D3393: jmp     sub_4027D0
0x9D3398: mov     edx, [esp+arg_4]
0x9D339C: lea     eax, [edx-10h]
0x9D339F: mov     ecx, [edx-14h]
0x9D33A2: xor     ecx, eax
0x9D33A4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D33A9: mov     eax, offset stru_AFB7C0
0x9D33AE: jmp     ___CxxFrameHandler3
