0x99E24F: push    ebp
0x99E250: mov     ebp, esp
0x99E252: mov     eax, [ebp+Mask]
0x99E255: mov     ecx, [ebp+NewValue]
0x99E258: and     eax, 0FFF7FFFFh
0x99E25D: and     ecx, eax
0x99E25F: test    ecx, 0FCF0FCE0h
0x99E265: push    esi
0x99E266: jz      short loc_99E299
0x99E268: push    edi
0x99E269: mov     edi, [ebp+CurrentState]
0x99E26C: xor     esi, esi
0x99E26E: cmp     edi, esi
0x99E270: jz      short loc_99E27D
0x99E272: push    esi; Mask
0x99E273: push    esi; NewValue
0x99E274: call    __control87
0x99E279: pop     ecx
0x99E27A: pop     ecx
0x99E27B: mov     [edi], eax
0x99E27D: call    __errno
0x99E282: push    16h
0x99E284: pop     edi
0x99E285: push    esi
0x99E286: push    esi
0x99E287: push    esi
0x99E288: push    esi
0x99E289: push    esi
0x99E28A: mov     [eax], edi
0x99E28C: call    __invalid_parameter
0x99E291: add     esp, 14h
0x99E294: mov     eax, edi
0x99E296: pop     edi
0x99E297: jmp     short loc_99E2B6
0x99E299: mov     esi, [ebp+CurrentState]
0x99E29C: test    esi, esi
0x99E29E: push    eax; Mask
0x99E29F: push    [ebp+NewValue]; NewValue
0x99E2A2: jz      short loc_99E2AD
0x99E2A4: call    __control87
0x99E2A9: mov     [esi], eax
0x99E2AB: jmp     short loc_99E2B2
0x99E2AD: call    __control87
0x99E2B2: pop     ecx
0x99E2B3: pop     ecx
0x99E2B4: xor     eax, eax
0x99E2B6: pop     esi
0x99E2B7: pop     ebp
0x99E2B8: retn
