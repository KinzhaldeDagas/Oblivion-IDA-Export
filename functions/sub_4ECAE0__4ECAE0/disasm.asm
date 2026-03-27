0x4ECAE0: push    ebx
0x4ECAE1: mov     ebx, [esp+4+arg_0]
0x4ECAE5: push    esi
0x4ECAE6: mov     esi, ecx
0x4ECAE8: mov     eax, [esi+8]
0x4ECAEB: sub     eax, 2
0x4ECAEE: push    edi
0x4ECAEF: jz      short loc_4ECB44
0x4ECAF1: sub     eax, 1
0x4ECAF4: jz      short loc_4ECB02
0x4ECAF6: sub     eax, 1
0x4ECAF9: jnz     short loc_4ECB4B
0x4ECAFB: call    sub_4EC810
0x4ECB00: jmp     short loc_4ECB4B
0x4ECB02: mov     ecx, [esi+2Ch]
0x4ECB05: mov     eax, [ebx]
0x4ECB07: mov     eax, [eax+88h]
0x4ECB0D: push    ecx
0x4ECB0E: lea     edx, [esp+10h+arg_0]
0x4ECB12: push    edx
0x4ECB13: mov     ecx, ebx
0x4ECB15: call    eax
0x4ECB17: mov     edi, [esp+0Ch+arg_0]
0x4ECB1B: test    edi, edi
0x4ECB1D: jz      short loc_4ECB3B
0x4ECB1F: lea     ecx, [edi+4]
0x4ECB22: push    ecx; lpAddend
0x4ECB23: call    dword ptr ds:0A2807Ch
0x4ECB29: test    eax, eax
0x4ECB2B: jnz     short loc_4ECB3B
0x4ECB2D: test    edi, edi
0x4ECB2F: jz      short loc_4ECB3B
0x4ECB31: mov     edx, [edi]
0x4ECB33: mov     eax, [edx]
0x4ECB35: push    1
0x4ECB37: mov     ecx, edi
0x4ECB39: call    eax
0x4ECB3B: mov     dword ptr [esi+8], 2
0x4ECB42: jmp     short loc_4ECB4B
0x4ECB44: mov     dword ptr [esi+8], 4
0x4ECB4B: add     esi, 30h ; '0'
0x4ECB4E: cmp     dword ptr [esi], 0
0x4ECB51: jz      short loc_4ECB68
0x4ECB53: mov     edi, 4
0x4ECB58: mov     ecx, [esi]
0x4ECB5A: push    ebx
0x4ECB5B: call    sub_4ECAE0
0x4ECB60: add     esi, 4
0x4ECB63: sub     edi, 1
0x4ECB66: jnz     short loc_4ECB58
0x4ECB68: pop     edi
0x4ECB69: pop     esi
0x4ECB6A: pop     ebx
0x4ECB6B: retn    4
