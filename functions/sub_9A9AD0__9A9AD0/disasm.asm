0x9A9AD0: push    ebx
0x9A9AD1: push    esi
0x9A9AD2: mov     esi, [esp+8+arg_0]
0x9A9AD6: test    esi, esi
0x9A9AD8: push    edi
0x9A9AD9: mov     edi, ecx
0x9A9ADB: mov     [esp+0Ch+arg_0], esi
0x9A9ADF: jz      short loc_9A9AEB
0x9A9AE1: lea     eax, [esi+4]
0x9A9AE4: push    eax; lpAddend
0x9A9AE5: call    ds:InterlockedIncrement
0x9A9AEB: lea     ecx, [esp+0Ch+arg_0]
0x9A9AEF: push    ecx
0x9A9AF0: lea     ecx, [edi+0Ch]
0x9A9AF3: call    sub_9A9A00
0x9A9AF8: cmp     eax, 0FFFFFFFFh
0x9A9AFB: setz    bl
0x9A9AFE: test    esi, esi
0x9A9B00: jz      short loc_9A9B1A
0x9A9B02: lea     edx, [esi+4]
0x9A9B05: push    edx; lpAddend
0x9A9B06: call    ds:InterlockedDecrement
0x9A9B0C: test    eax, eax
0x9A9B0E: jnz     short loc_9A9B1A
0x9A9B10: mov     eax, [esi]
0x9A9B12: mov     edx, [eax]
0x9A9B14: push    1
0x9A9B16: mov     ecx, esi
0x9A9B18: call    edx
0x9A9B1A: test    bl, bl
0x9A9B1C: jz      short loc_9A9B25
0x9A9B1E: mov     dword ptr [edi+24h], 80000030h
0x9A9B25: mov     eax, [edi+24h]
0x9A9B28: pop     edi
0x9A9B29: pop     esi
0x9A9B2A: pop     ebx
0x9A9B2B: retn    4
