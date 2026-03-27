0x88A770: mov     eax, [ecx]
0x88A772: mov     edx, [eax+58h]
0x88A775: push    ebx
0x88A776: xor     bl, bl
0x88A778: call    edx
0x88A77A: test    eax, eax
0x88A77C: jz      short loc_88A787
0x88A77E: cmp     dword ptr [eax+3Ch], 0
0x88A782: pop     ebx
0x88A783: setnz   al
0x88A786: retn
0x88A787: mov     al, bl
0x88A789: pop     ebx
0x88A78A: retn
