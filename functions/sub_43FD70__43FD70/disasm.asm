0x43FD70: push    ebp
0x43FD71: mov     ebp, [esp+4+a2]
0x43FD75: push    edi
0x43FD76: push    ebp; a2
0x43FD77: mov     edi, ecx
0x43FD79: call    TES__IsInteriorCellPreloaded
0x43FD7E: test    al, al
0x43FD80: jz      short loc_43FDCB
0x43FD82: mov     ecx, ds:0B051D4h
0x43FD88: xor     eax, eax
0x43FD8A: lea     ebx, [ebx+0]
0x43FD90: cmp     eax, ecx
0x43FD92: jnb     loc_43FE25
0x43FD98: mov     edx, [edi+38h]
0x43FD9B: cmp     [edx+eax*4], ebp
0x43FD9E: jz      short loc_43FDA5
0x43FDA0: add     eax, 1
0x43FDA3: jmp     short loc_43FD90
0x43FDA5: test    eax, eax
0x43FDA7: jz      short loc_43FE20
0x43FDA9: lea     esp, [esp+0]
0x43FDB0: mov     ecx, [edi+38h]
0x43FDB3: mov     edx, [ecx+eax*4-4]
0x43FDB7: lea     ecx, [ecx+eax*4]
0x43FDBA: sub     eax, 1
0x43FDBD: mov     [ecx], edx
0x43FDBF: jnz     short loc_43FDB0
0x43FDC1: mov     eax, [edi+38h]
0x43FDC4: pop     edi
0x43FDC5: mov     [eax], ebp
0x43FDC7: pop     ebp
0x43FDC8: retn    4
0x43FDCB: push    ebx
0x43FDCC: mov     ebx, ds:0B051D4h
0x43FDD2: add     ebx, 0FFFFFFFFh
0x43FDD5: push    esi
0x43FDD6: mov     esi, ebx
0x43FDD8: js      short loc_43FE1E
0x43FDDA: lea     ebx, [ebx+0]
0x43FDE0: cmp     esi, ebx
0x43FDE2: jnz     short loc_43FDFE
0x43FDE4: mov     ecx, [edi+38h]
0x43FDE7: cmp     dword ptr [ecx+esi*4], 0
0x43FDEB: lea     eax, [ecx+esi*4]
0x43FDEE: jz      short loc_43FDFE
0x43FDF0: mov     edx, [eax]
0x43FDF2: mov     ecx, ds:0B33A98h
0x43FDF8: push    edx; a1
0x43FDF9: call    sub_447BA0
0x43FDFE: test    esi, esi
0x43FE00: jz      short loc_43FE10
0x43FE02: mov     eax, [edi+38h]
0x43FE05: mov     ecx, [eax+esi*4-4]
0x43FE09: lea     eax, [eax+esi*4]
0x43FE0C: mov     [eax], ecx
0x43FE0E: jmp     short loc_43FE19
0x43FE10: mov     edx, [edi+38h]
0x43FE13: mov     dword ptr [edx], 0
0x43FE19: sub     esi, 1
0x43FE1C: jns     short loc_43FDE0
0x43FE1E: pop     esi
0x43FE1F: pop     ebx
0x43FE20: mov     eax, [edi+38h]
0x43FE23: mov     [eax], ebp
0x43FE25: pop     edi
0x43FE26: pop     ebp
0x43FE27: retn    4
