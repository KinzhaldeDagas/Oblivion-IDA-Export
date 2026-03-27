0x5375F0: mov     edx, [ecx+18h]
0x5375F3: xor     al, al
0x5375F5: test    edx, edx
0x5375F7: jz      short locret_537622
0x5375F9: push    esi
0x5375FA: mov     esi, [esp+4+arg_0]
0x5375FE: mov     edi, edi
0x537600: cmp     [edx+8], esi
0x537603: jz      short loc_537610
0x537605: mov     edx, [edx+4]
0x537608: test    edx, edx
0x53760A: jnz     short loc_537600
0x53760C: pop     esi
0x53760D: retn    8
0x537610: test    edx, edx
0x537612: jz      short loc_537621
0x537614: mov     eax, [esp+4+arg_4]
0x537618: push    eax
0x537619: push    edx
0x53761A: call    sub_536EE0
0x53761F: mov     al, 1
0x537621: pop     esi
0x537622: retn    8
