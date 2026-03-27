0x519780: cmp     [esp+arg_0], 0
0x519785: push    ebp
0x519786: mov     ebp, ecx
0x519788: jnz     short loc_519790
0x51978A: mov     al, 1
0x51978C: pop     ebp
0x51978D: retn    4
0x519790: push    ebx
0x519791: push    esi
0x519792: xor     cl, cl
0x519794: push    edi
0x519795: movsx   esi, cl
0x519798: xor     eax, eax
0x51979A: cmp     esi, 9
0x51979D: ja      short loc_5197A3
0x51979F: mov     eax, [ebp+esi*4+0]
0x5197A3: xor     edx, edx
0x5197A5: cmp     esi, 9
0x5197A8: ja      short loc_5197B1
0x5197AA: mov     edx, [esp+10h+arg_0]
0x5197AE: mov     edx, [edx+esi*4]
0x5197B1: test    eax, eax
0x5197B3: jz      short loc_5197E9
0x5197B5: mov     edi, [eax+4]
0x5197B8: test    edi, edi
0x5197BA: jnz     short loc_5197C0
0x5197BC: cmp     [eax], edi
0x5197BE: jz      short loc_5197FE
0x5197C0: test    edx, edx
0x5197C2: jz      short loc_5197FE
0x5197C4: mov     esi, [edx+4]
0x5197C7: test    esi, esi
0x5197C9: jnz     short loc_5197CF
0x5197CB: cmp     [edx], esi
0x5197CD: jz      short loc_5197FE
0x5197CF: mov     eax, [eax]
0x5197D1: mov     edx, [edx]
0x5197D3: mov     bl, [eax+4]
0x5197D6: cmp     bl, [edx+4]
0x5197D9: jnz     short loc_5197FE
0x5197DB: mov     eax, [eax]
0x5197DD: cmp     eax, [edx]
0x5197DF: jnz     short loc_5197FE
0x5197E1: mov     eax, edi
0x5197E3: test    eax, eax
0x5197E5: mov     edx, esi
0x5197E7: jnz     short loc_5197B5
0x5197E9: test    edx, edx
0x5197EB: jnz     short loc_5197FE
0x5197ED: add     cl, 1
0x5197F0: cmp     cl, 0Ah
0x5197F3: jl      short loc_519795
0x5197F5: pop     edi
0x5197F6: pop     esi
0x5197F7: pop     ebx
0x5197F8: xor     al, al
0x5197FA: pop     ebp
0x5197FB: retn    4
0x5197FE: pop     edi
0x5197FF: pop     esi
0x519800: pop     ebx
0x519801: mov     al, 1
0x519803: pop     ebp
0x519804: retn    4
