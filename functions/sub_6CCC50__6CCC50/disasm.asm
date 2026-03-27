0x6CCC50: push    esi
0x6CCC51: mov     esi, [esp+4+arg_0]
0x6CCC55: mov     eax, [esi]
0x6CCC57: push    edi
0x6CCC58: mov     edi, ecx
0x6CCC5A: mov     ecx, [edi]
0x6CCC5C: test    ecx, ecx
0x6CCC5E: jz      short loc_6CCC6B
0x6CCC60: test    eax, eax
0x6CCC62: jnz     short loc_6CCC73
0x6CCC64: pop     edi
0x6CCC65: xor     al, al
0x6CCC67: pop     esi
0x6CCC68: retn    4
0x6CCC6B: test    eax, eax
0x6CCC6D: jnz     short loc_6CCC64
0x6CCC6F: test    ecx, ecx
0x6CCC71: jz      short loc_6CCC7F
0x6CCC73: mov     edx, [ecx]
0x6CCC75: push    eax
0x6CCC76: mov     eax, [edx+2Ch]
0x6CCC79: call    eax
0x6CCC7B: test    al, al
0x6CCC7D: jz      short loc_6CCC64
0x6CCC7F: fld     dword ptr [edi+4]
0x6CCC82: fld     dword ptr [esi+4]
0x6CCC85: fucompp
0x6CCC87: fnstsw  ax
0x6CCC89: test    ah, 44h
0x6CCC8C: jp      short loc_6CCC64
0x6CCC8E: fld     dword ptr [edi+8]
0x6CCC91: fld     dword ptr [esi+8]
0x6CCC94: fucompp
0x6CCC96: fnstsw  ax
0x6CCC98: test    ah, 44h
0x6CCC9B: jp      short loc_6CCC64
0x6CCC9D: mov     cl, [edi+0Ch]
0x6CCCA0: cmp     cl, [esi+0Ch]
0x6CCCA3: jnz     short loc_6CCC64
0x6CCCA5: fld     dword ptr [edi+10h]
0x6CCCA8: fld     dword ptr [esi+10h]
0x6CCCAB: fucompp
0x6CCCAD: fnstsw  ax
0x6CCCAF: test    ah, 44h
0x6CCCB2: jp      short loc_6CCC64
0x6CCCB4: pop     edi
0x6CCCB5: mov     al, 1
0x6CCCB7: pop     esi
0x6CCCB8: retn    4
