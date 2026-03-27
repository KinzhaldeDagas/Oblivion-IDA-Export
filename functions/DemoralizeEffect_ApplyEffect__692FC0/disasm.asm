0x692FC0: push    ebx
0x692FC1: mov     ebx, ecx
0x692FC3: mov     ecx, [ebx+20h]; this
0x692FC6: test    ecx, ecx
0x692FC8: push    esi
0x692FC9: push    edi; int
0x692FCA: jz      short loc_692FD5
0x692FCC: call    MagicTarget_GetParentActor
0x692FD1: mov     esi, eax
0x692FD3: jmp     short loc_692FD7
0x692FD5: xor     esi, esi
0x692FD7: mov     ecx, [ebx+24h]; this
0x692FDA: test    ecx, ecx
0x692FDC: jz      short loc_692FE7
0x692FDE: call    MagicCaster_GetParentActor
0x692FE3: mov     edi, eax
0x692FE5: jmp     short loc_692FE9
0x692FE7: xor     edi, edi
0x692FE9: test    esi, esi
0x692FEB: jz      short loc_693048
0x692FED: test    edi, edi
0x692FEF: jz      short loc_693048
0x692FF1: mov     eax, [esi]
0x692FF3: mov     edx, [eax+330h]
0x692FF9: mov     ecx, esi
0x692FFB: call    edx
0x692FFD: test    eax, eax
0x692FFF: push    0
0x693001: mov     ecx, esi
0x693003: jz      short loc_69301F
0x693005: mov     eax, [esi]
0x693007: mov     edx, [eax+330h]
0x69300D: push    edi
0x69300E: call    edx
0x693010: mov     ecx, eax
0x693012: call    sub_6210D0
0x693017: pop     edi
0x693018: pop     esi
0x693019: mov     byte ptr [ebx+38h], 1
0x69301D: pop     ebx
0x69301E: retn
0x69301F: call    sub_5E6CD0
0x693024: test    al, al
0x693026: jnz     short loc_693048
0x693028: mov     ecx, esi; int
0x69302A: call    sub_5EAE70
0x69302F: mov     eax, [esi]
0x693031: mov     edx, [eax+318h]
0x693037: push    0
0x693039: push    0
0x69303B: push    1
0x69303D: push    1
0x69303F: push    edi
0x693040: mov     ecx, esi
0x693042: call    edx
0x693044: mov     byte ptr [ebx+38h], 1
0x693048: pop     edi
0x693049: pop     esi
0x69304A: pop     ebx
0x69304B: retn
