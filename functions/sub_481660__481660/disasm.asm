0x481660: push    esi
0x481661: mov     esi, [esp+4+arg_0]
0x481665: test    esi, esi
0x481667: jz      short loc_4816D3
0x481669: mov     eax, [esi]
0x48166B: mov     edx, [eax+4]
0x48166E: mov     ecx, esi
0x481670: call    edx
0x481672: test    eax, eax
0x481674: jz      short loc_481684
0x481676: cmp     eax, offset dword_B40864
0x48167B: jz      short loc_4816A9
0x48167D: mov     eax, [eax+4]
0x481680: test    eax, eax
0x481682: jnz     short loc_481676
0x481684: mov     eax, [esi]
0x481686: mov     edx, [eax+8]
0x481689: push    edi
0x48168A: mov     ecx, esi
0x48168C: call    edx
0x48168E: mov     edi, eax
0x481690: test    edi, edi
0x481692: jz      short loc_4816D2
0x481694: movzx   eax, word ptr [edi+0B6h]
0x48169B: xor     esi, esi
0x48169D: test    eax, eax
0x48169F: jbe     short loc_4816D2
0x4816A1: cmp     eax, esi
0x4816A3: ja      short loc_4816B2
0x4816A5: xor     eax, eax
0x4816A7: jmp     short loc_4816BB
0x4816A9: mov     byte ptr [esi+0ECh], 1
0x4816B0: pop     esi
0x4816B1: retn
0x4816B2: mov     eax, [edi+0B0h]
0x4816B8: mov     eax, [eax+esi*4]
0x4816BB: push    eax
0x4816BC: call    sub_481660
0x4816C1: movzx   eax, word ptr [edi+0B6h]
0x4816C8: add     esi, 1
0x4816CB: add     esp, 4
0x4816CE: cmp     eax, esi
0x4816D0: ja      short loc_4816B2
0x4816D2: pop     edi
0x4816D3: pop     esi
0x4816D4: retn
