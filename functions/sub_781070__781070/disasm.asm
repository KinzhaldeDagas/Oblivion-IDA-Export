0x781070: push    ecx
0x781071: push    ebx
0x781072: push    esi
0x781073: mov     esi, [esp+0Ch+arg_0]
0x781077: mov     eax, [esi]
0x781079: mov     edx, [eax+18h]
0x78107C: mov     ebx, ecx
0x78107E: push    edi
0x78107F: mov     ecx, esi
0x781081: call    edx
0x781083: mov     edi, eax
0x781085: test    edi, edi
0x781087: jnz     short loc_781092
0x781089: pop     edi
0x78108A: pop     esi
0x78108B: xor     al, al
0x78108D: pop     ebx
0x78108E: pop     ecx
0x78108F: retn    4
0x781092: mov     eax, [esi]
0x781094: mov     edx, [eax+48h]
0x781097: mov     ecx, esi
0x781099: call    edx
0x78109B: push    0
0x78109D: mov     [esp+14h+var_4], eax
0x7810A1: mov     eax, [esi]
0x7810A3: mov     edx, [eax+38h]
0x7810A6: push    0
0x7810A8: push    0
0x7810AA: mov     ecx, esi
0x7810AC: call    edx
0x7810AE: push    eax
0x7810AF: lea     eax, [esp+20h+var_4]
0x7810B3: push    eax
0x7810B4: push    edi
0x7810B5: mov     ecx, ebx
0x7810B7: call    sub_783BF0
0x7810BC: test    eax, eax
0x7810BE: jz      short loc_781089
0x7810C0: mov     edx, [esi]
0x7810C2: push    eax
0x7810C3: mov     eax, [edx+44h]
0x7810C6: mov     ecx, esi
0x7810C8: call    eax
0x7810CA: lea     ecx, [esp+10h+arg_0]
0x7810CE: push    ecx
0x7810CF: push    edi
0x7810D0: call    D3DXGetShaderConstantTable_0
0x7810D5: test    eax, eax
0x7810D7: jl      short loc_7810E7
0x7810D9: mov     edx, [esi]
0x7810DB: mov     eax, [esp+10h+arg_0]
0x7810DF: mov     edx, [edx+74h]
0x7810E2: push    eax
0x7810E3: mov     ecx, esi
0x7810E5: call    edx
0x7810E7: mov     eax, [esp+10h+arg_0]
0x7810EB: test    eax, eax
0x7810ED: jz      short loc_7810F7
0x7810EF: mov     ecx, [eax]
0x7810F1: mov     edx, [ecx+8]
0x7810F4: push    eax
0x7810F5: call    edx
0x7810F7: pop     edi
0x7810F8: pop     esi
0x7810F9: mov     al, 1
0x7810FB: pop     ebx
0x7810FC: pop     ecx
0x7810FD: retn    4
