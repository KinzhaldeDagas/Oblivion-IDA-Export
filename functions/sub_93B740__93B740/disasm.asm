0x93B740: push    ebp
0x93B741: mov     ebp, esp
0x93B743: and     esp, 0FFFFFFF0h
0x93B746: sub     esp, 0Ch
0x93B749: mov     edx, [ebp+arg_0]
0x93B74C: mov     eax, [ebp+arg_4]
0x93B74F: push    esi
0x93B750: mov     esi, [edx+0Ch]
0x93B753: mov     [eax+20h], esi
0x93B756: movaps  xmm0, xmmword ptr [edx]
0x93B759: movaps  xmmword ptr [eax], xmm0
0x93B75C: cmp     dword ptr [ecx], 1
0x93B75F: jnz     short loc_93B777
0x93B761: movaps  xmm0, xmmword ptr [ecx+20h]
0x93B765: mov     dword ptr [eax+24h], 3F800000h
0x93B76C: movaps  xmmword ptr [eax+10h], xmm0
0x93B770: pop     esi
0x93B771: mov     esp, ebp
0x93B773: pop     ebp
0x93B774: retn    8
0x93B777: cmp     dword ptr [ecx+4], 1
0x93B77B: jnz     short loc_93B7AD
0x93B77D: movaps  xmm0, xmmword ptr [edx]
0x93B780: movaps  xmm1, xmmword ptr [eax]
0x93B783: shufps  xmm0, xmm0, 0FFh
0x93B787: movaps  xmm2, xmm0
0x93B78A: shufps  xmm2, xmm0, 0
0x93B78E: movaps  xmm0, xmmword ptr [ecx+0A0h]
0x93B795: mulps   xmm2, xmm1
0x93B798: addps   xmm0, xmm2
0x93B79B: mov     dword ptr [eax+24h], 0
0x93B7A2: movaps  xmmword ptr [eax+10h], xmm0
0x93B7A6: pop     esi
0x93B7A7: mov     esp, ebp
0x93B7A9: pop     ebp
0x93B7AA: retn    8
0x93B7AD: movaps  xmm0, xmmword ptr [ecx+130h]
0x93B7B4: mov     dword ptr [eax+24h], 3F000000h
0x93B7BB: movaps  xmmword ptr [eax+10h], xmm0
0x93B7BF: pop     esi
0x93B7C0: mov     esp, ebp
0x93B7C2: pop     ebp
0x93B7C3: retn    8
