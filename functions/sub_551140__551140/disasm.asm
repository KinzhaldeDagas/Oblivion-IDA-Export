0x551140: cmp     byte ptr ds:0B39D80h, 0
0x551147: jz      locret_5511CD
0x55114D: mov     ecx, [esp+arg_0]
0x551151: test    ecx, ecx
0x551153: jz      short locret_5511CD
0x551155: mov     eax, [ecx]
0x551157: mov     edx, [eax+10h]
0x55115A: push    esi
0x55115B: call    edx
0x55115D: mov     esi, eax
0x55115F: mov     eax, [esp+4+a1]
0x551163: push    eax; a1
0x551164: call    GetShaderDefinition
0x551169: add     esp, 4
0x55116C: test    eax, eax
0x55116E: jz      short loc_5511CC
0x551170: test    esi, esi
0x551172: jz      short loc_5511CC
0x551174: cmp     dword ptr [esi+0B4h], 0
0x55117B: jz      short loc_5511CC
0x55117D: cmp     dword ptr [esi+0B8h], 0
0x551184: jnz     short loc_5511CC
0x551186: mov     ecx, [esi+0B4h]
0x55118C: mov     dx, [ecx+2Eh]
0x551190: and     dx, 0FFFh
0x551195: or      dx, 4000h
0x55119A: mov     [ecx+2Eh], dx
0x55119E: mov     ecx, [esi+0B4h]
0x5511A4: mov     byte ptr [ecx+31h], 1Fh
0x5511A8: mov     eax, [eax]
0x5511AA: mov     ecx, ds:0B3F928h
0x5511B0: mov     edx, [ecx]
0x5511B2: mov     edx, [edx+0B0h]
0x5511B8: push    eax
0x5511B9: push    0
0x5511BB: push    0
0x5511BD: push    esi
0x5511BE: call    edx
0x5511C0: mov     ecx, ds:0B3F928h
0x5511C6: pop     esi
0x5511C7: jmp     sub_769030
0x5511CC: pop     esi
0x5511CD: retn
