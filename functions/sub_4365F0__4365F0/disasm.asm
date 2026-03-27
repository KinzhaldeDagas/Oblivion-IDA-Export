0x4365F0: push    ebx
0x4365F1: push    ebp
0x4365F2: push    esi
0x4365F3: push    edi
0x4365F4: mov     edi, ds:InterlockedIncrement
0x4365FA: push    offset dword_B33A14; lpAddend
0x4365FF: mov     esi, ecx
0x436601: call    edi ; InterlockedIncrement
0x436603: mov     edx, [esi+14h]
0x436606: movzx   ebp, ax
0x436609: mov     eax, [esi+10h]
0x43660C: mov     cl, 10h
0x43660E: call    __allshr
0x436613: push    offset dword_B33A18; lpAddend
0x436618: mov     bl, al
0x43661A: call    edi ; InterlockedIncrement
0x43661C: xor     ecx, ecx
0x43661E: push    0
0x436620: add     eax, ecx
0x436622: push    100h
0x436627: adc     ecx, 2
0x43662A: push    ecx
0x43662B: push    eax
0x43662C: call    __allmul
0x436631: mov     ecx, eax
0x436633: movzx   eax, bl
0x436636: mov     edi, edx
0x436638: cdq
0x436639: push    0
0x43663B: add     ecx, eax
0x43663D: push    10000h
0x436642: adc     edi, edx
0x436644: push    edi
0x436645: push    ecx
0x436646: call    __allmul
0x43664B: mov     ecx, eax
0x43664D: movzx   eax, bp
0x436650: mov     edi, edx
0x436652: cdq
0x436653: add     ecx, eax
0x436655: adc     edi, edx
0x436657: mov     [esi+14h], edi
0x43665A: pop     edi
0x43665B: mov     [esi+10h], ecx
0x43665E: pop     esi
0x43665F: pop     ebp
0x436660: pop     ebx
0x436661: retn
