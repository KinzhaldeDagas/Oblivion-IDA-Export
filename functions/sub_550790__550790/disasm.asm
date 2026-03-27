0x550790: push    ebx
0x550791: mov     ebx, [esp+4+arg_0]
0x550795: test    ebx, ebx
0x550797: jnz     short loc_55079D
0x550799: xor     eax, eax
0x55079B: pop     ebx
0x55079C: retn
0x55079D: push    edi
0x55079E: movzx   edi, word ptr [ebx+14h]
0x5507A2: test    edi, edi
0x5507A4: jnz     short loc_5507AB
0x5507A6: pop     edi
0x5507A7: xor     eax, eax
0x5507A9: pop     ebx
0x5507AA: retn
0x5507AB: push    esi
0x5507AC: xor     esi, esi
0x5507AE: test    edi, edi
0x5507B0: jbe     short loc_5507D8
0x5507B2: mov     ecx, [ebx+10h]
0x5507B5: movzx   eax, si
0x5507B8: mov     eax, [ecx+eax*4]
0x5507BB: test    eax, eax
0x5507BD: jz      short loc_5507D1
0x5507BF: push    eax
0x5507C0: push    offset unk_B39D88
0x5507C5: call    NiRTTI_Cast
0x5507CA: add     esp, 8
0x5507CD: test    eax, eax
0x5507CF: jnz     short loc_5507DA
0x5507D1: add     esi, 1
0x5507D4: cmp     esi, edi
0x5507D6: jb      short loc_5507B2
0x5507D8: xor     eax, eax
0x5507DA: pop     esi
0x5507DB: pop     edi
0x5507DC: pop     ebx
0x5507DD: retn
