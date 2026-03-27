0x40C220: push    esi
0x40C221: push    edi
0x40C222: mov     edi, ecx
0x40C224: movzx   ecx, word ptr [edi+0AA2h]
0x40C22B: xor     esi, esi
0x40C22D: test    ecx, ecx
0x40C22F: jbe     short loc_40C25A
0x40C231: mov     eax, [edi+0A9Ch]
0x40C237: mov     edx, [esp+8+arg_0]
0x40C23B: jmp     short loc_40C240
0x40C23D: align 10h
0x40C240: cmp     [eax], edx
0x40C242: jz      short loc_40C255
0x40C244: add     esi, 1
0x40C247: add     eax, 4
0x40C24A: cmp     esi, ecx
0x40C24C: jb      short loc_40C240
0x40C24E: pop     edi
0x40C24F: xor     al, al
0x40C251: pop     esi
0x40C252: retn    4
0x40C255: cmp     esi, 0FFFFFFFFh
0x40C258: jnz     short loc_40C261
0x40C25A: pop     edi
0x40C25B: xor     al, al
0x40C25D: pop     esi
0x40C25E: retn    4
0x40C261: push    esi
0x40C262: lea     ecx, [edi+0A98h]
0x40C268: call    sub_405020
0x40C26D: push    esi
0x40C26E: lea     ecx, [edi+0AA8h]
0x40C274: call    sub_405020
0x40C279: pop     edi
0x40C27A: mov     al, 1
0x40C27C: pop     esi
0x40C27D: retn    4
