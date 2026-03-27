0x52F690: push    ebx
0x52F691: push    esi
0x52F692: mov     esi, ds:0B33A98h
0x52F698: add     esi, 7Ch ; '|'
0x52F69B: push    edi
0x52F69C: jz      short loc_52F6C0
0x52F69E: mov     ebx, [esp+0Ch+arg_0]
0x52F6A2: mov     edi, [esi]
0x52F6A4: test    edi, edi
0x52F6A6: jz      short loc_52F6C0
0x52F6A8: mov     eax, [ebx+0Ch]
0x52F6AB: mov     esi, [esi+4]
0x52F6AE: push    0
0x52F6B0: push    eax
0x52F6B1: mov     ecx, edi
0x52F6B3: call    TESTopic_GetTopicInfo??
0x52F6B8: cmp     eax, ebx
0x52F6BA: jz      short loc_52F6C6
0x52F6BC: test    esi, esi
0x52F6BE: jnz     short loc_52F6A2
0x52F6C0: pop     edi
0x52F6C1: pop     esi
0x52F6C2: xor     eax, eax
0x52F6C4: pop     ebx
0x52F6C5: retn
0x52F6C6: mov     eax, edi
0x52F6C8: pop     edi
0x52F6C9: pop     esi
0x52F6CA: pop     ebx
0x52F6CB: retn
