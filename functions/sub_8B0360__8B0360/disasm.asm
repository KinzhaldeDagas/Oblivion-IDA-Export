0x8B0360: push    esi
0x8B0361: mov     esi, ecx
0x8B0363: test    esi, esi
0x8B0365: push    edi
0x8B0366: jz      short loc_8B0374
0x8B0368: mov     eax, [esi+8]
0x8B036B: test    eax, eax
0x8B036D: jz      short loc_8B0374
0x8B036F: mov     eax, [eax+0Ch]
0x8B0372: jmp     short loc_8B0376
0x8B0374: xor     eax, eax
0x8B0376: test    eax, eax
0x8B0378: mov     edi, [esp+8+arg_0]
0x8B037C: jz      short loc_8B038D
0x8B037E: mov     ecx, [eax+8]
0x8B0381: test    ecx, ecx
0x8B0383: jz      short loc_8B038D
0x8B0385: mov     eax, [ecx]
0x8B0387: mov     edx, [eax+24h]
0x8B038A: push    edi
0x8B038B: call    edx
0x8B038D: push    edi
0x8B038E: mov     ecx, esi
0x8B0390: call    sub_6EC2C0
0x8B0395: pop     edi
0x8B0396: pop     esi
0x8B0397: retn    4
