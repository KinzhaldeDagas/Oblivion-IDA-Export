0x451160: push    esi
0x451161: mov     esi, ecx
0x451163: mov     eax, [esi+25Ch]
0x451169: mov     ecx, [esi+23Ch]
0x45116F: push    edi
0x451170: xor     edi, edi
0x451172: mov     [esi+260h], edi
0x451178: mov     [esi+264h], edi
0x45117E: add     eax, 14h
0x451181: cmp     ecx, ds:0B05E20h
0x451187: jz      short loc_451195
0x451189: test    dword ptr [esi+244h], 40000h
0x451193: jnz     short loc_4511A9
0x451195: mov     ecx, [esi+10h]
0x451198: mov     edx, [ecx]
0x45119A: push    ebx
0x45119B: mov     ebx, ds:0A853D0h
0x4511A1: push    ebx
0x4511A2: push    eax
0x4511A3: mov     eax, [edx+0Ch]
0x4511A6: call    eax
0x4511A8: pop     ebx
0x4511A9: mov     [esi+250h], edi
0x4511AF: mov     [esi+254h], edi
0x4511B5: pop     edi
0x4511B6: mov     ecx, esi; this
0x4511B8: pop     esi
0x4511B9: jmp     TESFile_LoadChunkHeader
