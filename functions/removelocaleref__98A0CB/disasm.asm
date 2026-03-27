0x98A0CB: push    esi
0x98A0CC: mov     esi, [esp+4+lpAddend]
0x98A0D0: test    esi, esi
0x98A0D2: jz      short loc_98A153
0x98A0D4: push    ebx
0x98A0D5: push    ebp
0x98A0D6: push    edi
0x98A0D7: mov     edi, ds:InterlockedDecrement
0x98A0DD: push    esi; lpAddend
0x98A0DE: call    edi ; InterlockedDecrement
0x98A0E0: mov     eax, [esi+0B0h]
0x98A0E6: test    eax, eax
0x98A0E8: jz      short loc_98A0ED
0x98A0EA: push    eax; lpAddend
0x98A0EB: call    edi ; InterlockedDecrement
0x98A0ED: mov     eax, [esi+0B8h]
0x98A0F3: test    eax, eax
0x98A0F5: jz      short loc_98A0FA
0x98A0F7: push    eax; lpAddend
0x98A0F8: call    edi ; InterlockedDecrement
0x98A0FA: mov     eax, [esi+0B4h]
0x98A100: test    eax, eax
0x98A102: jz      short loc_98A107
0x98A104: push    eax; lpAddend
0x98A105: call    edi ; InterlockedDecrement
0x98A107: mov     eax, [esi+0C0h]
0x98A10D: test    eax, eax
0x98A10F: jz      short loc_98A114
0x98A111: push    eax; lpAddend
0x98A112: call    edi ; InterlockedDecrement
0x98A114: push    6
0x98A116: lea     ebx, [esi+50h]
0x98A119: pop     ebp
0x98A11A: cmp     dword ptr [ebx-8], offset aC_1
0x98A121: jz      short loc_98A12C
0x98A123: mov     eax, [ebx]
0x98A125: test    eax, eax
0x98A127: jz      short loc_98A12C
0x98A129: push    eax; lpAddend
0x98A12A: call    edi ; InterlockedDecrement
0x98A12C: cmp     dword ptr [ebx-4], 0
0x98A130: jz      short loc_98A13C
0x98A132: mov     eax, [ebx+4]
0x98A135: test    eax, eax
0x98A137: jz      short loc_98A13C
0x98A139: push    eax; lpAddend
0x98A13A: call    edi ; InterlockedDecrement
0x98A13C: add     ebx, 10h
0x98A13F: dec     ebp
0x98A140: jnz     short loc_98A11A
0x98A142: mov     eax, [esi+0D4h]
0x98A148: add     eax, 0B4h ; '´'
0x98A14D: push    eax; lpAddend
0x98A14E: call    edi ; InterlockedDecrement
0x98A150: pop     edi
0x98A151: pop     ebp
0x98A152: pop     ebx
0x98A153: mov     eax, esi
0x98A155: pop     esi
0x98A156: retn
