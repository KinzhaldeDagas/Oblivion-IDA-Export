0x89C8E0: sub     esp, 2Ch
0x89C8E3: push    ebx
0x89C8E4: push    edi
0x89C8E5: mov     edi, [esp+34h+arg_4]
0x89C8E9: cmp     edi, 1
0x89C8EC: mov     ebx, ecx
0x89C8EE: jl      loc_89CCB4
0x89C8F4: mov     eax, [ebx+88h]
0x89C8FA: test    eax, eax
0x89C8FC: jz      short loc_89C928
0x89C8FE: mov     eax, [esp+34h+arg_0]
0x89C902: lea     ecx, [esp+34h+var_20]
0x89C906: push    ecx
0x89C907: mov     ecx, [ebx+80h]
0x89C90D: mov     byte ptr [esp+38h+var_20], 7
0x89C912: mov     [esp+38h+var_1C], eax
0x89C916: mov     word ptr [esp+38h+var_18], di
0x89C91B: call    sub_8D8830
0x89C920: pop     edi
0x89C921: pop     ebx
0x89C922: add     esp, 2Ch
0x89C925: retn    8
0x89C928: mov     ecx, ds:0BA9DE4h
0x89C92E: push    ebp
0x89C92F: mov     ebp, large fs:2Ch
0x89C936: mov     eax, [ebp+ecx*4+0]
0x89C93A: mov     dword ptr [ebx+88h], 1
0x89C944: mov     edx, [eax+1A4h]
0x89C94A: push    esi
0x89C94B: cmp     edx, [eax+1A8h]
0x89C951: jnb     short loc_89C984
0x89C953: mov     esi, eax
0x89C955: mov     ecx, [esi+1A4h]
0x89C95B: mov     dword ptr [ecx], offset aLtrementities; "LtRemEntities"
0x89C961: mov     dword ptr [ecx+0Ch], offset aInitCallbck; "Init+CallBck"
0x89C968: rdtsc
0x89C96A: mov     [esp+3Ch+var_2C], eax
0x89C96E: mov     eax, [esp+3Ch+var_2C]
0x89C972: mov     [ecx+4], eax
0x89C975: add     ecx, 10h
0x89C978: mov     [esi+1A4h], ecx
0x89C97E: mov     ecx, ds:0BA9DE4h
0x89C984: mov     ebp, [ebp+ecx*4+0]
0x89C988: mov     ecx, [ebp+19Ch]
0x89C98E: xor     eax, eax
0x89C990: test    ecx, ecx
0x89C992: mov     [esp+3Ch+var_10], eax
0x89C996: mov     [esp+3Ch+var_C], eax
0x89C99A: mov     [esp+3Ch+var_8], 80000000h
0x89C9A2: mov     [esp+3Ch+var_2C], ebp
0x89C9A6: jnz     short loc_89C9AE
0x89C9A8: mov     ecx, ds:0BA7D9Ch
0x89C9AE: mov     edx, [ecx+20h]
0x89C9B1: lea     eax, ds:10h[edi*4]
0x89C9B8: and     eax, 0FFFFFFF0h
0x89C9BB: lea     esi, [edx+eax]
0x89C9BE: cmp     esi, [ecx+2Ch]
0x89C9C1: ja      short loc_89C9CA
0x89C9C3: mov     [ecx+20h], esi
0x89C9C6: mov     eax, edx
0x89C9C8: jmp     short loc_89C9D0
0x89C9CA: mov     edx, [ecx]
0x89C9CC: push    eax
0x89C9CD: call    dword ptr [edx+0Ch]
0x89C9D0: mov     ecx, edi
0x89C9D2: or      ecx, 80000000h
0x89C9D8: mov     [esp+3Ch+var_8], ecx
0x89C9DC: mov     ecx, [esp+3Ch+arg_0]
0x89C9E0: lea     edx, [ecx+edi*4]
0x89C9E3: cmp     ecx, edx
0x89C9E5: mov     [esp+3Ch+var_10], eax
0x89C9E9: mov     [esp+3Ch+var_4], eax
0x89C9ED: mov     [esp+3Ch+var_24], edx
0x89C9F1: jz      short loc_89CA18
0x89C9F3: mov     eax, [ecx]
0x89C9F5: mov     esi, [eax+14h]
0x89C9F8: add     eax, 14h
0x89C9FB: test    esi, esi
0x89C9FD: jz      short loc_89CA11
0x89C9FF: mov     esi, [esp+3Ch+var_C]
0x89CA03: mov     edi, [esp+3Ch+var_10]
0x89CA07: add     eax, 14h
0x89CA0A: mov     [edi+esi*4], eax
0x89CA0D: inc     [esp+3Ch+var_C]
0x89CA11: add     ecx, 4
0x89CA14: cmp     ecx, edx
0x89CA16: jnz     short loc_89C9F3
0x89CA18: mov     edx, large fs:2Ch
0x89CA1F: mov     eax, ds:0BA9DE4h
0x89CA24: mov     eax, [edx+eax*4]
0x89CA27: mov     ecx, [eax+1A4h]
0x89CA2D: cmp     ecx, [eax+1A8h]
0x89CA33: jnb     short loc_89CA57
0x89CA35: mov     ecx, [ebp+1A4h]
0x89CA3B: mov     dword ptr [ecx], offset aStbroadphase_0; "StBroadPhase"
0x89CA41: rdtsc
0x89CA43: mov     [esp+3Ch+var_28], eax
0x89CA47: mov     edx, [esp+3Ch+var_28]
0x89CA4B: mov     [ecx+4], edx
0x89CA4E: add     ecx, 0Ch
0x89CA51: mov     [ebp+1A4h], ecx
0x89CA57: mov     ecx, [ebp+19Ch]
0x89CA5D: mov     edi, [ebx+2A4h]
0x89CA63: xor     eax, eax
0x89CA65: cmp     ecx, eax
0x89CA67: mov     [esp+3Ch+var_20], eax
0x89CA6B: mov     [esp+3Ch+var_1C], eax
0x89CA6F: mov     [esp+3Ch+var_18], 80000000h
0x89CA77: jnz     short loc_89CA7F
0x89CA79: mov     ecx, ds:0BA7D9Ch
0x89CA7F: mov     edx, [ecx+20h]
0x89CA82: mov     esi, [ecx+2Ch]
0x89CA85: lea     eax, ds:10h[edi*8]
0x89CA8C: and     eax, 0FFFFFFF0h
0x89CA8F: lea     ebp, [edx+eax]
0x89CA92: cmp     ebp, esi
0x89CA94: ja      short loc_89CA9D
0x89CA96: mov     [ecx+20h], ebp
0x89CA99: mov     eax, edx
0x89CA9B: jmp     short loc_89CAA3
0x89CA9D: mov     edx, [ecx]
0x89CA9F: push    eax
0x89CAA0: call    dword ptr [edx+0Ch]
0x89CAA3: mov     ecx, [ebx+64h]
0x89CAA6: lea     edx, [esp+3Ch+var_20]
0x89CAAA: push    edx
0x89CAAB: or      edi, 80000000h
0x89CAB1: lea     edx, [esp+40h+var_10]
0x89CAB5: mov     [esp+40h+var_20], eax
0x89CAB9: mov     [esp+40h+var_18], edi
0x89CABD: mov     [esp+40h+var_14], eax
0x89CAC1: mov     eax, [ecx]
0x89CAC3: push    edx
0x89CAC4: call    dword ptr [eax+14h]
0x89CAC7: mov     edi, large fs:2Ch
0x89CACE: mov     esi, ds:0BA9DE4h
0x89CAD4: mov     eax, [edi+esi*4]
0x89CAD7: mov     ecx, [eax+1A4h]
0x89CADD: cmp     ecx, [eax+1A8h]
0x89CAE3: mov     ebp, [esp+3Ch+var_2C]
0x89CAE7: jnb     short loc_89CB0B
0x89CAE9: mov     ecx, [ebp+1A4h]
0x89CAEF: mov     dword ptr [ecx], offset aStdelagents; "StDelAgents"
0x89CAF5: rdtsc
0x89CAF7: mov     [esp+3Ch+var_28], eax
0x89CAFB: mov     edx, [esp+3Ch+var_28]
0x89CAFF: mov     [ecx+4], edx
0x89CB02: add     ecx, 0Ch
0x89CB05: mov     [ebp+1A4h], ecx
0x89CB0B: mov     eax, [esp+3Ch+var_1C]
0x89CB0F: mov     ecx, [esp+3Ch+var_20]
0x89CB13: push    eax
0x89CB14: push    ecx
0x89CB15: mov     ecx, [ebx+68h]
0x89CB18: call    sub_8D83E0
0x89CB1D: mov     eax, [ebp+19Ch]
0x89CB23: test    eax, eax
0x89CB25: mov     ecx, [esp+3Ch+var_14]
0x89CB29: jnz     short loc_89CB30
0x89CB2B: mov     eax, ds:0BA7D9Ch
0x89CB30: cmp     ecx, [eax+28h]
0x89CB33: mov     [eax+20h], ecx
0x89CB36: jnz     short loc_89CB40
0x89CB38: mov     edx, [eax]
0x89CB3A: push    ecx
0x89CB3B: mov     ecx, eax
0x89CB3D: call    dword ptr [edx+10h]
0x89CB40: mov     eax, [esp+3Ch+var_18]
0x89CB44: test    eax, eax
0x89CB46: js      short loc_89CB6D
0x89CB48: mov     ecx, [ebp+19Ch]
0x89CB4E: test    ecx, ecx
0x89CB50: jnz     short loc_89CB58
0x89CB52: mov     ecx, ds:0BA7D9Ch
0x89CB58: and     eax, 3FFFFFFFh
0x89CB5D: push    14h
0x89CB5F: shl     eax, 3
0x89CB62: push    eax
0x89CB63: mov     eax, [esp+44h+var_20]
0x89CB67: push    eax
0x89CB68: call    sub_8A75D0
0x89CB6D: cmp     dword ptr [ebx+0B4h], 4
0x89CB74: jl      short loc_89CB88
0x89CB76: mov     ecx, [esp+3Ch+arg_4]
0x89CB7A: mov     edx, [esp+3Ch+arg_0]
0x89CB7E: push    ecx
0x89CB7F: mov     ecx, [ebx+8]
0x89CB82: push    edx
0x89CB83: call    sub_8D3690
0x89CB88: mov     eax, [edi+esi*4]
0x89CB8B: mov     ecx, [eax+1A4h]
0x89CB91: cmp     ecx, [eax+1A8h]
0x89CB97: jnb     short loc_89CBBB
0x89CB99: mov     ecx, [ebp+1A4h]
0x89CB9F: mov     dword ptr [ecx], offset aStremovecb; "StRemoveCb"
0x89CBA5: rdtsc
0x89CBA7: mov     [esp+3Ch+arg_4], eax
0x89CBAB: mov     edx, [esp+3Ch+arg_4]
0x89CBAF: mov     [ecx+4], edx
0x89CBB2: add     ecx, 0Ch
0x89CBB5: mov     [ebp+1A4h], ecx
0x89CBBB: mov     esi, [esp+3Ch+arg_0]
0x89CBBF: mov     edi, [esp+3Ch+var_24]
0x89CBC3: cmp     esi, edi
0x89CBC5: jz      short loc_89CC00
0x89CBC7: mov     eax, [esi]
0x89CBC9: push    eax
0x89CBCA: push    ebx
0x89CBCB: call    sub_8DC410
0x89CBD0: mov     ecx, [esi]
0x89CBD2: push    ecx
0x89CBD3: call    sub_8DC1C0
0x89CBD8: mov     edx, [esi]
0x89CBDA: push    edx
0x89CBDB: push    ebx
0x89CBDC: call    sub_8CBE90
0x89CBE1: mov     ecx, [esi]
0x89CBE3: add     esp, 14h
0x89CBE6: cmp     word ptr [ecx+4], 0
0x89CBEB: jnz     short loc_89CBF2
0x89CBED: mov     eax, [ecx]
0x89CBEF: call    dword ptr [eax+10h]
0x89CBF2: mov     ecx, [esi]
0x89CBF4: call    sub_8BC730
0x89CBF9: add     esi, 4
0x89CBFC: cmp     esi, edi
0x89CBFE: jnz     short loc_89CBC7
0x89CC00: mov     ecx, large fs:2Ch
0x89CC07: mov     edx, ds:0BA9DE4h
0x89CC0D: mov     eax, [ecx+edx*4]
0x89CC10: mov     ecx, [eax+1A4h]
0x89CC16: cmp     ecx, [eax+1A8h]
0x89CC1C: jnb     short loc_89CC40
0x89CC1E: mov     ecx, [ebp+1A4h]
0x89CC24: mov     dword ptr [ecx], offset aLt_0; "lt"
0x89CC2A: rdtsc
0x89CC2C: mov     [esp+3Ch+arg_0], eax
0x89CC30: mov     edx, [esp+3Ch+arg_0]
0x89CC34: mov     [ecx+4], edx
0x89CC37: add     ecx, 0Ch
0x89CC3A: mov     [ebp+1A4h], ecx
0x89CC40: dec     dword ptr [ebx+88h]
0x89CC46: jnz     short loc_89CC63
0x89CC48: mov     eax, [ebx+84h]
0x89CC4E: test    eax, eax
0x89CC50: jz      short loc_89CC63
0x89CC52: mov     al, [ebx+90h]
0x89CC58: test    al, al
0x89CC5A: jnz     short loc_89CC63
0x89CC5C: mov     ecx, ebx
0x89CC5E: call    sub_899210
0x89CC63: mov     ecx, [ebp+19Ch]
0x89CC69: test    ecx, ecx
0x89CC6B: mov     eax, [esp+3Ch+var_4]
0x89CC6F: jnz     short loc_89CC77
0x89CC71: mov     ecx, ds:0BA7D9Ch
0x89CC77: cmp     eax, [ecx+28h]
0x89CC7A: mov     [ecx+20h], eax
0x89CC7D: jnz     short loc_89CC85
0x89CC7F: mov     edx, [ecx]
0x89CC81: push    eax
0x89CC82: call    dword ptr [edx+10h]
0x89CC85: mov     eax, [esp+3Ch+var_8]
0x89CC89: test    eax, eax
0x89CC8B: js      short loc_89CCB2
0x89CC8D: mov     ecx, [ebp+19Ch]
0x89CC93: test    ecx, ecx
0x89CC95: jnz     short loc_89CC9D
0x89CC97: mov     ecx, ds:0BA7D9Ch
0x89CC9D: and     eax, 3FFFFFFFh
0x89CCA2: push    14h
0x89CCA4: shl     eax, 2
0x89CCA7: push    eax
0x89CCA8: mov     eax, [esp+44h+var_10]
0x89CCAC: push    eax
0x89CCAD: call    sub_8A75D0
0x89CCB2: pop     esi
0x89CCB3: pop     ebp
0x89CCB4: pop     edi
0x89CCB5: pop     ebx
0x89CCB6: add     esp, 2Ch
0x89CCB9: retn    8
