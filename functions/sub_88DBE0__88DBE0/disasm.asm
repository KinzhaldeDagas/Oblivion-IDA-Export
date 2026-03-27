0x88DBE0: push    ebx
0x88DBE1: push    esi
0x88DBE2: push    edi
0x88DBE3: mov     edi, ecx
0x88DBE5: mov     ebx, [edi+0A4h]
0x88DBEB: xor     esi, esi
0x88DBED: test    ebx, ebx
0x88DBEF: jle     short loc_88DC02
0x88DBF1: mov     eax, [edi]
0x88DBF3: mov     edx, [eax+34h]
0x88DBF6: push    esi
0x88DBF7: mov     ecx, edi
0x88DBF9: call    edx
0x88DBFB: add     esi, 1
0x88DBFE: cmp     esi, ebx
0x88DC00: jl      short loc_88DBF1
0x88DC02: pop     edi
0x88DC03: pop     esi
0x88DC04: pop     ebx
0x88DC05: retn
