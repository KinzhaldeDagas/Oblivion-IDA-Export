0x9135E0: push    ebx
0x9135E1: push    esi
0x9135E2: push    edi
0x9135E3: mov     edi, ecx
0x9135E5: mov     esi, [edi+4]
0x9135E8: mov     eax, [esi+24h]
0x9135EB: mov     ecx, [esi+20h]
0x9135EE: add     esi, 1Ch
0x9135F1: and     eax, 3FFFFFFFh
0x9135F6: cmp     ecx, eax
0x9135F8: jnz     short loc_913605
0x9135FA: push    4
0x9135FC: push    esi
0x9135FD: call    sub_8A6EE0
0x913602: add     esp, 8
0x913605: mov     ecx, [esi+4]
0x913608: mov     edx, [esi]
0x91360A: mov     dword ptr [edx+ecx*4], 1
0x913611: inc     dword ptr [esi+4]
0x913614: mov     eax, [edi+4]
0x913617: mov     ebx, [eax+14h]
0x91361A: mov     ecx, [eax+14h]
0x91361D: lea     esi, [eax+10h]
0x913620: mov     eax, [esi+8]
0x913623: and     eax, 3FFFFFFFh
0x913628: cmp     ecx, eax
0x91362A: jnz     short loc_913637
0x91362C: push    10h
0x91362E: push    esi
0x91362F: call    sub_8A6EE0
0x913634: add     esp, 8
0x913637: mov     ecx, [esi+4]
0x91363A: mov     edx, [esi]
0x91363C: mov     eax, ecx
0x91363E: shl     eax, 4
0x913641: add     eax, edx
0x913643: inc     ecx
0x913644: mov     [esi+4], ecx
0x913647: mov     ecx, [esp+0Ch+arg_0]
0x91364B: movaps  xmm0, xmmword ptr [ecx]
0x91364E: movaps  xmmword ptr [eax], xmm0
0x913651: mov     byte ptr [edi+18h], 1
0x913655: pop     edi
0x913656: pop     esi
0x913657: mov     eax, ebx
0x913659: pop     ebx
0x91365A: retn    4
