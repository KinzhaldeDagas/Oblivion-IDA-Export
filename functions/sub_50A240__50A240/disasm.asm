0x50A240: push    edi
0x50A241: mov     edi, [esp+4+arg_8]
0x50A245: test    edi, edi
0x50A247: jz      loc_50A326
0x50A24D: mov     eax, [edi+8]
0x50A250: mov     ecx, eax
0x50A252: shr     ecx, 0Bh
0x50A255: test    cl, 1
0x50A258: jnz     loc_50A326
0x50A25E: shr     eax, 0Eh
0x50A261: test    al, 1
0x50A263: jnz     loc_50A326
0x50A269: mov     ecx, edi
0x50A26B: call    sub_4D7990
0x50A270: test    eax, eax
0x50A272: jz      loc_50A31D
0x50A278: push    ebx
0x50A279: push    ebp
0x50A27A: push    esi
0x50A27B: mov     esi, [esp+10h+arg_10]
0x50A27F: test    esi, esi
0x50A281: jz      short loc_50A2D3
0x50A283: cmp     dword ptr [esi+0Ch], 0
0x50A287: jz      short loc_50A2D3
0x50A289: mov     ecx, edi
0x50A28B: call    TESForm__GetEditorNameLen
0x50A290: test    eax, eax
0x50A292: mov     ecx, edi; this
0x50A294: jz      short loc_50A2A2
0x50A296: mov     edx, [edi]
0x50A298: mov     eax, [edx+0D4h]
0x50A29E: call    eax
0x50A2A0: jmp     short loc_50A2A7
0x50A2A2: call    TESObjectREFR_GetName
0x50A2A7: mov     edx, [esi]
0x50A2A9: mov     ebx, [esi+0Ch]
0x50A2AC: mov     edi, [edi+0Ch]
0x50A2AF: mov     ebp, eax
0x50A2B1: mov     eax, [edx+0D4h]
0x50A2B7: mov     ecx, esi
0x50A2B9: call    eax
0x50A2BB: push    eax
0x50A2BC: push    ebx
0x50A2BD: push    ebp
0x50A2BE: push    edi; ArgList
0x50A2BF: push    offset aDisableIsBeing; "Disable is being called on reference %0"...
0x50A2C4: call    PrintError
0x50A2C9: add     esp, 14h
0x50A2CC: pop     esi
0x50A2CD: pop     ebp
0x50A2CE: pop     ebx
0x50A2CF: mov     al, 1
0x50A2D1: pop     edi
0x50A2D2: retn
0x50A2D3: mov     ecx, edi
0x50A2D5: call    TESForm__GetEditorNameLen
0x50A2DA: test    eax, eax
0x50A2DC: mov     ecx, edi; this
0x50A2DE: jz      short loc_50A2EC
0x50A2E0: mov     edx, [edi]
0x50A2E2: mov     eax, [edx+0D4h]
0x50A2E8: call    eax
0x50A2EA: jmp     short loc_50A2F1
0x50A2EC: call    TESObjectREFR_GetName
0x50A2F1: mov     edx, [esi]
0x50A2F3: mov     ebx, [esi+0Ch]
0x50A2F6: mov     edi, [edi+0Ch]
0x50A2F9: mov     ebp, eax
0x50A2FB: mov     eax, [edx+0D4h]
0x50A301: mov     ecx, esi
0x50A303: call    eax
0x50A305: push    eax
0x50A306: push    ebx
0x50A307: push    ebp
0x50A308: push    edi; ArgList
0x50A309: push    offset aDisableIsBei_0; "Disable is being called on reference %0"...
0x50A30E: call    PrintError
0x50A313: add     esp, 14h
0x50A316: pop     esi
0x50A317: pop     ebp
0x50A318: pop     ebx
0x50A319: mov     al, 1
0x50A31B: pop     edi
0x50A31C: retn
0x50A31D: push    edi
0x50A31E: call    TesObjectREFR_Disable
0x50A323: add     esp, 4
0x50A326: mov     eax, [esp+4+arg_14]
0x50A32A: or      byte ptr [eax+4], 1
0x50A32E: mov     al, 1
0x50A330: pop     edi
0x50A331: retn
