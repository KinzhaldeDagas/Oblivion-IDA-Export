0x929560: push    esi
0x929561: mov     esi, [esp+4+arg_0]
0x929565: push    edi
0x929566: mov     edi, ecx
0x929568: mov     ecx, [esi+8]
0x92956B: mov     edx, [edi+24h]
0x92956E: mov     eax, ecx
0x929570: and     eax, 3FFFFFFFh
0x929575: cmp     eax, edx
0x929577: jge     short loc_9295E6
0x929579: test    ecx, ecx
0x92957B: push    ebx
0x92957C: mov     ebx, ds:0BA9DE4h
0x929582: push    ebp
0x929583: mov     ebp, large fs:2Ch
0x92958A: js      short loc_9295AE
0x92958C: mov     ecx, [ebp+ebx*4+0]
0x929590: mov     ecx, [ecx+19Ch]
0x929596: test    ecx, ecx
0x929598: jnz     short loc_9295A0
0x92959A: mov     ecx, ds:0BA7D9Ch
0x9295A0: mov     edx, [esi]
0x9295A2: push    14h
0x9295A4: shl     eax, 4
0x9295A7: push    eax
0x9295A8: push    edx
0x9295A9: call    sub_8A75D0
0x9295AE: mov     eax, [ebp+ebx*4+0]
0x9295B2: mov     eax, [eax+19Ch]
0x9295B8: test    eax, eax
0x9295BA: pop     ebp
0x9295BB: pop     ebx
0x9295BC: jnz     short loc_9295C3
0x9295BE: mov     eax, ds:0BA7D9Ch
0x9295C3: mov     ecx, [edi+24h]
0x9295C6: shl     ecx, 4
0x9295C9: push    14h
0x9295CB: push    ecx
0x9295CC: mov     ecx, eax
0x9295CE: call    sub_8A7560
0x9295D3: mov     edx, [esi+8]
0x9295D6: mov     [esi], eax
0x9295D8: mov     eax, [edi+24h]
0x9295DB: and     edx, 40000000h
0x9295E1: or      edx, eax
0x9295E3: mov     [esi+8], edx
0x9295E6: mov     ecx, [edi+24h]
0x9295E9: test    ecx, ecx
0x9295EB: mov     eax, [esi]
0x9295ED: mov     [esi+4], ecx
0x9295F0: mov     edx, [edi+20h]
0x9295F3: pop     edi
0x9295F4: pop     esi
0x9295F5: jle     short locret_92960D
0x9295F7: sub     edx, eax
0x9295F9: lea     esp, [esp+0]
0x929600: movaps  xmm0, xmmword ptr [edx+eax]
0x929604: movaps  xmmword ptr [eax], xmm0
0x929607: add     eax, 10h
0x92960A: dec     ecx
0x92960B: jnz     short loc_929600
0x92960D: retn    4
