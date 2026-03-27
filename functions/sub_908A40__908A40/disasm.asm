0x908A40: push    ebp
0x908A41: mov     ebp, esp
0x908A43: and     esp, 0FFFFFFF0h
0x908A46: sub     esp, 464h
0x908A4C: mov     eax, ds:0B30AACh
0x908A51: mov     ecx, ds:0BA9DE4h
0x908A57: push    ebx
0x908A58: push    esi
0x908A59: mov     esi, large fs:2Ch
0x908A60: mov     [esp+46Ch+var_4], eax
0x908A67: mov     eax, [esi+ecx*4]
0x908A6A: mov     edx, [eax+1A4h]
0x908A70: push    edi
0x908A71: cmp     edx, [eax+1A8h]
0x908A77: jnb     short loc_908AA4
0x908A79: mov     edi, eax
0x908A7B: mov     ecx, [edi+1A4h]
0x908A81: mov     dword ptr [ecx], offset aLtbvtree; "LtBvTree"
0x908A87: mov     dword ptr [ecx+0Ch], offset aQuerytree; "QueryTree"
0x908A8E: rdtsc
0x908A90: mov     [esp+470h+var_45C], eax
0x908A94: mov     eax, [esp+470h+var_45C]
0x908A98: mov     [ecx+4], eax
0x908A9B: add     ecx, 10h
0x908A9E: mov     [edi+1A4h], ecx
0x908AA4: mov     edi, [ebp+arg_8]
0x908AA7: mov     ebx, [ebp+arg_4]
0x908AAA: mov     edx, [ebp+arg_0]
0x908AAD: lea     ecx, [esp+470h+var_440]
0x908AB1: push    ecx
0x908AB2: push    edi
0x908AB3: push    ebx
0x908AB4: push    edx
0x908AB5: call    sub_9067E0
0x908ABA: mov     ebx, [ebx]
0x908ABC: lea     eax, [esp+480h+var_414]
0x908AC0: mov     [esp+480h+var_420], eax
0x908AC4: add     esp, 10h
0x908AC7: lea     eax, [esp+470h+var_420]
0x908ACB: push    eax
0x908ACC: lea     ecx, [esp+474h+var_440]
0x908AD0: mov     [esp+474h+var_41C], 0
0x908AD8: mov     [esp+474h+var_418], 80000080h
0x908AE0: mov     edx, [ebx]
0x908AE2: push    ecx
0x908AE3: mov     ecx, ebx
0x908AE5: call    dword ptr [edx+24h]
0x908AE8: mov     ecx, ds:0BA9DE4h
0x908AEE: mov     eax, [esi+ecx*4]
0x908AF1: mov     edx, [eax+1A4h]
0x908AF7: cmp     edx, [eax+1A8h]
0x908AFD: jnb     short loc_908B23
0x908AFF: mov     esi, eax
0x908B01: mov     ecx, [esi+1A4h]
0x908B07: mov     dword ptr [ecx], offset aStnarrowphase; "StNarrowPhase"
0x908B0D: rdtsc
0x908B0F: mov     [esp+470h+var_45C], eax
0x908B13: mov     eax, [esp+470h+var_45C]
0x908B17: mov     [ecx+4], eax
0x908B1A: add     ecx, 0Ch
0x908B1D: mov     [esi+1A4h], ecx
0x908B23: mov     ecx, [ebp+arg_0]
0x908B26: mov     ecx, [ecx]
0x908B28: mov     edx, [ecx]
0x908B2A: call    dword ptr [edx+8]
0x908B2D: mov     esi, [esp+470h+var_420]
0x908B31: mov     ecx, [ebp+arg_4]
0x908B34: mov     ebx, [ebx+0Ch]
0x908B37: mov     [esp+470h+var_45C], eax
0x908B3B: mov     eax, [esp+470h+var_41C]
0x908B3F: lea     eax, [esi+eax*4]
0x908B42: cmp     esi, eax
0x908B44: mov     [esp+470h+var_444], ecx
0x908B48: mov     ecx, [ecx+8]
0x908B4B: mov     [esp+470h+var_454], eax
0x908B4F: mov     [esp+470h+var_448], ecx
0x908B53: jz      loc_908BE1
0x908B59: lea     esp, [esp+0]
0x908B60: mov     eax, [esi]
0x908B62: mov     ecx, [edi+4]
0x908B65: mov     edx, [ecx]
0x908B67: push    eax
0x908B68: mov     eax, [ebp+arg_4]
0x908B6B: push    ebx
0x908B6C: push    eax
0x908B6D: mov     eax, [ebp+arg_0]
0x908B70: push    eax
0x908B71: push    edi
0x908B72: lea     eax, [esp+484h+var_455]
0x908B76: push    eax
0x908B77: call    dword ptr [edx]
0x908B79: cmp     byte ptr [eax], 0
0x908B7C: jz      short loc_908BD2
0x908B7E: mov     ecx, [esi]
0x908B80: mov     edx, [ebx]
0x908B82: lea     eax, [esp+470h+var_210]
0x908B89: push    eax
0x908B8A: push    ecx
0x908B8B: mov     ecx, ebx
0x908B8D: call    dword ptr [edx+28h]
0x908B90: mov     ecx, [esi]
0x908B92: mov     [esp+470h+var_44C], ecx
0x908B96: mov     [esp+470h+var_450], eax
0x908B9A: mov     edx, [eax]
0x908B9C: mov     ecx, eax
0x908B9E: call    dword ptr [edx+8]
0x908BA1: mov     edx, [esp+470h+var_45C]
0x908BA5: mov     ecx, [edi]
0x908BA7: shl     edx, 5
0x908BAA: add     edx, ecx
0x908BAC: movzx   eax, byte ptr [edx+eax+190h]
0x908BB4: mov     edx, [ebp+arg_10]
0x908BB7: push    edx
0x908BB8: mov     edx, [ebp+arg_C]
0x908BBB: push    edx
0x908BBC: push    edi
0x908BBD: lea     edx, [esp+47Ch+var_450]
0x908BC1: push    edx
0x908BC2: mov     edx, [ebp+arg_0]
0x908BC5: add     eax, 7Bh ; '{'
0x908BC8: lea     eax, [eax+eax*4]
0x908BCB: push    edx
0x908BCC: call    dword ptr [ecx+eax*4]
0x908BCF: add     esp, 14h
0x908BD2: mov     eax, [esp+470h+var_454]
0x908BD6: add     esi, 4
0x908BD9: cmp     esi, eax
0x908BDB: jnz     short loc_908B60
0x908BDD: mov     esi, [esp+470h+var_420]
0x908BE1: mov     edi, large fs:2Ch
0x908BE8: mov     ebx, ds:0BA9DE4h
0x908BEE: mov     eax, [edi+ebx*4]
0x908BF1: mov     ecx, [eax+1A4h]
0x908BF7: cmp     ecx, [eax+1A8h]
0x908BFD: jnb     short loc_908C27
0x908BFF: mov     esi, eax
0x908C01: mov     ecx, [esi+1A4h]
0x908C07: mov     dword ptr [ecx], offset aLt_0; "lt"
0x908C0D: rdtsc
0x908C0F: mov     [esp+470h+var_454], eax
0x908C13: mov     edx, [esp+470h+var_454]
0x908C17: mov     [ecx+4], edx
0x908C1A: add     ecx, 0Ch
0x908C1D: mov     [esi+1A4h], ecx
0x908C23: mov     esi, [esp+470h+var_420]
0x908C27: mov     edx, [esp+470h+var_418]
0x908C2B: test    edx, edx
0x908C2D: js      short loc_908C55
0x908C2F: mov     eax, [edi+ebx*4]
0x908C32: mov     eax, [eax+19Ch]
0x908C38: test    eax, eax
0x908C3A: jnz     short loc_908C41
0x908C3C: mov     eax, ds:0BA7D9Ch
0x908C41: and     edx, 3FFFFFFFh
0x908C47: push    14h
0x908C49: shl     edx, 2
0x908C4C: push    edx
0x908C4D: push    esi
0x908C4E: mov     ecx, eax
0x908C50: call    sub_8A75D0
0x908C55: mov     ecx, [esp+470h+var_4]
0x908C5C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x908C61: pop     edi
0x908C62: pop     esi
0x908C63: pop     ebx
0x908C64: mov     esp, ebp
0x908C66: pop     ebp
0x908C67: retn
