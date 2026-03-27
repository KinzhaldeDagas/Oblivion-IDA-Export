0x8AA3E0: mov     al, [ecx+8]
0x8AA3E3: push    ebx
0x8AA3E4: shr     al, 7
0x8AA3E7: xor     bl, bl
0x8AA3E9: test    al, 1
0x8AA3EB: jz      short loc_8AA413
0x8AA3ED: push    esi
0x8AA3EE: mov     esi, [ecx+30h]
0x8AA3F1: push    offset unk_BA8000
0x8AA3F6: mov     ecx, esi
0x8AA3F8: call    sub_700010
0x8AA3FD: test    eax, eax
0x8AA3FF: jz      short loc_8AA40E
0x8AA401: push    eax
0x8AA402: mov     ecx, esi
0x8AA404: call    sub_6FFE90
0x8AA409: pop     esi
0x8AA40A: mov     al, 1
0x8AA40C: pop     ebx
0x8AA40D: retn
0x8AA40E: pop     esi
0x8AA40F: mov     al, bl
0x8AA411: pop     ebx
0x8AA412: retn
0x8AA413: mov     al, bl
0x8AA415: pop     ebx
0x8AA416: retn
