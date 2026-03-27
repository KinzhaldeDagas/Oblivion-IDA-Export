0x8025F0: mov     eax, ds:0B43104h
0x8025F5: push    esi
0x8025F6: push    eax; a2
0x8025F7: mov     esi, ecx
0x8025F9: call    NiD3DShader__SetRenderer
0x8025FE: test    al, al
0x802600: jnz     short loc_802604
0x802602: pop     esi
0x802603: retn
0x802604: mov     edx, [esi]
0x802606: mov     eax, [edx+98h]
0x80260C: mov     ecx, esi
0x80260E: call    eax
0x802610: mov     edx, [esi]
0x802612: mov     eax, [edx+0A0h]
0x802618: mov     ecx, esi
0x80261A: call    eax
0x80261C: mov     edx, [esi]
0x80261E: mov     eax, [edx+9Ch]
0x802624: mov     ecx, esi
0x802626: call    eax
0x802628: push    1
0x80262A: lea     ecx, [esi+40h]
0x80262D: call    sub_76CCA0
0x802632: mov     al, 1
0x802634: pop     esi
0x802635: retn
