0x4A05E0: mov     eax, [esp+arg_0]
0x4A05E4: push    esi
0x4A05E5: mov     esi, [eax+0A8h]
0x4A05EB: test    esi, esi
0x4A05ED: jnz     short loc_4A05F3
0x4A05EF: xor     eax, eax
0x4A05F1: pop     esi
0x4A05F2: retn
0x4A05F3: mov     edx, [esi]
0x4A05F5: mov     eax, [edx+4]
0x4A05F8: mov     ecx, esi
0x4A05FA: call    eax
0x4A05FC: test    eax, eax
0x4A05FE: jz      short loc_4A060E
0x4A0600: cmp     eax, offset dword_BA7B80
0x4A0605: jz      short loc_4A0618
0x4A0607: mov     eax, [eax+4]
0x4A060A: test    eax, eax
0x4A060C: jnz     short loc_4A0600
0x4A060E: xor     al, al
0x4A0610: neg     al
0x4A0612: sbb     eax, eax
0x4A0614: and     eax, esi
0x4A0616: pop     esi
0x4A0617: retn
0x4A0618: mov     al, 1
0x4A061A: neg     al
0x4A061C: sbb     eax, eax
0x4A061E: and     eax, esi
0x4A0620: pop     esi
0x4A0621: retn
