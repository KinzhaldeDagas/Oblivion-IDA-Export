0x4FB5F0: mov     eax, [ecx+8]
0x4FB5F3: test    eax, eax
0x4FB5F5: push    esi
0x4FB5F6: mov     esi, [esp+4+arg_0]
0x4FB5FA: jz      short loc_4FB611
0x4FB5FC: lea     esp, [esp+0]
0x4FB600: mov     edx, [eax]
0x4FB602: test    edx, edx
0x4FB604: jz      short loc_4FB611
0x4FB606: cmp     [edx], esi
0x4FB608: jz      short loc_4FB61D
0x4FB60A: mov     eax, [eax+4]
0x4FB60D: test    eax, eax
0x4FB60F: jnz     short loc_4FB600
0x4FB611: push    esi
0x4FB612: call    sub_4FB510
0x4FB617: xor     al, al
0x4FB619: pop     esi
0x4FB61A: retn    8
0x4FB61D: mov     eax, [esp+4+arg_4]
0x4FB621: test    [edx+4], eax
0x4FB624: jz      short loc_4FB617
0x4FB626: mov     al, 1
0x4FB628: pop     esi
0x4FB629: retn    8
