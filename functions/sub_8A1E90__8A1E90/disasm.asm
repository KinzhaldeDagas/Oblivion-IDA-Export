0x8A1E90: push    esi
0x8A1E91: push    edi
0x8A1E92: mov     edi, ecx
0x8A1E94: test    edi, edi
0x8A1E96: jz      short loc_8A1EAB
0x8A1E98: mov     eax, [edi+8]
0x8A1E9B: test    eax, eax
0x8A1E9D: jz      short loc_8A1EAB
0x8A1E9F: mov     eax, [eax+0Ch]
0x8A1EA2: test    eax, eax
0x8A1EA4: jz      short loc_8A1EAB
0x8A1EA6: mov     eax, [eax+8]
0x8A1EA9: jmp     short loc_8A1EAD
0x8A1EAB: xor     eax, eax
0x8A1EAD: mov     esi, [esp+8+arg_0]
0x8A1EB1: mov     edx, [esi]
0x8A1EB3: push    eax
0x8A1EB4: mov     eax, [edx+2Ch]
0x8A1EB7: mov     ecx, esi
0x8A1EB9: call    eax
0x8A1EBB: push    esi
0x8A1EBC: mov     ecx, edi
0x8A1EBE: call    sub_8A2610
0x8A1EC3: pop     edi
0x8A1EC4: pop     esi
0x8A1EC5: retn    4
