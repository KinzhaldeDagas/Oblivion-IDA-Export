0x7C2FF0: push    0FFFFFFFFh
0x7C2FF2: push    offset SEH_7B2180
0x7C2FF7: mov     eax, large fs:0
0x7C2FFD: push    eax
0x7C2FFE: push    ecx
0x7C2FFF: push    ebx
0x7C3000: push    ebp
0x7C3001: push    esi
0x7C3002: push    edi
0x7C3003: mov     eax, ds:0B30AACh
0x7C3008: xor     eax, esp
0x7C300A: push    eax
0x7C300B: lea     eax, [esp+24h+var_C]
0x7C300F: mov     large fs:0, eax
0x7C3015: mov     esi, ecx
0x7C3017: mov     eax, [esi]
0x7C3019: mov     ebx, [esp+24h+arg_0]
0x7C301D: mov     edx, [eax+4]
0x7C3020: push    ebx
0x7C3021: mov     [esp+28h+var_4], 0
0x7C3029: call    edx
0x7C302B: mov     ebp, eax
0x7C302D: mov     eax, [esi+8]
0x7C3030: mov     edi, [eax+ebp*4]
0x7C3033: test    edi, edi
0x7C3035: jz      short loc_7C3053
0x7C3037: mov     eax, [edi+4]
0x7C303A: mov     edx, [esi]
0x7C303C: mov     edx, [edx+8]
0x7C303F: push    eax
0x7C3040: push    ebx
0x7C3041: mov     ecx, esi
0x7C3043: call    edx
0x7C3045: test    al, al
0x7C3047: jnz     loc_7C30D4
0x7C304D: mov     edi, [edi]
0x7C304F: test    edi, edi
0x7C3051: jnz     short loc_7C3037
0x7C3053: mov     edx, [esi]
0x7C3055: mov     eax, [edx+14h]
0x7C3058: mov     ecx, esi
0x7C305A: call    eax
0x7C305C: mov     ebx, [esp+20h+arg_8]
0x7C3060: test    ebx, ebx
0x7C3062: push    ecx
0x7C3063: mov     edi, eax
0x7C3065: mov     eax, esp
0x7C3067: mov     [esp+24h+var_C], esp
0x7C306B: mov     [eax], ebx
0x7C306D: jz      short loc_7C3079
0x7C306F: lea     ecx, [ebx+4]
0x7C3072: push    ecx; lpAddend
0x7C3073: call    dword ptr ds:0A28078h
0x7C3079: mov     eax, [esp+24h+arg_4]
0x7C307D: mov     edx, [esi]
0x7C307F: mov     edx, [edx+0Ch]
0x7C3082: push    eax
0x7C3083: push    edi
0x7C3084: mov     ecx, esi
0x7C3086: call    edx
0x7C3088: mov     eax, [esi+8]
0x7C308B: mov     ecx, [eax+ebp*4]
0x7C308E: mov     [edi], ecx
0x7C3090: mov     edx, [esi+8]
0x7C3093: mov     [edx+ebp*4], edi
0x7C3096: add     dword ptr [esi+0Ch], 1
0x7C309A: test    ebx, ebx
0x7C309C: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7C30A4: jz      short loc_7C30BE
0x7C30A6: lea     eax, [ebx+4]
0x7C30A9: push    eax; lpAddend
0x7C30AA: call    dword ptr ds:0A2807Ch
0x7C30B0: test    eax, eax
0x7C30B2: jnz     short loc_7C30BE
0x7C30B4: mov     edx, [ebx]
0x7C30B6: mov     ecx, ebx
0x7C30B8: mov     eax, [edx]
0x7C30BA: push    1
0x7C30BC: call    eax
0x7C30BE: mov     ecx, [esp+24h+var_C]
0x7C30C2: mov     large fs:0, ecx
0x7C30C9: pop     ecx
0x7C30CA: pop     edi
0x7C30CB: pop     esi
0x7C30CC: pop     ebp
0x7C30CD: pop     ebx
0x7C30CE: add     esp, 10h
0x7C30D1: retn    8
0x7C30D4: cmp     byte ptr [esi+10h], 0
0x7C30D8: jnz     short loc_7C30DD
0x7C30DA: mov     [edi+4], ebx
0x7C30DD: lea     eax, [esp+24h+arg_4]
0x7C30E1: push    eax
0x7C30E2: lea     ecx, [edi+8]
0x7C30E5: call    sub_55E2A0
0x7C30EA: mov     esi, [esp+24h+arg_4]
0x7C30EE: test    esi, esi
0x7C30F0: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7C30F8: jz      short loc_7C30BE
0x7C30FA: lea     ecx, [esi+4]
0x7C30FD: push    ecx; lpAddend
0x7C30FE: call    dword ptr ds:0A2807Ch
0x7C3104: test    eax, eax
0x7C3106: jnz     short loc_7C30BE
0x7C3108: mov     edx, [esi]
0x7C310A: mov     ecx, esi
0x7C310C: jmp     short loc_7C30B8
