0x75EED0: push    esi
0x75EED1: mov     esi, [esp+4+a2]
0x75EED5: push    edi
0x75EED6: push    esi; a2
0x75EED7: mov     edi, ecx
0x75EED9: call    sub_700670
0x75EEDE: test    al, al
0x75EEE0: jz      loc_75EF8A
0x75EEE6: fld     dword ptr [edi+8]
0x75EEE9: fld     dword ptr [esi+8]
0x75EEEC: fucompp
0x75EEEE: fnstsw  ax
0x75EEF0: test    ah, 44h
0x75EEF3: jp      loc_75EF8A
0x75EEF9: mov     al, [edi+0Ch]
0x75EEFC: cmp     al, [esi+0Ch]
0x75EEFF: jnz     loc_75EF8A
0x75EF05: mov     cl, [edi+0Dh]
0x75EF08: cmp     cl, [esi+0Dh]
0x75EF0B: jnz     short loc_75EF8A
0x75EF0D: mov     eax, [edi+10h]
0x75EF10: test    eax, eax
0x75EF12: jz      short loc_75EF1E
0x75EF14: cmp     dword ptr [esi+10h], 0
0x75EF18: jz      short loc_75EF8A
0x75EF1A: test    eax, eax
0x75EF1C: jnz     short loc_75EF28
0x75EF1E: cmp     dword ptr [esi+10h], 0
0x75EF22: jnz     short loc_75EF8A
0x75EF24: test    eax, eax
0x75EF26: jz      short loc_75EF3E
0x75EF28: mov     eax, [esi+10h]
0x75EF2B: test    eax, eax
0x75EF2D: jz      short loc_75EF3E
0x75EF2F: mov     ecx, [edi+10h]
0x75EF32: mov     edx, [ecx]
0x75EF34: push    eax
0x75EF35: mov     eax, [edx+2Ch]
0x75EF38: call    eax
0x75EF3A: test    al, al
0x75EF3C: jz      short loc_75EF8A
0x75EF3E: mov     eax, [edi+24h]
0x75EF41: test    eax, eax
0x75EF43: jz      short loc_75EF4F
0x75EF45: cmp     dword ptr [esi+24h], 0
0x75EF49: jz      short loc_75EF8A
0x75EF4B: test    eax, eax
0x75EF4D: jnz     short loc_75EF55
0x75EF4F: cmp     dword ptr [esi+24h], 0
0x75EF53: jnz     short loc_75EF8A
0x75EF55: mov     ecx, [edi+28h]
0x75EF58: test    ecx, ecx
0x75EF5A: jz      short loc_75EF66
0x75EF5C: cmp     dword ptr [esi+28h], 0
0x75EF60: jz      short loc_75EF8A
0x75EF62: test    ecx, ecx
0x75EF64: jnz     short loc_75EF70
0x75EF66: cmp     dword ptr [esi+28h], 0
0x75EF6A: jnz     short loc_75EF8A
0x75EF6C: test    ecx, ecx
0x75EF6E: jz      short loc_75EF83
0x75EF70: mov     esi, [esi+28h]
0x75EF73: test    esi, esi
0x75EF75: jz      short loc_75EF83
0x75EF77: mov     edx, [ecx]
0x75EF79: mov     eax, [edx+2Ch]
0x75EF7C: push    esi
0x75EF7D: call    eax
0x75EF7F: test    al, al
0x75EF81: jz      short loc_75EF8A
0x75EF83: pop     edi
0x75EF84: mov     al, 1
0x75EF86: pop     esi
0x75EF87: retn    4
0x75EF8A: pop     edi
0x75EF8B: xor     al, al
0x75EF8D: pop     esi
0x75EF8E: retn    4
