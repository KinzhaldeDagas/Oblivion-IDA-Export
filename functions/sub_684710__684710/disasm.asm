0x684710: push    esi
0x684711: mov     eax, ds:0B3C094h
0x684716: mov     ecx, ds:0B3C098h
0x68471C: lea     esp, [esp+0]
0x684720: test    ecx, ecx
0x684722: jnz     short loc_684728
0x684724: test    eax, eax
0x684726: jz      short loc_684770
0x684728: test    eax, eax
0x68472A: mov     esi, eax
0x68472C: jz      short loc_684745
0x68472E: lea     ecx, [eax+4]; void *
0x684731: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x684736: push    esi
0x684737: call    FormHeapFree
0x68473C: mov     ecx, ds:0B3C098h
0x684742: add     esp, 4
0x684745: test    ecx, ecx
0x684747: jz      short loc_684767
0x684749: mov     eax, ecx
0x68474B: mov     ecx, [eax+4]
0x68474E: mov     ds:0B3C098h, ecx
0x684754: mov     edx, [eax]
0x684756: push    eax
0x684757: mov     ds:0B3C094h, edx
0x68475D: call    FormHeapFree
0x684762: add     esp, 4
0x684765: jmp     short loc_684711
0x684767: xor     eax, eax
0x684769: mov     ds:0B3C094h, eax
0x68476E: jmp     short loc_684720
0x684770: pop     esi
0x684771: retn
