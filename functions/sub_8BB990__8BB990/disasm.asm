0x8BB990: sub     esp, 20Ch
0x8BB996: lea     eax, [esp+20Ch+var_200]
0x8BB99A: push    esi
0x8BB99B: mov     esi, ds:0BA8188h
0x8BB9A1: mov     [esp+210h+var_20C], eax
0x8BB9A5: xor     ecx, ecx
0x8BB9A7: test    esi, esi
0x8BB9A9: mov     eax, 80000080h
0x8BB9AE: mov     [esp+210h+var_208], ecx
0x8BB9B2: mov     [esp+210h+var_204], eax
0x8BB9B6: jz      short loc_8BB9F7
0x8BB9B8: jmp     short loc_8BB9C0
0x8BB9BA: align 10h
0x8BB9C0: and     eax, 3FFFFFFFh
0x8BB9C5: cmp     ecx, eax
0x8BB9C7: jnz     short loc_8BB9DC
0x8BB9C9: lea     ecx, [esp+210h+var_20C]
0x8BB9CD: push    4
0x8BB9CF: push    ecx
0x8BB9D0: call    sub_8A6EE0
0x8BB9D5: mov     ecx, [esp+218h+var_208]
0x8BB9D9: add     esp, 8
0x8BB9DC: mov     edx, [esp+210h+var_20C]
0x8BB9E0: mov     [edx+ecx*4], esi
0x8BB9E3: mov     ecx, [esp+210h+var_208]
0x8BB9E7: mov     eax, [esp+210h+var_204]
0x8BB9EB: inc     ecx
0x8BB9EC: mov     [esp+210h+var_208], ecx
0x8BB9F0: mov     esi, [esi+4]
0x8BB9F3: test    esi, esi
0x8BB9F5: jnz     short loc_8BB9C0
0x8BB9F7: lea     esi, [ecx-1]
0x8BB9FA: test    esi, esi
0x8BB9FC: jl      short loc_8BBA3C
0x8BB9FE: mov     edi, edi
0x8BBA00: mov     eax, [esp+210h+var_20C]
0x8BBA04: mov     ecx, [eax+esi*4]
0x8BBA07: mov     edx, [ecx+8]
0x8BBA0A: mov     ecx, [edx]
0x8BBA0C: cmp     word ptr [ecx+4], 0
0x8BBA11: jz      short loc_8BBA24
0x8BBA13: dec     word ptr [ecx+6]
0x8BBA17: cmp     word ptr [ecx+6], 0
0x8BBA1C: jnz     short loc_8BBA24
0x8BBA1E: mov     eax, [ecx]
0x8BBA20: push    1
0x8BBA22: call    dword ptr [eax]
0x8BBA24: dec     esi
0x8BBA25: mov     ecx, [esp+210h+var_20C]
0x8BBA29: mov     edx, [ecx+esi*4+4]
0x8BBA2D: mov     eax, [edx+8]
0x8BBA30: mov     dword ptr [eax], 0
0x8BBA36: jns     short loc_8BBA00
0x8BBA38: mov     eax, [esp+210h+var_204]
0x8BBA3C: test    eax, eax
0x8BBA3E: pop     esi
0x8BBA3F: js      short loc_8BBA75
0x8BBA41: mov     ecx, ds:0BA9DE4h
0x8BBA47: mov     edx, large fs:2Ch
0x8BBA4E: mov     ecx, [edx+ecx*4]
0x8BBA51: mov     ecx, [ecx+19Ch]
0x8BBA57: test    ecx, ecx
0x8BBA59: jnz     short loc_8BBA61
0x8BBA5B: mov     ecx, ds:0BA7D9Ch
0x8BBA61: mov     edx, [esp+20Ch+var_20C]
0x8BBA64: and     eax, 3FFFFFFFh
0x8BBA69: push    14h
0x8BBA6B: shl     eax, 2
0x8BBA6E: push    eax
0x8BBA6F: push    edx
0x8BBA70: call    sub_8A75D0
0x8BBA75: add     esp, 20Ch
0x8BBA7B: retn
