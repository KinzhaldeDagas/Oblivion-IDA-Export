0x559190: push    0FFFFFFFFh
0x559192: push    offset SEH_8C62B0
0x559197: mov     eax, large fs:0
0x55919D: push    eax
0x55919E: push    ecx
0x55919F: push    esi
0x5591A0: mov     eax, ds:0B30AACh
0x5591A5: xor     eax, esp
0x5591A7: push    eax
0x5591A8: lea     eax, [esp+18h+var_C]
0x5591AC: mov     large fs:0, eax
0x5591B2: mov     esi, ecx
0x5591B4: mov     eax, [esi+8]
0x5591B7: test    eax, eax
0x5591B9: jnz     short loc_5591CE
0x5591BB: xor     al, al
0x5591BD: mov     ecx, [esp+18h+var_C]
0x5591C1: mov     large fs:0, ecx
0x5591C8: pop     ecx
0x5591C9: pop     esi
0x5591CA: add     esp, 10h
0x5591CD: retn
0x5591CE: cmp     dword ptr [eax+8], 0
0x5591D2: jnz     short loc_559229
0x5591D4: movzx   ecx, word ptr [eax+4]
0x5591D8: cmp     cx, 0FFFFh
0x5591DD: jnz     short loc_5591F1
0x5591DF: mov     eax, [eax]
0x5591E1: lea     edx, [eax+1]
0x5591E4: mov     cl, [eax]
0x5591E6: add     eax, 1
0x5591E9: test    cl, cl
0x5591EB: jnz     short loc_5591E4
0x5591ED: sub     eax, edx
0x5591EF: jmp     short loc_5591F4
0x5591F1: movzx   eax, cx
0x5591F4: test    eax, eax
0x5591F6: jz      short loc_5591BB
0x5591F8: push    24h ; '$'; Size
0x5591FA: call    FormHeapAlloc
0x5591FF: add     esp, 4
0x559202: mov     [esp+18h+var_10], eax
0x559206: test    eax, eax
0x559208: mov     [esp+18h+var_4], 0
0x559210: jz      short loc_559221
0x559212: mov     ecx, [esi+8]
0x559215: mov     edx, [ecx]
0x559217: push    edx; Src
0x559218: mov     ecx, eax
0x55921A: call    sub_558770
0x55921F: jmp     short loc_559223
0x559221: xor     eax, eax
0x559223: mov     edx, [esi+8]
0x559226: mov     [edx+8], eax
0x559229: mov     al, 1
0x55922B: mov     ecx, [esp+18h+var_C]
0x55922F: mov     large fs:0, ecx
0x559236: pop     ecx
0x559237: pop     esi
0x559238: add     esp, 10h
0x55923B: retn
