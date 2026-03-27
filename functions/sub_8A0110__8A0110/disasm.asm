0x8A0110: push    ebx
0x8A0111: push    esi
0x8A0112: mov     esi, ecx
0x8A0114: xor     bl, bl
0x8A0116: test    esi, esi
0x8A0118: jz      short loc_8A016D
0x8A011A: mov     eax, [esi+8]
0x8A011D: test    eax, eax
0x8A011F: jz      short loc_8A016D
0x8A0121: push    edi
0x8A0122: mov     edi, [esp+0Ch+arg_0]
0x8A0126: test    edi, edi
0x8A0128: jz      short loc_8A015E
0x8A012A: test    eax, eax
0x8A012C: jz      short loc_8A0133
0x8A012E: mov     eax, [eax+1Ch]
0x8A0131: jmp     short loc_8A0135
0x8A0133: xor     eax, eax
0x8A0135: test    eax, eax
0x8A0137: jz      short loc_8A013E
0x8A0139: mov     ecx, [eax+0Ch]
0x8A013C: jmp     short loc_8A0140
0x8A013E: xor     ecx, ecx
0x8A0140: test    ecx, ecx
0x8A0142: push    edi
0x8A0143: jz      short loc_8A0151
0x8A0145: mov     eax, [ecx]
0x8A0147: mov     edx, [eax+5Ch]
0x8A014A: call    edx
0x8A014C: test    al, al
0x8A014E: jz      short loc_8A0165
0x8A0150: push    edi
0x8A0151: mov     ecx, esi
0x8A0153: call    sub_89D960
0x8A0158: pop     edi
0x8A0159: pop     esi
0x8A015A: pop     ebx
0x8A015B: retn    4
0x8A015E: mov     eax, [esi]
0x8A0160: mov     edx, [eax+60h]
0x8A0163: call    edx
0x8A0165: pop     edi
0x8A0166: pop     esi
0x8A0167: mov     al, bl
0x8A0169: pop     ebx
0x8A016A: retn    4
0x8A016D: pop     esi
0x8A016E: mov     al, bl
0x8A0170: pop     ebx
0x8A0171: retn    4
