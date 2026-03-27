0x8A8090: mov     eax, [esp+arg_C]
0x8A8094: mov     ecx, [eax+0Ch]
0x8A8097: test    ecx, ecx
0x8A8099: jz      short loc_8A80A9
0x8A809B: jmp     short loc_8A80A0
0x8A809D: align 10h
0x8A80A0: mov     eax, ecx
0x8A80A2: mov     ecx, [eax+0Ch]
0x8A80A5: test    ecx, ecx
0x8A80A7: jnz     short loc_8A80A0
0x8A80A9: mov     edx, [eax+1Ch]
0x8A80AC: mov     eax, [esp+arg_8]
0x8A80B0: mov     ecx, [eax+0Ch]
0x8A80B3: test    ecx, ecx
0x8A80B5: jz      short loc_8A80C0
0x8A80B7: mov     eax, ecx
0x8A80B9: mov     ecx, [eax+0Ch]
0x8A80BC: test    ecx, ecx
0x8A80BE: jnz     short loc_8A80B7
0x8A80C0: mov     eax, [eax+1Ch]
0x8A80C3: push    edx
0x8A80C4: push    eax
0x8A80C5: call    sub_8A7F70
0x8A80CA: mov     ecx, [esp+8+arg_0]
0x8A80CE: mov     [ecx], al
0x8A80D0: add     esp, 8
0x8A80D3: mov     eax, ecx
0x8A80D5: retn    18h
