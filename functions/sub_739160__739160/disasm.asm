0x739160: push    ecx
0x739161: push    ebx
0x739162: mov     ebx, [esp+8+arg_0]
0x739166: push    ebp
0x739167: push    esi
0x739168: mov     esi, ecx
0x73916A: push    ebx
0x73916B: mov     [esp+14h+var_4], esi
0x73916F: call    nullsub_returnvVoid_1arg
0x739174: mov     ecx, ebx
0x739176: call    sub_7124D0
0x73917B: mov     ebp, eax
0x73917D: test    ebp, ebp
0x73917F: jz      short loc_7391F1
0x739181: push    edi
0x739182: jmp     short loc_73918C
0x739184: mov     esi, [esp+14h+var_4]
0x739188: mov     ebx, [esp+14h+arg_0]
0x73918C: mov     edi, [esi+8]
0x73918F: mov     ecx, ebx
0x739191: sub     ebp, 1
0x739194: call    sub_7124A0
0x739199: mov     esi, eax
0x73919B: test    esi, esi
0x73919D: jz      short loc_7391EC
0x73919F: mov     eax, [esi]
0x7391A1: mov     edx, [eax+4Ch]
0x7391A4: mov     ecx, esi
0x7391A6: call    edx
0x7391A8: cmp     eax, 0Ah
0x7391AB: jg      short loc_7391EC
0x7391AD: mov     eax, [esi]
0x7391AF: mov     edx, [eax+4Ch]
0x7391B2: mov     ecx, esi
0x7391B4: call    edx
0x7391B6: lea     ebx, [edi+eax*4+8]
0x7391BA: mov     edi, [ebx]
0x7391BC: cmp     edi, esi
0x7391BE: jz      short loc_7391EC
0x7391C0: test    edi, edi
0x7391C2: jz      short loc_7391E0
0x7391C4: lea     eax, [edi+4]
0x7391C7: push    eax; lpAddend
0x7391C8: call    dword ptr ds:0A2807Ch
0x7391CE: test    eax, eax
0x7391D0: jnz     short loc_7391E0
0x7391D2: test    edi, edi
0x7391D4: jz      short loc_7391E0
0x7391D6: mov     edx, [edi]
0x7391D8: mov     eax, [edx]
0x7391DA: push    1
0x7391DC: mov     ecx, edi
0x7391DE: call    eax
0x7391E0: mov     [ebx], esi
0x7391E2: add     esi, 4
0x7391E5: push    esi; lpAddend
0x7391E6: call    dword ptr ds:0A28078h
0x7391EC: test    ebp, ebp
0x7391EE: jnz     short loc_739184
0x7391F0: pop     edi
0x7391F1: pop     esi
0x7391F2: pop     ebp
0x7391F3: pop     ebx
0x7391F4: pop     ecx
0x7391F5: retn    4
