0x9486D0: push    esi
0x9486D1: mov     esi, ecx
0x9486D3: mov     eax, [esi+4]
0x9486D6: test    eax, eax
0x9486D8: jz      short loc_94871E
0x9486DA: push    edi
0x9486DB: mov     edi, [esp+8+arg_0]
0x9486DF: call    sub_948550
0x9486E4: mov     ecx, [esi+4]
0x9486E7: add     eax, 9
0x9486EA: push    eax
0x9486EB: call    sub_918440
0x9486F0: mov     ecx, [esi+4]
0x9486F3: push    6
0x9486F5: call    sub_9181B0
0x9486FA: push    edi
0x9486FB: lea     ecx, [esi-8]
0x9486FE: call    sub_948580
0x948703: mov     eax, [esp+8+arg_4]
0x948707: mov     ecx, [esi+4]
0x94870A: push    eax
0x94870B: call    sub_918440
0x948710: mov     ecx, [esp+8+arg_8]
0x948714: push    ecx
0x948715: mov     ecx, [esi+4]
0x948718: call    sub_918440
0x94871D: pop     edi
0x94871E: mov     ecx, [esi+4]
0x948721: test    ecx, ecx
0x948723: pop     esi
0x948724: jz      short loc_94873A
0x948726: lea     edx, [esp+arg_0]
0x94872A: push    edx
0x94872B: call    sub_918060
0x948730: cmp     byte ptr [eax], 0
0x948733: jz      short loc_94873A
0x948735: xor     eax, eax
0x948737: retn    0Ch
0x94873A: mov     eax, 1
0x94873F: retn    0Ch
