0x98946E: mov     edx, 7EFEFEFFh
0x989473: mov     eax, [esi]
0x989475: add     edx, eax
0x989477: xor     eax, 0FFFFFFFFh
0x98947A: xor     eax, edx
0x98947C: mov     edx, [esi]
0x98947E: add     esi, 4
0x989481: test    eax, 81010100h
0x989486: jz      short _strncat___main_loop_2
0x989488: test    dl, dl
0x98948A: jz      short loc_98945A
0x98948C: test    dh, dh
0x98948E: jz      short loc_9894BA
0x989490: test    edx, 0FF0000h
0x989496: jz      short loc_9894AA
0x989498: test    edx, 0FF000000h
0x98949E: jnz     short _strncat___main_loop_2
0x9894A0: mov     [edi], edx
0x9894A2: mov     eax, [esp+arg_C]
0x9894A6: pop     ebx
0x9894A7: pop     esi
0x9894A8: pop     edi
0x9894A9: retn
0x9894AA: mov     [edi], dx
0x9894AD: xor     edx, edx
0x9894AF: mov     eax, [esp+arg_C]
0x9894B3: mov     [edi+2], dl
0x9894B6: pop     ebx
0x9894B7: pop     esi
0x9894B8: pop     edi
0x9894B9: retn
0x9894BA: mov     [edi], dx
0x9894BD: mov     eax, [esp+arg_C]
0x9894C1: pop     ebx
0x9894C2: pop     esi
0x9894C3: pop     edi
0x9894C4: retn
