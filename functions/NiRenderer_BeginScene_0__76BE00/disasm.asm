0x76BE00: push    ebp
0x76BE01: mov     ebp, ecx
0x76BE03: call    sub_76B3F0
0x76BE08: test    al, al
0x76BE0A: jz      loc_76BEBD
0x76BE10: mov     ecx, ebp; this
0x76BE12: call    sub_769030
0x76BE17: mov     ecx, [ebp+0A94h]; void *
0x76BE1D: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76BE22: mov     ecx, [ebp+8BCh]
0x76BE28: call    sub_7762D0
0x76BE2D: mov     eax, [ebp+280h]
0x76BE33: mov     ecx, [eax]
0x76BE35: mov     edx, [ecx+0A4h]
0x76BE3B: push    eax
0x76BE3C: call    edx
0x76BE3E: test    eax, eax
0x76BE40: jge     short loc_76BE46
0x76BE42: xor     al, al
0x76BE44: pop     ebp
0x76BE45: retn
0x76BE46: mov     eax, [ebp+900h]
0x76BE4C: xor     ecx, ecx
0x76BE4E: cmp     eax, ecx
0x76BE50: jz      short loc_76BEBD
0x76BE52: push    ebx
0x76BE53: push    esi
0x76BE54: push    edi
0x76BE55: lea     esi, [ebp+8F4h]
0x76BE5B: jmp     short loc_76BE62
0x76BE5D: align 10h
0x76BE60: xor     ecx, ecx
0x76BE62: mov     ebx, [esi+4]
0x76BE65: mov     eax, [ebx]
0x76BE67: cmp     eax, ecx
0x76BE69: mov     [esi+4], eax
0x76BE6C: jz      short loc_76BE73
0x76BE6E: mov     [eax+4], ecx
0x76BE71: jmp     short loc_76BE76
0x76BE73: mov     [esi+8], ecx
0x76BE76: mov     edi, [ebx+8]
0x76BE79: cmp     edi, ecx
0x76BE7B: jz      short loc_76BE87
0x76BE7D: lea     eax, [edi+4]
0x76BE80: push    eax; lpAddend
0x76BE81: call    dword ptr ds:0A28078h
0x76BE87: mov     edx, [esi]
0x76BE89: mov     eax, [edx+8]
0x76BE8C: push    ebx
0x76BE8D: mov     ecx, esi
0x76BE8F: call    eax
0x76BE91: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x76BE95: test    edi, edi
0x76BE97: jz      short loc_76BEB1
0x76BE99: lea     ecx, [edi+4]
0x76BE9C: push    ecx; lpAddend
0x76BE9D: call    dword ptr ds:0A2807Ch
0x76BEA3: test    eax, eax
0x76BEA5: jnz     short loc_76BEB1
0x76BEA7: mov     edx, [edi]
0x76BEA9: mov     eax, [edx]
0x76BEAB: push    1
0x76BEAD: mov     ecx, edi
0x76BEAF: call    eax
0x76BEB1: cmp     dword ptr [ebp+900h], 0
0x76BEB8: jnz     short loc_76BE60
0x76BEBA: pop     edi
0x76BEBB: pop     esi
0x76BEBC: pop     ebx
0x76BEBD: mov     al, 1
0x76BEBF: pop     ebp
0x76BEC0: retn
