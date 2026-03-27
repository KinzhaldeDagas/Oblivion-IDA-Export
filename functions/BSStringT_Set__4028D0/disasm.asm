0x4028D0: push    ebx
0x4028D1: mov     ebx, [esp+4+a3]
0x4028D5: push    ebp
0x4028D6: mov     ebp, [esp+8+a2]
0x4028DA: test    ebp, ebp
0x4028DC: push    esi
0x4028DD: push    edi
0x4028DE: mov     edi, ecx
0x4028E0: jz      short loc_4028F8
0x4028E2: mov     eax, ebp
0x4028E4: lea     edx, [eax+1]
0x4028E7: mov     cl, [eax]
0x4028E9: add     eax, 1
0x4028EC: test    cl, cl
0x4028EE: jnz     short loc_4028E7
0x4028F0: sub     eax, edx
0x4028F2: mov     esi, eax
0x4028F4: cmp     esi, ebx
0x4028F6: ja      short loc_4028FA
0x4028F8: mov     esi, ebx
0x4028FA: movzx   eax, word ptr [edi+6]
0x4028FE: cmp     esi, eax
0x402900: ja      short loc_402947
0x402902: test    esi, esi
0x402904: jz      short loc_40291F
0x402906: test    ebp, ebp
0x402908: jz      short loc_402918
0x40290A: mov     ecx, [edi]
0x40290C: push    ebp
0x40290D: push    ecx
0x40290E: call    BSStringT_Static_StrCpy
0x402913: add     esp, 8
0x402916: jmp     short loc_40298F
0x402918: mov     edx, [edi]
0x40291A: mov     byte ptr [edx], 0
0x40291D: jmp     short loc_40298F
0x40291F: mov     eax, [edi]
0x402921: push    eax
0x402922: call    FormHeapFree
0x402927: xor     esi, esi
0x402929: movzx   eax, si
0x40292C: add     esp, 4
0x40292F: mov     [edi+4], ax
0x402933: mov     [edi], esi
0x402935: mov     [edi+6], si
0x402939: pop     edi
0x40293A: xor     eax, eax
0x40293C: test    esi, esi
0x40293E: pop     esi
0x40293F: pop     ebp
0x402940: setnz   al
0x402943: pop     ebx
0x402944: retn    8
0x402947: mov     ebx, [edi]
0x402949: lea     ecx, [esi+1]
0x40294C: push    ecx; Size
0x40294D: call    FormHeapAlloc
0x402952: add     esp, 4
0x402955: test    eax, eax
0x402957: mov     [edi], eax
0x402959: jz      short loc_402970
0x40295B: test    ebp, ebp
0x40295D: jz      short loc_40296B
0x40295F: push    ebp
0x402960: push    eax
0x402961: call    BSStringT_Static_StrCpy
0x402966: add     esp, 8
0x402969: jmp     short loc_402972
0x40296B: mov     byte ptr [eax], 0
0x40296E: jmp     short loc_402972
0x402970: xor     esi, esi
0x402972: push    ebx
0x402973: call    FormHeapFree
0x402978: add     esp, 4
0x40297B: cmp     esi, 0FFFFh
0x402981: movzx   eax, si
0x402984: jbe     short loc_40298B
0x402986: mov     eax, 0FFFFh
0x40298B: mov     [edi+6], ax
0x40298F: cmp     esi, 0FFFFh
0x402995: ja      short loc_4029AC
0x402997: movzx   eax, si
0x40299A: mov     [edi+4], ax
0x40299E: pop     edi
0x40299F: xor     eax, eax
0x4029A1: test    esi, esi
0x4029A3: pop     esi
0x4029A4: pop     ebp
0x4029A5: setnz   al
0x4029A8: pop     ebx
0x4029A9: retn    8
0x4029AC: mov     eax, 0FFFFh
0x4029B1: mov     [edi+4], ax
0x4029B5: pop     edi
0x4029B6: xor     eax, eax
0x4029B8: test    esi, esi
0x4029BA: pop     esi
0x4029BB: pop     ebp
0x4029BC: setnz   al
0x4029BF: pop     ebx
0x4029C0: retn    8
