0x7DE0B0: push    ebx
0x7DE0B1: push    esi
0x7DE0B2: mov     esi, ecx
0x7DE0B4: mov     eax, [esi+10Ch]
0x7DE0BA: xor     ebx, ebx
0x7DE0BC: cmp     eax, ebx
0x7DE0BE: jz      short loc_7DE0CC
0x7DE0C0: mov     ecx, ds:0B42F50h; this
0x7DE0C6: push    eax; a2
0x7DE0C7: call    sub_7C1EE0
0x7DE0CC: mov     eax, [esi+100h]
0x7DE0D2: cmp     eax, ebx
0x7DE0D4: jz      short loc_7DE0E2
0x7DE0D6: mov     ecx, ds:0B42F50h; this
0x7DE0DC: push    eax; a2
0x7DE0DD: call    sub_7C1EE0
0x7DE0E2: mov     eax, [esi+104h]
0x7DE0E8: cmp     eax, ebx
0x7DE0EA: jz      short loc_7DE0F8
0x7DE0EC: mov     ecx, ds:0B42F50h; this
0x7DE0F2: push    eax; a2
0x7DE0F3: call    sub_7C1EE0
0x7DE0F8: push    ebp
0x7DE0F9: mov     ebp, ds:0A2807Ch
0x7DE0FF: push    edi
0x7DE100: mov     edi, [esi+10Ch]
0x7DE106: cmp     edi, ebx
0x7DE108: jz      short loc_7DE128
0x7DE10A: lea     eax, [edi+4]
0x7DE10D: push    eax; lpAddend
0x7DE10E: call    ebp ; InterlockedDecrement
0x7DE110: test    eax, eax
0x7DE112: jnz     short loc_7DE122
0x7DE114: cmp     edi, ebx
0x7DE116: jz      short loc_7DE122
0x7DE118: mov     edx, [edi]
0x7DE11A: mov     eax, [edx]
0x7DE11C: push    1
0x7DE11E: mov     ecx, edi
0x7DE120: call    eax
0x7DE122: mov     [esi+10Ch], ebx
0x7DE128: mov     edi, [esi+100h]
0x7DE12E: cmp     edi, ebx
0x7DE130: jz      short loc_7DE150
0x7DE132: lea     ecx, [edi+4]
0x7DE135: push    ecx; lpAddend
0x7DE136: call    ebp ; InterlockedDecrement
0x7DE138: test    eax, eax
0x7DE13A: jnz     short loc_7DE14A
0x7DE13C: cmp     edi, ebx
0x7DE13E: jz      short loc_7DE14A
0x7DE140: mov     edx, [edi]
0x7DE142: mov     eax, [edx]
0x7DE144: push    1
0x7DE146: mov     ecx, edi
0x7DE148: call    eax
0x7DE14A: mov     [esi+100h], ebx
0x7DE150: mov     edi, [esi+104h]
0x7DE156: cmp     edi, ebx
0x7DE158: jz      short loc_7DE178
0x7DE15A: lea     ecx, [edi+4]
0x7DE15D: push    ecx; lpAddend
0x7DE15E: call    ebp ; InterlockedDecrement
0x7DE160: test    eax, eax
0x7DE162: jnz     short loc_7DE172
0x7DE164: cmp     edi, ebx
0x7DE166: jz      short loc_7DE172
0x7DE168: mov     edx, [edi]
0x7DE16A: mov     eax, [edx]
0x7DE16C: push    1
0x7DE16E: mov     ecx, edi
0x7DE170: call    eax
0x7DE172: mov     [esi+104h], ebx
0x7DE178: mov     edi, [esi+0FCh]
0x7DE17E: cmp     edi, ebx
0x7DE180: jz      short loc_7DE1A0
0x7DE182: lea     ecx, [edi+4]
0x7DE185: push    ecx; lpAddend
0x7DE186: call    ebp ; InterlockedDecrement
0x7DE188: test    eax, eax
0x7DE18A: jnz     short loc_7DE19A
0x7DE18C: cmp     edi, ebx
0x7DE18E: jz      short loc_7DE19A
0x7DE190: mov     edx, [edi]
0x7DE192: mov     eax, [edx]
0x7DE194: push    1
0x7DE196: mov     ecx, edi
0x7DE198: call    eax
0x7DE19A: mov     [esi+0FCh], ebx
0x7DE1A0: mov     edi, [esi+108h]
0x7DE1A6: cmp     edi, ebx
0x7DE1A8: jz      short loc_7DE1C8
0x7DE1AA: lea     ecx, [edi+4]
0x7DE1AD: push    ecx; lpAddend
0x7DE1AE: call    ebp ; InterlockedDecrement
0x7DE1B0: test    eax, eax
0x7DE1B2: jnz     short loc_7DE1C2
0x7DE1B4: cmp     edi, ebx
0x7DE1B6: jz      short loc_7DE1C2
0x7DE1B8: mov     edx, [edi]
0x7DE1BA: mov     eax, [edx]
0x7DE1BC: push    1
0x7DE1BE: mov     ecx, edi
0x7DE1C0: call    eax
0x7DE1C2: mov     [esi+108h], ebx
0x7DE1C8: mov     edi, ds:0B45FA8h
0x7DE1CE: cmp     edi, ebx
0x7DE1D0: jz      short loc_7DE1F0
0x7DE1D2: lea     ecx, [edi+4]
0x7DE1D5: push    ecx; lpAddend
0x7DE1D6: call    ebp ; InterlockedDecrement
0x7DE1D8: test    eax, eax
0x7DE1DA: jnz     short loc_7DE1EA
0x7DE1DC: cmp     edi, ebx
0x7DE1DE: jz      short loc_7DE1EA
0x7DE1E0: mov     edx, [edi]
0x7DE1E2: mov     eax, [edx]
0x7DE1E4: push    1
0x7DE1E6: mov     ecx, edi
0x7DE1E8: call    eax
0x7DE1EA: mov     ds:0B45FA8h, ebx
0x7DE1F0: mov     edi, ds:0B45FB4h
0x7DE1F6: cmp     edi, ebx
0x7DE1F8: jz      short loc_7DE218
0x7DE1FA: lea     ecx, [edi+4]
0x7DE1FD: push    ecx; lpAddend
0x7DE1FE: call    ebp ; InterlockedDecrement
0x7DE200: test    eax, eax
0x7DE202: jnz     short loc_7DE212
0x7DE204: cmp     edi, ebx
0x7DE206: jz      short loc_7DE212
0x7DE208: mov     edx, [edi]
0x7DE20A: mov     eax, [edx]
0x7DE20C: push    1
0x7DE20E: mov     ecx, edi
0x7DE210: call    eax
0x7DE212: mov     ds:0B45FB4h, ebx
0x7DE218: mov     ecx, [esi+90h]
0x7DE21E: cmp     ecx, ebx
0x7DE220: pop     edi
0x7DE221: pop     ebp
0x7DE222: jz      short loc_7DE22C
0x7DE224: mov     edx, [ecx]
0x7DE226: mov     eax, [edx]
0x7DE228: push    1
0x7DE22A: call    eax
0x7DE22C: mov     [esi+90h], ebx
0x7DE232: pop     esi
0x7DE233: pop     ebx
0x7DE234: retn
