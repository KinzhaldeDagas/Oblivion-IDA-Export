0x980AEE: push    esi
0x980AEF: push    edi
0x980AF0: mov     edi, ecx
0x980AF2: mov     esi, [edi+20h]
0x980AF5: jmp     short loc_980B07
0x980AF7: push    dword ptr [esi+4]
0x980AFA: push    edi
0x980AFB: push    [esp+10h+arg_0]
0x980AFF: call    dword ptr [esi+8]
0x980B02: mov     esi, [esi]
0x980B04: add     esp, 0Ch
0x980B07: test    esi, esi
0x980B09: jnz     short loc_980AF7
0x980B0B: pop     edi
0x980B0C: pop     esi
0x980B0D: retn    4
