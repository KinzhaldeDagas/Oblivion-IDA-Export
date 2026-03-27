0x9A8940: push    ebx
0x9A8941: push    ebp
0x9A8942: push    esi
0x9A8943: push    edi; Src
0x9A8944: push    38h ; '8'; Size
0x9A8946: mov     ebp, ecx
0x9A8948: call    FormHeapAlloc
0x9A894D: add     esp, 4
0x9A8950: test    eax, eax
0x9A8952: jz      short loc_9A895F
0x9A8954: mov     ecx, eax; this
0x9A8956: call    sub_9A84B0
0x9A895B: mov     esi, eax
0x9A895D: jmp     short loc_9A8961
0x9A895F: xor     esi, esi
0x9A8961: mov     eax, [esp+10h+arg_0]
0x9A8965: push    eax; Src
0x9A8966: mov     ecx, esi; this
0x9A8968: call    NiD3DShaderConstantMapEntry__SetKeyStringCopy
0x9A896D: mov     ecx, [esp+10h+arg_8]
0x9A8971: mov     edi, [esp+10h+arg_4]
0x9A8975: mov     edx, [esp+10h+arg_C]
0x9A8979: mov     eax, [esp+10h+arg_10]
0x9A897D: mov     [esi+18h], ecx
0x9A8980: mov     ecx, dword ptr [esp+10h+Size]
0x9A8984: and     edi, 0FFFFFFFh
0x9A898A: push    ecx; Src
0x9A898B: or      edi, 40000000h
0x9A8991: mov     ecx, esi
0x9A8993: mov     [esi+14h], edi
0x9A8996: mov     [esi+1Ch], edx
0x9A8999: mov     [esi+20h], eax
0x9A899C: call    sub_9A85C0
0x9A89A1: cmp     [esp+10h+arg_24], 0
0x9A89A6: mov     ebx, dword ptr [esp+10h+Size+4]
0x9A89AA: mov     edx, [esp+10h+arg_1C]
0x9A89AE: mov     [esi+28h], ebx
0x9A89B1: mov     [esi+2Ch], edx
0x9A89B4: jz      short loc_9A89DD
0x9A89B6: mov     eax, [esi+30h]
0x9A89B9: push    eax
0x9A89BA: mov     byte ptr [esi+34h], 1
0x9A89BE: call    FormHeapFree
0x9A89C3: push    ebx; Size
0x9A89C4: call    FormHeapAlloc
0x9A89C9: mov     ecx, [esp+18h+Src]
0x9A89CD: push    ebx; Size
0x9A89CE: push    ecx; Src
0x9A89CF: push    eax; Dst
0x9A89D0: mov     [esi+30h], eax
0x9A89D3: call    _memcpy
0x9A89D8: add     esp, 14h
0x9A89DB: jmp     short loc_9A89E8
0x9A89DD: mov     edx, [esp+10h+Src]
0x9A89E1: mov     byte ptr [esi+34h], 0
0x9A89E5: mov     [esi+30h], edx
0x9A89E8: mov     eax, [ebp+0]
0x9A89EB: mov     edx, [eax+4Ch]
0x9A89EE: push    esi
0x9A89EF: mov     ecx, ebp
0x9A89F1: call    edx
0x9A89F3: test    eax, eax
0x9A89F5: mov     [ebp+24h], eax
0x9A89F8: jz      short loc_9A8A0E
0x9A89FA: mov     eax, [esi]
0x9A89FC: mov     edx, [eax]
0x9A89FE: push    1
0x9A8A00: mov     ecx, esi
0x9A8A02: call    edx
0x9A8A04: mov     eax, [ebp+24h]
0x9A8A07: pop     edi
0x9A8A08: pop     esi
0x9A8A09: pop     ebp
0x9A8A0A: pop     ebx
0x9A8A0B: retn    28h ; '('
0x9A8A0E: cmp     byte_B4295B, 0
0x9A8A15: jnz     short loc_9A8A1C
0x9A8A17: call    sub_783C70
0x9A8A1C: mov     eax, [esp+10h+Src]
0x9A8A20: mov     edx, [esp+10h+arg_0]
0x9A8A24: push    eax
0x9A8A25: and     edi, 0FFh
0x9A8A2B: mov     ecx, dword_B428D8[edi*4]
0x9A8A32: push    ebx
0x9A8A33: push    ecx
0x9A8A34: push    edx
0x9A8A35: call    sub_77CAB0
0x9A8A3A: mov     eax, [ebp+24h]
0x9A8A3D: add     esp, 10h
0x9A8A40: pop     edi
0x9A8A41: pop     esi
0x9A8A42: pop     ebp
0x9A8A43: pop     ebx
0x9A8A44: retn    28h ; '('
