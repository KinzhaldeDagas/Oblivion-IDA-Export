0x674950: push    ebx
0x674951: lea     ebx, [ecx+58h]
0x674954: test    ebx, ebx
0x674956: jz      loc_674A1B
0x67495C: push    ebp
0x67495D: push    esi
0x67495E: push    edi
0x67495F: nop
0x674960: mov     ecx, [ebx]
0x674962: test    ecx, ecx
0x674964: jz      loc_674A18
0x67496A: mov     eax, [ecx]
0x67496C: mov     edx, [eax+190h]
0x674972: call    edx
0x674974: test    al, al
0x674976: jz      loc_674A0D
0x67497C: mov     esi, [ebx]
0x67497E: test    esi, esi
0x674980: jz      loc_674A0D
0x674986: mov     ecx, [esi+58h]
0x674989: test    ecx, ecx
0x67498B: jz      loc_674A0D
0x674991: mov     eax, [ecx]
0x674993: mov     edx, [eax+184h]
0x674999: call    edx
0x67499B: test    eax, eax
0x67499D: jz      short loc_674A0D
0x67499F: mov     ecx, esi
0x6749A1: call    sub_5E2E00
0x6749A6: mov     ecx, [esi+58h]
0x6749A9: mov     ebp, eax
0x6749AB: mov     eax, [ecx]
0x6749AD: mov     edx, [eax+184h]
0x6749B3: call    edx
0x6749B5: mov     edi, eax
0x6749B7: test    edi, edi
0x6749B9: jz      short loc_6749EF
0x6749BB: cmp     byte ptr [edi+20h], 2
0x6749BF: jnz     short loc_6749EF
0x6749C1: mov     ecx, esi
0x6749C3: call    sub_5E2E00
0x6749C8: test    eax, eax
0x6749CA: jz      short loc_674A0D
0x6749CC: mov     edx, [eax]
0x6749CE: mov     ecx, eax
0x6749D0: mov     eax, [edx+190h]
0x6749D6: call    eax
0x6749D8: test    al, al
0x6749DA: jz      short loc_674A0D
0x6749DC: mov     ecx, [esi+58h]
0x6749DF: mov     edx, [ecx]
0x6749E1: mov     eax, [edx+84h]
0x6749E7: push    0
0x6749E9: push    edi
0x6749EA: push    esi
0x6749EB: call    eax
0x6749ED: jmp     short loc_674A0D
0x6749EF: test    ebp, ebp
0x6749F1: jz      short loc_674A0D
0x6749F3: mov     edx, [ebp+0]
0x6749F6: mov     eax, [edx+190h]
0x6749FC: mov     ecx, ebp
0x6749FE: call    eax
0x674A00: test    al, al
0x674A02: jz      short loc_674A0D
0x674A04: push    ebp
0x674A05: lea     ecx, [esi+44h]
0x674A08: call    sub_424C50
0x674A0D: mov     ebx, [ebx+4]
0x674A10: test    ebx, ebx
0x674A12: jnz     loc_674960
0x674A18: pop     edi
0x674A19: pop     esi
0x674A1A: pop     ebp
0x674A1B: pop     ebx
0x674A1C: retn
