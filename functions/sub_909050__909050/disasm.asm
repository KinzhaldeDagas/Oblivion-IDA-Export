0x909050: push    ebp
0x909051: mov     ebp, esp
0x909053: and     esp, 0FFFFFFF0h
0x909056: sub     esp, 224h
0x90905C: mov     eax, ds:0B30AACh
0x909061: push    ebx
0x909062: push    esi
0x909063: mov     esi, large fs:2Ch
0x90906A: push    edi
0x90906B: mov     edi, ecx
0x90906D: mov     ecx, ds:0BA9DE4h
0x909073: mov     [esp+230h+var_4], eax
0x90907A: mov     eax, [esi+ecx*4]
0x90907D: mov     edx, [eax+1A4h]
0x909083: cmp     edx, [eax+1A8h]
0x909089: jnb     short loc_9090B6
0x90908B: mov     ebx, eax
0x90908D: mov     ecx, [ebx+1A4h]
0x909093: mov     dword ptr [ecx], offset aLtbvtree; "LtBvTree"
0x909099: mov     dword ptr [ecx+0Ch], offset aQuerytree; "QueryTree"
0x9090A0: rdtsc
0x9090A2: mov     [esp+230h+var_224], eax
0x9090A6: mov     eax, [esp+230h+var_224]
0x9090AA: mov     [ecx+4], eax
0x9090AD: add     ecx, 10h
0x9090B0: mov     [ebx+1A4h], ecx
0x9090B6: mov     ecx, [ebp+arg_8]
0x9090B9: mov     ebx, [ebp+arg_4]
0x9090BC: mov     edx, [ebp+arg_0]
0x9090BF: push    ecx
0x9090C0: push    ebx
0x9090C1: push    edx
0x9090C2: mov     ecx, edi
0x9090C4: call    sub_9069E0
0x9090C9: mov     ecx, ds:0BA9DE4h
0x9090CF: mov     eax, [esi+ecx*4]
0x9090D2: mov     edx, [eax+1A4h]
0x9090D8: cmp     edx, [eax+1A8h]
0x9090DE: jnb     short loc_909104
0x9090E0: mov     esi, eax
0x9090E2: mov     ecx, [esi+1A4h]
0x9090E8: mov     dword ptr [ecx], offset aStnarrowphase; "StNarrowPhase"
0x9090EE: rdtsc
0x9090F0: mov     [esp+230h+var_224], eax
0x9090F4: mov     eax, [esp+230h+var_224]
0x9090F8: mov     [ecx+4], eax
0x9090FB: add     ecx, 0Ch
0x9090FE: mov     [esi+1A4h], ecx
0x909104: mov     esi, [edi+0Ch]
0x909107: mov     eax, [edi+10h]
0x90910A: lea     ecx, [eax+eax*2]
0x90910D: mov     edx, esi
0x90910F: lea     eax, [edx+ecx*4]
0x909112: cmp     esi, eax
0x909114: mov     ecx, [ebx+8]
0x909117: mov     edx, [ebx]
0x909119: mov     [esp+230h+var_214], ebx
0x90911D: mov     [esp+230h+var_218], ecx
0x909121: mov     edi, [edx+0Ch]
0x909124: mov     [esp+230h+var_224], eax
0x909128: jz      short loc_909171
0x90912A: mov     ebx, [ebp+arg_C]
0x90912D: lea     ecx, [ecx+0]
0x909130: mov     edx, [esi]
0x909132: mov     eax, [edi]
0x909134: lea     ecx, [esp+230h+var_210]
0x909138: push    ecx
0x909139: push    edx
0x90913A: mov     ecx, edi
0x90913C: call    dword ptr [eax+28h]
0x90913F: mov     edx, [ebp+arg_8]
0x909142: mov     ecx, [esi]
0x909144: push    ebx
0x909145: push    edx
0x909146: lea     edx, [esp+238h+var_220]
0x90914A: mov     [esp+238h+var_220], eax
0x90914E: mov     [esp+238h+var_21C], ecx
0x909152: mov     ecx, [esi+8]
0x909155: mov     eax, [ecx]
0x909157: push    edx
0x909158: mov     edx, [ebp+arg_0]
0x90915B: push    edx
0x90915C: call    dword ptr [eax+8]
0x90915F: mov     al, [ebx+4]
0x909162: test    al, al
0x909164: jnz     short loc_909171
0x909166: mov     eax, [esp+230h+var_224]
0x90916A: add     esi, 0Ch
0x90916D: cmp     esi, eax
0x90916F: jnz     short loc_909130
0x909171: mov     ecx, large fs:2Ch
0x909178: mov     edx, ds:0BA9DE4h
0x90917E: mov     eax, [ecx+edx*4]
0x909181: mov     esi, [eax+1A4h]
0x909187: cmp     esi, [eax+1A8h]
0x90918D: jnb     short loc_9091B3
0x90918F: mov     esi, eax
0x909191: mov     ecx, [esi+1A4h]
0x909197: mov     dword ptr [ecx], offset aLt_0; "lt"
0x90919D: rdtsc
0x90919F: mov     [esp+230h+var_224], eax
0x9091A3: mov     eax, [esp+230h+var_224]
0x9091A7: mov     [ecx+4], eax
0x9091AA: add     ecx, 0Ch
0x9091AD: mov     [esi+1A4h], ecx
0x9091B3: mov     ecx, [esp+230h+var_4]
0x9091BA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9091BF: pop     edi
0x9091C0: pop     esi
0x9091C1: pop     ebx
0x9091C2: mov     esp, ebp
0x9091C4: pop     ebp
0x9091C5: retn    10h
