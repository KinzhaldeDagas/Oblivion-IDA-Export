0x88AB60: push    esi
0x88AB61: mov     esi, [esp+4+arg_0]
0x88AB65: test    esi, esi
0x88AB67: jz      short loc_88ABA9
0x88AB69: mov     eax, [esi]
0x88AB6B: mov     edx, [eax+4]
0x88AB6E: mov     ecx, esi
0x88AB70: call    edx
0x88AB72: test    eax, eax
0x88AB74: jz      short loc_88AB84
0x88AB76: cmp     eax, 0BA7A20h
0x88AB7B: jz      short loc_88ABA0
0x88AB7D: mov     eax, [eax+4]
0x88AB80: test    eax, eax
0x88AB82: jnz     short loc_88AB76
0x88AB84: xor     al, al
0x88AB86: neg     al
0x88AB88: sbb     eax, eax
0x88AB8A: and     eax, esi
0x88AB8C: mov     ecx, eax
0x88AB8E: jz      short loc_88ABA9
0x88AB90: mov     eax, [esp+4+arg_4]
0x88AB94: cmp     dword ptr [eax+0Ch], 0
0x88AB98: pop     esi
0x88AB99: jnz     short loc_88ABA4
0x88AB9B: jmp     loc_88F160
0x88ABA0: mov     al, 1
0x88ABA2: jmp     short loc_88AB86
0x88ABA4: jmp     loc_88F0E0
0x88ABA9: pop     esi
0x88ABAA: retn
0x88F0E0: push    esi
0x88F0E1: mov     esi, ecx
0x88F0E3: mov     eax, [esi+24h]
0x88F0E6: test    eax, eax
0x88F0E8: setz    cl
0x88F0EB: add     eax, 1
0x88F0EE: test    cl, cl
0x88F0F0: mov     [esi+24h], eax
0x88F0F3: jz      short loc_88F15C
0x88F0F5: mov     eax, ds:0BA7A8Ch
0x88F0FA: cmp     eax, 3
0x88F0FD: jz      short loc_88F12D
0x88F0FF: mov     cl, [esi+0Ch]
0x88F102: shr     cl, 6
0x88F105: test    cl, 1
0x88F108: jz      short loc_88F11E
0x88F10A: cmp     eax, 2
0x88F10D: jz      short loc_88F12D
0x88F10F: mov     ecx, esi
0x88F111: call    sub_89EAE0
0x88F116: and     word ptr [esi+0Ch], 0FFBFh
0x88F11C: jmp     short loc_88F12D
0x88F11E: test    byte ptr [esi+0Ch], 1
0x88F122: jz      short loc_88F12D
0x88F124: mov     edx, [esi]
0x88F126: mov     eax, [edx+64h]
0x88F129: mov     ecx, esi
0x88F12B: call    eax
0x88F12D: mov     ecx, [esi+10h]
0x88F130: test    ecx, ecx
0x88F132: jz      short loc_88F15C
0x88F134: mov     eax, [ecx+8]
0x88F137: test    eax, eax
0x88F139: jz      short loc_88F145
0x88F13B: add     eax, 14h
0x88F13E: jz      short loc_88F145
0x88F140: mov     eax, [eax+1Ch]
0x88F143: jmp     short loc_88F147
0x88F145: xor     eax, eax
0x88F147: and     al, 3Fh
0x88F149: cmp     al, 8
0x88F14B: jnz     short loc_88F15C
0x88F14D: mov     esi, [esi+20h]
0x88F150: test    esi, esi
0x88F152: jz      short loc_88F15C
0x88F154: mov     edx, [ecx]
0x88F156: mov     eax, [edx+5Ch]
0x88F159: push    esi
0x88F15A: call    eax
0x88F15C: pop     esi
0x88F15D: retn
0x88F160: mov     eax, ecx
0x88F162: add     dword ptr [eax+24h], 0FFFFFFFFh
0x88F166: mov     ecx, [eax+24h]
0x88F169: test    ecx, ecx
0x88F16B: jg      short locret_88F1A9
0x88F16D: mov     ecx, [eax+10h]
0x88F170: test    ecx, ecx
0x88F172: mov     dword ptr [eax+24h], 0
0x88F179: jz      short locret_88F1A9
0x88F17B: mov     edx, [ecx+8]
0x88F17E: test    edx, edx
0x88F180: push    esi
0x88F181: jz      short loc_88F18D
0x88F183: add     edx, 14h
0x88F186: jz      short loc_88F18D
0x88F188: mov     esi, [edx+1Ch]
0x88F18B: jmp     short loc_88F18F
0x88F18D: xor     esi, esi
0x88F18F: mov     edx, esi
0x88F191: and     dl, 3Fh
0x88F194: cmp     dl, 8
0x88F197: pop     esi
0x88F198: jnz     short locret_88F1A9
0x88F19A: mov     eax, [eax+20h]
0x88F19D: test    eax, eax
0x88F19F: jz      short locret_88F1A9
0x88F1A1: mov     edx, [ecx]
0x88F1A3: push    eax
0x88F1A4: mov     eax, [edx+5Ch]
0x88F1A7: call    eax
0x88F1A9: retn
