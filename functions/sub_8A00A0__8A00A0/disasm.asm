0x8A00A0: push    esi
0x8A00A1: push    edi
0x8A00A2: mov     edi, ecx
0x8A00A4: test    edi, edi
0x8A00A6: jz      short loc_8A00B4
0x8A00A8: mov     eax, [edi+8]
0x8A00AB: test    eax, eax
0x8A00AD: jz      short loc_8A00B4
0x8A00AF: mov     eax, [eax+18h]
0x8A00B2: jmp     short loc_8A00B6
0x8A00B4: xor     eax, eax
0x8A00B6: test    eax, eax
0x8A00B8: jz      short loc_8A00BF
0x8A00BA: mov     eax, [eax+0Ch]
0x8A00BD: jmp     short loc_8A00C1
0x8A00BF: xor     eax, eax
0x8A00C1: mov     esi, [esp+8+arg_0]
0x8A00C5: mov     edx, [esi]
0x8A00C7: push    eax
0x8A00C8: mov     eax, [edx+2Ch]
0x8A00CB: mov     ecx, esi
0x8A00CD: call    eax
0x8A00CF: test    edi, edi
0x8A00D1: jz      short loc_8A00DF
0x8A00D3: mov     eax, [edi+8]
0x8A00D6: test    eax, eax
0x8A00D8: jz      short loc_8A00DF
0x8A00DA: mov     eax, [eax+1Ch]
0x8A00DD: jmp     short loc_8A00E1
0x8A00DF: xor     eax, eax
0x8A00E1: test    eax, eax
0x8A00E3: jz      short loc_8A00EA
0x8A00E5: mov     eax, [eax+0Ch]
0x8A00E8: jmp     short loc_8A00EC
0x8A00EA: xor     eax, eax
0x8A00EC: mov     edx, [esi]
0x8A00EE: push    eax
0x8A00EF: mov     eax, [edx+2Ch]
0x8A00F2: mov     ecx, esi
0x8A00F4: call    eax
0x8A00F6: push    esi
0x8A00F7: mov     ecx, edi
0x8A00F9: call    sub_89D7B0
0x8A00FE: pop     edi
0x8A00FF: pop     esi
0x8A0100: retn    4
