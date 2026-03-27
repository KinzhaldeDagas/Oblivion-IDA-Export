0x8D9F00: push    ebx
0x8D9F01: push    esi
0x8D9F02: mov     esi, ecx
0x8D9F04: mov     ebx, [esi+0Ch]
0x8D9F07: push    edi
0x8D9F08: xor     edi, edi
0x8D9F0A: test    ebx, ebx
0x8D9F0C: mov     dword ptr [esi], offset off_A9A2A0
0x8D9F12: jle     short loc_8D9F24
0x8D9F14: mov     eax, [esi+8]
0x8D9F17: mov     ecx, [eax+edi*4]
0x8D9F1A: call    sub_8BC730
0x8D9F1F: inc     edi
0x8D9F20: cmp     edi, ebx
0x8D9F22: jl      short loc_8D9F14
0x8D9F24: mov     ebx, [esi+30h]
0x8D9F27: xor     edi, edi
0x8D9F29: test    ebx, ebx
0x8D9F2B: jle     short loc_8D9F40
0x8D9F2D: lea     ecx, [ecx+0]
0x8D9F30: mov     ecx, [esi+2Ch]
0x8D9F33: mov     ecx, [ecx+edi*4]
0x8D9F36: call    sub_8BC730
0x8D9F3B: inc     edi
0x8D9F3C: cmp     edi, ebx
0x8D9F3E: jl      short loc_8D9F30
0x8D9F40: mov     ebx, [esi+18h]
0x8D9F43: xor     edi, edi
0x8D9F45: test    ebx, ebx
0x8D9F47: jle     short loc_8D9F73
0x8D9F49: lea     esp, [esp+0]
0x8D9F50: mov     edx, [esi+14h]
0x8D9F53: mov     ecx, [edx+edi*4]
0x8D9F56: cmp     word ptr [ecx+4], 0
0x8D9F5B: jz      short loc_8D9F6E
0x8D9F5D: dec     word ptr [ecx+6]
0x8D9F61: cmp     word ptr [ecx+6], 0
0x8D9F66: jnz     short loc_8D9F6E
0x8D9F68: mov     eax, [ecx]
0x8D9F6A: push    1
0x8D9F6C: call    dword ptr [eax]
0x8D9F6E: inc     edi
0x8D9F6F: cmp     edi, ebx
0x8D9F71: jl      short loc_8D9F50
0x8D9F73: mov     ebx, [esi+24h]
0x8D9F76: xor     edi, edi
0x8D9F78: test    ebx, ebx
0x8D9F7A: jle     short loc_8D9FA7
0x8D9F7C: lea     esp, [esp+0]
0x8D9F80: mov     ecx, [esi+20h]
0x8D9F83: mov     ecx, [ecx+edi*4]
0x8D9F86: test    ecx, ecx
0x8D9F88: jz      short loc_8D9FA2
0x8D9F8A: cmp     word ptr [ecx+4], 0
0x8D9F8F: jz      short loc_8D9FA2
0x8D9F91: dec     word ptr [ecx+6]
0x8D9F95: cmp     word ptr [ecx+6], 0
0x8D9F9A: jnz     short loc_8D9FA2
0x8D9F9C: mov     edx, [ecx]
0x8D9F9E: push    1
0x8D9FA0: call    dword ptr [edx]
0x8D9FA2: inc     edi
0x8D9FA3: cmp     edi, ebx
0x8D9FA5: jl      short loc_8D9F80
0x8D9FA7: mov     eax, [esi+34h]
0x8D9FAA: test    eax, eax
0x8D9FAC: mov     edi, ds:0BA9DE4h
0x8D9FB2: mov     ebx, large fs:2Ch
0x8D9FB9: js      short loc_8D9FE2
0x8D9FBB: mov     ecx, [ebx+edi*4]
0x8D9FBE: mov     ecx, [ecx+19Ch]
0x8D9FC4: test    ecx, ecx
0x8D9FC6: jnz     short loc_8D9FCE
0x8D9FC8: mov     ecx, ds:0BA7D9Ch
0x8D9FCE: mov     edx, [esi+2Ch]
0x8D9FD1: and     eax, 3FFFFFFFh
0x8D9FD6: push    14h
0x8D9FD8: shl     eax, 2
0x8D9FDB: push    eax
0x8D9FDC: push    edx
0x8D9FDD: call    sub_8A75D0
0x8D9FE2: mov     eax, [esi+28h]
0x8D9FE5: test    eax, eax
0x8D9FE7: js      short loc_8DA010
0x8D9FE9: mov     ecx, [ebx+edi*4]
0x8D9FEC: mov     ecx, [ecx+19Ch]
0x8D9FF2: test    ecx, ecx
0x8D9FF4: jnz     short loc_8D9FFC
0x8D9FF6: mov     ecx, ds:0BA7D9Ch
0x8D9FFC: mov     edx, [esi+20h]
0x8D9FFF: and     eax, 3FFFFFFFh
0x8DA004: push    14h
0x8DA006: shl     eax, 2
0x8DA009: push    eax
0x8DA00A: push    edx
0x8DA00B: call    sub_8A75D0
0x8DA010: mov     eax, [esi+1Ch]
0x8DA013: test    eax, eax
0x8DA015: js      short loc_8DA03E
0x8DA017: mov     ecx, [ebx+edi*4]
0x8DA01A: mov     ecx, [ecx+19Ch]
0x8DA020: test    ecx, ecx
0x8DA022: jnz     short loc_8DA02A
0x8DA024: mov     ecx, ds:0BA7D9Ch
0x8DA02A: mov     edx, [esi+14h]
0x8DA02D: and     eax, 3FFFFFFFh
0x8DA032: push    14h
0x8DA034: shl     eax, 2
0x8DA037: push    eax
0x8DA038: push    edx
0x8DA039: call    sub_8A75D0
0x8DA03E: mov     eax, [esi+10h]
0x8DA041: test    eax, eax
0x8DA043: js      short loc_8DA06C
0x8DA045: mov     ecx, [ebx+edi*4]
0x8DA048: mov     ecx, [ecx+19Ch]
0x8DA04E: test    ecx, ecx
0x8DA050: jnz     short loc_8DA058
0x8DA052: mov     ecx, ds:0BA7D9Ch
0x8DA058: mov     edx, [esi+8]
0x8DA05B: and     eax, 3FFFFFFFh
0x8DA060: push    14h
0x8DA062: shl     eax, 2
0x8DA065: push    eax
0x8DA066: push    edx
0x8DA067: call    sub_8A75D0
0x8DA06C: pop     edi
0x8DA06D: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8DA073: pop     esi
0x8DA074: pop     ebx
0x8DA075: retn
