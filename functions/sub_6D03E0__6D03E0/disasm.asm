0x6D03E0: push    ebx
0x6D03E1: push    ebp
0x6D03E2: push    esi
0x6D03E3: push    edi
0x6D03E4: mov     edi, [esp+10h+arg_0]
0x6D03E8: push    edi
0x6D03E9: mov     ebx, ecx
0x6D03EB: call    sub_754EB0
0x6D03F0: mov     eax, [edi+220h]
0x6D03F6: mov     edx, [eax+8]
0x6D03F9: push    1
0x6D03FB: lea     ecx, [esp+14h+arg_0]
0x6D03FF: push    ecx
0x6D0400: push    2
0x6D0402: lea     ebp, [ebx+44h]
0x6D0405: push    ebp
0x6D0406: push    eax
0x6D0407: mov     [esp+24h+arg_0], 2
0x6D040F: call    edx
0x6D0411: xor     esi, esi
0x6D0413: add     esp, 14h
0x6D0416: cmp     [ebp+0], si
0x6D041A: jbe     short loc_6D043C
0x6D041C: lea     esp, [esp+0]
0x6D0420: mov     edx, [ebx+40h]
0x6D0423: mov     eax, [edi]
0x6D0425: movzx   ecx, si
0x6D0428: mov     ecx, [edx+ecx*4]
0x6D042B: mov     edx, [eax+2Ch]
0x6D042E: push    ecx
0x6D042F: mov     ecx, edi
0x6D0431: call    edx
0x6D0433: add     esi, 1
0x6D0436: cmp     si, [ebp+0]
0x6D043A: jb      short loc_6D0420
0x6D043C: pop     edi
0x6D043D: pop     esi
0x6D043E: pop     ebp
0x6D043F: pop     ebx
0x6D0440: retn    4
