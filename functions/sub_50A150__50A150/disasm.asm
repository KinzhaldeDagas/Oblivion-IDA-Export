0x50A150: push    esi
0x50A151: mov     esi, [esp+4+a1]
0x50A155: test    esi, esi
0x50A157: jz      loc_50A22B
0x50A15D: mov     ecx, esi
0x50A15F: call    sub_4D7990
0x50A164: test    eax, eax
0x50A166: jz      loc_50A211
0x50A16C: push    ebx
0x50A16D: push    ebp
0x50A16E: push    edi
0x50A16F: mov     edi, [esp+10h+arg_10]
0x50A173: test    edi, edi
0x50A175: jz      short loc_50A1C7
0x50A177: cmp     dword ptr [edi+0Ch], 0
0x50A17B: jz      short loc_50A1C7
0x50A17D: mov     ecx, esi
0x50A17F: call    TESForm__GetEditorNameLen
0x50A184: test    eax, eax
0x50A186: mov     ecx, esi; this
0x50A188: jz      short loc_50A196
0x50A18A: mov     eax, [esi]
0x50A18C: mov     edx, [eax+0D4h]
0x50A192: call    edx
0x50A194: jmp     short loc_50A19B
0x50A196: call    TESObjectREFR_GetName
0x50A19B: mov     ebx, [edi+0Ch]
0x50A19E: mov     esi, [esi+0Ch]
0x50A1A1: mov     ebp, eax
0x50A1A3: mov     eax, [edi]
0x50A1A5: mov     edx, [eax+0D4h]
0x50A1AB: mov     ecx, edi
0x50A1AD: call    edx
0x50A1AF: push    eax
0x50A1B0: push    ebx
0x50A1B1: push    ebp
0x50A1B2: push    esi; ArgList
0x50A1B3: push    offset aEnableIsBeingC; "Enable is being called on reference %08"...
0x50A1B8: call    PrintError
0x50A1BD: add     esp, 14h
0x50A1C0: pop     edi
0x50A1C1: pop     ebp
0x50A1C2: pop     ebx
0x50A1C3: mov     al, 1
0x50A1C5: pop     esi
0x50A1C6: retn
0x50A1C7: mov     ecx, esi
0x50A1C9: call    TESForm__GetEditorNameLen
0x50A1CE: test    eax, eax
0x50A1D0: mov     ecx, esi; this
0x50A1D2: jz      short loc_50A1E0
0x50A1D4: mov     eax, [esi]
0x50A1D6: mov     edx, [eax+0D4h]
0x50A1DC: call    edx
0x50A1DE: jmp     short loc_50A1E5
0x50A1E0: call    TESObjectREFR_GetName
0x50A1E5: mov     ebx, [edi+0Ch]
0x50A1E8: mov     esi, [esi+0Ch]
0x50A1EB: mov     ebp, eax
0x50A1ED: mov     eax, [edi]
0x50A1EF: mov     edx, [eax+0D4h]
0x50A1F5: mov     ecx, edi
0x50A1F7: call    edx
0x50A1F9: push    eax
0x50A1FA: push    ebx
0x50A1FB: push    ebp
0x50A1FC: push    esi; ArgList
0x50A1FD: push    offset aEnableIsBein_0; "Enable is being called on reference %08"...
0x50A202: call    PrintError
0x50A207: add     esp, 14h
0x50A20A: pop     edi
0x50A20B: pop     ebp
0x50A20C: pop     ebx
0x50A20D: mov     al, 1
0x50A20F: pop     esi
0x50A210: retn
0x50A211: push    esi; a1
0x50A212: call    TESObjectREFR_EnableREF
0x50A217: mov     eax, [esi+8]
0x50A21A: shr     eax, 0Bh
0x50A21D: add     esp, 4
0x50A220: test    al, 1
0x50A222: jz      short loc_50A22B
0x50A224: mov     ecx, esi
0x50A226: call    sub_4DD850
0x50A22B: mov     eax, [esp+4+arg_14]
0x50A22F: and     byte ptr [eax+4], 0FEh
0x50A233: mov     al, 1
0x50A235: pop     esi
0x50A236: retn
