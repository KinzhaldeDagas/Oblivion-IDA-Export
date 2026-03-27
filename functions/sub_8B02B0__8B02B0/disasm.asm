0x8B02B0: push    ecx
0x8B02B1: push    ebx
0x8B02B2: push    ebp
0x8B02B3: mov     ebx, ecx
0x8B02B5: mov     eax, [ebx]
0x8B02B7: mov     edx, [eax+74h]
0x8B02BA: push    edi
0x8B02BB: lea     ecx, [esp+10h+var_1]
0x8B02BF: push    ecx
0x8B02C0: mov     ecx, ebx
0x8B02C2: call    edx
0x8B02C4: mov     ebp, [esp+10h+arg_4]
0x8B02C8: mov     edi, eax
0x8B02CA: test    edi, edi
0x8B02CC: jz      short loc_8B030B
0x8B02CE: mov     eax, [edi+4]
0x8B02D1: test    eax, eax
0x8B02D3: push    esi
0x8B02D4: jz      short loc_8B02DB
0x8B02D6: mov     esi, [eax+8]
0x8B02D9: jmp     short loc_8B02DD
0x8B02DB: xor     esi, esi
0x8B02DD: test    esi, esi
0x8B02DF: jz      short loc_8B030A
0x8B02E1: mov     eax, [esi]
0x8B02E3: mov     edx, [eax+8Ch]
0x8B02E9: push    ebp
0x8B02EA: mov     ecx, esi
0x8B02EC: call    edx
0x8B02EE: test    al, al
0x8B02F0: jnz     short loc_8B030A
0x8B02F2: mov     eax, [esi]
0x8B02F4: mov     edx, [eax+18h]
0x8B02F7: push    ebp
0x8B02F8: mov     ecx, esi
0x8B02FA: call    edx
0x8B02FC: test    eax, eax
0x8B02FE: jz      short loc_8B0305
0x8B0300: mov     eax, [eax+8]
0x8B0303: jmp     short loc_8B0307
0x8B0305: xor     eax, eax
0x8B0307: mov     [edi+4], eax
0x8B030A: pop     esi
0x8B030B: mov     eax, [esp+10h+arg_0]
0x8B030F: push    ebp
0x8B0310: push    eax
0x8B0311: mov     ecx, ebx
0x8B0313: call    sub_8A2670
0x8B0318: pop     edi
0x8B0319: pop     ebp
0x8B031A: pop     ebx
0x8B031B: pop     ecx
0x8B031C: retn    8
