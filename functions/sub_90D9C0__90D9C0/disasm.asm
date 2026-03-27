0x90D9C0: push    ebx
0x90D9C1: mov     ebx, [esp+4+arg_0]
0x90D9C5: mov     eax, [ebx+0Ch]
0x90D9C8: push    esi
0x90D9C9: add     ebx, 4
0x90D9CC: push    edi
0x90D9CD: mov     edi, ecx
0x90D9CF: mov     esi, [edi+24h]
0x90D9D2: and     eax, 3FFFFFFFh
0x90D9D7: cmp     eax, esi
0x90D9D9: jge     short loc_90D9EF
0x90D9DB: add     eax, eax
0x90D9DD: cmp     esi, eax
0x90D9DF: jl      short loc_90D9E3
0x90D9E1: mov     eax, esi
0x90D9E3: push    30h ; '0'
0x90D9E5: push    eax
0x90D9E6: push    ebx
0x90D9E7: call    sub_8A6E40
0x90D9EC: add     esp, 0Ch
0x90D9EF: mov     ecx, [ebx]
0x90D9F1: lea     eax, [esi+esi*2]
0x90D9F4: shl     eax, 4
0x90D9F7: push    eax
0x90D9F8: push    0FFFFFFFFh
0x90D9FA: push    ecx
0x90D9FB: mov     [ebx+4], esi
0x90D9FE: call    sub_8B18C0
0x90DA03: mov     eax, [edi+24h]
0x90DA06: add     esp, 0Ch
0x90DA09: xor     esi, esi
0x90DA0B: test    eax, eax
0x90DA0D: jle     short loc_90DA34
0x90DA0F: push    ebp
0x90DA10: xor     ebp, ebp
0x90DA12: mov     edx, [edi+20h]
0x90DA15: mov     eax, [edx+esi*4]
0x90DA18: mov     ecx, [ebx]
0x90DA1A: push    13h; Count
0x90DA1C: push    eax; int
0x90DA1D: add     ecx, ebp
0x90DA1F: push    ecx; int
0x90DA20: call    sub_8B1840
0x90DA25: mov     eax, [edi+24h]
0x90DA28: add     esp, 0Ch
0x90DA2B: inc     esi
0x90DA2C: add     ebp, 30h ; '0'
0x90DA2F: cmp     esi, eax
0x90DA31: jl      short loc_90DA12
0x90DA33: pop     ebp
0x90DA34: pop     edi
0x90DA35: pop     esi
0x90DA36: pop     ebx
0x90DA37: retn    4
