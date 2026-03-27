0x54E7C0: push    esi
0x54E7C1: push    edi
0x54E7C2: mov     esi, ecx
0x54E7C4: xor     edi, edi
0x54E7C6: cmp     [esi+10h], edi
0x54E7C9: jbe     short loc_54E7F5
0x54E7CB: jmp     short loc_54E7D0
0x54E7CD: align 10h
0x54E7D0: mov     eax, [esi]
0x54E7D2: mov     edx, [eax+54h]
0x54E7D5: push    edi
0x54E7D6: mov     ecx, esi
0x54E7D8: call    edx
0x54E7DA: test    al, al
0x54E7DC: jz      short loc_54E7ED
0x54E7DE: mov     eax, [esi+0Ch]
0x54E7E1: fldz
0x54E7E3: fcomp   dword ptr [eax+edi*4]
0x54E7E6: fnstsw  ax
0x54E7E8: test    ah, 5
0x54E7EB: jnp     short loc_54E7FA
0x54E7ED: add     edi, 1
0x54E7F0: cmp     edi, [esi+10h]
0x54E7F3: jb      short loc_54E7D0
0x54E7F5: pop     edi
0x54E7F6: mov     al, 1
0x54E7F8: pop     esi
0x54E7F9: retn
0x54E7FA: pop     edi
0x54E7FB: xor     al, al
0x54E7FD: pop     esi
0x54E7FE: retn
