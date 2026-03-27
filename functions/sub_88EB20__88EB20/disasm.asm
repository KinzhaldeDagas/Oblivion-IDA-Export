0x88EB20: mov     eax, ds:0BA7A8Ch
0x88EB25: cmp     eax, 3
0x88EB28: push    esi
0x88EB29: mov     esi, ecx
0x88EB2B: jz      short loc_88EB4A
0x88EB2D: mov     cl, [esi+0Ch]
0x88EB30: shr     cl, 6
0x88EB33: test    cl, 1
0x88EB36: jz      short loc_88EB4C
0x88EB38: cmp     eax, 2
0x88EB3B: jz      short loc_88EB4A
0x88EB3D: mov     ecx, esi
0x88EB3F: call    sub_89EAE0
0x88EB44: and     word ptr [esi+0Ch], 0FFBFh
0x88EB4A: pop     esi
0x88EB4B: retn
0x88EB4C: test    byte ptr [esi+0Ch], 1
0x88EB50: jz      short loc_88EB4A
0x88EB52: mov     edx, [esi]
0x88EB54: mov     eax, [edx+64h]
0x88EB57: mov     ecx, esi
0x88EB59: pop     esi
0x88EB5A: jmp     eax
