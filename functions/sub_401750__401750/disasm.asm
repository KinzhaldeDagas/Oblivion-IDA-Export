0x401750: push    ebx
0x401751: push    esi
0x401752: mov     esi, ecx
0x401754: xor     ebx, ebx
0x401756: cmp     [esi+16Ch], bl
0x40175C: push    edi
0x40175D: mov     byte ptr [esi+16Dh], 1
0x401764: jnz     short loc_40176B
0x401766: call    sub_4027A0
0x40176B: mov     edi, [esi+5Ch]
0x40176E: cmp     edi, ebx
0x401770: jz      short loc_401788
0x401772: mov     edx, [esi]
0x401774: mov     eax, edi
0x401776: mov     edi, [edi+140h]
0x40177C: push    eax
0x40177D: mov     eax, [edx+18h]
0x401780: mov     ecx, esi
0x401782: call    eax
0x401784: cmp     edi, ebx
0x401786: jnz     short loc_401772
0x401788: mov     edi, [esi+60h]
0x40178B: cmp     edi, ebx
0x40178D: mov     [esi+5Ch], ebx
0x401790: jz      short loc_4017A8
0x401792: mov     edx, [esi]
0x401794: mov     eax, edi
0x401796: mov     edi, [edi+208h]
0x40179C: push    eax
0x40179D: mov     eax, [edx+18h]
0x4017A0: mov     ecx, esi
0x4017A2: call    eax
0x4017A4: cmp     edi, ebx
0x4017A6: jnz     short loc_401792
0x4017A8: push    ebp
0x4017A9: xor     ebp, ebp
0x4017AB: cmp     [esi+30h], ebx
0x4017AE: mov     [esi+60h], ebx
0x4017B1: jle     short loc_4017D9
0x4017B3: mov     ecx, [esi+34h]
0x4017B6: mov     eax, [ecx+ebp*8+4]
0x4017BA: cmp     eax, ebx
0x4017BC: lea     edi, [ecx+ebp*8]
0x4017BF: jz      short loc_4017D1
0x4017C1: push    eax
0x4017C2: push    edi
0x4017C3: mov     ecx, esi
0x4017C5: call    sub_401690
0x4017CA: mov     eax, [edi+4]
0x4017CD: cmp     eax, ebx
0x4017CF: jnz     short loc_4017C1
0x4017D1: add     ebp, 1
0x4017D4: cmp     ebp, [esi+30h]
0x4017D7: jl      short loc_4017B3
0x4017D9: cmp     [esi+40h], ebx
0x4017DC: mov     [esi+30h], ebx
0x4017DF: pop     ebp
0x4017E0: jz      short loc_4017F6
0x4017E2: lea     edi, [esi+3Ch]
0x4017E5: mov     edx, [esi+40h]
0x4017E8: push    edx
0x4017E9: push    edi
0x4017EA: mov     ecx, esi
0x4017EC: call    sub_401690
0x4017F1: cmp     [esi+40h], ebx
0x4017F4: jnz     short loc_4017E5
0x4017F6: mov     ecx, [esi+34h]
0x4017F9: mov     eax, [esi]
0x4017FB: mov     edx, [eax+18h]
0x4017FE: push    ecx
0x4017FF: mov     ecx, esi
0x401801: call    edx
0x401803: mov     ecx, [esi+44h]
0x401806: mov     eax, [esi]
0x401808: mov     edx, [eax+18h]
0x40180B: push    ecx
0x40180C: mov     ecx, esi
0x40180E: mov     [esi+34h], ebx
0x401811: call    edx
0x401813: mov     ecx, [esi+18h]
0x401816: mov     eax, [esi]
0x401818: mov     edx, [eax+10h]
0x40181B: push    ecx
0x40181C: mov     ecx, esi
0x40181E: mov     [esi+44h], ebx
0x401821: call    edx
0x401823: pop     edi
0x401824: mov     [esi+18h], ebx
0x401827: mov     [esi+0Ch], ebx
0x40182A: pop     esi
0x40182B: pop     ebx
0x40182C: retn
