0x782810: mov     eax, ds:0B428D4h
0x782815: push    edi
0x782816: xor     edi, edi
0x782818: cmp     eax, edi
0x78281A: jz      short loc_782836
0x78281C: push    esi
0x78281D: lea     ecx, [ecx+0]
0x782820: mov     esi, [eax+18h]
0x782823: push    eax
0x782824: mov     [eax+8], edi
0x782827: call    FormHeapFree
0x78282C: add     esp, 4
0x78282F: cmp     esi, edi
0x782831: mov     eax, esi
0x782833: jnz     short loc_782820
0x782835: pop     esi
0x782836: mov     ds:0B428D4h, edi
0x78283C: pop     edi
0x78283D: retn
