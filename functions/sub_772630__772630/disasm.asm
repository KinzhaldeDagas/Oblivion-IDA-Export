0x772630: mov     ecx, ds:0B4275Ch
0x772636: mov     eax, [ecx+8]
0x772639: test    eax, eax
0x77263B: push    esi
0x77263C: lea     esi, [ecx+8]
0x77263F: push    edi
0x772640: mov     edi, ecx
0x772642: jnz     short loc_772658
0x772644: mov     eax, [ecx+0Ch]
0x772647: push    ebx
0x772648: lea     ebx, [ecx+0Ch]
0x77264B: push    eax
0x77264C: call    sub_772430
0x772651: mov     ecx, [ebx]
0x772653: add     ecx, ecx
0x772655: mov     [ebx], ecx
0x772657: pop     ebx
0x772658: mov     eax, [edi]
0x77265A: mov     ecx, [eax]
0x77265C: add     dword ptr [esi], 0FFFFFFFFh
0x77265F: test    ecx, ecx
0x772661: mov     esi, [esi]
0x772663: mov     edx, [eax+esi*4]
0x772666: mov     [eax], edx
0x772668: mov     eax, [esp+8+arg_0]
0x77266C: pop     edi
0x77266D: mov     [eax], ecx
0x77266F: pop     esi
0x772670: jz      short loc_77267E
0x772672: mov     edx, 1
0x772677: add     [ecx+5Ch], edx
0x77267A: mov     [ecx+5Bh], dl
0x77267D: retn
0x77267E: mov     byte ptr [ecx+5Bh], 1
0x772682: retn
